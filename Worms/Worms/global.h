#ifndef GLOBAL_H
#define GLOBAL_H

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <math.h>
#include <time.h>
#include "resource.h"
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")


// ����������WNDWIDTH��WNDHEIGHTΪ���ڵĿ�͸�
#define TIMER_ID             1		//��ʱ��ID
#define TIMER_ELAPSE         20		//��ʱ�����(ms)
#define WNDWIDTH             1000	//���ڵĿ�
#define WNDHEIGHT            800	//���ڵĸ�
#define TITLEBARHEIGHT       32		//��������

// ������Դ�ĳߴ�
#define HERO_SIZE_X          25
#define HERO_SIZE_Y          35
#define HERO_MAX_FRAME_NUM   3
#define GAME_START_BUTTON_SIZE_X   300
#define GAME_START_BUTTON_SIZE_Y   100
#define SHOULEI_SIZE_X       10
#define SHOULEI_SIZE_Y       10
#define ROCKET_SIZE_X        12
#define ROCKET_SIZE_Y        3
#define ARROW_SIZE_X         30
#define ARROW_SIZE_Y         30
#define SHOULEIEXPLODE_SIZE_X  40   //���ױ�ըͼƬ�ߴ�
#define SHOULEIEXPLODE_SIZE_Y  40
#define ROCKETEXPLODE_SIZE_X   60
#define ROCKETEXPLODE_SIZE_Y   60
#define WINDINTERVAL           1000//
#define ENDTIME              40//��ʮ�غ�����

#define PLANEX     50
#define PLANEY     25
#define BOOMX      15
#define BOOMY      15
#define BOOMR      40
#define BOOMMOVE   40

#define CRATEINTERVAL      1000
//������Ϸ����
#define GRAVITY				 1		//����
#define HERO_VEL_X			 1		//Ӣ��ˮƽ�ٶ�
#define HERO_VEL_Y			 5		//Ӣ����ֱ�ٶ�
#define HERO_FORCE           3      //�յ�ˮƽ����
#define INTERVALJUMP         20     //��Ծ���ʱ��/20ms
#define FORCESPEED           1.5     //���������ٶ�
#define INTERVALFORCE		 1     //�����������/20ms
#define deltax               5     //���Ⱦ���������ƫ����
#define MAXLINE				 70     //Լ�����������߳�
#define SHOULEIGRAVITY       1      //������������
#define ROCKETGRAVITY        1
#define ROUNDTIME            1000    //�غϲ����׶�ʱ��/20ms->20s
#define ROUNDENDTIME         250     //�غϽ��������׶�ʱ�䣬ֻ���ƶ�һ��Ӣ��/2s
#define SHOULEIR             25     //���ױ�ը�뾶
#define ROCKETR              30
#define LeftFoot             12     //Ӣ�����λ��
#define RightFoot            18     //Ӣ���ҽ�λ��
#define SHOULEIWAIT			 5      //���ױ�ը����ʱ��/20ms
#define SHOULEIMOVEVEL		 6      //���ױ�ը��ɺ��ٶ�
#define ROCKETMOVEVEL        8
#define SHOULEIMOVERANGE     40     //���ױ�ը������÷�Χ
#define ROCKETMOVERANGE      50
#define BLOODDECREASETIME    50     //Ѫ������������ʾʱ��
#define CAMERASPEED          5      //camera�ƶ��ٶ�
#define FOODINTERVAL         2000



// Ӣ�۽ṹ�壬Ӣ��λͼ��λ�á���С*
typedef struct
{
	HBITMAP	hBmp;	//Ӣ��ͼƬ
	POINT	pos;	//Ӣ��λ��
    POINT   vel;
	SIZE	size;
	float   mass;	//Ӣ������
	POINT   acceleration;  //Ӣ�ۼ��ٶ� (��Ӣ������һ������ʾ��)
	int     curFrameIndex;
	int     maxFrameSize;
} Hero;

//���׽ṹ��
typedef struct
{
	
	HBITMAP hsl;  //����ͼƬ
	POINT   pos;
	POINT   vel;
	SIZE    size;
	POINT   acceleration;
}	ShouLei;

typedef struct
{
	HBITMAP hBmp;
	POINT   pos;
	POINT   vel;
	SIZE    size;
	POINT   acceleration;
} Rocket;

typedef struct
{
	HBITMAP hBmp;
	POINT pos;
	SIZE  size;
} RocketExplode;

//���ױ�ըͼƬ�ṹ��
typedef struct
{
	HBITMAP hBmp;//���ױ�ըͼƬ
	POINT pos;
	SIZE  size;
}   ShouLeiExplode;

//׼�Ľṹ��
typedef struct
{
	int r;
	HBITMAP hzx;
	POINT   pos;
	POINT  vel;
	SIZE    size;
	float   jiaodu;//˳ʱ��+����ʱ��-
	float   w;
}	ZhunXin;

//ָ���ͷ �ṹ��
typedef struct
{
	HBITMAP hjiantou;
	POINT pos;
	POINT vel;
	POINT acceleration;
	SIZE  size;
}  JianTou;

//���Ƚṹ��
typedef struct
{   
	float line;
} FORCE;

/*���νṹ�壬���η���λ�á���С*/
typedef struct
{
	HBITMAP hBmp;
	POINT	pos1;//�������	
	POINT   pos2;//�յ�����
} Terrian;

/*��ť�ṹ��*/
typedef struct
{
	HBITMAP	hBmp;	//��ťͼƬ
	POINT   pos;	//��ťλ��
	SIZE	size;	//��ť�ߴ�
	int	status;	//��ť״̬
}  GameButton;

/*��Ϸ״̬�ṹ��*/
typedef struct
{
	HBITMAP	hBmp;	//����ͼƬ
	int	status;	//��Ϸ״̬
}  GameStatus;

typedef struct
{
   POINT pos;
} Item;

// ȫ�ֺ���

/*************************************************
Fucntion : ����Ӣ������
Parameter:
posX��posY��ʾ�������Ͻǵ�����
sizeX��sizeY��ʾ���ε�size
hBmp��ʾλͼ���
curFrameIndex��ǰ֡
maxFrameSize���֡��
*************************************************/
Hero CreateHero(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp ,int curFrameIndex, int maxFrameSize);

/*************************************************
Fucntion : ������Ϸ״̬
Parameter:
posX��posY��ʾ�������Ͻǵ�����
sizeX��sizeY��ʾ���ε�size
hBmp��ʾλͼ���
*************************************************/
GameButton CreateGameButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);

/*************************************************
Fucntion : ������������
Parameter:
posX��posY��ʾ�������Ͻǵ�����
sizeX��sizeY��ʾ���ε�size
*************************************************/
Terrian CreateTerrian(LONG pos1X, LONG pos1Y, LONG pos2X, LONG pos2Y, HBITMAP hBmp);


//��׼�Ľṹ�帳ֵ
ZhunXin CreateZhunXin(int r, HBITMAP hBmp);

//��ʼ������
ShouLei CreateShouLei(HBITMAP hBmp);
Rocket CreateRocket(HBITMAP hBmp);



#endif // !GLOBAL_H
