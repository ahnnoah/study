package com.example.project7_6;

import androidx.appcompat.app.AppCompatActivity;

import android.app.AlertDialog;
import android.graphics.Paint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    View dlgView;
    ImageView imageView;
    String title = new String();
    Button btn;
    RadioGroup group;
    RadioButton rdog;
    RadioButton rcat;
    RadioButton rrabbit;
    RadioButton rhorse;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setTitle("연습문제7_6");

        btn = (Button) findViewById(R.id.button);
        group = (RadioGroup) findViewById(R.id.group);
        rdog = (RadioButton) findViewById(R.id.dog);
        rcat = (RadioButton) findViewById(R.id.cat);
        rrabbit = (RadioButton) findViewById(R.id.rabbit);
        rhorse = (RadioButton) findViewById(R.id.horse);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                dlgView = (View) View.inflate(MainActivity.this, R.layout.image, null);
                imageView = (ImageView) dlgView.findViewById(R.id.imageView);
                switch(group.getCheckedRadioButtonId()) {
                    case R.id.dog:
                        title = "강아지";
                        imageView.setImageResource(R.drawable.dog);
                        break;
                    case R.id.cat:
                        title = "고양이";
                        imageView.setImageResource(R.drawable.cat);
                        break;
                    case R.id.rabbit:
                        title = "토끼";
                        imageView.setImageResource(R.drawable.rabbit);
                        break;
                    case R.id.horse:
                        title = "말";
                        imageView.setImageResource(R.drawable.horse);
                        break;
                }
                AlertDialog.Builder dlg = new AlertDialog.Builder(MainActivity.this);
                dlg.setTitle(title);

                Paint.setAntiAlias();



                dlg.setView(dlgView);
                dlg.setPositiveButton("닫기", null);
                dlg.show();

                Toast.makeText(Context context, String message, int duration).show();
            }
        });
    }
}