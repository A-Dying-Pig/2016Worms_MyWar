#ifndef ITEM_H
#define ITEM_H

#include "global.h"


//// 全局变量

// 声明位图句柄
HBITMAP m_hBackgroundBmp;
HBITMAP m_hHeroBmp;
HBITMAP m_hGameStartButtonBmp;
HBITMAP hzhunxin;
HBITMAP hshoulei;
HBITMAP hrocket;
HBITMAP hredjiantou;
HBITMAP hbluejiantou;
HBITMAP hshouleiexplode;
HBITMAP hground;
HBITMAP hteam1hero;
HBITMAP hteam1throw;
HBITMAP hteam1launch;
HBITMAP hrocketexplode;
HBITMAP hrocketwalk;
HBITMAP hrocketpicture;
HBITMAP hshouleipicture;
HBITMAP hframe;
HBITMAP hred;
HBITMAP hgreen;
HBITMAP hFrame2;
HBITMAP h0;
HBITMAP h1;
HBITMAP h2;
HBITMAP hwind;
HBITMAP hwinddirection;
HBITMAP hwdstill;
HBITMAP happle,hgrape,hbanana,hjar;
HBITMAP hnumber;
HBITMAP htranseffect;
HBITMAP htransitem;
HBITMAP hmenu,hmenu2;
HBITMAP hsinglemission;
HBITMAP hbutton1,hbutton2,hbutton3,hbutton4;
HBITMAP hmap1,hmap2,hmap3,hmap4;
HBITMAP hback,hnext;
HBITMAP hhelp,hhelp2;
HBITMAP hhelppage;
HBITMAP end1,end2,end3,end4,end5,end6,end7,end8;
HBITMAP restart,resume,pause,hexit;
HBITMAP airstrike;

HBITMAP hplane;
HBITMAP hcrate;
HBITMAP hboom;
HBITMAP hversus;
HBITMAP mywar;

HBITMAP hversuspicture;
int planestate=0;
int boomstate=1,boomstate1=1;
int boompic=0;
int weapon4side=-1;
int weapon4num=-1;
int weapon4state=0;
int cratestate=0;
int cratetimes=0;
int target=-1;
int weapon4use=0;


HBITMAP sptBmp;
HDC hdcshrink;
// 声明英雄、建筑、地形、按钮

JianTou       redjiantou,bluejiantou;//红色箭头指向己方,蓝色箭头指向敌方
Hero		  team1[4];//自己人
Hero          team1imitate[4];//模拟己方人物碰撞获得地块信息
Hero          team2imitate[9];//模拟敌方人物碰撞获得地块信息

Hero		 team1walk[4],team2walk[9];
int			team1walkterrian[4]={},team2walkterrian[9]={};

Hero		  team2[9]; //敌人
Terrian       m_terrian[2560][6];
int           m_terriansecond[1920]={};
GameButton    m_gameStartButton,scene1,scene2,scene3,scene4,back,help,bpause,brestart,bexit,bresume,bnext,bversus;
GameButton    scene11,scene21,scene31,scene41,back1;
ShouLei       m_shoulei;
Rocket        m_rocket;
ZhunXin		  m_zhunxin;
FORCE         m_force;
ShouLeiExplode shouleiexplode;
RocketExplode  rocketexplode;

Rocket    plane,boom;
// 声明游戏状态
GameStatus gameStatus;
Item WD[3],food[6],crate;



int AIstart=0;
int AIstate=-1;
int AIattack=0;
int weaponr=0,team1r=0,X=0,Y=0;
float angler=0,vshould=0,forceshould=0;
int limitstate=0;
int AIdirection=-1;
int AImovestate=0;
int AImove,AIcount=0;
int AIzhunxinstate=0;

int hurtsoundstate=0;
int explodesoundstate=0;

