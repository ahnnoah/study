package com.example.project7_5;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.Display;
import android.view.Gravity;
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    View toastimg;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setTitle("연습문제7_5");

        final Button btn = (Button) findViewById(R.id.button);

        btn.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Toast tMsg = new Toast(MainActivity.this);
                toastimg = (View) View.inflate(MainActivity.this, R.layout.toast, null);

                //위치
                Display display = ((WindowManager) getSystemService(WINDOW_SERVICE)).getDefaultDisplay();
                int xOFFset = (int) (Math.random() * display.getWidth());
                int yOFFset = (int) (Math.random() * display.getHeight());
                tMsg.setGravity(Gravity.TOP | Gravity.LEFT, xOFFset, yOFFset);

                tMsg.setView(toastimg);
                tMsg.show();
            }
        });
    }
}