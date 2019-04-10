#include <graphics.h>
#include <windows.h>
#include<stdio.h>
#include<time.h>
//#pragma comment<lib,"winmm.lib">
mouse_msg msg = {0};
int YLb=1,YLa=0,GK=0;
int lock=0;
int D=1;
int B=0;
char str[20];
int S=0;
typedef struct hmp
{
   int x;
   int y;
   int r;
   int dc;
   int barrelx;
   int barrely;
   int bt;
}me;
char username[20];
void meau(void);
void GGDH(void);
void CD(void);
void Xuanze(void);
void Bdz(void);
void Cbms(void);
void Hlz(void);
void SXJY(void);
void BLBL(void);
void Xx(void);
void Bz(void);
void SM(void);
int LFW(int *ZT,int La,int Lb,PIMAGE *L);
int TFW(int *ZT,int Ta,int Tb,PIMAGE *T);
int IFW(int *ZT,int Ia,int Ib,PIMAGE *I);
int FFW(int Fa,int Fb,PIMAGE *F);
int FXY(int x,int y);
int Tpd(int x,int y,int zt,int (*a)[8],int *j,int *k);
int Lpd(int x,int y,int zt,int (*a)[8],int *j,int *k);
int Ipd(int x,int y,int zt,int (*a)[8],int *j,int *k);
int Fpd(int x,int y,int (*a)[8],int *j,int *k);
void WZXZ(int *x,int *y);
void PHB(void);
int SZPD(int (*a)[8]);
void Win1(int t,int c);
void Win2(int t,int c);
void Win3(int t,int c);
void Win4(int t,int c);
void Win5(int t,int c);
void SZDY(int (*a)[8]);   //测试用
void WJread(void);
void WJwrite(int lock);
void paihangW(int score,int GK);
//坦克大战
void map1(int (*a)[500],int (*d)[50]);
void zd(int (*d)[50],int (*c)[50],int (*f)[50],int (*w)[50],int (*p)[50]);
void wall(int (*d)[50]);
void emm(int (*d)[50],int (*p)[50],int a,int (*w)[50],int (*c)[50],int (*f)[50]);
void bem(int (*d)[50],int i,int j);
void bem1(int (*d)[50],int i,int j);
int tankmain(void);
void fra(void);




int main()
{
    WJread();
    meau();
}

void WJread(void)
{
        FILE *fplock;
        fplock=fopen("Records\\lock.wzl","r");
        lock=fgetc(fplock);
        while(lock!=EOF)
        {
            fclose(fplock);
            lock=lock-48;
            return ;
        }
        fclose(fplock);
        return ;

}

void WJwrite(int lock)
{
        FILE *fplock;
        fplock=fopen("Records\\lock.wzl","r+");
        fputc(lock+48,fplock);
        fclose(fplock);
        return ;

}

void meau(void)
{
    GGDH();
    SM();
}

