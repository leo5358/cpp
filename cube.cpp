#include<bits/stdc++.h>

float A,B,C;

float cubewidth=10;
int width=160, height=44;
float zbuffer[160 *44];
char buffer[160*44];

int backgroundASCII=' ';

float incrementspeed=0.6;

float x,y,z;

//視距
int i=60;

float ooz;
int xp,yp;
float K1=40;

int idx;

float dimension_x(int i,int j,int k){
    j*sin(A)*sin(B)*cos(C)-k*cos(A)*sin(B)*cos(C)+j*cos(A)*sin(C)+k*sin(A)*sin(C)+i*cos(B)*cos (C);
}

float dimension_y(int i,int j,int k){
    j*cos(A)*cos(C)+k*sin(A)*cos(C)-j*sin(A)*sin(B)*sin(C)+k*cos(A)*sin(B)*sin(C)-i*cos(B)*sin(C);
}
float dimension_z(int i,int j,int k){
    k*cos(A)*cos(B)-j*sin(A)*cos(B)+i*sin(B);
}

void cal_forsurface(float cubex,float cubey,float cubez, int ch){
    x=dimension_x(cubex,cubey,cubez);
    y=dimension_y(cubex,cubey,cubez);
    z=dimension_z(cubex,cubey,cubez)+i;
    ooz=1/z;

    xp=(int)(width/2+K1*ooz*x*2);
    yp=(int)(height/2+K1*ooz*y);

    idx=xp+yp+width;
    if(idx>=0&&idx<width*height){
        if(ooz>zbuffer[idx]){
            zbuffer[idx]=ooz;
            buffer[idx]=ch;
        }
    }
}

int main(){
    printf("\x1b[2]");
    while(true){
        memset(buffer,backgroundASCII,width*height);
        memset(zbuffer,0,width*height*4);
        for(float cubex= - cubewidth; cubex < cubewidth; cubex += incrementspeed){
            for(float cubey= -cubewidth; cubey < cubewidth; cubey+= incrementspeed){
            cal_forsurface(cubex,cubey,-cubewidth, '#');
            }
        }
        printf("\x1b[H");
        for(int k=0;k<width*height;k++){
            putchar(k%width?buffer[k]:10);
        }
        A+=0.005;
        B+=0.005;

    }
    return 0;
}