#ifndef EVENT_H
#define EVENT_H

#include <Windows.h>


// 窗体过程函数
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


// 初始化
VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam);

//双缓冲绘制
VOID Render(HWND hWnd);
VOID Render_Start(HWND hWnd);//绘制游戏开始界面
VOID Render_Game(HWND hWnd);//绘制游戏界面


//定时器事件
VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam);

//hero更新
VOID HeroUpdate();

//地形更新
VOID TerrianUpdate();

//准心更新
VOID ZhunXinUpdate();

//手雷更新
VOID ShouLeiUpdate();
VOID RocketUpdate();

//回合更新
VOID RoundUpdate ();

//力度更新
//VOID ForceUpdate();

//游戏状态更新
VOID GameStatusUpdate();

//判断是否点击按钮
BOOL ButtonClicked(POINT, RECT);

//键盘按下事件处理
VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//键盘松开事件处理
VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam);

//左鼠标点击事件
VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//生成土地函数
VOID CreateMap1 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num);//maxR表示圆的最大半径，maxC表示圆的个数.range表示随机圆的范围,num表示terrian第二个数,start表示地块开始
VOID CreateMap3 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num);//有底
#endif // !EVENT_H

//生成岩浆函数
VOID CreateMap2 (int posleft,int posright,int postop,int posdown);

//旋转图像函数
/*VOID Rotate (HDC hdc);*/

//角度函数
/*VOID angle (int x1,int x2,float *C,float *S);*/

//音频更新
VOID SoundUpdate();

//绝对值函数（整形）
int jueduizhi (int a);

//按键下——力度对应函数
VOID Forcevkrightdown();
VOID Forcevkleftdown();
VOID Adown();
VOID Ddown();
VOID Spacedown();
VOID Fdown();
//按键上——力度对应函数
VOID Forcevkrightup();
VOID Forcevkleftup();
VOID Aup();
VOID Dup();
VOID Spaceup();
VOID Fup();

//手雷碰撞函数
VOID ShouLeiCrush ();
VOID RocketCrush(); 

//手雷伤害函数
VOID ShouLeiDamage ();
VOID RocketDamage();

//人物坠落碰撞函数
VOID HeroCrush ();

//人物竖直方向位移修正函数
/*VOID RightUp ();
VOID LeftUp ();*/

//箭头更新函数
VOID JianTouUpdate ();

//手雷爆炸图片更新函数
VOID ShouLeiExplodeUpdate ();
VOID RocketExplodeUpdate ();
//手雷爆炸震飞效果
VOID ShouLeiMove();
VOID RocketMove();

//人物阻力
VOID HeroFriction();

//动作状态更新
VOID HeroMotionUpdate();

//回合结束清算函数
VOID RoundEnd ();

//血量减少控制
VOID BloodDecrease();

//camara控制
VOID Camera();

//
VOID WindUpdate();
VOID FoodUpdate();

VOID TransUpdate(); 
 
VOID Restart();

VOID PlaneUpdate();
VOID BoomCrush();
VOID BoomUpdate();
VOID CrateUpdate();
VOID AI();

VOID limit ();