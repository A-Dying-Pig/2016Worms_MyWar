#ifndef EVENT_H
#define EVENT_H

#include <Windows.h>


// ������̺���
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


// ��ʼ��
VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam);

//˫�������
VOID Render(HWND hWnd);
VOID Render_Start(HWND hWnd);//������Ϸ��ʼ����
VOID Render_Game(HWND hWnd);//������Ϸ����


//��ʱ���¼�
VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam);

//hero����
VOID HeroUpdate();

//���θ���
VOID TerrianUpdate();

//׼�ĸ���
VOID ZhunXinUpdate();

//���׸���
VOID ShouLeiUpdate();
VOID RocketUpdate();

//�غϸ���
VOID RoundUpdate ();

//���ȸ���
//VOID ForceUpdate();

//��Ϸ״̬����
VOID GameStatusUpdate();

//�ж��Ƿ�����ť
BOOL ButtonClicked(POINT, RECT);

//���̰����¼�����
VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//�����ɿ��¼�����
VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam);

//��������¼�
VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//�������غ���
VOID CreateMap1 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num);//maxR��ʾԲ�����뾶��maxC��ʾԲ�ĸ���.range��ʾ���Բ�ķ�Χ,num��ʾterrian�ڶ�����,start��ʾ�ؿ鿪ʼ
VOID CreateMap3 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num);//�е�
#endif // !EVENT_H

//�����ҽ�����
VOID CreateMap2 (int posleft,int posright,int postop,int posdown);

//��תͼ����
/*VOID Rotate (HDC hdc);*/

//�ǶȺ���
/*VOID angle (int x1,int x2,float *C,float *S);*/

//��Ƶ����
VOID SoundUpdate();

//����ֵ���������Σ�
int jueduizhi (int a);

//�����¡������ȶ�Ӧ����
VOID Forcevkrightdown();
VOID Forcevkleftdown();
VOID Adown();
VOID Ddown();
VOID Spacedown();
VOID Fdown();
//�����ϡ������ȶ�Ӧ����
VOID Forcevkrightup();
VOID Forcevkleftup();
VOID Aup();
VOID Dup();
VOID Spaceup();
VOID Fup();

//������ײ����
VOID ShouLeiCrush ();
VOID RocketCrush(); 

//�����˺�����
VOID ShouLeiDamage ();
VOID RocketDamage();

//����׹����ײ����
VOID HeroCrush ();

//������ֱ����λ����������
/*VOID RightUp ();
VOID LeftUp ();*/

//��ͷ���º���
VOID JianTouUpdate ();

//���ױ�ըͼƬ���º���
VOID ShouLeiExplodeUpdate ();
VOID RocketExplodeUpdate ();
//���ױ�ը���Ч��
VOID ShouLeiMove();
VOID RocketMove();

//��������
VOID HeroFriction();

//����״̬����
VOID HeroMotionUpdate();

//�غϽ������㺯��
VOID RoundEnd ();

//Ѫ�����ٿ���
VOID BloodDecrease();

//camara����
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