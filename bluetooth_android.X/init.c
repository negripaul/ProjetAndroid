/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */
#include "mcc_generated_files/mcc.h"
#include "header.h"


void delay_ms(int msec)
{
    TMR1_StartTimer();
    TMR1_Reload();
    TMR1IF = 0;
    for (int x = 0; x < msec; x++)
	{
        while(!TMR1IF);
        TMR1_Reload();
        TMR1IF = 0;
    }
    TMR1_StopTimer();
}


int read_data_UART(char * buf,unsigned int size)
{    
    unsigned char i = 0;
    int j = 0;
    do{
        delay_ms(5); 
        j++;
        if (j == 10) return -1; // wait too long
    }
    while (eusartRxCount <= 0); // wait for data
    
    while (eusartRxCount > 0)
	{
        buf[i] = EUSART_Read();
        i++;
        if (i == size)
		{
            while (eusartRxCount > 0)
			{
                EUSART_Read();
               if (eusartRxCount == 0) delay_ms(5);
            }
            return -2; // buffer to small
        }
        delay_ms(1);
        if (eusartRxCount == 0)  delay_ms(4); // wait for more data
    }
    return j;
}

void BLE_PartialReset(void)
{
    EUSART_Write('S');
    EUSART_Write('F');
    EUSART_Write(',');
    EUSART_Write('1');
    EUSART_Write(13);
    EUSART_Write(10);
}

void BLE_SetService(unsigned char service[])
{
    EUSART_Write('S');
    EUSART_Write('S');
    EUSART_Write(',');   
    unsigned char count = 0;
    while(service[count]){
        if (service[count]>0){
            EUSART_Write(service[count]);
        }
        count++;
    }
    EUSART_Write(13);
    EUSART_Write(10);
}

void BLE_SetRole(unsigned char role[])
{
    EUSART_Write('S');
    EUSART_Write('R');
    EUSART_Write(',');    
    unsigned char count = 0;
    while(role[count]){
        if (role[count]>0){
            EUSART_Write(role[count]);
        }
        count++;
    }
    EUSART_Write(13);
    EUSART_Write(10);
}

void BLE_SetDeviceName(unsigned char name[])
{   
    EUSART_Write('S');
    EUSART_Write('-');
    EUSART_Write(',');
    unsigned char count = 0;
    while(name[count]){
        if (name[count]>0){
            EUSART_Write(name[count]);
        }
        count++;
    }
    EUSART_Write(13);
    EUSART_Write(10);    
}   

void BLE_Reboot(void)
{
    EUSART_Write('R');
    EUSART_Write(',');
    EUSART_Write('1');
    EUSART_Write(13);
    EUSART_Write(10); 
}

void BLE_StartBroadcast(void)
{
    EUSART_Write('A');
    EUSART_Write(13);
    EUSART_Write(10);
}


void init_RN4020(void)
{
    int error;    
    char buf [BUF_LEN] = {0};
    unsigned char service[9] = "40000000";
    unsigned char role[9] = "20000000";
    unsigned char name[] = "3d4";
    
             
    BLE_PartialReset();       
    error = read_data_UART(buf,BUF_LEN);        
        
    delay_ms(1000); 
        
    BLE_SetService(service);        
    error = read_data_UART(buf,BUF_LEN);
        
    BLE_SetRole(role);        
    error = read_data_UART(buf,BUF_LEN);
        
    BLE_SetDeviceName(name);        
    error = read_data_UART(buf,BUF_LEN);
        
    BLE_Reboot();        
    error = read_data_UART(buf,BUF_LEN);
    
    delay_ms(1000);   
}

void send_temp_RN4020(unsigned char data[])
{
    EUSART_Write('S');
    EUSART_Write('U');
    EUSART_Write('W');
    EUSART_Write(',');
    EUSART_Write('2');
    EUSART_Write('A');
    EUSART_Write('1');
    EUSART_Write('9');
    EUSART_Write(',');
       unsigned char count = 0;
    while(data[count]){
        if (data[count]>0){
            EUSART_Write(data[count]);
        }
        count++;
    }    
    EUSART_Write(13);
    EUSART_Write(10);
}