void GGDH(void)
{
    setinitmode(0);
    initgraph(400, 300);
    //PIMAGE SR = newimage();
    //getimage(SR, "Images\\Gg\\SR.png");
    //putimage(0, 0, SR);
    inputbox_getline("欢迎选择归一·逗圈","正在加载............[OK]\n你好！\n为了更好的游戏体验\n请输入你的ID(ENTER键结束):",username,20);
     closegraph();
    initgraph(1100, 600);
    PIMAGE a = newimage();
    getimage(a, "Images\\Gg\\1.png");
    PIMAGE b = newimage();
    getimage(b, "Images\\Gg\\2.png");
    PIMAGE c = newimage();
    getimage(c, "Images\\Gg\\3.png");
    PIMAGE d = newimage();
    getimage(d, "Images\\Gg\\4.png");
    PIMAGE e = newimage();
    getimage(e, "Images\\Gg\\5.png");
    PIMAGE f = newimage();
    getimage(f, "Images\\Gg\\6.png");
    PIMAGE g = newimage();
    getimage(g, "Images\\Gg\\7.png");
    PlaySound(TEXT("Sounds\\Gg.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
    putimage(0, 0, a);
    Sleep(100);
    cleardevice();
    putimage(0, 0, b);
    Sleep(100);
    cleardevice();
    putimage(0, 0, c);
    Sleep(100);
    cleardevice();
    putimage(0, 0, d);
    Sleep(100);
    cleardevice();
    putimage(0, 0, e);
    Sleep(100);
    cleardevice();
    putimage(0, 0, a);
    Sleep(100);
    cleardevice();
    putimage(0, 0, b);
    Sleep(100);
    cleardevice();
    putimage(0, 0, c);
    Sleep(100);
    cleardevice();
    putimage(0, 0, d);
    Sleep(100);
    cleardevice();
    putimage(0, 0, e);
    Sleep(100);
    cleardevice();
    putimage(0, 0, a);
    Sleep(100);
    cleardevice();
    putimage(0, 0, b);
    Sleep(100);
    cleardevice();
    putimage(0, 0, c);
    Sleep(100);
    cleardevice();
    putimage(0, 0, d);
    Sleep(100);
    cleardevice();
    putimage(0, 0, e);
    Sleep(100);
    cleardevice();
    putimage(0, 0, a);
    Sleep(100);
    cleardevice();
    putimage(0, 0, b);
    Sleep(100);
    cleardevice();
    putimage(0, 0, c);
    Sleep(100);
    cleardevice();
    putimage(0, 0, d);
    Sleep(100);
    cleardevice();
    putimage(0, 0, e);
    Sleep(100);
    cleardevice();
    putimage(0, 0, a);
    Sleep(100);
    cleardevice();
    putimage(0, 0, b);
    Sleep(100);
    cleardevice();
    putimage(0, 0, c);
    Sleep(100);
    cleardevice();
    putimage(0, 0, d);
    Sleep(100);
    cleardevice();
    putimage(0, 0, e);
    Sleep(100);
    cleardevice();
    putimage(0, 0, f);
    Sleep(300);
    cleardevice();
    putimage(0, 0, g);
    Sleep(500);
    closegraph();
}

void CD(void)
{
    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE CD = newimage();
    getimage(CD, "Images\\Jm\\7.png");
    PIMAGE KS = newimage();
    getimage(KS, "Images\\Jm\\KS.png");
    PIMAGE BZ = newimage();
    getimage(BZ, "Images\\Jm\\BZ.png");
    PIMAGE TC = newimage();
    getimage(TC, "Images\\Jm\\TC.png");
     PIMAGE LG = newimage();
    getimage(LG, "Images\\Jm\\LG.png");
    PIMAGE PH = newimage();
    getimage(PH, "Images\\Ph\\CDPHB.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
        // PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }

    for ( ; is_run(); delay_fps(60))
    {


        while (mousemsg())
        {
            msg = getmouse();
        }

        putimage(0, 0, CD);
        //putimage(50, 1000, YL);
        putimage_transparent(NULL, YL, 1000,50, BLACK);
           if(msg.x>=0&&msg.x<=250&&msg.y>=0&&msg.y<=100)
        {

            putimage(0, 0, PH);

        }
           if(msg.x>=450&&msg.x<=650&&msg.y>=200&&msg.y<=300)
        {

            putimage(450, 200, KS);

        }
        if(msg.x>=450&&msg.x<=650&&msg.y>=300&&msg.y<=400)
        {

            putimage(450, 300, BZ);

        }
        if(msg.x>=450&&msg.x<=650&&msg.y>=400&&msg.y<=500)
        {

            putimage(450, 400, TC);

        }
         if(msg.x>=75&&msg.x<=425&&msg.y>=110&&msg.y<=500)
        {
            putimage(75, 111, LG);
        }
        //xyprintf(0,0,"%d",lock);
        Sleep(50);
        if(msg.x>=450&&msg.x<=650&&msg.y>=200&&msg.y<=300&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
             while (mousemsg())
            {
                msg = getmouse();
            }
            Xuanze();

        }
        if(msg.x>=450&&msg.x<=650&&msg.y>=300&&msg.y<=400&&(int)msg.is_left()&&(int)msg.is_down())

        {
            closegraph();
             while (mousemsg())
            {
                msg = getmouse();
            }
            Bz();
        }
        if(msg.x>=450&&msg.x<=650&&msg.y>=400&&msg.y<=500&&(int)msg.is_left()&&(int)msg.is_down())

        {
            closegraph();
            exit(0);
        }

        if(msg.x>=0&&msg.x<=250&&msg.y>=0&&msg.y<=100&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
             while (mousemsg())
            {
                msg = getmouse();
            }
            PHB();

        }



        if(msg.x>=1000&&msg.x<=1050&&msg.y>=50&&msg.y<=100&&(int)msg.is_left()&&(int)msg.is_down())
        {


            Sleep(100);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
    closegraph();
    return ;
}

void Bz(void)
{

    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE YL = newimage();
    PIMAGE One = newimage();
    getimage(One, "Images\\Bz\\1.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, One);
        putimage_transparent(NULL, YL, 1030,10, BLACK);

        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            CD();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xx();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }





    }
}

void SM(void)
{

    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE YL = newimage();
    PIMAGE SM = newimage();
    getimage(SM, "Images\\Gg\\SM.png");

    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
     if(YLa==0)
        {
            PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
            YLa++;
        }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, SM);
        putimage_transparent(NULL, YL, 1030,10, BLACK);

        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {

            closegraph();
            CD();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }





    }
}

void Xx(void)
{

    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE YL = newimage();
    PIMAGE Two = newimage();
    getimage(Two, "Images\\Bz\\2.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Two);
        putimage_transparent(NULL, YL, 1030,10, BLACK);

        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Bz();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            CD();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void Xuanze(void)
{
    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE GK = newimage();
    getimage(GK, "Images\\Jm\\GK.png");
     PIMAGE Lock = newimage();
    getimage(Lock, "Images\\Qt\\suo.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {


        while (mousemsg())
        {
            msg = getmouse();
        }

        putimage(0, 0, GK);
        putimage_transparent(NULL, YL, 1025,50, BLACK);
        if(lock<1)
        {
            putimage_transparent(NULL, Lock, 290,400, BLACK);
        }
        if(lock<2)
        {
            putimage_transparent(NULL, Lock, 440,400, BLACK);
        }
      if(lock<3)
        {
            putimage_transparent(NULL, Lock, 590,400, BLACK);
        }
      if(lock<4)
        {
            putimage_transparent(NULL, Lock, 740,400, BLACK);
        }

        Sleep(50);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {

            closegraph();
            CD();

        }
        if(msg.x>=100&&msg.x<=250&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())

        {
            if(lock>=0)
            {
                 closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
            Bdz();
            }

        }
        if(msg.x>=250&&msg.x<=400&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())

        {
             if(lock>=1)
             {
                 closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
            Cbms();
             }

        }
        if(msg.x>=400&&msg.x<=550&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
              if(lock>=2)
             {
                 closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
           Hlz();
             }
        }
        if(msg.x>=550&&msg.x<=700&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())

        {
             if(lock>=3)
             {
                 closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
           SXJY();
             }
        }
        if(msg.x>=700&&msg.x<=850&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())

        {
            if(lock>=4)
             {
                 closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
           BLBL();
             }
        }
        if(msg.x>=850&&msg.x<=1000&&msg.y>=0&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())

        {
              closegraph();
            while (mousemsg())
            {
                msg = getmouse();
            }
            int  sss;
            wow:
           sss=tankmain();
           S=0;
           if(sss==3)
           {
               closegraph();
               Xuanze();
           }
           else if(sss==1)
           {
               closegraph();
               goto wow;
           }
           else if(sss==2)
           {
               exit(0);
           }
        }

        if(msg.x>=1000&&msg.x<=1100&&msg.y>=400&&msg.y<=500&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            exit(0);
        }

        if(msg.x>=1025&&msg.x<=1075&&msg.y>=50&&msg.y<=100&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(100);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }

    }
    closegraph();
    return ;
}

int LFW(int *ZT,int La,int Lb,PIMAGE *L)
{
    if(msg.x>=La&&msg.x<La+100&&msg.y>=Lb&&msg.y<=Lb+150&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==0)
        return 1;
    else if(msg.x>=La&&msg.x<La+150&&msg.y>=Lb&&msg.y<=Lb+100&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==1)
        return 1;
    else  if(msg.x>=La&&msg.x<La+100&&msg.y>=Lb&&msg.y<=Lb+150&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==2)
        return 1;
    else   if(msg.x>=La&&msg.x<La+150&&msg.y>=Lb&&msg.y<=Lb+100&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==3)
        return 1;
    else   if(msg.x>=La&&msg.x<La+100&&msg.y>=Lb&&msg.y<=Lb+150&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==0)
    {
        getimage(*L, "Images\\Ys\\1.png");
        *ZT=1;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=La&&msg.x<La+150&&msg.y>=Lb&&msg.y<=Lb+100&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==1)
    {
        getimage(*L, "Images\\Ys\\2.png");
        *ZT=2;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=La&&msg.x<La+100&&msg.y>=Lb&&msg.y<=Lb+150&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==2)
    {
        getimage(*L, "Images\\Ys\\3.png");
        *ZT=3;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=La&&msg.x<La+150&&msg.y>=Lb&&msg.y<=Lb+100&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==3)
    {
        getimage(*L, "Images\\Ys\\0.png");
        *ZT=0;
        Sleep(150);
        return 0;
    }
    else return 0;

}

int TFW(int *ZT,int Ta,int Tb,PIMAGE *T)
{
    if(msg.x>=Ta&&msg.x<Ta+100&&msg.y>=Tb&&msg.y<=Tb+150&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==0)
        return 1;
    else if(msg.x>=Ta&&msg.x<Ta+150&&msg.y>=Tb&&msg.y<=Tb+100&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==1)
        return 1;
    else  if(msg.x>=Ta&&msg.x<Ta+100&&msg.y>=Tb&&msg.y<=Tb+150&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==2)
        return 1;
    else   if(msg.x>=Ta&&msg.x<Ta+150&&msg.y>=Tb&&msg.y<=Tb+100&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==3)
        return 1;
    else   if(msg.x>=Ta&&msg.x<Ta+100&&msg.y>=Tb&&msg.y<=Tb+150&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==0)
    {
        getimage(*T, "Images\\Ys\\5.png");
        *ZT=1;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=Ta&&msg.x<Ta+150&&msg.y>=Tb&&msg.y<=Tb+100&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==1)
    {
        getimage(*T, "Images\\Ys\\6.png");
        *ZT=2;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=Ta&&msg.x<Ta+100&&msg.y>=Tb&&msg.y<=Tb+150&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==2)
    {
        getimage(*T, "Images\\Ys\\7.png");
        *ZT=3;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=Ta&&msg.x<Ta+150&&msg.y>=Tb&&msg.y<=Tb+100&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==3)
    {
        getimage(*T, "Images\\Ys\\4.png");
        *ZT=0;
        Sleep(150);
        return 0;
    }
    return 0;

}

int IFW(int *ZT,int Ia,int Ib,PIMAGE *I)
{
    if(msg.x>=Ia&&msg.x<Ia+50&&msg.y>=Ib&&msg.y<=Ib+200&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==1)
        return 1;
    else if(msg.x>=Ia&&msg.x<Ia+200&&msg.y>=Ib&&msg.y<=Ib+50&&(int)msg.is_left()&&(int)msg.is_down()&&*ZT==0)
        return 1;
    else   if(msg.x>=Ia&&msg.x<Ia+200&&msg.y>=Ib&&msg.y<=Ib+50&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==0)
    {
        getimage(*I, "Images\\Ys\\9.png");
        *ZT=1;
        Sleep(150);
        return 0;
    }
    else   if(msg.x>=Ia&&msg.x<Ia+50&&msg.y>=Ib&&msg.y<=Ib+200&&(int)msg.is_right()&&(int)msg.is_down()&&*ZT==1)
    {
        getimage(*I, "Images\\Ys\\8.png");
        *ZT=0;
        Sleep(150);
        return 0;
    }
    else return 0;

}

int FFW(int Fa,int Fb,PIMAGE *F)
{
    if(msg.x>=Fa&&msg.x<Fa+100&&msg.y>=Fb&&msg.y<=Fb+100&&(int)msg.is_left()&&(int)msg.is_down())
        return 1;
    else return 0;

}

int Tpd(int x,int y,int zt,int (*a)[8],int *j,int *k)
{
    int m,n;
    if(FXY(x,y)&&(int)msg.is_up())
    {
        n=(x-340)/50;
        m=(y-90)/50;
        *j=m;
        *k=n;
        if(zt==1)
        {
            if(a[m][n]==0&&a[m][n+1]==0&&a[m][n+2]==0&&a[m+1][n+1]==0)
            {
                a[m][n]=1;
                a[m][n+1]=1;
                a[m][n+2]=1;
                a[m+1][n+1]=1;
            }
            return 1;
        }
        else  if(zt==0)
        {

            if(a[m][n]==0&&a[m+1][n]==0&&a[m+2][n]==0&&a[m+1][n+1]==0)
            {
                a[m][n]=1;
                a[m+1][n]=1;
                a[m+2][n]=1;
                a[m+1][n+1]=1;
            }
            return 1;
        }
        else  if(zt==3)
        {

            if(a[m][n+1]==0&&a[m+1][n]==0&&a[m+1][n+1]==0&&a[m+1][n+2]==0)
            {
                a[m][n+1]=1;
                a[m+1][n]=1;
                a[m+1][n+1]=1;
                a[m+1][n+2]=1;
            }
            return 1;
        }
        else  if(zt==2)
        {
            if(a[m+1][n]==0&&a[m][n+1]==0&&a[m+1][n+1]==0&&a[m+2][n+1]==0)
            {
                a[m+1][n]=1;
                a[m][n+1]=1;
                a[m+1][n+1]=1;
                a[m+2][n+1]=1;
            }
            return 1;
        }
    }
    else
    {
        m=*j;
        n=*k;
        if(zt==1)
        {
            if(a[m][n]==1&&a[m][n+1]==1&&a[m][n+2]==1&&a[m+1][n+1]==1)
            {
                a[m][n]=0;
                a[m][n+1]=0;
                a[m][n+2]=0;
                a[m+1][n+1]=0;
            }
            return 0;
        }
        else  if(zt==0)
        {

            if(a[m][n]==1&&a[m+1][n]==1&&a[m+2][n]==1&&a[m+1][n+1]==1)
            {
                a[m][n]=0;
                a[m+1][n]=0;
                a[m+2][n]=0;
                a[m+1][n+1]=0;
            }
            return 0;
        }
        else  if(zt==3)
        {

            if(a[m][n+1]==1&&a[m+1][n]==1&&a[m+1][n+1]==1&&a[m+1][n+2]==1)
            {
                a[m][n+1]=0;
                a[m+1][n]=0;
                a[m+1][n+1]=0;
                a[m+1][n+2]=0;
            }
            return 0;
        }
        else  if(zt==2)
        {
            if(a[m+1][n]==1&&a[m][n+1]==1&&a[m+1][n+1]==1&&a[m+2][n+1]==1)
            {
                a[m+1][n]=0;
                a[m][n+1]=0;
                a[m+1][n+1]=0;
                a[m+2][n+1]=0;
            }
            return 0;
        }
    }

            return 0;


}

int Lpd(int x,int y,int zt,int (*a)[8],int *j,int *k)
{
    int m,n;
    if(FXY(x,y)&&(int)msg.is_up())
    {
        n=(x-340)/50;
        m=(y-90)/50;
        *j=m;
        *k=n;
        if(zt==1)
        {
            if(a[m][n]==0&&a[m][n+1]==0&&a[m][n+2]==0&&a[m+1][n]==0)
            {
                a[m][n]=1;
                a[m][n+1]=1;
                a[m][n+2]=1;
                a[m+1][n]=1;
            }
            return 1;
        }
        else  if(zt==0)
        {

            if(a[m][n]==0&&a[m+1][n]==0&&a[m+2][n]==0&&a[m+2][n+1]==0)
            {
                a[m][n]=1;
                a[m+1][n]=1;
                a[m+2][n]=1;
                a[m+2][n+1]=1;
            }
            return 1;
        }
        else  if(zt==3)
        {

            if(a[m][n+2]==0&&a[m+1][n]==0&&a[m+1][n+1]==0&&a[m+1][n+2]==0)
            {
                a[m][n+2]=1;
                a[m+1][n]=1;
                a[m+1][n+1]=1;
                a[m+1][n+2]=1;
            }
            return 1;
        }
        else  if(zt==2)
        {
            if(a[m][n]==0&&a[m][n+1]==0&&a[m+1][n+1]==0&&a[m+2][n+1]==0)
            {
                a[m][n]=1;
                a[m][n+1]=1;
                a[m+1][n+1]=1;
                a[m+2][n+1]=1;
            }
            return 1;
        }
    }
    else
    {
        m=*j;
        n=*k;
        if(zt==1)
        {
            if(a[m][n]==1&&a[m][n+1]==1&&a[m][n+2]==1&&a[m+1][n]==1)
            {
                a[m][n]=0;
                a[m][n+1]=0;
                a[m][n+2]=0;
                a[m+1][n]=0;
            }
            return 0;
        }
        else  if(zt==0)
        {

            if(a[m][n]==1&&a[m+1][n]==1&&a[m+2][n]==1&&a[m+2][n+1]==1)
            {
                a[m][n]=0;
                a[m+1][n]=0;
                a[m+2][n]=0;
                a[m+2][n+1]=0;
            }
            return 0;
        }
        else  if(zt==3)
        {

            if(a[m][n+2]==1&&a[m+1][n]==1&&a[m+1][n+1]==1&&a[m+1][n+2]==1)
            {
                a[m][n+2]=0;
                a[m+1][n]=0;
                a[m+1][n+1]=0;
                a[m+1][n+2]=0;
            }
            return 0;
        }
        else  if(zt==2)
        {
            if(a[m][n]==1&&a[m][n+1]==1&&a[m+1][n+1]==1&&a[m+2][n+1]==1)
            {
                a[m][n]=0;
                a[m][n+1]=0;
                a[m+1][n+1]=0;
                a[m+2][n+1]=0;
            }
            return 0;
        }

        else
        {
            return 0;
        }
    }
}

int Ipd(int x,int y,int zt,int (*a)[8],int *j,int *k)
{
    int m,n;
    if(FXY(x,y)&&(int)msg.is_up())
    {
        n=(x-340)/50;
        m=(y-90)/50;
        *j=m;
        *k=n;
        if(zt==1)
        {
            if(a[m][n]==0&&a[m+1][n]==0&&a[m+2][n]==0&&a[m+3][n]==0)
            {
                a[m][n]=1;
                a[m+1][n]=1;
                a[m+2][n]=1;
                a[m+3][n]=1;
            }
            return 1;
        }
        else  if(zt==0)
        {

            if(a[m][n]==0&&a[m][n+1]==0&&a[m][n+2]==0&&a[m][n+3]==0)
            {
                a[m][n]=1;
                a[m][n+1]=1;
                a[m][n+2]=1;
                a[m][n+3]=1;
            }
            return 1;
        }
    }
    else
    {
        m=*j;
        n=*k;
        if(zt==1)
        {
            if(a[m][n]==1&&a[m+1][n]==1&&a[m+2][n]==1&&a[m+3][n]==1)
            {
                a[m][n]=0;
                a[m+1][n]=0;
                a[m+2][n]=0;
                a[m+3][n]=0;
            }
            return 0;
        }
        else  if(zt==0)
        {

            if(a[m][n]==1&&a[m][n+1]==1&&a[m][n+2]==1&&a[m][n+3]==1)
            {
                a[m][n]=0;
                a[m][n+1]=0;
                a[m][n+2]=0;
                a[m][n+3]=0;
            }
            return 0;
        }
    }
    return 0;
}

int Fpd(int x,int y,int (*a)[8],int *j,int *k)
{
    int m,n;
    if(FXY(x,y)&&(int)msg.is_up())
    {
        n=(x-340)/50;
        m=(y-90)/50;
        *j=m;
        *k=n;
        if(a[m][n]==0&&a[m][n+1]==0&&a[m+1][n]==0&&a[m+1][n+1]==0)
        {
            a[m][n]=1;
            a[m][n+1]=1;
            a[m+1][n]=1;
            a[m+1][n+1]=1;
        }
        return 1;
    }

    else
    {
        m=*j;
        n=*k;
        if(a[m][n]==1&&a[m][n+1]==1&&a[m+1][n]==1&&a[m+1][n+1]==1)
        {
            a[m][n]=0;
            a[m][n+1]=0;
            a[m+1][n]=0;
            a[m+1][n+1]=0;
        }
        return 0;
    }
    return 0;
}

int SZPD(int (*a)[8])
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(a[i][j]!=1)
                return 0;
        }
    }
    return 1;

}

void SZDY(int (*a)[8])
{
    int i;
    for(i=0; i<8; i++)
    {
        xyprintf(100,i*15,"%d  %d  %d  %d  %d  %d  %d  %d  \n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],a[i][6],a[i][7]);
    }
    return ;

}

void Bdz(void)
{

    int T1a=150,T1b=70,T2a=850,T2b=70,Ia=100,Ib=350,T3a=850,T3b=370;
    int ZTT1=0,ZTT2=0,ZTI=0,ZTT3=0;
    int Tm1=-1,Tn1=-1,Tm2=-1,Tn2=-1,Tm3=-1,Tn3=-1,Im=-1,In=-1;
    char cc[4],tt[4];
    int click=0,Time;
    GK=1;
    setfont(50, 0, "黑体");       //正式发布时解除注释
    setcolor(WHITE);
    setfontbkcolor(EGERGB(239, 16, 99));
    clock_t Start,End;
    int a[8][8]= {{1,1,1,1,1,1,1,1},{1,1,1,0,1,1,1,1},{1,1,0,0,0,1,1,1},{1,1,0,0,0,1,1,1},{1,0,0,0,0,0,1,1},{1,1,0,0,0,1,1,1},{1,1,1,0,1,1,1,1},{1,1,1,1,1,1,1,1}};
    setinitmode(0);
    initgraph(1100, 600);
    Start=clock();
    PIMAGE MAP = newimage();
    getimage(MAP, "Images\\Map\\BDZ.png");
    PIMAGE T1 = newimage();
    getimage(T1, "Images\\Ys\\4.png");
    PIMAGE T2 = newimage();
    getimage(T2, "Images\\Ys\\4.png");
    PIMAGE I = newimage();
    getimage(I, "Images\\Ys\\8.png");
    PIMAGE T3 = newimage();
    getimage(T3, "Images\\Ys\\4.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, MAP);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
         outtextxy(520, 25, tt);
        outtextxy(540, 525, cc);
        if(TFW(&ZTT1,T1a,T1b,&T1))
        {
            Sleep(100);
            click++;
            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }

                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(50);
                    if(Tpd(T1a,T1b,ZTT1,a,&Tm1,&Tn1))         //判断是否可以放入的函数
                    {
                        WZXZ(&T1a,&T1b);
                        if(SZPD(a))
                        {
                            Sleep(500);
                            Win1(Time,click); //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
                T1a=msg.x;
                T1b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);


            }



        }
        if(TFW(&ZTT2,T2a,T2b,&T2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T2a=msg.x;
                T2b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T2a,T2b,ZTT2,a,&Tm2,&Tn2))         //判断是否可以放入的函数
                    {
                        WZXZ(&T2a,&T2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win1(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }






        }
        if(TFW(&ZTT3,T3a,T3b,&T3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T3a=msg.x;
                T3b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T3a,T3b,ZTT3,a,&Tm3,&Tn3))         //判断是否可以放入的函数
                    {
                        WZXZ(&T3a,&T3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win1(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
        if(IFW(&ZTI,Ia,Ib,&I))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Ia=msg.x;
                Ib=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(Ia,Ib,ZTI,a,&Im,&In))         //判断是否可以放入的函数
                    {
                        WZXZ(&Ia,&Ib);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win1(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        //SZDY(a);              //发布时注释
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
        End=clock();
        Time=(End-Start)/CLOCKS_PER_SEC;
        sprintf(tt, "%3d", Time);
        sprintf(cc, "%2d", click);

    }
}

void Win1(int t,int c)
{
    setinitmode(0);
    initgraph(1100, 600);
    int CJ=527-t-c*3;
    PIMAGE YL = newimage();
    PIMAGE Win = newimage();
    setfont(50, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    char tt[4],cc[4],cj[4];
    sprintf(tt, "%d", t);
    sprintf(cc, "%d", c);
    sprintf(cj, "%d", CJ);
    if(lock<1)
    {
        lock++;
        WJwrite(lock);
    }
     paihangW(CJ,1);
    getimage(Win, "Images\\Win\\1.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Win);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(560, 295, tt);
        outtextxy(560, 350, cc);
        outtextxy(560, 405, cj);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Cbms();       //下一关
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void Cbms(void)
{

    int T1a=150,T1b=70,T2a=850,T2b=70,Ia=100,Ib=350,La=850,Lb=370,Fa=850,Fb=240;
    int ZTT1=0,ZTT2=0,ZTI=0,ZTL=0;
    int Tm1=-1,Tn1=-1,Tm2=-1,Tn2=-1,Lm=-1,Ln=-1,Im=-1,In=-1,Fm=-1,Fn=-1;
    char cc[4],tt[4];
    int click=0,Time;
    GK=2;
    setfont(50, 0, "黑体");       //正式发布时解除注释
    setcolor(WHITE);
    setfontbkcolor(EGERGB(239, 16, 99));
    clock_t Start,End;
    int a[8][8]= {{1,1,1,1,1,1,1,1},{1,1,1,0,0,0,1,1},{1,1,0,0,0,0,1,1},{1,1,1,0,0,0,1,1},{1,1,1,0,1,0,1,1},{1,1,0,0,0,0,1,1},{1,1,0,0,0,0,1,1},{1,1,1,1,1,1,1,1}};
    setinitmode(0);
    initgraph(1100, 600);
    Start=clock();
    PIMAGE MAP = newimage();
    getimage(MAP, "Images\\Map\\CBMS.png");
    PIMAGE T1 = newimage();
    getimage(T1, "Images\\Ys\\4.png");
    PIMAGE T2 = newimage();
    getimage(T2, "Images\\Ys\\4.png");
    PIMAGE I = newimage();
    getimage(I, "Images\\Ys\\8.png");
    PIMAGE L = newimage();
    getimage(L, "Images\\Ys\\0.png");
    PIMAGE F = newimage();
    getimage(F, "Images\\Ys\\10.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, MAP);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, L, La,Lb, BLACK);
        putimage_transparent(NULL, F, Fa,Fb, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(520, 25, tt);
        outtextxy(540, 525, cc);
        if(TFW(&ZTT1,T1a,T1b,&T1))
        {
            Sleep(100);
            click++;
            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }

                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(50);
                    if(Tpd(T1a,T1b,ZTT1,a,&Tm1,&Tn1))         //判断是否可以放入的函数
                    {
                        WZXZ(&T1a,&T1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win2(Time,click); //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
                T1a=msg.x;
                T1b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L, La,Lb, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
            }



        }
        if(TFW(&ZTT2,T2a,T2b,&T2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T2a=msg.x;
                T2b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L, La,Lb, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T2a,T2b,ZTT2,a,&Tm2,&Tn2))         //判断是否可以放入的函数
                    {
                        WZXZ(&T2a,&T2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win2(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }






        }
        if(LFW(&ZTL,La,Lb,&L))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                La=msg.x;
                Lb=msg.y;
                Sleep(50);
                cleardevice();
                       putimage(0, 0, MAP);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, F, Fa,Fb, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, L, La,Lb, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(La,Lb,ZTL,a,&Lm,&Ln))         //判断是否可以放入的函数
                    {
                        WZXZ(&La,&Lb);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win2(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
        if(IFW(&ZTI,Ia,Ib,&I))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Ia=msg.x;
                Ib=msg.y;
                Sleep(50);
                cleardevice();
                     putimage(0, 0, MAP);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, L, La,Lb, BLACK);
        putimage_transparent(NULL, F, Fa,Fb, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(Ia,Ib,ZTI,a,&Im,&In))         //判断是否可以放入的函数
                    {
                        WZXZ(&Ia,&Ib);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win2(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
               if(FFW(Fa,Fb,&F))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Fa=msg.x;
                Fb=msg.y;
                Sleep(50);
                cleardevice();
                     putimage(0, 0, MAP);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, L, La,Lb, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Fpd(Fa,Fb,a,&Fm,&Fn))         //判断是否可以放入的函数
                    {
                        WZXZ(&Fa,&Fb);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win2(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        //SZDY(a);              //发布时注释
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
        End=clock();
        Time=(End-Start)/CLOCKS_PER_SEC;
        sprintf(tt, "%3d", Time);
        sprintf(cc, "%2d", click);

    }
}

void Win2(int t,int c)
{
    setinitmode(0);
    initgraph(1100, 600);
    int CJ=535-t-c*3;
    PIMAGE YL = newimage();
    PIMAGE Win = newimage();
    setfont(50, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    char tt[4],cc[4],cj[4];
    if(lock<2)
    {
        lock++;
        WJwrite(lock);
    }
     paihangW(CJ,2);
    sprintf(tt, "%d", t);
    sprintf(cc, "%d", c);
    sprintf(cj, "%d", CJ);
    getimage(Win, "Images\\Win\\2.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Win);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(560, 295, tt);
        outtextxy(560, 350, cc);
        outtextxy(560, 405, cj);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Hlz();    //下一关
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void Hlz(void)
{

    int L1a=150,L1b=70,L2a=850,L2b=70,Ia=100,Ib=260,L3a=850,L3b=370,Fa=850,Fb=240,L4a=150,L4b=380;
    int ZTL1=0,ZTL2=0,ZTI=0,ZTL3=0,ZTL4=0;
    int Lm1=-1,Ln1=-1,Lm2=-1,Ln2=-1,Lm3=-1,Ln3=-1,Im=-1,In=-1,Fm=-1,Fn=-1,Lm4=-1,Ln4=-1;
    char cc[4],tt[4];
    int click=0,Time;
    GK=3;
    setfont(50, 0, "黑体");       //正式发布时解除注释
    setcolor(WHITE);
    setfontbkcolor(EGERGB(239, 16, 99));
    clock_t Start,End;
    int a[8][8]= {{1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,1},{1,1,0,0,0,0,1,1},{1,1,1,0,0,1,1,1},{1,1,1,0,0,1,1,1},{1,1,0,0,0,0,1,1},{1,1,0,0,0,0,1,1},{1,1,0,0,0,0,1,1}};
    setinitmode(0);
    initgraph(1100, 600);
    Start=clock();
    PIMAGE MAP = newimage();
    getimage(MAP, "Images\\Map\\HLZ.png");
    PIMAGE L1 = newimage();
    getimage(L1, "Images\\Ys\\0.png");
    PIMAGE L2 = newimage();
    getimage(L2, "Images\\Ys\\0.png");
    PIMAGE I = newimage();
    getimage(I, "Images\\Ys\\8.png");
    PIMAGE L3 = newimage();
    getimage(L3, "Images\\Ys\\0.png");
    PIMAGE L4 = newimage();
    getimage(L4, "Images\\Ys\\0.png");
    PIMAGE F = newimage();
    getimage(F, "Images\\Ys\\10.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, L3, L3a,L3b, BLACK);
        putimage_transparent(NULL, L4, L4a,L4b, BLACK);
        putimage_transparent(NULL, F, Fa,Fb, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(520, 25, tt);
        outtextxy(540, 525, cc);
        if(LFW(&ZTL1,L1a,L1b,&L1))
        {
            Sleep(100);
            click++;
            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }

                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(50);
                    if(Lpd(L1a,L1b,ZTL1,a,&Lm1,&Ln1))         //判断是否可以放入的函数
                    {
                        WZXZ(&L1a,&L1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click); //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
                L1a=msg.x;
                L1b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
            }



        }
        if(LFW(&ZTL2,L2a,L2b,&L2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L2a=msg.x;
                L2b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                 putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L2a,L2b,ZTL2,a,&Lm2,&Ln2))         //判断是否可以放入的函数
                    {
                        WZXZ(&L2a,&L2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }






        }
        if(LFW(&ZTL3,L3a,L3b,&L3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L3a=msg.x;
                L3b=msg.y;
                Sleep(50);
                cleardevice();
                 putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L3a,L3b,ZTL3,a,&Lm3,&Ln3))         //判断是否可以放入的函数
                    {
                        WZXZ(&L3a,&L3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
          if(LFW(&ZTL4,L4a,L4b,&L4))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L4a=msg.x;
                L4b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L4a,L4b,ZTL4,a,&Lm4,&Ln4))         //判断是否可以放入的函数
                    {
                        WZXZ(&L4a,&L4b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
        if(IFW(&ZTI,Ia,Ib,&I))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Ia=msg.x;
                Ib=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(Ia,Ib,ZTI,a,&Im,&In))         //判断是否可以放入的函数
                    {
                        WZXZ(&Ia,&Ib);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
               if(FFW(Fa,Fb,&F))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Fa=msg.x;
                Fb=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, L4, L4a,L4b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, F, Fa,Fb, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Fpd(Fa,Fb,a,&Fm,&Fn))         //判断是否可以放入的函数
                    {
                        WZXZ(&Fa,&Fb);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win3(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        //SZDY(a);              //发布时注释
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
        End=clock();
        Time=(End-Start)/CLOCKS_PER_SEC;
        sprintf(tt, "%3d", Time);
        sprintf(cc, "%2d", click);

    }
}

void Win3(int t,int c)
{
    setinitmode(0);
    initgraph(1100, 600);
    int CJ=540-t-c*3;
    PIMAGE YL = newimage();
    PIMAGE Win = newimage();
    setfont(50, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    char tt[4],cc[4],cj[4];
    if(lock<3)
    {
         lock++;
    WJwrite(lock);
    }
    paihangW(CJ,3);
    sprintf(tt, "%d", t);
    sprintf(cc, "%d", c);
    sprintf(cj, "%d", CJ);
    getimage(Win, "Images\\Win\\3.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Win);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(560, 295, tt);
        outtextxy(560, 350, cc);
        outtextxy(560, 405, cj);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            SXJY();       //下一关
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void SXJY(void)
{

    int L1a=150,L1b=50,L2a=850,L2b=50,Ia=100,Ib=450,L3a=850,L3b=410,T1a=850,T1b=240,T2a=150,T2b=250,T3a=270,T3b=125;
    int ZTL1=0,ZTL2=0,ZTI=0,ZTL3=0,ZTT1=0,ZTT2=0,ZTT3=0;
    int Lm1=-1,Ln1=-1,Lm2=-1,Ln2=-1,Lm3=-1,Ln3=-1,Im=-1,In=-1,Tm1=-1,Tn1=-1,Tm2=-1,Tn2=-1,Tm3=-1,Tn3=-1;
    char cc[4],tt[4];
    int click=0,Time;
    GK=4;
    setfont(50, 0, "黑体");       //正式发布时解除注释
    setcolor(WHITE);
    setfontbkcolor(EGERGB(239, 16, 99));
    clock_t Start,End;
    int a[8][8]= {{1,1,1,1,1,1,1,1},{1,0,0,0,0,1,0,1},{1,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,1},{1,1,1,1,0,0,0,1},{1,1,1,0,0,0,1,1},{1,1,1,1,1,1,1,1}};
    setinitmode(0);
    initgraph(1100, 600);
    Start=clock();
    PIMAGE MAP = newimage();
    getimage(MAP, "Images\\Map\\SXJY.png");
    PIMAGE L1 = newimage();
    getimage(L1, "Images\\Ys\\0.png");
    PIMAGE L2 = newimage();
    getimage(L2, "Images\\Ys\\0.png");
    PIMAGE I = newimage();
    getimage(I, "Images\\Ys\\8.png");
    PIMAGE L3 = newimage();
    getimage(L3, "Images\\Ys\\0.png");
    PIMAGE T1 = newimage();
    getimage(T1, "Images\\Ys\\4.png");
    PIMAGE T2 = newimage();
    getimage(T2, "Images\\Ys\\4.png");
    PIMAGE T3 = newimage();
    getimage(T3, "Images\\Ys\\4.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I, Ia,Ib, BLACK);
        putimage_transparent(NULL, L3, L3a,L3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(520, 25, tt);
        outtextxy(540, 525, cc);
        if(LFW(&ZTL1,L1a,L1b,&L1))
        {
            Sleep(100);
            click++;
            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }

                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(50);
                    if(Lpd(L1a,L1b,ZTL1,a,&Lm1,&Ln1))         //判断是否可以放入的函数
                    {
                        WZXZ(&L1a,&L1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click); //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
                L1a=msg.x;
                L1b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
            }



        }
        if(LFW(&ZTL2,L2a,L2b,&L2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L2a=msg.x;
                L2b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L2a,L2b,ZTL2,a,&Lm2,&Ln2))         //判断是否可以放入的函数
                    {
                        WZXZ(&L2a,&L2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }






        }
        if(LFW(&ZTL3,L3a,L3b,&L3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L3a=msg.x;
                L3b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L3a,L3b,ZTL3,a,&Lm3,&Ln3))         //判断是否可以放入的函数
                    {
                        WZXZ(&L3a,&L3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
          if(TFW(&ZTT1,T1a,T1b,&T1))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T1a=msg.x;
                T1b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T1a,T1b,ZTT1,a,&Tm1,&Tn1))         //判断是否可以放入的函数
                    {
                        WZXZ(&T1a,&T1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }

        }


           if(TFW(&ZTT3,T3a,T3b,&T3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T3a=msg.x;
                T3b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T3a,T3b,ZTT3,a,&Tm3,&Tn3))         //判断是否可以放入的函数
                    {
                        WZXZ(&T3a,&T3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }


           if(TFW(&ZTT2,T2a,T2b,&T2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T2a=msg.x;
                T2b=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T2a,T2b,ZTT2,a,&Tm2,&Tn2))         //判断是否可以放入的函数
                    {
                        WZXZ(&T2a,&T2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }




        if(IFW(&ZTI,Ia,Ib,&I))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                Ia=msg.x;
                Ib=msg.y;
                Sleep(50);
                cleardevice();
                putimage(0, 0, MAP);
                putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                putimage_transparent(NULL, L3, L3a,L3b, BLACK);
                putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                putimage_transparent(NULL, YL, 1030,10, BLACK);
                putimage_transparent(NULL, I, Ia,Ib, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(Ia,Ib,ZTI,a,&Im,&In))         //判断是否可以放入的函数
                    {
                        WZXZ(&Ia,&Ib);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win4(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        //SZDY(a);              //发布时注释
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
        End=clock();
        Time=(End-Start)/CLOCKS_PER_SEC;
        sprintf(tt, "%3d", Time);
        sprintf(cc, "%2d", click);

    }
}

void Win4(int t,int c)
{
    setinitmode(0);
    initgraph(1100, 600);
    int CJ=560-t-c*3;
    PIMAGE YL = newimage();
    PIMAGE Win = newimage();
    setfont(50, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    char tt[4],cc[4],cj[4];
    if(lock<4)
    {
         lock++;
    WJwrite(lock);
    }
  paihangW(CJ,4);
    sprintf(tt, "%d", t);
    sprintf(cc, "%d", c);
    sprintf(cj, "%d", CJ);
    getimage(Win, "Images\\Win\\4.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Win);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(560, 295, tt);
        outtextxy(560, 350, cc);
        outtextxy(560, 405, cj);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            BLBL();       //下一关
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void BLBL(void)
{

    int L1a=150,L1b=20,L2a=150,L2b=200,I1a=100,I1b=380,I3a=100,I3b=460,T1a=850,T1b=20,T2a=850,T2b=230,T3a=850,T3b=420,I2a=100,I2b=540;
    int ZTL1=0,ZTL2=0,ZTI1=0,ZTI2=0,ZTI3=0,ZTT1=0,ZTT2=0,ZTT3=0;
    int Lm1=-1,Ln1=-1,Lm2=-1,Ln2=-1,Im3=-1,In3=-1,Im1=-1,In1=-1,Tm1=-1,Tn1=-1,Tm2=-1,Tn2=-1,Tm3=-1,Tn3=-1,Im2=-1,In2=-1;
    char cc[4],tt[4];
    int click=0,Time;
    GK=5;
    setfont(50, 0, "黑体");       //正式发布时解除注释
    setcolor(WHITE);
    setfontbkcolor(EGERGB(239, 16, 99));
    clock_t Start,End;
    int a[8][8]= {{1,1,1,1,1,1,1,1},{1,0,0,0,0,1,1,1},{1,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,1},{1,0,0,1,0,0,1,1},{1,0,0,0,0,0,1,1},{1,1,0,0,0,0,1,1},{1,1,0,0,0,0,1,1}};
    setinitmode(0);
    initgraph(1100, 600);
    Start=clock();
    PIMAGE MAP = newimage();
    getimage(MAP, "Images\\Map\\BLBL.png");
    PIMAGE L1 = newimage();
    getimage(L1, "Images\\Ys\\0.png");
    PIMAGE L2 = newimage();
    getimage(L2, "Images\\Ys\\0.png");
    PIMAGE I1 = newimage();
    getimage(I1, "Images\\Ys\\8.png");
     PIMAGE I2 = newimage();
    getimage(I2, "Images\\Ys\\8.png");
    PIMAGE I3 = newimage();
    getimage(I3, "Images\\Ys\\8.png");
    PIMAGE T1 = newimage();
    getimage(T1, "Images\\Ys\\4.png");
    PIMAGE T2 = newimage();
    getimage(T2, "Images\\Ys\\4.png");
    PIMAGE T3 = newimage();
    getimage(T3, "Images\\Ys\\4.png");
    PIMAGE YL = newimage();
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(520, 25, tt);
        outtextxy(540, 525, cc);
        if(LFW(&ZTL1,L1a,L1b,&L1))
        {
            Sleep(100);
            click++;
            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }

                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(50);
                    if(Lpd(L1a,L1b,ZTL1,a,&Lm1,&Ln1))         //判断是否可以放入的函数
                    {
                        WZXZ(&L1a,&L1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click); //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
                L1a=msg.x;
                L1b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
            }



        }
        if(LFW(&ZTL2,L2a,L2b,&L2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                L2a=msg.x;
                L2b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Lpd(L2a,L2b,ZTL2,a,&Lm2,&Ln2))         //判断是否可以放入的函数
                    {
                        WZXZ(&L2a,&L2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }






        }
        if(IFW(&ZTI3,I3a,I3b,&I3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                I3a=msg.x;
                I3b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(I3a,I3b,ZTI3,a,&Im3,&In3))         //判断是否可以放入的函数
                    {
                        WZXZ(&I3a,&I3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }
          if(TFW(&ZTT1,T1a,T1b,&T1))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T1a=msg.x;
                T1b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T1a,T1b,ZTT1,a,&Tm1,&Tn1))         //判断是否可以放入的函数
                    {
                        WZXZ(&T1a,&T1b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }

        }


           if(TFW(&ZTT3,T3a,T3b,&T3))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T3a=msg.x;
                T3b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T3a,T3b,ZTT3,a,&Tm3,&Tn3))         //判断是否可以放入的函数
                    {
                        WZXZ(&T3a,&T3b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }


           if(TFW(&ZTT2,T2a,T2b,&T2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                T2a=msg.x;
                T2b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Tpd(T2a,T2b,ZTT2,a,&Tm2,&Tn2))         //判断是否可以放入的函数
                    {
                        WZXZ(&T2a,&T2b);
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);   //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }




        }


        if(IFW(&ZTI1,I1a,I1b,&I1))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                I1a=msg.x;
                I1b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(I1a,I1b,ZTI1,a,&Im1,&In1))         //判断是否可以放入的函数
                    {
                        WZXZ(&I1a,&I1b);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }



        if(IFW(&ZTI2,I2a,I2b,&I2))
        {
            Sleep(100);
            click++;

            for ( ; is_run(); delay_fps(60))
            {
                while (mousemsg())
                {
                    msg = getmouse();
                }
                I2a=msg.x;
                I2b=msg.y;
                Sleep(50);
                cleardevice();
        putimage(0, 0, MAP);
        putimage_transparent(NULL, L1, L1a,L1b, BLACK);
        putimage_transparent(NULL, L2, L2a,L2b, BLACK);
        putimage_transparent(NULL, I1, I1a,I1b, BLACK);
        putimage_transparent(NULL, I3, I3a,I3b, BLACK);
        putimage_transparent(NULL, T1, T1a,T1b, BLACK);
        putimage_transparent(NULL, T2, T2a,T2b, BLACK);
        putimage_transparent(NULL, T3, T3a,T3b, BLACK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        putimage_transparent(NULL, I2, I2a,I2b, BLACK);
                End=clock();
                Time=(End-Start)/CLOCKS_PER_SEC;
                sprintf(tt, "%3d", Time);
                sprintf(cc, "%2d", click);
                outtextxy(520, 25, tt);
                outtextxy(540, 525, cc);
                if((int)msg.is_left()&&(int)msg.is_up())
                {
                    Sleep(100);
                    if(Ipd(I2a,I2b,ZTI2,a,&Im2,&In2))         //判断是否可以放入的函数
                    {
                        WZXZ(&I2a,&I2b);
                        //放入成功进行提示
                        if(SZPD(a))  //进行函数的放入操作
                        {
                            Sleep(500);
                            Win5(Time,click);    //写入放入下一关
                        }
                        else  break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        //SZDY(a);              //发布时注释
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
        End=clock();
        Time=(End-Start)/CLOCKS_PER_SEC;
        sprintf(tt, "%3d", Time);
        sprintf(cc, "%2d", click);

    }
}

void Win5(int t,int c)
{
    setinitmode(0);
    initgraph(1100, 600);
    int CJ=560-t-c*3;
    PIMAGE YL = newimage();
    PIMAGE Win = newimage();
    setfont(50, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    char tt[4],cc[4],cj[4];
    /*
    if(lock<5)
    {
         lock++;
    WJwrite(lock);
    }
  */
  paihangW(CJ,5);
    sprintf(tt, "%d", t);
    sprintf(cc, "%d", c);
    sprintf(cj, "%d", CJ);
    getimage(Win, "Images\\Win\\5.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, Win);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
        outtextxy(560, 295, tt);
        outtextxy(560, 350, cc);
        outtextxy(560, 405, cj);
        if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xuanze();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            closegraph();
            Xx();       //下一关
        }

        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}

void WZXZ(int *x,int *y)
{
     int m,n;
    if((*x-340)/50>=0&&(*x-340)/50<8&&(*y-90)/50>=0&&(*y-90)/50<8&&(int)msg.is_up())
    {
        n=(*x-340)/50;
        m=(*y-90)/50;
    }
    *x=350+n*50;
    *y=100+m*50;
    return ;
}

void paihangW(int score,int GK)
{
    FILE *fp;
    char CJ[20];
    char hh[2]="\n";
    sprintf(CJ,"%6d",score);
    if(GK==1)
    fp=fopen("Records\\record1.wzl","a+");
    if(GK==2)
    fp=fopen("Records\\record2.wzl","a+");
    if(GK==3)
    fp=fopen("Records\\record3.wzl","a+");
    if(GK==4)
    fp=fopen("Records\\record4.wzl","a+");
    if(GK==5)
    fp=fopen("Records\\record5.wzl","a+");
    if(GK==6)
    fp=fopen("Records\\record6.wzl","a+");
    fputs(username,fp);
    fputs(CJ,fp);
    fputs(hh,fp);
    fclose(fp);
}

int FXY(int x,int y)
{
      int m=0,n=0;
      n=(x-340)/50;
      m=(y-90)/50;
      if(1==GK)
      {
          if(1==n&&(4==m||3==m))
            return 1;
          else if(4==n&&m>1&&m<6)
          {
               return 1;
          }
             else if(2==n&&m>0&&m<6)
                {
               return 1;
          }
              else if(3==n&&m>0&&m<7)
                {
               return 1;
          }
               else if(5==n&&m==4)
                {
               return 1;
          }
          else return 0;
      }



       if(2==GK)
      {
          if(n==2&&(m==2||m==5||m==6||m==1||m==4))
          {
              return 1;
          }
          else if(n==3&&m>0&&m<7)
          {
              return 1;
          }
          else if(n==5&&m>0&&m<7)
          {
              return 1;
          }
          else if(n==4&&(m==1||m==2||m==5||m==6||m==3))
          {
              return 1;
          }

          else return 0;
      }


       if(3==GK)
      {
          if(n==2&&(m==1||m==5||m==6||m==2||m==7))
          {
              return 1;
          }
          else if(n==3&&m>0&&m<8)
          {
              return 1;
          }
          else if(n==4&&m>0&&m<8)
          {
              return 1;
          }
          else if(n==5&&(m==1||m==5||m==6||m==2||m==7))
          {
              return 1;
          }

          else return 0;
      }

            if(4==GK)
      {
          if(n==1&&m>0&&m<4)
          {
              return 1;
          }
          else if(n==2&&m>0&&m<5)
          {
              return 1;
          }
          else if(n==3&&(m==1||m==2||m==3||m==6||m==4||m==5))
          {
              return 1;
          }
          else if(n==4&&m>0&&m<7)
          {
              return 1;
          }
            else if(n==5&&m>1&&m<7)
          {
              return 1;
          }
          else if(n==6&&m>0&&m<6)
          {
              return 1;
          }
          else return 0;
      }

      if(5==GK)
      {
          if(n==0&&(m==3||m==2))
          {
              return 1;
          }
          else if(n==1&&m>0&&m<6)
          {
              return 1;
          }
          else if(n==2&&m>0&&m<8)
          {
              return 1;
          }
          else if(n==3&&(m==1||m==2||m==5||m==6||m==7))
          {
              return 1;
          }
          else if(n==4&&m>0&&m<8)
          {
              return 1;
          }
            else if(n==5&&m>1&&m<8)
          {
              return 1;
          }
           else if(n==6&&m==3)
          {
              return 1;
          }
          else return 0;
      }


}


void PHB(void)
{
    setinitmode(0);
    initgraph(1100, 600);
    PIMAGE YL = newimage();
    PIMAGE BK = newimage();
    PIMAGE FH = newimage();
    //设置存取变量
    char auser1[30]="";char auser2[30]="";char auser3[30]="";char auser4[30]="";char auser5[30]="";char auser6[30]="";
    char buser1[30]="";char buser2[30]="";char buser3[30]="";char buser4[30]="";char buser5[30]="";char buser6[30]="";
    char cuser1[30]="";char  cuser2[30]="";char cuser3[30]="";char cuser4[30]="";char cuser5[30]="";char cuser6[30]="";
    char duser1[30]="";char duser2[30]="";char duser3[30]="";char duser4[30]="";char duser5[30]="";char duser6[30]="";
    char euser1[30]="";char euser2[30]="";char euser3[30]="";char euser4[30]="";char euser5[30]="";char euser6[30]="";
    char fuser1[30]="";char  fuser2[30]="";char fuser3[30]="";char fuser4[30]="";char fuser5[30]="";char fuser6[30]="";
    char D1G[10]="拔 刀 斋";char D2G[10]="苍白末世";char D3G[10]="花 柳 斋";char D4G[10]="首席精英";char D5G[10]="哔哩哔哩";char D6G[10]=" 逗 圈 ";
    FILE *fp1= fopen("Records\\record1.wzl","r");
fgets(auser1,30,fp1);
fgets(auser2,30,fp1);
fgets(auser3,30,fp1);
fgets(auser4,30,fp1);
fgets(auser5,30,fp1);
fgets(auser6,30,fp1);
fclose(fp1);
//读取第二关
FILE *fp2= fopen("Records\\record2.wzl","r");
fgets(buser1,30,fp2);
fgets(buser2,30,fp2);
fgets(buser3,30,fp2);
fgets(buser4,30,fp2);
fgets(buser5,30,fp2);
fgets(buser6,30,fp2);
fclose(fp2);
//读取第三关
FILE *fp3= fopen("Records\\record3.wzl","r");
fgets(cuser1,30,fp3);
fgets(cuser2,30,fp3);
fgets(cuser3,30,fp3);
fgets(cuser4,30,fp3);
fgets(cuser5,30,fp3);
fgets(cuser6,30,fp3);
fclose(fp2);

//读取第四关
FILE *fp4= fopen("Records\\record4.wzl","r");
fgets(duser1,30,fp4);
fgets(duser2,30,fp4);
fgets(duser3,30,fp4);
fgets(duser4,30,fp4);
fgets(duser5,30,fp4);
fgets(duser6,30,fp4);
fclose(fp4);
//读取第五关
FILE *fp5= fopen("Records\\record5.wzl","r");
fgets(euser1,30,fp5);
fgets(euser2,30,fp5);
fgets(euser3,30,fp5);
fgets(euser4,30,fp5);
fgets(euser5,30,fp5);
fgets(euser6,30,fp5);
fclose(fp5);
//读取第六关
FILE *fp6= fopen("Records\\record6.wzl","r");
fgets(fuser1,30,fp6);
fgets(fuser2,30,fp6);
fgets(fuser3,30,fp6);
fgets(fuser4,30,fp6);
fgets(fuser5,30,fp6);
fgets(fuser6,30,fp6);
fclose(fp6);






    getimage(FH, "Images\\Ph\\FH.png");
    setfont(22, 0, "黑体");
    setcolor(RED);
    setbkmode(TRANSPARENT);
    getimage(BK, "Images\\Ph\\PHB.png");
    if(YLb==0)
    {
        getimage(YL, "Images\\Nb\\naba.png");
    }
    else  if(YLb==1)
    {
        getimage(YL, "Images\\Nb\\laba.png");
    }
    for ( ; is_run(); delay_fps(60))
    {

        while (mousemsg())
        {
            msg = getmouse();
        }
        putimage(0, 0, BK);
        putimage_transparent(NULL, YL, 1030,10, BLACK);
           if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50)
        {
            putimage(0, 0, FH);
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600)
        {
            putimage(1000, 550, FH);
        }
        if(msg.x>=100&&msg.x<=400&&msg.y>=100&&msg.y<=570)
        {
            //第四关信息打印
            setfont(40, 0, "黑体");
            outtextxy(175,150,D4G);
            setfont(22, 0, "黑体");
            outtextxy(150,230,duser1);
outtextxy(150,280,duser2);
outtextxy(150,330,duser3);
outtextxy(150,380,duser4);
outtextxy(150,430,duser5);
outtextxy(150,480,duser6);

        }
        else
        {
            //第一关信息打印
             setfont(40, 0, "黑体");
            outtextxy(175,150,D1G);
            setfont(22, 0, "黑体");
            outtextxy(150,230,auser1);
outtextxy(150,280,auser2);
outtextxy(150,330,auser3);
outtextxy(150,380,auser4);
outtextxy(150,430,auser5);
outtextxy(150,480,auser6);

        }
         if(msg.x>=400&&msg.x<=700&&msg.y>=100&&msg.y<=570)
        {
             //第五关信息打印
              setfont(40, 0, "黑体");
            outtextxy(465,150,D5G);
            setfont(22, 0, "黑体");
             outtextxy(450,230,euser1);
outtextxy(450,280,euser2);
outtextxy(450,330,euser3);
outtextxy(450,380,euser4);
outtextxy(450,430,euser5);
outtextxy(450,480,euser6);


        }
        else
        {
            //第二关信息打印
            setfont(40, 0, "黑体");
            outtextxy(465,150,D2G);
            setfont(22, 0, "黑体");
            outtextxy(450,230,buser1);
outtextxy(450,280,buser2);
outtextxy(450,330,buser3);
outtextxy(450,380,buser4);
outtextxy(450,430,buser5);
outtextxy(450,480,buser6);

        }
         if(msg.x>=700&&msg.x<=1000&&msg.y>=100&&msg.y<=570)
        {
            //第六关信息打印
            setfont(40, 0, "黑体");
            outtextxy(775,150,D6G);
            setfont(22, 0, "黑体");
            outtextxy(750,230,fuser1);
outtextxy(750,280,fuser2);
outtextxy(750,330,fuser3);
outtextxy(750,380,fuser4);
outtextxy(750,430,fuser5);
outtextxy(750,480,fuser6);

        }
        else
        {
            //第三关信息打印
            setfont(40, 0, "黑体");
            outtextxy(765,150,D3G);
            setfont(22, 0, "黑体");
            outtextxy(750,230,cuser1);
outtextxy(750,280,cuser2);
outtextxy(750,330,cuser3);
outtextxy(750,380,cuser4);
outtextxy(750,430,cuser5);
outtextxy(750,480,cuser6);


        }
         if(msg.x>=0&&msg.x<=100&&msg.y>=0&&msg.y<=50&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(200);
            while (mousemsg())
        {
            msg = getmouse();
        }
            closegraph();
            CD();
        }
        if(msg.x>=1000&&msg.x<=1100&&msg.y>=550&&msg.y<=600&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(100);
            while (mousemsg())
        {
            msg = getmouse();
        }
            closegraph();
            CD();       //下一关
        }
        if(msg.x>=1030&&msg.x<=1070&&msg.y>=10&&msg.y<=60&&(int)msg.is_left()&&(int)msg.is_down())
        {
            Sleep(150);
            if(YLb==0)
            {
                getimage(YL, "Images\\Nb\\laba.png");
                PlaySound(TEXT("Sounds\\back.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=1;
            }
            else if(YLb==1)
            {
                getimage(YL, "Images\\Nb\\naba.png");
                PlaySound(NULL,NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                YLb=0;
            }
        }
    }
}











//坦克大战


void map1(int (*a)[500],int (*d)[50])
{
    int i;
    int j;
    for(i=0;i<120;i+=15)
    {
        a[i][105]=1;
    }

    for(i=0,j=210;i<=105;i+=15,j-=15)
    {

            a[i][j]=1;

    }

    for(i=120,j=90;i<=330;i+=15,j+=15)
    {

            a[i][j]=1;

    }
     for(i=330,j=300;i>=255;i-=15,j+=15)
    {

            a[i][j]=1;

    }
    for(i=0;i<255;i+=15)
    {

            a[i][375]=1;
    }
    for(i=120,j=105;i<=315;i+=15,j+=15)
    {

            a[i][j]=2;
    }
 for(i=150,j=105;i<=625;i+=15)
    {

            a[i][j]=2;
    }
for(i=210,j=165;i<=625;i+=15)
    {

            a[i][j]=10;
    }
    for(i=255,j=210;i<=625;i+=15)
    {

            a[i][j]=2;
    }
    for(i=315,j=270;i<=625;i+=15)
    {

            a[i][j]=3;
    }
    for(i=300,j=345;i<=625;i+=15)
    {

            a[i][j]=1;
    }
    for(i=180,j=0;j<105;j+=15)
    {

            a[i][j]=1;
    }
    for(i=255,j=0;j<105;j+=15)
    {

            a[i][j]=1;
    }
    for(i=375,j=0;j<105;j+=15)
    {

            a[i][j]=1;
    }
    for(i=435,j=0;j<105;j+=15)
    {

            a[i][j]=1;
    }
    for(i=495,j=0;j<105;j+=15)
    {

            a[i][j]=1;
    }
    for(i=315,j=120;j<165;j+=15)
    {

            a[i][j]=1;
    }
    for(i=405,j=180;j<210;j+=15)
    {

            a[i][j]=1;
    }
    for(i=345,j=225;j<260;j+=15)
    {

            a[i][j]=1;
    }
    for(i=510,j=180;j<210;j+=15)
    {

            a[i][j]=1;
    }
    for(i=585,j=225;j<270;j+=15)
    {

            a[i][j]=1;
    }
    for(i=465,j=285;j<=330;j+=15)
    {

            a[i][j]=1;
    }
    for(i=390,j=345;j<=465;j+=15)
    {

            a[i][j]=3;
    }
    for(i=360,j=345;j<=465;j+=15)
    {

            a[i][j]=3;
    }
    for(i=555,j=345;j<=465;j+=15)
    {

            a[i][j]=3;
    }
    for(i=0;i<8;i++)
    {
        d[i][7]=1;
    }

    for(i=0,j=14;i<=7;i++,j--)
    {

            d[i][j]=1;

    }
      for(i=8,j=6;i<=22;i++,j++)
    {

            d[i][j]=1;

    }
     for(i=22,j=20;i>=17;i--,j++)
    {

            d[i][j]=1;

    }
    for(i=0;i<17;i++)
    {

            d[i][25]=1;
    }
    for(i=8,j=7;i<=21;i++,j++)
    {

            d[i][j]=2;
    }
 for(i=10,j=7;i<=41;i++)
    {

            d[i][j]=2;
    }
for(i=14,j=11;i<=41;i++)
    {

            d[i][j]=10;
    }
    for(i=17,j=14;i<=41;i++)
    {

            d[i][j]=2;
    }
    for(i=21,j=18;i<=41;i++)
    {

            d[i][j]=3;
    }
    for(i=20,j=23;i<=41;i++)
    {

            d[i][j]=1;
    }
    for(i=12,j=0;j<7;j++)
    {

            d[i][j]=1;
    }
    for(i=17,j=0;j<7;j++)
    {

            d[i][j]=1;
    }
    for(i=25,j=0;j<7;j++)
    {

            d[i][j]=1;
    }
    for(i=29,j=0;j<7;j++)
    {

            d[i][j]=1;
    }
    for(i=33,j=0;j<7;j++)
    {

            d[i][j]=1;
    }
    for(i=21,j=8;j<11;j++)
    {

            d[i][j]=1;
    }
    for(i=27,j=12;j<14;j++)
    {

            d[i][j]=1;
    }
    for(i=23,j=15;j<=17;j++)
    {

            d[i][j]=1;
    }
    for(i=34,j=12;j<14;j++)
    {

            d[i][j]=1;
    }
    for(i=39,j=15;j<18;j++)
    {

            d[i][j]=1;
    }
    for(i=31,j=19;j<=22;j++)
    {

            d[i][j]=1;
    }
    for(i=26,j=23;j<=31;j++)
    {

            d[i][j]=3;
    }
    for(i=24,j=23;j<=31;j++)
    {

            d[i][j]=3;
    }
    for(i=37,j=23;j<=31;j++)
    {

            d[i][j]=3;
    }
}

void zd(int (*d)[50],int (*c)[50],int (*f)[50],int (*w)[50],int (*p)[50])
{
    int i,j;
        for(i=0;i<43;i++)
    {
        for(j=0;j<32;j++)
        {

            if(c[i][j]==1&&w[i][j]==0)
            {
                 if(f[i][j]==1)
                 {
                     if(d[i][j-1]>0)
                     {
                         d[i][j-1]--;
                         if(d[i][j-1]==0&&p[i][j-1]==1)
                            {
                                B=1;
                                S++;
                            }
                         if(d[i][j-1]==0)
                         {
                             setfillcolor(BLACK);
                             bar(i*15,(j-1)*15,i*15+15,(j-1)*15+15);
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                         else
                         {
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                     }
                     else
                     {
                         if(d[i][j-1]==0&&p[i][j-1]==1)
                            {
                                B=1;
                                S++;
                            }
                         setcolor(EGERGB(0,0,0));
                         setfillcolor(BLACK);
                         fillellipse(i*15,j*15, 10, 10);
                         c[i][j]=0;
                         c[i][j-1]=1;
                         f[i][j-1]=1;
                         f[i][j]=0;
                         setfillcolor(EGERGB(255, 255, 255));
                         fillellipse(i*15,(j-1)*15, 10, 10);

                     }
                    w[i][j-1]=1;
                 }
                 else if(f[i][j]==2)
                 {
                     if(d[i-1][j]>0)
                     {
                         d[i-1][j]--;
                         if(d[i-1][j]==0&&p[i-1][j]==1)
                            {
                                B=1;
                                S++;
                            }
                         if(d[i-1][j]==0)
                         {
                             setfillcolor(BLACK);
                             bar((i-1)*15,j*15,(i-1)*15+15,j*15+15);
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                         else
                         {
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                     }
                     else
                     {
                         if(d[i-1][j]==0&&p[i-1][j]==1)
                            {
                                B=1;
                                S++;
                            }
                         setcolor(EGERGB(0,0,0));
                         setfillcolor(BLACK);
                         fillellipse(i*15,j*15, 10, 10);
                         c[i][j]=0;
                         c[i-1][j]=1;
                         f[i-1][j]=2;
                         f[i][j]=0;
                         setfillcolor(EGERGB(255, 255, 255));
                         fillellipse((i-1)*15,j*15, 10, 10);

                     }
                      w[i-1][j]=1;
                 }
                 else if(f[i][j]==3)
                 {
                     if(d[i][j+1]>0)
                     {
                         d[i][j+1]--;
                         if(d[i][j+1]==0&&p[i][j+1]==1)
                            {
                                B=1;
                                S++;
                            }
                         if(d[i][j+1]==0)
                         {
                             setfillcolor(BLACK);
                             bar(i*15,(j+1)*15,i*15+15,(j+1)*15+15);
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                         else
                         {
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                     }
                     else
                     {
                         if(d[i][j+1]==0&&p[i][j+1]==1)
                            {
                                B=1;
                                S++;
                            }
                         setcolor(EGERGB(0,0,0));
                         setfillcolor(BLACK);
                         fillellipse(i*15,j*15, 10, 10);
                         c[i][j]=0;
                         c[i][j+1]=1;
                         f[i][j+1]=3;
                         f[i][j]=0;
                         setfillcolor(EGERGB(255, 255, 255));
                         fillellipse(i*15,(j+1)*15, 10, 10);

                     }
                      w[i][j+1]=1;
                 }
                 else if(f[i][j]==4)
                 {
                     if(d[i+1][j]>0)
                     {
                         d[i+1][j]--;
                         if(d[i+1][j]==0&&p[i+1][j]==1)
                            {
                                B=1;
                                S++;
                            }
                         if(d[i+1][j]==0)
                         {
                             setfillcolor(BLACK);
                             bar((i+1)*15,j*15,(i+1)*15+15,j*15+15);
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                         else
                         {
                             setcolor(BLACK);
                             setfillcolor(BLACK);
                             fillellipse(i*15, j*15, 10, 10);
                             c[i][j]=0;
                             f[i][j]=0;
                         }
                     }
                     else
                     {
                         if(d[i+1][j]==0&&p[i+1][j]==1)
                            {
                                B=1;
                                S++;
                            }
                         setcolor(EGERGB(0,0,0));
                         setfillcolor(BLACK);
                         fillellipse(i*15,j*15, 10, 10);
                         c[i][j]=0;
                         c[i+1][j]=1;

                         f[i+1][j]=4;
                         f[i][j]=0;
                         setfillcolor(EGERGB(255, 255, 255));
                         fillellipse((i+1)*15,j*15, 10, 10);

                     }
                      w[i+1][j]=1;
                 }

            }

        }

    }

}
void wall(int (*d)[50])
{
    int i;
    for(i=0;i<43;i++)
    {
        d[i][0]=1000;
    }
    for(i=0;i<32;++i)
    {
        d[0][i]=1000;
    }
    for(i=0;i<43;i++)
    {
        d[i][32]=1000;
    }
    for(i=0;i<32;i++)
    {
        d[42][i]=1000;
    }
}
void emm(int (*d)[50],int (*p)[50],int a,int (*w)[50],int (*c)[50],int (*f)[50])
{
    int i,j;

    for(i=0;i<43;++i)
    {
        for(j=0;j<32;++j)
        {

            if(d[i][j]>0&&p[i][j]==1&&w[i][j]==0)
       {

        if(a==1)
        {
            if(d[i][j-2]==0&&d[i][j-1]==0)
            {
                 p[i][j]=0;
                 p[i][j-1]=1;
                d[i][j-1]=d[i][j];
                d[i][j]=0;
                setcolor(BLACK);
        setfillcolor(BLACK);
        fillellipse(i*15,j*15,15,15);
                 setcolor(EGERGB(25,229,25));
        setfillcolor(EGERGB(175,19,185));
        fillellipse(i*15,(j-1)*15,15,15);
            w[i][j-1]=1;
            c[i][j-2]=1;
            f[i][j-2]=1;
            }
        }
        else if(a==2)
        {
            if(d[i][j+2]==0&&d[i][j+1]==0)
            {

                p[i][j]=0;
                 p[i][j+1]=1;
                d[i][j+1]=d[i][j];
                d[i][j]=0;
                setcolor(BLACK);
        setfillcolor(BLACK);
        fillellipse(i*15,j*15,15,15);
                 setcolor(EGERGB(25,229,25));
        setfillcolor(EGERGB(175,19,185));
        fillellipse(i*15,(j+1)*15,15,15);
               w[i][j+1]=1;
               c[i][j+2]=1;
            f[i][j+2]=3;
            }
        }
        else if(a==3)
        {
            if(d[i-2][j]==0&&d[i-1][j]==0)
            {

                p[i][j]=0;
                 p[i-1][j]=1;
                d[i-1][j]=d[i][j];
                d[i][j]=0;
                setcolor(BLACK);
        setfillcolor(BLACK);
        fillellipse(i*15,j*15,15,15);
                 setcolor(EGERGB(25,229,25));
        setfillcolor(EGERGB(175,19,185));
        fillellipse((i-1)*15,j*15,15,15);
             w[i-1][j]=1;
             c[i-2][j]=1;
            f[i-2][j]=2;
            }
        }
        else if(a==4)
        {
            if(d[i+2][j]==0&&d[i+1][j]==0)
            {

                p[i][j]=0;
                 p[i+1][j]=1;
                d[i+1][j]=d[i][j];
                d[i][j]=0;
                setcolor(BLACK);
        setfillcolor(BLACK);
        fillellipse(i*15,j*15,15,15);
                 setcolor(EGERGB(25,229,25));
        setfillcolor(EGERGB(175,19,185));
        fillellipse((i+1)*15,j*15,15,15);
        w[i+1][j]=1;
        c[i+2][j]=1;
            f[i+2][j]=4;
            }
        }

       }
       else if(d[i][j]==0&&p[i][j]==1)
       {

           p[i][j]=0;
       }
        }
    }
}
void bem(int (*d)[50],int i,int j)
{
                if(i>1&&j>1)
                {
                    setfillcolor(BLACK);
                bar((i-1)*15,(j-1)*15,(i+2)*15,(j+2)*15);
                }
        d[i][j]=0;
        d[i+1][j]=0;
        d[i+2][j]=0;
        d[i+3][j]=0;
        d[i][j+1]=0;
        d[i][j+2]=0;
        d[i][j+3]=0;
        d[i+1][j+1]=0;
        d[i+1][j+2]=0;
        d[i+1][j+3]=0;
        d[i+2][j+1]=0;
        d[i+2][j+2]=0;
        d[i+2][j+3]=0;
        d[i+3][j+1]=0;
        d[i+3][j+2]=0;
        d[i+3][j+3]=0;
        setfillcolor(EGERGB(185,19,89));
                bar(i*15,j*15,(i+3)*15,(j+3)*15);
}
void bem1(int (*d)[50],int i,int j)
{

                if(i<33&&j>1)
                {
                    setfillcolor(BLACK);
                bar((i+1)*15,(j-1)*15,(i+4)*15,(j+2)*15);
                }
        d[i][j]=0;
        d[i+1][j]=0;
        d[i+2][j]=0;
        d[i+3][j]=0;
        d[i][j+1]=0;
        d[i][j+2]=0;
        d[i][j+3]=0;
        d[i+1][j+1]=0;
        d[i+1][j+2]=0;
        d[i+1][j+3]=0;
        d[i+2][j+1]=0;
        d[i+2][j+2]=0;
        d[i+2][j+3]=0;
        d[i+3][j+1]=0;
        d[i+3][j+2]=0;
        d[i+3][j+3]=0;
        setfillcolor(EGERGB(185,19,89));
                bar(i*15,j*15,(i+3)*15,(j+3)*15);
}
void fra(void)
{
    int i,j=0;

    for(i=645,j=0;i<=975;i+=15)
    {
        setfillcolor(EGERGB(12,196,8));
                bar(i,j,i+15,j+15);
    }
    for(i=645,j=0;j<=480;j+=15)
    {
        setfillcolor(EGERGB(12,196,8));
                bar(i,j,i+15,j+15);
    }
    for(i=645,j=480;i<=975;i+=15)
    {
        setfillcolor(EGERGB(12,196,8));
                bar(i,j,i+15,j+15);
    }
    for(i=975,j=0;j<=480;j+=15)
    {
        setfillcolor(EGERGB(12,196,8));
                bar(i,j,i+15,j+15);
    }


    for(i=720,j=45;i<=900;i+=15)
    {
        setfillcolor(EGERGB(255,238,122));
                bar(i,j,i+15,j+15);
    }
    for(i=720,j=0;j<=480;j+=15)
    {
        setfillcolor(EGERGB(255,238,122));
                bar(i,j,i+15,j+15);
    }
    for(i=720,j=480;i<=900;i+=15)
    {
        setfillcolor(EGERGB(255,238,122));
                bar(i,j,i+15,j+15);
    }
    for(i=900,j=0;j<=480;j+=15)
    {
        setfillcolor(EGERGB(255,238,122));
                bar(i,j,i+15,j+15);
    }


}
int tankmain(void)
{

    setinitmode(0);
    int c[50][50];
    int f[50][50];
    initgraph(1100,600);
    int a[700][500],i,j;
    int bi=1;

    int d[50][50];

    int w[50][50];
    int p[50][50];
    memset(a,0,sizeof(a));
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));
    memset(f,0,sizeof(f));
    memset(p,0,sizeof(p));
    map1(a,d);
    me role1;
    role1.bt=10;
    role1.x=435;
    role1.y=410;

    d[role1.x/15][role1.y/15]=6;
    role1.barrelx=435;
    role1.barrely=410;
    role1.r=10;
    int pt[] = {
        120, 120,
        0, 240,
        0, 375,
        255,  375,
        315,  315,
    };
    d[1][30]=15;
    p[1][30]=1;

    char b;

    PIMAGE img=newimage();
    getimage(img,"Images\\tank\\YZBESYPSDKOLLZSB.jpg");
     PIMAGE Back=newimage();
    getimage(Back,"Images\\tank\\NSU.png");
    putimage(0,0,Back);
    putimage(405,420,60,60,img,0,0,57,57);
    PIMAGE img1=newimage();
    getimage(img1,"Images\\tank\\1609465583_1365917126.jpg");
    putimage(570,420,60,60,img1,100,30,600,600);
    PIMAGE img2=newimage();
    getimage(img2,"Images\\tank\\1609465583_1365917126.jpg");
    putimage(570,0,60,60,img1,100,30,600,600);

    for(i=0;i<640;i+=15)
    {
        for(j=0;j<480;j+=15)
        {

            if(a[i][j]==1)
            {
                setfillcolor(EGERGB(131,100,81));
                bar(i,j,i+15,j+15);
            }
            else if(a[i][j]==2)
            {
                setfillcolor(EGERGB(133,233,133));
                bar(i,j,i+15,j+15);
            }
            else if(a[i][j]==3)
            {
                setfillcolor(EGERGB(230,255,255));
                bar(i,j,i+15,j+15);
            }
            else if(a[i][j]<=10&&a[i][j]>3)
            {
                setfillcolor(EGERGB(249,102,119));
                bar(i,j,i+15,j+15);
            }

        }

    }
    fra();
    setfillcolor(EGERGB(0x66, 0xcc,0xff));
    int py[] = {
        428,424,
        448,440,
        436,440,
        436,452,
        464,444,
        436,464,
        436,472,
        452,480,
        412,480,
        428,472,
        428,464,
        400,444,
        428,452,


    };

    wall(d);

    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10=0,s11=1,s12=1,s13=33,s14=1;

    while(1)
    {
        zd(d,c,f,w,p);
        setfillcolor(EGERGB(0x0, 0x80, 0x80));
	bar(735, 200, 900, 260);
	setcolor(EGERGB(0x0, 0xFF, 0x0));
	setfontbkcolor(EGERGB(0x80, 0x00, 0x80));
	setfont(20, 0, "宋体");
	outtextxy(735, 200, "Score:");
    setbkmode(TRANSPARENT);
    sprintf(str,"%d",S*100);
    outtextxy(735, 220, str);
        srand(time(0));
   fillpoly(13, py);
        s10++;

        if(B==1)
            {

                bem(d,s11,s12);
                bem1(d,s13,s14);
                s13--;
                s14++;
                s11++;
                s12++;
                if(s11>28)
                {

                    setfillcolor(BLACK);
                bar((s11-1)*15,(s12-1)*15,(s11+2)*15,(s12+2)*15);
                    s11=1;
                    s12=1;


                }
                if(s14>28)
                {

                    setfillcolor(BLACK);
                bar((s13+1)*15,(s14-1)*15,(s13+4)*15,(s14+2)*15);
                    s13=33;
                    s14=1;
                    B=0;
                    memset(p,0,sizeof(p));
                while(1)
                {
                    i=rand()%30;
                    j=rand()%40;
                    if(d[i][j]==0)
                    {
                        d[i][j]=15;
                        p[i][j]=1;
                        break;
                    }
                }
                }

            }

        memset(w,0,sizeof(w));
        if(s10==5)
        {
             s9=rand()%4+1;
            emm(d,p,s9,w,c,f);
            s10=0;
        memset(w,0,sizeof(w));
        }
///////////////////////////////////////////////////////////////
if(d[role1.x/15][role1.y/15]==0)
        {
            break;
        }


        setcolor(EGERGB(25,229,25));
        setfillcolor(EGERGB(28,198,6));
        fillellipse(role1.x,role1.y,15,10);
        setfillcolor(EGERGB(0x66,0xcc,0xff));
        fillpoly(5, pt);

        if ( kbhit() )
            {
                b = getch();
            s1=role1.x/15;
        s2=role1.y/15;
        s3=(role1.y-15)/15;
        s4=(role1.x-20)/15;
        s5=(role1.y+15)/15;
        s6=(role1.x+15)/15;
        s7=role1.barrelx/15;
        s8=role1.barrely/15;
        if(b=='8'&&d[s1][s3]==0)
        {

            setcolor(EGERGB(0,0,0));
            setfillcolor(BLACK);
            fillellipse(role1.x, role1.y, 15, 10);
 d[role1.x/15][(role1.y-5)/15]=d[role1.x/15][role1.y/15];
 if((role1.y/15)!=((role1.y-5)/15))
 d[role1.x/15][role1.y/15]=0;
            D=1;
            role1.y-=5;
            role1.barrelx=role1.x;
            role1.barrely=role1.y;
            setfillcolor(EGERGB(28,198,6));
        fillellipse(role1.x,role1.y,15,10);

        }
        else if(b=='4'&&d[s4][s2]==0)
        {
            setcolor(EGERGB(0,0,0));
            setfillcolor(BLACK);
            fillellipse(role1.x, role1.y, 15, 10);
            d[(role1.x-5)/15][role1.y/15]=d[role1.x/15][role1.y/15];
 if((role1.x/15)!=((role1.x-5)/15))
 d[role1.x/15][role1.y/15]=0;
            role1.x-=5;
            role1.barrelx=role1.x;
            role1.barrely=role1.y;
            D=2;
         setfillcolor(EGERGB(28,198,6));
        fillellipse(role1.x,role1.y,15,10);

        }
        else if(b=='5'&&d[s1][s5]==0)
        {
            setcolor(EGERGB(0,0,0));
            setfillcolor(BLACK);
            fillellipse(role1.x, role1.y, 15, 10);
            D=3;
            d[role1.x/15][(role1.y+5)/15]=d[role1.x/15][role1.y/15];
 if((role1.y/15)!=((role1.y+5)/15))
 d[role1.x/15][role1.y/15]=0;
            role1.y+=5;
            role1.barrelx=role1.x;
            role1.barrely=role1.y;
setfillcolor(EGERGB(28,198,6));
        fillellipse(role1.x,role1.y,15,10);
        }
        else if(b=='6'&&d[s6][s2]==0)
        {
            setcolor(EGERGB(0,0,0));
            setfillcolor(BLACK);
            fillellipse(role1.x, role1.y, 15, 10);
            d[(role1.x+5)/15][role1.y/15]=d[role1.x/15][role1.y/15];
            if((role1.x+5)/15!=role1.x/15)
            d[role1.x/15][role1.y/15]=0;
            D=4;
            role1.x+=5;
            role1.barrelx=role1.x;
            role1.barrely=role1.y;
            setfillcolor(EGERGB(28,198,6));
        fillellipse(role1.x,role1.y,15,10);
        }
        else if(b=='z')
        {
            c[s7][s8]=1;
            f[s7][s8]=D;
        setfillcolor(EGERGB(255, 255, 255));
        fillellipse(s7*15, s8*15, 10, 10);
        }
        else if(b=='o')
             {
             bi=0;
             break;
             }
            }

////        cleardevice();
     Sleep(100);
    }
    char syt[5];
    char www[20]="Score =  ",ioi[100]="O退出    Y重新开始游戏     T返回主界面";
    S=S*10;
    sprintf(syt,"%5d",S);
    if(bi)
    {
        paihangW(S,6);
    }
     bi++;
     PIMAGE imm=newimage();
    getimage(imm,"Images\\tank\\over.jpg");
    putimage(0,0,1100,600,imm,0,0,423,315);
    setfont(45,0,"黑体");
    setcolor(RED);
    outtextxy( 590,420,syt);
    outtextxy( 400,420,www);
        setfont(20,0,"黑体");
    setcolor(RED);
    outtextxy(350,550,ioi);
      char oo;
      oo=getch();
      if(oo=='y')
      {
          return 1 ;
      }
      else if(oo=='o')
      {
          return 2;
      }
      else if(oo=='t')
      {
          return 3;
      }
}

//inputbox_getline("input","input r:",str,20);





