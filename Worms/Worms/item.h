#ifndef ITEM_H
#define ITEM_H

#include "global.h"


//// ȫ�ֱ���

// ����λͼ���
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
// ����Ӣ�ۡ����������Ρ���ť

JianTou       redjiantou,bluejiantou;//��ɫ��ͷָ�򼺷�,��ɫ��ͷָ��з�
Hero		  team1[4];//�Լ���
Hero          team1imitate[4];//ģ�⼺��������ײ��õؿ���Ϣ
Hero          team2imitate[9];//ģ��з�������ײ��õؿ���Ϣ

Hero		 team1walk[4],team2walk[9];
int			team1walkterrian[4]={},team2walkterrian[9]={};

Hero		  team2[9]; //����
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
// ������Ϸ״̬
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

int heroside=0;//����ָʾ�������ߡ�0��ʾ���Ƽ�����1��ʾ���Ƶз�1��
int foodpicture[6];
int foodstate[6]={};//0��ʾδ���ƣ�1��ʾ����
int foodtimes=0;
int terrianstate[1920][6]={};   //1������ʾ���أ�-1������ʾ�ҽ�,0��ʾδ��ʼ��
int team1terrian[4];//��ʾ����Ӣ��վ��λ�ö�Ӧ�ĵ��ο���2
int team2terrian[9];//��ʾ�з�Ӣ��վ��λ�ö�Ӧ�ĵ��ο���2
int team1xietiao[4]={100,100,100,100};//����Ѫ��
int team2xietiao[9]={100,100,100,100,100,100,100,100,100};//�з�Ѫ��
int team1xietiao1[4]={100,100,100,100};
int team2xietiao1[9]={100,100,100,100,100,100,100,100,100};//������ʾѪ��������
int team1blooddecreasetime[4]={},team2blooddecreasetime[9]={};//��ʾѪ���������ֵ�ʱ��
int motionteam1[4]={-1,-1,-1,-1},motionteam2[9]={-2,-2,-2,-2,-2,-2,-2,-2,-2};//��ʾӢ�۶����Լ�����,-1����ֹ,1�����˶�,-2���Ҿ�ֹ,2�����˶�
int walk1=0,walk2=0;//walk1��walk2һ������������·��Ƶ����ʾ״̬�Ƿ�ı�,0��ʾ��ֹ��1��ʾ�˶�
int team1motionstate[4]={},team2motionstate[9]={};//������ʾ�� ��ҿ��Ƶ������ƶ������Ǳ�ը��,0��ʾ���û����,1��ʾ������ڿ���
int team1times[4]={1,1,1,1},team2times[9]={4,4,4,4,4,4,4,4,4};//Ӣ��ͼƬ����֡ʱ�����
int jump= INTERVALJUMP;//��ʾ��Ծ���ʱ��
int zhunxinstate=0;   //׼��״̬1��ʾ���֣�0��ʾ��ȥ
int forcestate=0;//������1��ʾ���֣�0��ʾ��ȥ
int shouleistate=1,shouleistate1=1;//shouleistate������ʾ�����Ƿ�ըor�Ƿ����;0��ʾ����,1��ʾ��ȥ��2��ʾ��ը״̬,4��ʾ��ը����״̬,3��ʾ��ըͼƬ��ʾ���;shouleistate1��ʾ״̬�Ƿ�ı�(1.�Ƿ�����˺�,2,�Ƿ������,3.���׳��ٵ�)����Update������һ���Ե�ִ��
int force = INTERVALFORCE;//��ʾ �����������ʱ��/д��60s���º���
int roundtime=0;//������ʱʵ�ֻغ�
int roundstate=0;//������ʾ�غϽ׶Σ��غϽ׶η�Ϊ�����׶Σ�roundstate=0��,�غϽ��������׶Σ�roundstate=1��,�غϽ����׶�(roundstate=2)
int heroorder1=0,heroorder2=0;//����ѭ��Ӣ��(1��ʾѭ��������2��ʾ�з�1)
int timepast=0;//������ʾ�غ��Ѿ���ȥ����
int roundstart1=0,roundstart2=1;//�����غϿ�ʼ��roundstart1==0��ʾ��ʼ��roundstart==1��ʾ�غ���(���ڼ�ͷ��ʾ)
int shouleiexplodepicture=0;//������ʾ���ױ�ը����֡
int shouleiwait= 0;//���׵���λ�ú�ȴ���ըʱ��;
POINT camera;//��������������λ��
POINT camera1; 
int cameracontrol=0;
int jiantoudeltay;//��ͷ��ֱ����ƫ����
float proportion=1;//��Ļ���ű���
int team1throwstate=0;//����������ͼƬ״̬,1��ʾ��ӳ��0��ʾ����ӳ
int team1throwtimes=0;
int soundstart=0;

int gamestatusjustnow=0;
int skip=0;//1��ʾ�����ûغ�
int transtate=0;//������״̬��0��ʾδʹ�ã�1��ʾ��ʼ���ͣ�2��ʾ������
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
int renderagain=0;//��ʾ�Ƿ��ػ�,0��ʾ��,1��ʾ��

int weaponteam1[4]={0,0,0,0};//��ʾ����˳�� 0��ʾ���ף�1��ʾ���Ͳ��2��ʾ��Ϯ
int weaponteam2[9]={0,0,0,0,0,0,0,0,0};
int endleft=0,endright=1920,endtop=900,endbottom=1080;
int roundcount=0,allover=0;
#endif

/*60s���µ�״̬��
m_force.line=0;
shouleistate=1;
force=INTERVALFORCE
shouleistate1=1;
*/