int heroside=0;//用来指示控制两边。0表示控制己方，1表示控制敌方1。
int foodpicture[6];
int foodstate[6]={};//0表示未绘制，1表示绘制
int foodtimes=0;
int terrianstate[1920][6]={};   //1用来表示土地，-1用来表示岩浆,0表示未初始化
int team1terrian[4];//表示己方英雄站的位置对应的地形块名2
int team2terrian[9];//表示敌方英雄站的位置对应的地形块名2
int team1xietiao[4]={100,100,100,100};//己方血条
int team2xietiao[9]={100,100,100,100,100,100,100,100,100};//敌方血条
int team1xietiao1[4]={100,100,100,100};
int team2xietiao1[9]={100,100,100,100,100,100,100,100,100};//用来表示血量减少量
int team1blooddecreasetime[4]={},team2blooddecreasetime[9]={};//显示血量减少数字的时间
int motionteam1[4]={-1,-1,-1,-1},motionteam2[9]={-2,-2,-2,-2,-2,-2,-2,-2,-2};//表示英雄动作以及方向,-1向左静止,1向左运动,-2向右静止,2向右运动
int walk1=0,walk2=0;//walk1和walk2一起用来控制走路音频，表示状态是否改变,0表示静止，1表示运动
int team1motionstate[4]={},team2motionstate[9]={};//用来表示是 玩家控制的人物移动，还是被炸飞,0表示玩家没控制,1表示玩家正在控制
int team1times[4]={1,1,1,1},team2times[9]={4,4,4,4,4,4,4,4,4};//英雄图片序列帧时间控制
int jump= INTERVALJUMP;//表示跳跃间断时间
int zhunxinstate=0;   //准心状态1表示显现，0表示隐去
int forcestate=0;//力度条1表示显现，0表示隐去
int shouleistate=1,shouleistate1=1;//shouleistate用来表示手雷是否爆炸or是否绘制;0表示绘制,1表示隐去，2表示爆炸状态,4表示爆炸阻塞状态,3表示爆炸图片显示完毕;shouleistate1表示状态是否改变(1.是否造成伤害,2,是否震飞人,3.手雷初速的)，在Update中做出一次性的执行
int force = INTERVALFORCE;//表示 力度增长间断时间/写在60s更新函数
int roundtime=0;//用来计时实现回合
int roundstate=0;//用来表示回合阶段，回合阶段分为操作阶段（roundstate=0）,回合结束操作阶段（roundstate=1）,回合结束阶段(roundstate=2)
int heroorder1=0,heroorder2=0;//用来循环英雄(1表示循环己方，2表示敌方1)
int timepast=0;//用来表示回合已经过去秒数
int roundstart1=0,roundstart2=1;//用来回合开始；roundstart1==0表示开始，roundstart==1表示回合中(用在箭头显示)
int shouleiexplodepicture=0;//用来表示手雷爆炸序列帧
int shouleiwait= 0;//手雷到达位置后等待爆炸时间;
POINT camera;//摄像机，绘制起点位置
POINT camera1; 
int cameracontrol=0;
int jiantoudeltay;//箭头竖直方向偏移量
float proportion=1;//屏幕缩放比例
int team1throwstate=0;//绘制扔手雷图片状态,1表示放映，0表示不放映
int team1throwtimes=0;
int soundstart=0;

int gamestatusjustnow=0;
int skip=0;//1表示跳过该回合
int transtate=0;//传送器状态，0表示未使用，1表示开始传送，2表示传送完
int transtimes=0;
int wdtimes=0;
int windtimes=WINDINTERVAL;
int windvel=0;
int gamestart=0;
int rocketstate=1,rocketstate1=1;
int rocketexplodepicture=0;
int team1launchstate=0;
int team1launchtimes=0;
int restartstate=0;


int endpagepicture=0;
int endpage=0;
int menubgm=0;//
int scene1bgm=0,scene2bgm=0,scene3bgm=0,scene4bgm=0;

int gameend=0;
int renderagain=0;//表示是否重绘,0表示否,1表示是

int weaponteam1[4]={0,0,0,0};//表示武器顺序 0表示手雷，1表示火箭筒，2表示空袭
int weaponteam2[9]={0,0,0,0,0,0,0,0,0};
int endleft=0,endright=1920,endtop=900,endbottom=1080;
int roundcount=0,allover=0;
#endif

/*60s更新的状态量
m_force.line=0;
shouleistate=1;
force=INTERVALFORCE
shouleistate1=1;
*/