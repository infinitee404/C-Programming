#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\Data");
    circle(100,100,50);
    getch();
    closegraph();
    return 0;
}
