package com.example.project7_4;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {
    ImageView img;
    Drawable iDog;
    Drawable iCat;
    Drawable iRabbit;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        img = (ImageView) findViewById(R.id.imageView);
        iDog = getResources().getDrawable(R.drawable.dog);
        iCat = getResources().getDrawable(R.drawable.cat);
        iRabbit = getResources().getDrawable(R.drawable.rabbit);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        super.onCreateOptionsMenu(menu);
        MenuInflater mInflater = getMenuInflater();
        mInflater.inflate(R.menu.optionmenu, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        switch(item.getItemId()) {
            case R.id.itemDog:
                img.setImageDrawable(iDog);
                return true;
            case R.id.itemCat:
                img.setImageDrawable(iCat);
                return true;
            case R.id.itemRabbit:
                img.setImageDrawable(iRabbit);
                return true;
        }
        return false;
    }
}