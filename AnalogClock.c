/*


This program will Not run another system if you are not going to use maniram.h header file form this repository.

This project is Compatible with Turbo C++ Compiler only.


Download compiler and install from given link  :   https://goo.gl/mV25lL


*/

#include"maniram.h"
void main()
{
 int gd,gm,j,i,r[5],x=300,y=200,K,J;
 time_t tim;
 int a1[24],b1[24],arr[50];
 struct tm *info;
 char str[2];
 time(&tim);
 info=localtime(&tim);
 for(i=0;i<4;i++)
 {
 r[i]=150-30*i;
 }
 r[4]=115;
 float asi,bco;
 asi=float(6*3.14/180);
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setbkcolor(WHITE);
 K=info->tm_min;
 J=info->tm_hour;
 setcolor(BLUE);
 settextstyle(3,0,2);
 OTX(5,400,"Created By :");
 settextstyle(4,0,4);
 setcolor(4);
 OTX(150,400,"  Maniram yadav");
  setcolor(RED);

  setlinestyle(1,0,30);
 circle(x,y,r[0]);
 for(i=0;i<12;i++)
 {
 sprintf(str,"%d",i+1);
 settextstyle(5,0,1);
 settextjustify(1,1);
    outtextxy(x+(r[0]-20)*sin((i+1)*3.14/6),y-(r[0]-20)*cos((i+1)*3.14/6),str);
 }
  for(i=0;i<24;i=i+2)
{
a1[i]=x+(r[0]*sin(3.14*i/12));
a1[i+1]=y-(r[0]*cos(3.14*i/12));
b1[i]=x+(r[1]*sin((i+1)*.2616666));
b1[i+1]=y-(r[1]*cos((i+1)*.261666));
}
for(i=0;i<24;i+=2)
{
arr[2*i]=a1[i];
arr[2*i+1]=a1[i+1];
arr[2*i+2]=b1[i];
arr[2*i+3]=b1[i+1];
}
arr[48]=a1[0];
arr[49]=a1[1];
drawpoly(25,arr);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(300,220,RED);
 setcolor(BLUE);
circle(x,y,170);
drawpoly(25,arr);
setfillstyle(1,4);
floodfill(300,365,BLUE);
 i=info->tm_sec;;
 while(!kbhit())
 {
 while(!kbhit())

 {i=1;
 for(j=0;j<60&&(!kbhit()&&(i%60));j++)
 {
  setcolor(RED);
  moveto(x,y);
 lineto(300+r[3]*sin(J*3.14/6),200-r[3]*cos(J*3.14/6)) ;
 setcolor(RED);
  moveto(300,200);
 lineto(300+r[2]*sin(asi*K),200-r[2]*cos(K*asi)) ;
 setcolor(RED);
 moveto(300,200);
 lineto(300+r[4]*sin(i*asi),200-r[4]*(cos(i*asi)));
 delay(1000);
 setcolor(GREEN);
 moveto(300,200);
 lineto(300+r[4]*sin(i*asi),200-r[4]*(cos(i*asi)));
  moveto(300,200);
 lineto(300+r[2]*sin(asi*K),200-r[2]*cos(K*asi)) ;
  moveto(300,200);
 lineto(300+r[3]*sin(J*3.14/6),200-r[3]*cos(J*3.14/6)) ;
 i++;
 }

 K++;
 i=0;
 }
 J++;
 }
 getch();
 cleardevice();
 closegraph();
 restorecrtmode();

}
