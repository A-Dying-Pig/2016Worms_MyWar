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


// 定义宏变量，WNDWIDTH、WNDHEIGHT为窗口的宽和高
#define TIMER_ID             1		//计时器ID
#define TIMER_ELAPSE         20		//计时器间隔(ms)
#define WNDWIDTH             1000	//窗口的宽
#define WNDHEIGHT            800	//窗口的高
#define TITLEBARHEIGHT       32		//标题栏高

// 定义资源的尺寸
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
#define SHOULEIEXPLODE_SIZE_X  40   //手雷爆炸图片尺寸
#define SHOULEIEXPLODE_SIZE_Y  40
#define ROCKETEXPLODE_SIZE_X   60
#define ROCKETEXPLODE_SIZE_Y   60
#define WINDINTERVAL           1000//
#define ENDTIME              40//四十回合上限

#define PLANEX     50
#define PLANEY     25
#define BOOMX      15
#define BOOMY      15
#define BOOMR      40
#define BOOMMOVE   40

#define CRATEINTERVAL      1000
//定义游戏常量
#define GRAVITY				 1		//重力
#define HERO_VEL_X			 1		//英雄水平速度
#define HERO_VEL_Y			 5		//英雄竖直速度
#define HERO_FORCE           3      //收到水平推力
#define INTERVALJUMP         20     //跳跃间隔时间/20ms
#define FORCESPEED           1.5     //力度增长速度
#define INTERVALFORCE		 1     //力度增长间隔/20ms
#define deltax               5     //力度距人物中心偏移量
#define MAXLINE				 70     //约束正方形最大边长
#define SHOULEIGRAVITY       1      //定义手雷重力
#define ROCKETGRAVITY        1
#define ROUNDTIME            1000    //回合操作阶段时间/20ms->20s
#define ROUNDENDTIME         250     //回合结束操作阶段时间，只能移动一个英雄/2s
#define SHOULEIR             25     //手雷爆炸半径
#define ROCKETR              30
#define LeftFoot             12     //英雄左脚位置
#define RightFoot            18     //英雄右脚位置
#define SHOULEIWAIT			 5      //手雷爆炸阻塞时间/20ms
#define SHOULEIMOVEVEL		 6      //手雷爆炸震飞和速度
#define ROCKETMOVEVEL        8
#define SHOULEIMOVERANGE     40     //手雷爆炸震飞作用范围
#define ROCKETMOVERANGE      50
#define BLOODDECREASETIME    50     //血量减少数字显示时间
#define CAMERASPEED          5      //camera移动速度
#define FOODINTERVAL         2000



// 英雄结构体，英雄位图、位置、大小*
typedef struct
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄位置
    POINT   vel;
	SIZE	size;
	float   mass;	//英雄质量
	POINT   acceleration;  //英雄加速度 (和英雄质量一起来表示力)
	int     curFrameIndex;
	int     maxFrameSize;
} Hero;

//手雷结构体
typedef struct
{
	
	HBITMAP hsl;  //手雷图片
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

//手雷爆炸图片结构体
typedef struct
{
	HBITMAP hBmp;//手雷爆炸图片
	POINT pos;
	SIZE  size;
}   ShouLeiExplode;

//准心结构体
typedef struct
{
	int r;
	HBITMAP hzx;
	POINT   pos;
	POINT  vel;
	SIZE    size;
	float   jiaodu;//顺时针+；逆时针-
	float   w;
}	ZhunXin;

//指向箭头 结构体
typedef struct
{
	HBITMAP hjiantou;
	POINT pos;
	POINT vel;
	POINT acceleration;
	SIZE  size;
}  JianTou;

//力度结构体
typedef struct
{   
	float line;
} FORCE;

/*地形结构体，地形方块位置、大小*/
typedef struct
{
	HBITMAP hBmp;
	POINT	pos1;//起点坐标	
	POINT   pos2;//终点坐标
} Terrian;

/*按钮结构体*/
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  GameButton;

/*游戏状态结构体*/
typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus;

typedef struct
{
   POINT pos;
} Item;

// 全局函数

/*************************************************
Fucntion : 创建英雄人物
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
hBmp表示位图句柄
curFrameIndex当前帧
maxFrameSize最大帧率
*************************************************/
Hero CreateHero(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp ,int curFrameIndex, int maxFrameSize);

/*************************************************
Fucntion : 创建游戏状态
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
hBmp表示位图句柄
*************************************************/
GameButton CreateGameButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);

/*************************************************
Fucntion : 创建单个地形
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
*************************************************/
Terrian CreateTerrian(LONG pos1X, LONG pos1Y, LONG pos2X, LONG pos2Y, HBITMAP hBmp);


//给准心结构体赋值
ZhunXin CreateZhunXin(int r, HBITMAP hBmp);

//初始化手雷
ShouLei CreateShouLei(HBITMAP hBmp);
Rocket CreateRocket(HBITMAP hBmp);



#endif // !GLOBAL_H
