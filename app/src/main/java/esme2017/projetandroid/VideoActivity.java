package esme2017.projetandroid;

/**
 * Created by paul on 12/14/17.
 */
        import android.media.MediaPlayer;
        import android.media.PlaybackParams;
        import android.support.v7.app.AppCompatActivity;

        import android.content.Intent;
        import android.net.Uri;
        import android.provider.MediaStore;
        import android.support.v7.app.AppCompatActivity;
        import android.os.Bundle;
        import android.view.View;
        import android.widget.Button;
        import android.widget.MediaController;
        import android.widget.VideoView;

        import java.io.IOException;
        import java.net.URI;
        import java.sql.Time;
        import java.util.ArrayList;


public class VideoActivity extends AppCompatActivity  {

    private Button mPrevButton, mPlayButton, mPauseButton, mNextButton, mBackwardButton, mForwardButton;
    private VideoView mVideoView;
    private  ArrayList<android.net.Uri> arrayList;
    private int index ;
    private int seekForwardTime = 3 * 1000;
    private int seekBackwardTime = 3 * 1000;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_video);
        mPrevButton = (Button) findViewById(R.id.PrevButton);
        mPlayButton = (Button) findViewById(R.id.PlayButton);
        mPauseButton = (Button) findViewById(R.id.PauseButton);
        mNextButton = (Button) findViewById(R.id.NextButton);
        mForwardButton = (Button) findViewById(R.id.ForwardButton);
        mBackwardButton = (Button) findViewById(R.id.BackwardButton);
        mVideoView = (VideoView) findViewById(R.id.videoView);
        arrayList = new ArrayList<>();



        arrayList.add(Uri.parse("android.resource://" + getPackageName() + "/" + R.raw.sombra));
        arrayList.add(Uri.parse("android.resource://" + getPackageName() + "/" + R.raw.soldat));
        arrayList.add(Uri.parse("android.resource://" + getPackageName() + "/" + R.raw.moira ));

        setupMedia();
        setupListeners();
    }

    private void setupMedia() {

        index = 0;
        mVideoView.setVideoURI((arrayList.get(index)));
    }

    private void setupListeners() {

        mPlayButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mVideoView.start();
            }
        });

        mPauseButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mVideoView.pause();
            }
        });

        mNextButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                if(index < arrayList.size() - 1 ) {
                    mVideoView.setVideoURI(arrayList.get(++index));
                    mVideoView.start();
                }
                else
                    setupMedia();
            }
        });

        mPrevButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if(index > 0)
                {
                    mVideoView.setVideoURI(arrayList.get(--index));
                    mVideoView.start();
                }

                else {
                    index = arrayList.size() - 1;
                    mVideoView.setVideoURI(arrayList.get(index));
                    mVideoView.start();
                }

            }
        });

        mBackwardButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                rewindSong();
            }
        });

        mForwardButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                forwardSong();
            }
        });

    }



    public void forwardSong() {
        if (mVideoView != null) {
            int currentPosition = mVideoView.getCurrentPosition();
            if (currentPosition + seekForwardTime <= mVideoView.getDuration()) {
                mVideoView.seekTo(currentPosition + seekForwardTime);
            } else {
                mVideoView.seekTo(mVideoView.getDuration());
            }

            mVideoView.start();//start your video.
        }
    }

    public void rewindSong() {
        if (mVideoView != null) {
            int currentPosition = mVideoView.getCurrentPosition();
            if (currentPosition - seekBackwardTime >= 0) {
                mVideoView.seekTo(currentPosition - seekBackwardTime);
            } else {
                mVideoView.seekTo(0);
            }
        }
    }

}


    /*public void test(VideoView videoView, final float vitesse){
        mVideoView.setOnPreparedListener(new MediaPlayer.OnPreparedListener() {
            @Override
            public void onPrepared(MediaPlayer mp) {
                PlaybackParams myPlayBackParams = new PlaybackParams();
                myPlayBackParams.setSpeed(vitesse);
                mp.setPlaybackParams(myPlayBackParams);*/