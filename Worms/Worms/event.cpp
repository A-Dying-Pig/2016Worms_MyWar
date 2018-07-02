#include "event.h"
#include "global.h"
#include "item.h"



VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	srand((unsigned)time(NULL));
	//加载准心位图
	hzhunxin = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP6));

	//加载手雷位图
	hshoulei = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP3));

	// 加载Hero位图
	m_hHeroBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP1));
	hteam1hero=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP13));

	// 加载开始游戏按钮位图
	m_hGameStartButtonBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_START));

	//加载红箭头、蓝箭头位图
	hredjiantou=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP7));
	hbluejiantou=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP8));

	//加载手雷爆炸位图
	hshouleiexplode=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP9));

	//加载图片位图
	hground=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP11));

	//加载扔手雷位图
	hteam1throw=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP14));
	hteam1launch=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP17));

	hrocket=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP15));

	hrocketexplode=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP16));

	//加载扛火箭筒位图
	hrocketwalk=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP18));

	hrocketpicture=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP22));
	hshouleipicture=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP21));
	//武器边框
	hframe=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP23));
	//
	hred=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP24));
	hgreen=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP26));
	
	hFrame2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP25));

	h0=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP27));
	h1=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP28));
	h2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP29));
	hwind=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP30));

	hwinddirection=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP31));
	hwdstill=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP32));

	happle=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP33));
	hgrape=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP35));
	hbanana=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP34));
	hjar=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP36));

	hnumber=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP37));

	htransitem=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP39));
	htranseffect=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP38));
	hmenu=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP40));

	hsinglemission=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP41));
	hmenu2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP42));
	hbutton1=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP45));
	hbutton2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP46));
	hbutton3=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP47));
	hbutton4=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP51));

	hmap2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP48));
	hmap1=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP49));
	hmap3=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP19));
	hmap4=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP50));

	hback=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP52));
	hhelp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP53));
	hhelppage=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP54));

	end1=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP55));
	end2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP56));
	end3=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP57));
	end4=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP58));
	end5=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP59));
	end6=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP60));
	end7=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP61));
	end8=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP62));

	resume=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP63));
	restart=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP64));
	hexit=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP65));
	pause=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP66));

	hhelp2=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP67));
	hnext=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP68));

	hplane=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP69));
	hboom=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP70));

	hcrate=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP71));

	airstrike=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP20));
	hversus=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP72));

	hversuspicture=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP73));

	mywar=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BITMAP74));
	// 创建己方英雄
	int k1,k2,i;
	for (i=0;i<3;i++)
	{
	k1=rand()%1500+120;
	k2=rand()%600+100;
	team1[i] = CreateHero(k1, k2, HERO_SIZE_X, HERO_SIZE_Y, hteam1hero,0,HERO_MAX_FRAME_NUM);
	}
	//创建敌方英雄
	for (i=0;i<3;i++)
	{
	k1=rand()%1500+120;
	k2=rand()%600+120;
	team2[i] = CreateHero(k1, k2, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp,0,HERO_MAX_FRAME_NUM);
	}


	// 创建地形
    CreateMap1 (100,1800,900,1080,45,70,1600,100,0); 
	CreateMap3 (100,560,500,660,50,30,500,-20,1);
	CreateMap3 (920,1690,400,560,55,70,900,860,1);
	CreateMap2 (0,100,900,1080);
	CreateMap2 (1800,1920,900,1080);

	//创建准心
	m_zhunxin = CreateZhunXin(70,hzhunxin);

	//初始化手雷
    m_shoulei = CreateShouLei(hshoulei);
	m_rocket = CreateRocket(hrocket);

	// 创建游戏开始按钮
	m_gameStartButton = CreateGameButton(80, 250, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hsinglemission, 0);
	bversus= CreateGameButton(80, 370, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hversus, 0);
	scene1 = CreateGameButton(80, 80, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton1, 0);
	scene2 =  CreateGameButton(80, 200, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton2, 0);
	scene3 =  CreateGameButton(80, 320, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton3, 0);
	scene4 = CreateGameButton(80, 440, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton4, 0);
	back   =    CreateGameButton(80, 580, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hback , 0);
	bnext = CreateGameButton(700, 580, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hnext , 0);
	help =  CreateGameButton(80,490, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hhelp , 0);
	bpause= CreateGameButton(80, 640, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, pause , 0);
	bresume= CreateGameButton(80, 300, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, resume, 0);
	brestart= CreateGameButton(80, 440, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton3, 0);
	bexit =  CreateGameButton(80,610, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hexit , 0);
	scene11 = CreateGameButton(630, 80, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton1, 0);
	scene21 =  CreateGameButton(630, 200, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton2, 0);
	scene31 =  CreateGameButton(630, 320, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton3, 0);
	scene41 = CreateGameButton(630, 440, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hbutton4, 0);
	back1   =    CreateGameButton(630, 580, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, hback , 0);
	//设定初始游戏状态
	gameStatus.status=0;
	

	//初始化力度约束矩形
	m_force.line=0;

	//初始化箭头
	redjiantou.hjiantou=hredjiantou;
	redjiantou.pos.x=team1[0].pos.x;
	redjiantou.pos.y=team1[0].pos.y;
	redjiantou.vel.x=0;
	redjiantou.vel.y=0;
	redjiantou.size.cx=ARROW_SIZE_X;
	redjiantou.size.cy=ARROW_SIZE_Y;
	redjiantou.acceleration.x=0;
	redjiantou.acceleration.y=0;

	bluejiantou.hjiantou=hbluejiantou;
	bluejiantou.pos.x=team2[0].pos.x;
	bluejiantou.pos.y=team2[0].pos.y;
	bluejiantou.vel.x=0;
	bluejiantou.vel.y=0;
	bluejiantou.size.cx=ARROW_SIZE_X;
	bluejiantou.size.cy=ARROW_SIZE_Y;
	bluejiantou.acceleration.x=0;
	bluejiantou.acceleration.y=0;

	//初始化手雷爆炸图片
	shouleiexplode.hBmp=hshouleiexplode;
	shouleiexplode.size.cx=SHOULEIEXPLODE_SIZE_X;
	shouleiexplode.size.cy=SHOULEIEXPLODE_SIZE_Y;
	shouleiexplode.pos.x=m_shoulei.pos.x;
	shouleiexplode.pos.y=m_shoulei.pos.y;

	//
    rocketexplode.hBmp=hrocketexplode;
	rocketexplode.size.cx=ROCKETEXPLODE_SIZE_X;
	rocketexplode.size.cy=ROCKETEXPLODE_SIZE_Y;
	rocketexplode.pos.x=m_rocket.pos.x;
	rocketexplode.pos.y=m_rocket.pos.y;
	//初始camera
	camera.x=0;
	camera.y=0;
	camera1.x=0;
	camera1.y=0;

	//初始化风向
	WD[0].pos.x=rand()%1200+300;
	WD[0].pos.y=m_terrian[WD[0].pos.x+30][0].pos1.y-32;
	WD[1].pos.x=rand()%400+100;
	WD[1].pos.y=m_terrian[WD[1].pos.x+30][1].pos1.y-32;
	WD[2].pos.x=rand()%600+950;
	WD[2].pos.y=m_terrian[WD[2].pos.x+30][1].pos1.y-32;

	//初始化食物
	food[0].pos.x=rand()%1200+300;
	food[0].pos.y=m_terrian[food[0].pos.x+5][0].pos1.y;
    foodstate[0]=1;
	foodpicture[0]=rand()%4;
	
	
	

	
}

VOID Render(HWND hWnd)
{
	//判断游戏状态
	switch(gameStatus.status)
	{
	case 0:
		//绘制开始界面
		Render_Start(hWnd);
		if (scene1bgm==1)
		{
		mciSendString(TEXT("close bgm1"),NULL,0,NULL);
		scene1bgm=0;
		}
		if (scene2bgm==1)
		{
		mciSendString(TEXT("close bgm2"),NULL,0,NULL);
		scene2bgm=0;
		}
		if (scene3bgm==1)
		{
		mciSendString(TEXT("close bgm3"),NULL,0,NULL);
		scene3bgm=0;
		}
		if (scene4bgm==1)
		{
		mciSendString(TEXT("close bgm4"),NULL,0,NULL);
		scene4bgm=0;
		}

		if (menubgm==0)
		{
		mciSendString(L"open res\\menubgm.mp3 alias menubgm",NULL,0,NULL);
		mciSendString(L"play menubgm repeat",NULL,0,NULL);
		menubgm=1;
		}
		break;
	case 1:
		if (menubgm==0)
		{
		mciSendString(TEXT("open res\\menubgm.mp3 alias menubgm"),NULL,0,NULL);
		mciSendString(TEXT("play menubgm repeat"),NULL,0,NULL);
		menubgm=1;
		}
		Render_Start(hWnd);
		 break;
	case 6:
		if (menubgm==0)
		{
		mciSendString(TEXT("open res\\menubgm.mp3 alias menubgm"),NULL,0,NULL);
		mciSendString(TEXT("play menubgm repeat"),NULL,0,NULL);
		menubgm=1;
		}
		Render_Start(hWnd);
		 break;
	case 8 :
			 if (menubgm==0)
		{
		mciSendString(TEXT("open res\\menubgm.mp3 alias menubgm"),NULL,0,NULL);
		mciSendString(TEXT("play menubgm repeat"),NULL,0,NULL);
		menubgm=1;
		}
		Render_Start(hWnd);
		 break;
	case 9:
		if (menubgm==0)
		{
		mciSendString(TEXT("open res\\menubgm.mp3 alias menubgm"),NULL,0,NULL);
		mciSendString(TEXT("play menubgm repeat"),NULL,0,NULL);
		menubgm=1;
		}
		Render_Start(hWnd);
		break;
	case 2:
		if (menubgm==1)
		{
		mciSendString(TEXT("close menubgm"),NULL,0,NULL);
		menubgm=0;
		}
		if (scene1bgm==0)
		{
		mciSendString(TEXT("open res\\bgm1.mp3 alias bgm1"),NULL,0,NULL);
		mciSendString(TEXT("play bgm1 repeat"),NULL,0,NULL);
		mciSendString(TEXT("setaudio bgm1 volume to 50"),NULL,0,NULL);
		scene1bgm=1;
		}
		Render_Game(hWnd);
		break;
	case 3:
		if (menubgm==1)
		{
		mciSendString(TEXT("close menubgm"),NULL,0,NULL);
		menubgm=0;
		}
		if (scene2bgm==0)
		{
		mciSendString(TEXT("open res\\bgm2.mp3 alias bgm2"),NULL,0,NULL);
		mciSendString(TEXT("play bgm2 repeat"),NULL,0,NULL);
		mciSendString(TEXT("setaudio bgm2 volume to 50"),NULL,0,NULL);
		scene2bgm=1;
		}
		Render_Game(hWnd);
		break;
	case 4:
		if (menubgm==1)
		{
		mciSendString(TEXT("close menubgm"),NULL,0,NULL);
		menubgm=0;
		}
		if (scene3bgm==0)
		{
		mciSendString(TEXT("open res\\bgm3.mp3 alias bgm3"),NULL,0,NULL);
		mciSendString(TEXT("play bgm3 repeat"),NULL,0,NULL);
		mciSendString(TEXT("setaudio bgm3 volume to 50"),NULL,0,NULL);
		scene3bgm=1;
		}
		Render_Game(hWnd);
		break;
	case 5:
		if (menubgm==1)
		{
		mciSendString(TEXT("close menubgm"),NULL,0,NULL);
		menubgm=0;
		}
		if (scene4bgm==0)
		{
		mciSendString(TEXT("open res\\bgm4.mp3 alias bgm4"),NULL,0,NULL);
		mciSendString(TEXT("play bgm4 repeat"),NULL,0,NULL);
		mciSendString(TEXT("setaudio bgm4 volume to 50"),NULL,0,NULL);
		scene4bgm=1;
		}
		Render_Game(hWnd);
		break;
	case 7:
		if (scene1bgm==1)
		{
		mciSendString(TEXT("close bgm1"),NULL,0,NULL);
		scene1bgm=0;
		}
		if (scene2bgm==1)
		{
		mciSendString(TEXT("close bgm2"),NULL,0,NULL);
		scene2bgm=0;
		}
		if (scene3bgm==1)
		{
		mciSendString(TEXT("close bgm3"),NULL,0,NULL);
		scene3bgm=0;
		}
		if (scene4bgm==1)
		{
		mciSendString(TEXT("close bgm4"),NULL,0,NULL);
		scene4bgm=0;
		}
		if (menubgm==0)
		{
		mciSendString(L"open res\\menubgm.mp3 alias menubgm",NULL,0,NULL);
		mciSendString(L"play menubgm repeat",NULL,0,NULL);
		menubgm=1;
		}

		KillTimer(hWnd, TIMER_ID);
		InvalidateRect(hWnd, NULL, TRUE);
		Render_Start(hWnd);
		break;
	default:
		break;
	}
}

VOID Render_Start(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	
if  (gameStatus.status==0)
{
		
	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, hmenu);
	TransparentBlt(hdcBuffer, 0, 0, 1000, 800,
		hdcBmp, 0, 0, 1300,1000,RGB(255,255,255));


	SelectObject(hdcBmp, mywar);
	TransparentBlt(hdcBuffer, 55, 35, 420, 210,
		hdcBmp, 0, 0, 400,200,RGB(255,255,255));

	SelectObject(hdcBmp, hsinglemission);
	TransparentBlt(hdcBuffer, m_gameStartButton.pos.x, m_gameStartButton.pos.y, m_gameStartButton.size.cx, m_gameStartButton.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hhelp);
	TransparentBlt(hdcBuffer, help.pos.x, help.pos.y, help.size.cx, help.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hversus);
	TransparentBlt(hdcBuffer, bversus.pos.x, bversus.pos.y,bversus.size.cx, bversus.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hexit);
	TransparentBlt(hdcBuffer, bexit.pos.x, bexit.pos.y, bexit.size.cx, bexit.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
}

if (gameStatus.status==1)
{
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, hmenu2);
	TransparentBlt(hdcBuffer, 0, 0, 1000, 800,
		hdcBmp, 280, 224, 1000,800,RGB(255,255,255));

	//ditu
	SelectObject(hdcBmp, hbutton1);
	TransparentBlt(hdcBuffer, scene1.pos.x,scene1.pos.y, scene1.size.cx, scene1.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton2);
	TransparentBlt(hdcBuffer, scene2.pos.x,scene2.pos.y, scene2.size.cx, scene2.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton3);
	TransparentBlt(hdcBuffer, scene3.pos.x,scene3.pos.y, scene3.size.cx, scene3.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton4);
	TransparentBlt(hdcBuffer, scene4.pos.x,scene4.pos.y, scene4.size.cx, scene4.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hback);
	TransparentBlt(hdcBuffer, back.pos.x,back.pos.y, back.size.cx, back.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
}
if (gameStatus.status==9)
{
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, hversuspicture);
	BitBlt(hdcBuffer, 0, 0, 1000, 800,
		hdcBmp, 0,0, SRCCOPY);

	//ditu
	SelectObject(hdcBmp, hbutton1);
	TransparentBlt(hdcBuffer, scene11.pos.x,scene11.pos.y, scene11.size.cx, scene11.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton2);
	TransparentBlt(hdcBuffer, scene21.pos.x,scene21.pos.y, scene21.size.cx, scene21.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton3);
	TransparentBlt(hdcBuffer, scene31.pos.x,scene31.pos.y, scene31.size.cx, scene31.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hbutton4);
	TransparentBlt(hdcBuffer, scene41.pos.x,scene41.pos.y, scene41.size.cx, scene41.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, hback);
	TransparentBlt(hdcBuffer, back1.pos.x,back1.pos.y, back1.size.cx, back1.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
}



if (gameStatus.status==8)
{
	
	SelectObject(hdcBuffer, cptBmp);

	SelectObject(hdcBmp, hhelp2);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);

	SelectObject(hdcBmp, hback);
	TransparentBlt(hdcBuffer, back.pos.x,back.pos.y, back.size.cx, back.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));

}

if (gameStatus.status==6)
{
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, hhelppage);
	TransparentBlt(hdcBuffer, 0, 0, 1000, 800,
		hdcBmp, 100, 0, 1080,800,RGB(255,255,255));

	SelectObject(hdcBmp, hback);
	TransparentBlt(hdcBuffer, back.pos.x,back.pos.y, back.size.cx, back.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));

	SelectObject(hdcBmp, hnext);
	TransparentBlt(hdcBuffer, bnext.pos.x,bnext.pos.y, bnext.size.cx, bnext.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));

}

if (gameStatus.status==7)
{
	if (endpage==0)
	{
	endpagepicture=rand()%8;
	endpage=1;
	}
	SelectObject(hdcBuffer, cptBmp);
	if (endpagepicture==0)
	{
	SelectObject(hdcBmp, end1);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	if (endpagepicture==1)
	{
	SelectObject(hdcBmp, end2);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	if (endpagepicture==2)
	{
	SelectObject(hdcBmp, end8);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	if (endpagepicture==3)
	{
	SelectObject(hdcBmp, end3);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	if (endpagepicture==4)
	{
	SelectObject(hdcBmp, end4);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
    if (endpagepicture==5)
	{
	SelectObject(hdcBmp, end5);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
    if (endpagepicture==6)
	{
	SelectObject(hdcBmp, end6);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	if (endpagepicture==7)
	{
	SelectObject(hdcBmp, end7);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBmp, 0, 0, SRCCOPY);
	}
	SelectObject(hdcBmp, hback);
	TransparentBlt(hdcBuffer, back.pos.x,back.pos.y, back.size.cx, back.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp, resume);
	TransparentBlt(hdcBuffer, bresume.pos.x,bresume.pos.y, bresume.size.cx, bresume.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
	SelectObject(hdcBmp,restart);
	TransparentBlt(hdcBuffer, brestart.pos.x,brestart.pos.y, brestart.size.cx, brestart.size.cy,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));

	
}

	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_Game(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);
	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, 1920, 1080);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);

	if (gameStatus.status==2) gameStatus.hBmp=hmap1;
	else if (gameStatus.status==3) gameStatus.hBmp=hmap2;
	else if (gameStatus.status==4) gameStatus.hBmp=hmap3;
	else if (gameStatus.status==5) gameStatus.hBmp=hmap4;

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, gameStatus.hBmp);
	BitBlt(hdcBuffer, 0, 0, 1920, 1080,
		hdcBmp, 0, 0, SRCCOPY);

	if (gamestart==0||renderagain==1)
{
	DeleteObject(sptBmp);
	DeleteDC(hdcshrink);
	sptBmp = CreateCompatibleBitmap(hdc, 1920, 1080);
	hdcshrink = CreateCompatibleDC(hdc);
	SelectObject(hdcshrink, sptBmp);
	SelectObject(hdcBmp, gameStatus.hBmp);
	BitBlt(hdcshrink, 0, 0, 1920, 1080,
		hdcBmp, 0, 0, SRCCOPY);

	// 绘制地形
	//(绘制土地)
	int k,j;
	SelectObject(hdcBmp, hground);
	for (k = 1;k<1920; k++)
		for (j=0;j<m_terriansecond[k];j++)
	    if (terrianstate[k][j]==1)
		{
	        TransparentBlt(
 	     	hdcBuffer,m_terrian[k][j].pos1.x, m_terrian[k][j].pos1.y,
	    	1 ,m_terrian[k][j].pos2.y-m_terrian[k][j].pos1.y,hdcBmp, m_terrian[k][j].pos1.x,m_terrian[k][j].pos1.y, 1, m_terrian[k][j].pos2.y-m_terrian[k][j].pos1.y,
		    RGB(255,255,255)
		    );
		}
	
	//(绘制岩浆)
	HPEN linePen1;
	HBRUSH brush;
	linePen1=CreatePen(PS_SOLID,1,RGB(255,69,0));
	brush=CreateSolidBrush(RGB(255,69,0));
	SelectObject(hdcBuffer,linePen1);
	SelectObject(hdcBuffer,brush);
	Rectangle(hdcBuffer,0,900,100,1080);
	Rectangle(hdcBuffer,1760,900,1920,1080);
	DeleteObject(linePen1);
	DeleteObject(brush);
	
	TransparentBlt(
 	     	hdcshrink,0,0,
	    	1920 ,1080,hdcBuffer, 0, 0, 1920,1080,
		    RGB(255,255,255));
	gamestart=1;
	renderagain=0;
	}
	
	TransparentBlt(
 	     	hdcBuffer,0,0,
	    	1920 ,1080,hdcshrink, 0, 0, 1920,1080,
		    RGB(255,255,255));

	// 绘制己方英雄到缓存
	HPEN linePen1;
	HBRUSH brush;
	int j;
for (j=0;j<3;j++)
{
	if (team1xietiao[j]!=0)
{
	if (motionteam1[j]==-2)
	{
		if (weaponteam1[j]==0)
		{
			if(j==heroorder1&&(team1throwstate==1||team1launchstate==1)) ;
			else
			{
			SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
	  		hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, 180, 72, 60, 72,
			RGB(255, 255, 255)
      		);
			}
		}

		else if (weaponteam1[j]==1)
		{
			if(j==heroorder1&&(team1throwstate==1||team1launchstate==1)) ;
			else
			{
			SelectObject(hdcBmp, hrocketwalk);
			TransparentBlt(
	  		hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			32, 35,
			hdcBmp, 630, 75, 105, 75,
			RGB(255, 255, 255)
      		);
			}
		}
		else if (weaponteam1[j]==2)
		{
		  if (transtate==0||transtate==3)
		  {
		   SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
	  		hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, 180, 72, 60, 72,
			RGB(255, 255, 255)
      		);
		  }
		}
		else if (weaponteam1[j]==4)
		{
		    SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
	  		hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, 180, 72, 60, 72,
			RGB(255, 255, 255)
      		);
		}
	}
	if (motionteam1[j]==-1)
	{  
		if (weaponteam1[j]==0)
		{
			if(j==heroorder1&&(team1throwstate==1||team1launchstate==1)) ;
			else
		   {
				SelectObject(hdcBmp, team1[j].hBmp);
				TransparentBlt(
				hdcBuffer, team1[j].pos.x, team1[j].pos.y,
				team1[j].size.cx, team1[j].size.cy,
				hdcBmp, 0, 0, 60, 72,
				RGB(255, 255, 255)
				);
		    }
	     }

		else if (weaponteam1[j]==1)
		{
	     	if(j==heroorder1&&(team1throwstate==1||team1launchstate==1)) ;
			else
		   {
				SelectObject(hdcBmp, hrocketwalk);
				TransparentBlt(
				hdcBuffer, team1[j].pos.x, team1[j].pos.y,
				32, 35,
				hdcBmp, 0, 0, 105, 75,
				RGB(255, 255, 255)
				);
		    }
		}
		else if (weaponteam1[j]==2)
		{
		if (transtate==0||transtate==3)
		{
		SelectObject(hdcBmp, team1[j].hBmp);
				TransparentBlt(
				hdcBuffer, team1[j].pos.x, team1[j].pos.y,
				team1[j].size.cx, team1[j].size.cy,
				hdcBmp, 0, 0, 60, 72,
				RGB(255, 255, 255)
				);
		}
		}
		else if (weaponteam1[j]==4)
		{
		SelectObject(hdcBmp, team1[j].hBmp);
				TransparentBlt(
				hdcBuffer, team1[j].pos.x, team1[j].pos.y,
				team1[j].size.cx, team1[j].size.cy,
				hdcBmp, 0, 0, 60, 72,
				RGB(255, 255, 255)
				);
		}

	}
	if(motionteam1[j]==1)
	{
		if(weaponteam1[j]==0)
		{
			SelectObject(hdcBmp, team1[j].hBmp);
		    TransparentBlt(
			hdcBuffer,team1[j].pos.x,team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, (team1times[j]+2)/4*60, 0, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]--;
			if (team1times[j]==-3) team1times[j]=29;
		}
		else if (weaponteam1[j]==1)
		{
		    SelectObject(hdcBmp, hrocketwalk);
		    TransparentBlt(
			hdcBuffer,team1[j].pos.x,team1[j].pos.y,
			32, 35,
			hdcBmp, (team1times[j]+2)/4*105, 0, 105, 75,
			RGB(255, 255, 255)
			);
			team1times[j]--;
			if (team1times[j]==-3) team1times[j]=25;
		}
		else if (weaponteam1[j]==2)
		{
			if (transtate==0||transtate==3)
			{
			SelectObject(hdcBmp, team1[j].hBmp);
		    TransparentBlt(
			hdcBuffer,team1[j].pos.x,team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, (team1times[j]+2)/4*60, 0, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]--;
			if (team1times[j]==-3) team1times[j]=29;
			}
		}
		else if (weaponteam1[j]==4)
		{
			SelectObject(hdcBmp, team1[j].hBmp);
		    TransparentBlt(
			hdcBuffer,team1[j].pos.x,team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp, (team1times[j]+2)/4*60, 0, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]--;
			if (team1times[j]==-3) team1times[j]=29;
		}



	}

		if(motionteam1[j]==2)
	{
		if (weaponteam1[j]==0)
		{
			SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
			hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp,(team1times[j]+27)/4*60, 72, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]++;
			if (team1times[j]==5) team1times[j]=-27;
		}
		else if (weaponteam1[j]==1)
		{
			SelectObject(hdcBmp, hrocketwalk);
			TransparentBlt(
			hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			32, 35,
			hdcBmp,(team1times[j]+23)/4*105, 75,105, 75,
			RGB(255, 255, 255)
			);
			team1times[j]++;
			if (team1times[j]==5) team1times[j]=-23;
		}
		else if (weaponteam1[j]==2)
		{
			if (transtate==0||transtate==3)
			{
			SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
			hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp,(team1times[j]+27)/4*60, 72, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]++;
			if (team1times[j]==5) team1times[j]=-27;
			}
		}
		else if (weaponteam1[j]==4)
		{
			SelectObject(hdcBmp, team1[j].hBmp);
			TransparentBlt(
			hdcBuffer, team1[j].pos.x, team1[j].pos.y,
			team1[j].size.cx, team1[j].size.cy,
			hdcBmp,(team1times[j]+27)/4*60, 72, 60, 72,
			RGB(255, 255, 255)
			);
			team1times[j]++;
			if (team1times[j]==5) team1times[j]=-27;
		}
	}
}
}

//绘制敌方英雄
for (j=0;j<3;j++)
{
	if (team2xietiao[j]!=0)
{
	if (motionteam2[j]==-2)
	{
		if (weaponteam2[j]==0||weaponteam2[j]==1||weaponteam2[j]==4)
		{
	    SelectObject(hdcBmp, team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx,team2[j].size.cy,
		hdcBmp, 750, 150, 150, 150,
		RGB(255, 255, 255)
	);
		}
		else if (weaponteam2[j]==2)
		{
			if (transtate==0||transtate==3)
			{ 
		SelectObject(hdcBmp, team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx,team2[j].size.cy,
		hdcBmp, 750, 150, 150, 150,
		RGB(255, 255, 255)
	);
			}
		}
	}
	if (motionteam2[j]==-1)
	{  
		if (weaponteam2[j]==0||weaponteam2[j]==1||weaponteam2[j]==4)
		{
		SelectObject(hdcBmp, team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer,team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx, team2[j].size.cy,
		hdcBmp, 750, 0, 150, 150,
		RGB(255, 255, 255)
		);
		}
		else if (weaponteam2[j]==2)
		{
			if (transtate==0||transtate==3)
			{
			SelectObject(hdcBmp, team2[j].hBmp);
			TransparentBlt(
			hdcBuffer,team2[j].pos.x, team2[j].pos.y,
			team2[j].size.cx, team2[j].size.cy,
			hdcBmp, 750, 0, 150, 150,
			RGB(255, 255, 255)
			);
			}
		}
	}
	if(motionteam2[j]==1)
	{
		if (weaponteam2[j]==0||weaponteam2[j]==1||weaponteam2[j]==4)
		{
		SelectObject(hdcBmp, team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx,team2[j].size.cy,
		hdcBmp, team2times[j]*150, 0, 150, 150,
		RGB(255, 255, 255)
		);
		team2times[j]--;
		if (team2times[j]==-1) team2times[j]=10;
		}
		else if (weaponteam2[j]==2)
		{
			if (transtate==0||transtate==3)
			{
			SelectObject(hdcBmp, team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx,team2[j].size.cy,
		hdcBmp, team2times[j]*150, 0, 150, 150,
		RGB(255, 255, 255)
		);
		team2times[j]--;
		if (team2times[j]==-1) team2times[j]=10;
			}
		}
	}

		if(motionteam2[j]==2)
	{
		if (weaponteam2[j]==0||weaponteam2[j]==1||weaponteam2[j]==4)
		{
		SelectObject(hdcBmp,team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx, team2[j].size.cy,
		hdcBmp,(team2times[j]+2)*150, 150, 150, 150,
		RGB(255, 255, 255)
		);
		team2times[j]++;
		if (team2times[j]==9) team2times[j]=-2;
		}
		else if (weaponteam2[j]==2)
		{
			if (transtate==0||transtate==3)
			{
			SelectObject(hdcBmp,team2[j].hBmp);
	    TransparentBlt(
		hdcBuffer, team2[j].pos.x, team2[j].pos.y,
		team2[j].size.cx, team2[j].size.cy,
		hdcBmp,(team2times[j]+2)*150, 150, 150, 150,
		RGB(255, 255, 255)
		);
		team2times[j]++;
		if (team2times[j]==9) team2times[j]=-2;
			}
		}
	}
}
//绘制传送
	if (heroside==0)
	{
		if (weaponteam1[heroorder1]==2)
		{
			if (transtate==1)
			{
				SelectObject(hdcBmp, htranseffect);
				TransparentBlt(
	  			hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y-20,
		     	40, 80,
				hdcBmp, transtimes/10*200, 0, 200, 500,
				RGB(255, 255, 255)
				);
				transtimes++;
				if (transtimes==160)
				{
					transtate=2;
					transtimes=0;
				}
			}
		
			else if (transtate==2)
			{
			    SelectObject(hdcBmp, htranseffect);
				TransparentBlt(
	  			hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y-20,
		     	40, 80,
				hdcBmp, transtimes/10*200, 0, 200, 500,
				RGB(255, 255, 255)
				);
				transtimes++;
				if (transtimes==160)
				{
					transtate=3;
					transtimes=0;
				}
			}
		}
	}
if (heroside==1)
{
		if (weaponteam2[heroorder2]==2)
		{
			 if(transtate==1)
			{
				SelectObject(hdcBmp, htranseffect);
				TransparentBlt(
	  			hdcBuffer, team2[heroorder2].pos.x, team2[heroorder2].pos.y-20,
		     	40, 80,
				hdcBmp, transtimes/10*200, 0, 200, 500,
				RGB(255, 255, 255)
				);
				transtimes++;
				if (transtimes==160)
				{
					transtate=2;
					transtimes=0;
				}
			}
			 else if (transtate==2)
			 {
			 SelectObject(hdcBmp, htranseffect);
				TransparentBlt(
	  			hdcBuffer, team2[heroorder2].pos.x, team2[heroorder2].pos.y-20,
		     	40, 80,
				hdcBmp, transtimes/10*200, 0, 200, 500,
				RGB(255, 255, 255)
				);
				transtimes++;
				if (transtimes==160)
				{
					transtate=3;
					transtimes=0;
				}
			 }
	
		}
}
}
//绘制扔手榴弹
if (heroside==0)
{
	if (team1throwstate==1)
	{
		if (motionteam1[heroorder1]==-1)
		{
        SelectObject(hdcBmp,hteam1throw);
	    TransparentBlt(
		hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y,
		team1[heroorder1].size.cx, team1[heroorder1].size.cy,
		hdcBmp,(team1throwtimes/2)*80, 0,80, 73,
		RGB(255, 255, 255)
		);
		team1throwtimes++;
		if (team1throwtimes==12) shouleistate=0;
		if (team1throwtimes==18)
		{
			team1throwtimes=0;
			team1throwstate=0;
		}
		}

		if (motionteam1[heroorder1]==-2)
		{
        SelectObject(hdcBmp,hteam1throw);
	    TransparentBlt(
		hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y,
		team1[heroorder1].size.cx, team1[heroorder1].size.cy,
		hdcBmp,(team1throwtimes+17)/2*80, 73,80, 73,
		RGB(255, 255, 255)
		);
		team1throwtimes--;
		if (team1throwtimes==-9) shouleistate=0;
		if (team1throwtimes==-18)
		{
			team1throwtimes=0;
			team1throwstate=0;
		}
		}
	}
}

//发射火箭
if (heroside==0)
{
	if (team1launchstate==1)
	{
		if (motionteam1[heroorder1]==-1)
		{
        SelectObject(hdcBmp,hteam1launch);
	    TransparentBlt(
		hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y,
		32, 35,
		hdcBmp,(team1launchtimes/2)*95, 0,95, 95,
		RGB(255, 255, 255)
		);
		team1launchtimes++;
		if (team1launchtimes==7) rocketstate=0;
		if (team1launchtimes==14)
		{
			team1launchtimes=0;
			team1launchstate=0;
		}
		}

		if (motionteam1[heroorder1]==-2)
		{
        SelectObject(hdcBmp,hteam1launch);
	    TransparentBlt(
		hdcBuffer, team1[heroorder1].pos.x, team1[heroorder1].pos.y,
		32, 35,
		hdcBmp,(team1launchtimes+13)/2*95,95,95, 95,
		RGB(255, 255, 255)
		);
		team1launchtimes--;
		if (team1launchtimes==-6) rocketstate=0;
		if (team1launchtimes==-14)
		{
			team1launchtimes=0;
			team1launchstate=0;
		}
		}
	}
}


   //绘制手雷
	if (shouleistate==0||shouleistate==4)
	{
		SelectObject(hdcBmp,m_shoulei.hsl);
		TransparentBlt(
		hdcBuffer, m_shoulei.pos.x, m_shoulei.pos.y,
		m_shoulei.size.cx, m_shoulei.size.cy,
		hdcBmp,0, 0, 720, 720,
		RGB(255, 255, 255)
		);
	}

	//绘制火箭弹
	if (rocketstate==0||rocketstate==4)
	{
		SelectObject(hdcBmp,m_rocket.hBmp);
		TransparentBlt(
		hdcBuffer, m_rocket.pos.x, m_rocket.pos.y,
		m_rocket.size.cx, m_rocket.size.cy,
		hdcBmp,0, 0, 60, 15,
		RGB(255, 255, 255)
		);
	}

	//绘制己方血量
	float per;
	int end;//end表示红色血条终点
for(j=0;j<3;j++)
{
	if (team1xietiao[j]>=100)
	{
    linePen1=CreatePen(PS_SOLID,3,RGB(252,13,27));
	SelectObject(hdcBuffer,linePen1); 
	MoveToEx(hdcBuffer, team1[j].pos.x, team1[j].pos.y-10,NULL);
    LineTo (hdcBuffer,team1[j].pos.x+HERO_SIZE_X, team1[j].pos.y-10);
	DeleteObject(linePen1);
	}
	else if(team1xietiao[j]>0)
	{
	 per=(float)team1xietiao[j]/100.0;
	 end=team1[j].pos.x+HERO_SIZE_X*per;
     linePen1=CreatePen(PS_SOLID,3,RGB(252,13,27));
	 SelectObject(hdcBuffer,linePen1);
	 MoveToEx(hdcBuffer, team1[j].pos.x, team1[j].pos.y-10,NULL);
     LineTo (hdcBuffer,end, team1[j].pos.y-10);
	 DeleteObject(linePen1);
	 linePen1=CreatePen(PS_SOLID,3,RGB(105,105,105));
	 SelectObject(hdcBuffer,linePen1);
	 MoveToEx(hdcBuffer,end,team1[j].pos.y-10,NULL);
	 LineTo (hdcBuffer,team1[j].pos.x+HERO_SIZE_X, team1[j].pos.y-10);
	 DeleteObject(linePen1);
	}
}

//绘制敌方血条

for(j=0;j<3;j++)
{

	if (team2xietiao[j]>=100)
	{
    linePen1=CreatePen(PS_SOLID,3,RGB(42,253,132));
	SelectObject(hdcBuffer,linePen1); 
	MoveToEx(hdcBuffer, team2[j].pos.x, team2[j].pos.y-10,NULL);
    LineTo (hdcBuffer,team2[j].pos.x+HERO_SIZE_X, team2[j].pos.y-10);
	DeleteObject(linePen1);
	}
	else if(team2xietiao[j]>0)
	{
	 per=(float)team2xietiao[j]/100.0;
	 end=team2[j].pos.x+HERO_SIZE_X*per;
     linePen1=CreatePen(PS_SOLID,3,RGB(42,253,132));
	 SelectObject(hdcBuffer,linePen1);
	 MoveToEx(hdcBuffer, team2[j].pos.x, team2[j].pos.y-10,NULL);
     LineTo (hdcBuffer,end, team2[j].pos.y-10);
	 DeleteObject(linePen1);
	 linePen1=CreatePen(PS_SOLID,3,RGB(105,105,105));
	 SelectObject(hdcBuffer,linePen1);
	 MoveToEx(hdcBuffer,end,team2[j].pos.y-10,NULL);
	 LineTo (hdcBuffer,team2[j].pos.x+HERO_SIZE_X, team2[j].pos.y-10);
	 DeleteObject(linePen1);
	}
}

	
//绘制己方血量数字	
 for(j=0;j<3;j++)
 {
  if(team1xietiao[j]!=0)
  {
	  if (team1xietiao[j]>=100)
	  {
	TCHAR	blood[13];
	SetTextColor(hdcBuffer, RGB(252,13,27));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintfW(blood,L"%d",team1xietiao[j]);
	TextOutW(hdcBuffer,team1[j].pos.x, team1[j].pos.y-30, blood, _tcslen(blood));
	  }
	  else
	  {
	   TCHAR	blood[13];
	   SetTextColor(hdcBuffer, RGB(252,13,27));
	   SetBkMode(hdcBuffer, TRANSPARENT);
	   wsprintfW(blood,L"%d",team1xietiao[j]);
	   TextOutW(hdcBuffer,team1[j].pos.x+5, team1[j].pos.y-30, blood, _tcslen(blood));
	  }
  }
 }

 //绘制敌方血量数字
 for(j=0;j<3;j++)
 {
	if (team2xietiao[j]!=0)
	{
		if (team2xietiao[j]>=100)
		{
	    TCHAR	blood[13];
		SetTextColor(hdcBuffer, RGB(42,253,132));
		SetBkMode(hdcBuffer, TRANSPARENT);
		wsprintfW(blood,L"%d",team2xietiao[j]);
		TextOutW(hdcBuffer,team2[j].pos.x, team2[j].pos.y-30, blood, _tcslen(blood));
		}
		else
		{
		TCHAR	blood[13];
		SetTextColor(hdcBuffer, RGB(42,253,132));
	    SetBkMode(hdcBuffer, TRANSPARENT);
		wsprintfW(blood,L"%d",team2xietiao[j]);
		TextOutW(hdcBuffer,team2[j].pos.x+5, team2[j].pos.y-30, blood, _tcslen(blood));
	     }
	}
 }

 
 //绘制己方箭头
 if (heroside==0)
 {
	 if (team2xietiao[j]!=0)
	 {
	SelectObject(hdcBmp, redjiantou.hjiantou);
	TransparentBlt(
		hdcBuffer, redjiantou.pos.x, redjiantou.pos.y-50,
		redjiantou.size.cx,redjiantou.size.cy,
		hdcBmp, 0, 0, 300, 300,
		RGB(255, 255, 255)
	);
	 }
 }

 //绘制敌方箭头
 if (heroside==1)
 {
	SelectObject(hdcBmp, bluejiantou.hjiantou);
	TransparentBlt(
		hdcBuffer, bluejiantou.pos.x, bluejiantou.pos.y-50,
		bluejiantou.size.cx,bluejiantou.size.cy,
		hdcBmp, 0, 0, 300, 300,
		RGB(255, 255, 255)
	);
 }

 //绘制血量减少量
 //己方
 for(j=0;j<3;j++)
 {
	 if(team1xietiao1[j]-team1xietiao[j]!=0)
	 {
	TCHAR	decrease[13];
	SetTextColor(hdcBuffer, RGB(252, 40, 252));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintfW(decrease,L"%d",team1xietiao[j]-team1xietiao1[j]);
	TextOutW(hdcBuffer,team1[j].pos.x+4, team1[j].pos.y-46, decrease, _tcslen(decrease));
	 }
 }
 //敌方
  for(j=0;j<3;j++)
 {
	 if(team2xietiao1[j]-team2xietiao[j]!=0)
	 {
	TCHAR	decrease[13];
	SetTextColor(hdcBuffer, RGB(252,40,252));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintfW(decrease,L"%d",team2xietiao[j]-team2xietiao1[j]);
	TextOutW(hdcBuffer,team2[j].pos.x+4, team2[j].pos.y-46, decrease, _tcslen(decrease));
	 }
 }

//绘制食物
 for (j=0;j<6;j++)
  {
	if (foodstate[j]==1)
	{
		
		if (foodpicture[j]==0)
		{
		SelectObject(hdcBmp, happle);
     	TransparentBlt(
		hdcBuffer, food[j].pos.x, food[j].pos.y-25,
		25,25,
		hdcBmp, 0, 0, 30, 30,
		RGB(255, 255, 255)
	     );
		}
	    if (foodpicture[j]==1)
		{
		SelectObject(hdcBmp, hbanana);
     	TransparentBlt(
		hdcBuffer, food[j].pos.x, food[j].pos.y-25,
		25,25,
		hdcBmp, 0, 0, 30, 30,
		RGB(255, 255, 255)
	     );
		}
		 if (foodpicture[j]==2)
		{
		SelectObject(hdcBmp, hgrape);
     	TransparentBlt(
		hdcBuffer, food[j].pos.x, food[j].pos.y-25,
		25,25,
		hdcBmp, 0, 0, 30, 30,
		RGB(255, 255, 255)
	     );
		}
		  if (foodpicture[j]==3)
		{
		SelectObject(hdcBmp, hjar);
     	TransparentBlt(
		hdcBuffer, food[j].pos.x, food[j].pos.y-25,
		25,25,
		hdcBmp, 0, 0, 30, 30,
		RGB(255, 255, 255)
	     );
		}
	}
  }

 if (cratestate==2)
 {
        SelectObject(hdcBmp, hcrate);
     	TransparentBlt(
		hdcBuffer, crate.pos.x, crate.pos.y-19,
		19,19,
		hdcBmp, 0, 0, 48, 48,
		RGB(255, 255, 255)
	     ); 
 }


 //绘制手雷爆炸图片
 if (shouleistate==7)
 {
	 SelectObject(hdcBmp,shouleiexplode.hBmp);
	 TransparentBlt(
		hdcBuffer, shouleiexplode.pos.x-shouleiexplode.size.cx/2, shouleiexplode.pos.y-shouleiexplode.size.cy/3,
		shouleiexplode.size.cx,shouleiexplode.size.cy,
		hdcBmp, shouleiexplodepicture/2*50,0, 50,50,
		RGB(255, 255, 255)
	);
	
 }

 //绘制火箭弹爆炸图片
 if (rocketstate==7)
 {
	 SelectObject(hdcBmp,rocketexplode.hBmp);
	 TransparentBlt(
		hdcBuffer, rocketexplode.pos.x-rocketexplode.size.cx/2, rocketexplode.pos.y-rocketexplode.size.cy/3,
		rocketexplode.size.cx,rocketexplode.size.cy,
		hdcBmp, rocketexplodepicture/2*85,0, 85,85,
		RGB(255, 255, 255)
	);
	 
 }
 if (boomstate==5)
 {
	 SelectObject(hdcBmp,rocketexplode.hBmp);
	 TransparentBlt(
		hdcBuffer, boom.pos.x-20, boom.pos.y-12,
		80,80,
		hdcBmp, boompic/2*85,0, 85,85,
		RGB(255, 255, 255)
	);
	 if (boompic<20) boompic++;
	 if (boompic==20)
	 {
		 boompic=0;
		 boomstate=6;
		 weapon4use=0;
	 }
	
 }

 if (boomstate==2)
 {
     SelectObject(hdcBmp,hboom);
	 TransparentBlt(
		hdcBuffer,boom.pos.x, boom.pos.y,
		10,20,
		hdcBmp,0,0, 29,44,
		RGB(255, 255, 255)
	);
 }
 if (planestate==2)
 {
  SelectObject(hdcBmp,hplane);
	 TransparentBlt(
		hdcBuffer,plane.pos.x, plane.pos.y,
		250,110,
		hdcBmp,0,0,210 ,107,
		RGB(255, 255, 255)
	);
 
 }


	//绘制准心
		if (zhunxinstate == 1)
	{
		SelectObject (hdcBmp,m_zhunxin.hzx);
		TransparentBlt(
		hdcBuffer, m_zhunxin.pos.x, m_zhunxin.pos.y,
		m_zhunxin.size.cx, m_zhunxin.size.cy,
		hdcBmp,0, 0, 500, 500,
		RGB(255, 255, 255)
		);
	}

	//绘制己方力度条
if (heroside==0)
{
		if (forcestate==1)
	{   
	    linePen1=CreatePen(PS_SOLID,1,RGB(252,13,27)); 
		SelectObject(hdcBuffer,linePen1);
		HBRUSH Brush = CreateSolidBrush(RGB(252,13,27));
	    SelectObject(hdcBuffer,Brush);
		if (motionteam1[heroorder1]==-2)
		{
			Pie(hdcBuffer,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2-m_force.line/2+deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_X/2-m_force.line/2,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2+m_force.line/2+deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_X/2+m_force.line/2,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2+80*cos(m_zhunxin.jiaodu-0.2618)+deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu-0.2618),
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2+80*cos(m_zhunxin.jiaodu+0.2618)+deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu+0.2618)
			);
		}
		if (motionteam1[heroorder1]==-1)
		{
		    Pie(hdcBuffer,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2-m_force.line/2-deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_X/2-m_force.line/2,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2+m_force.line/2-deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_X/2+m_force.line/2,
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2-80*cos(m_zhunxin.jiaodu+0.2618)-deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu+0.2618),
			team1[heroorder1].pos.x+(float)HERO_SIZE_X/2-80*cos(m_zhunxin.jiaodu-0.2618)-deltax,
			team1[heroorder1].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu-0.2618)
			);
		}	
			DeleteObject(Brush);
			DeleteObject(linePen1);
	}
		 
}
//绘制敌方力度条
if (heroside==1)
{
		if (forcestate==1)
	{   
	    linePen1=CreatePen(PS_SOLID,1,RGB(42,253,132)); 
		SelectObject(hdcBuffer,linePen1);
		HBRUSH Brush = CreateSolidBrush(RGB(42,253,132));
	    SelectObject(hdcBuffer,Brush);
		if (motionteam2[heroorder2]==-2)
		{
			Pie(hdcBuffer,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2-m_force.line/2+deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_X/2-m_force.line/2,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2+m_force.line/2+deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_X/2+m_force.line/2,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2+80*cos(m_zhunxin.jiaodu-0.2618)+deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu-0.2618),
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2+80*cos(m_zhunxin.jiaodu+0.2618)+deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu+0.2618)
			);
		}
		if (motionteam2[heroorder2]==-1)
		{
		    Pie(hdcBuffer,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2-m_force.line/2-deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_X/2-m_force.line/2,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2+m_force.line/2-deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_X/2+m_force.line/2,
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2-80*cos(m_zhunxin.jiaodu+0.2618)-deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu+0.2618),
			team2[heroorder2].pos.x+(float)HERO_SIZE_X/2-80*cos(m_zhunxin.jiaodu-0.2618)-deltax,
			team2[heroorder2].pos.y+(float)HERO_SIZE_Y/2-80*sin(m_zhunxin.jiaodu-0.2618)
			);
		}	
			DeleteObject(Brush);
			DeleteObject(linePen1);
	}
		
}
//小组血量概览
//己方

linePen1=CreatePen(PS_SOLID,3,RGB(252,13,27));
brush=CreateSolidBrush(RGB(203,41,45));
int start=camera1.x+360*proportion;
SelectObject(hdcBuffer,brush);
SelectObject(hdcBuffer,linePen1); 
for (j=0;j<3;j++)
{
  Rectangle(hdcBuffer,start,camera1.y+30*proportion,start+team1xietiao[j]/2*proportion,camera1.y+70*proportion);
  start+=(team1xietiao[j]/2+15)*proportion;
}
DeleteObject(brush);
DeleteObject(linePen1);
SelectObject(hdcBmp,hred);
TransparentBlt(
		hdcBuffer, camera1.x+250*proportion,camera1.y+20*proportion,
		80*proportion, 60*proportion,
		hdcBmp,0, 0, 580, 420,
		RGB(255, 255, 255)
		);

//敌方
start=camera1.x+360*proportion;
linePen1=CreatePen(PS_SOLID,3,RGB(60,203,62));
brush=CreateSolidBrush(RGB(51,138,89));
SelectObject(hdcBuffer,brush);
SelectObject(hdcBuffer,linePen1); 
for (j=0;j<3;j++)
{
  Rectangle(hdcBuffer,start,camera1.y+90*proportion,start+team2xietiao[j]/2*proportion,camera1.y+130*proportion);
  start+=(team2xietiao[j]/2+15)*proportion;
}
DeleteObject(brush);
DeleteObject(linePen1);
SelectObject(hdcBmp,hgreen);
TransparentBlt(
		hdcBuffer, camera1.x+215*proportion,camera1.y+80*proportion,
		120*proportion, 60*proportion,
		hdcBmp,0, 0, 760, 400,
		RGB(255, 255, 255)
		);

/*	// 绘制分数
	TCHAR	szDist[13];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintfW(szDist, _T("0 : 0"));
	TextOutW(hdcBuffer, WNDWIDTH - 100, 15, szDist, _tcslen(szDist));*/

	//绘制左上角图标
	   SelectObject(hdcBmp,hframe);
		TransparentBlt(
		hdcBuffer, camera1.x+5,camera1.y+5,
		200*proportion, 150*proportion,
		hdcBmp,0, 0, 400, 400,
		RGB(255, 255, 255)
		);
	if (heroside==0)
 {
	 if(weaponteam1[heroorder1]==1)
	 {
        SelectObject(hdcBmp,hrocketpicture);
		TransparentBlt(
		hdcBuffer, camera1.x+20*proportion,camera1.y+25*proportion,
		160*proportion, 100*proportion,
		hdcBmp,0, 0, 1919, 619,
		RGB(255, 255, 255)
		);
	 }
	 else if (weaponteam1[heroorder1]==0)
	 {
        SelectObject(hdcBmp,hshouleipicture);
		TransparentBlt(
		hdcBuffer, camera1.x+25*proportion, camera1.y+10*proportion,
		150*proportion, 150*proportion,
		hdcBmp,0, 0, 1024, 1024,
		RGB(255, 255, 255)
		);
	 }
	 else if (weaponteam1[heroorder1]==2)
	 {
	    SelectObject(hdcBmp,htransitem);
		TransparentBlt(
		hdcBuffer, camera1.x+35*proportion, camera1.y+30*proportion,
		140*proportion, 100*proportion,
		hdcBmp,0, 0, 750, 547,
		RGB(255, 255, 255)
		);
	 }
	 else if (weaponteam1[heroorder1]==4)
	 {
	    SelectObject(hdcBmp,airstrike);
		TransparentBlt(
		hdcBuffer, camera1.x+55*proportion, camera1.y+30*proportion,
		100*proportion, 100*proportion,
		hdcBmp,0, 0, 699, 800,
		RGB(255, 255, 255)
		);
	 }
 }
 
 if (heroside==1)
 {
	 if(weaponteam2[heroorder2]==1)
	 {
        SelectObject(hdcBmp,hrocketpicture);
		TransparentBlt(
		hdcBuffer, camera1.x+20, camera1.y+25,
		160*proportion, 100*proportion,
		hdcBmp,0, 0, 1919, 610,
		RGB(255, 255, 255)
		);
	 }
	 else if (weaponteam2[heroorder2]==0)
	 {
        SelectObject(hdcBmp,hshouleipicture);
		TransparentBlt(
		hdcBuffer, camera1.x+20*proportion,camera1.y+ 10*proportion,
		150*proportion, 150*proportion,
		hdcBmp,0, 0, 1024, 1024,
		RGB(255, 255, 255)
		);
	 }
	  else if (weaponteam2[heroorder2]==2)
	 {
	    SelectObject(hdcBmp,htransitem);
		TransparentBlt(
		hdcBuffer, camera1.x+35*proportion, camera1.y+30*proportion,
		140*proportion, 100*proportion,
		hdcBmp,0, 0, 750, 547,
		RGB(255, 255, 255)
		);
	 }
	 	 else if (weaponteam2[heroorder2]==4)
	 {
	    SelectObject(hdcBmp,airstrike);
		TransparentBlt(
		hdcBuffer, camera1.x+55*proportion, camera1.y+30*proportion,
		100*proportion, 100*proportion,
		hdcBmp,0, 0, 699, 800,
		RGB(255, 255, 255)
		);
	 }
 }

 //绘制风速
 SelectObject(hdcBmp,hwind);
		TransparentBlt(
		hdcBuffer, camera1.x+570*proportion,camera1.y+ 30*proportion,
		60*proportion, 90*proportion,
		hdcBmp,0, 0, 110, 128,
		RGB(255, 255, 255)
		);

if (windvel==0)
{
	    SelectObject(hdcBmp,h0);
		TransparentBlt(
		hdcBuffer, camera1.x+630*proportion,camera1.y+ 65*proportion,
		40*proportion, 40*proportion,
		hdcBmp,0, 0, 128, 128,
		RGB(255, 255, 255)
		);
}

if (windvel==1||windvel==-1)
{
	    SelectObject(hdcBmp,h1);
		TransparentBlt(
		hdcBuffer, camera1.x+630*proportion,camera1.y+ 65*proportion,
		40*proportion, 40*proportion,
		hdcBmp,0, 0, 128, 128,
		RGB(255, 255, 255)
		);

}


if (windvel==2||windvel==-2)
{
	    SelectObject(hdcBmp,h2);
		TransparentBlt(
		hdcBuffer, camera1.x+620*proportion,camera1.y+ 65*proportion,
		40*proportion, 40*proportion,
		hdcBmp,0, 0, 128, 128,
		RGB(255, 255, 255)
		);
}

if (windvel==1||windvel==2)
{
	for (j=0;j<3;j++)
	{
	    SelectObject(hdcBmp,hwinddirection);
		TransparentBlt(
		hdcBuffer, WD[j].pos.x,WD[j].pos.y,
		50, 35,
		hdcBmp,wdtimes/4*150, 95, 150, 95,
		RGB(255, 255, 255)
		);
	}
	wdtimes++;
	if(wdtimes==8) wdtimes=0;
}


if (windvel==-1||windvel==-2)
{
	for (j=0;j<3;j++)
	{
	    SelectObject(hdcBmp,hwinddirection);
		TransparentBlt(
		hdcBuffer, WD[j].pos.x,WD[j].pos.y,
		50, 35,
		hdcBmp,wdtimes/4*150, 0, 150, 95,
		RGB(255, 255, 255)
		);
	}
	wdtimes++;
	if(wdtimes==8) wdtimes=0;
}

if (windvel==0)
{
	for (j=0;j<3;j++)
	{
	    SelectObject(hdcBmp,hwdstill);
		TransparentBlt(
		hdcBuffer, WD[j].pos.x,WD[j].pos.y,
		50, 35,
		hdcBmp,wdtimes/4*150, 0, 145, 85,
		RGB(255, 255, 255)
		);
	}
}

if (allover==1)
{
	linePen1=CreatePen(PS_SOLID,1,RGB(255,69,0));
	brush=CreateSolidBrush(RGB(255,69,0));
	SelectObject(hdcBuffer,linePen1);
	SelectObject(hdcBuffer,brush);
	Rectangle(hdcBuffer,endleft,endtop,endright,endbottom);
	DeleteObject(linePen1);
	DeleteObject(brush);
}


 //绘制回合倒计时
 if (roundstate==0)
 {
	    SelectObject(hdcBmp,hnumber);
		TransparentBlt(
		hdcBuffer, camera1.x+900*proportion,camera1.y+700*proportion,
		80, 80,
		hdcBmp,(20-timepast)*150, 0, 150, 150,
		RGB(255, 255, 255)
		);
 }
 if(roundstate==1)
 {
	    SelectObject(hdcBmp,hnumber);
		TransparentBlt(
		hdcBuffer, camera1.x+900*proportion,camera1.y+700*proportion,
		80, 80,
		hdcBmp,(5-timepast)*150, 0, 150, 150,
		RGB(255, 255, 255)
		);
 }
 //back
    SelectObject(hdcBmp, pause);
	TransparentBlt(hdcBuffer,camera1.x+ bpause.pos.x,camera1.y+bpause.pos.y, bpause.size.cx/2, bpause.size.cy/2,
		hdcBmp, 0, 0,
		1153,360, RGB(255, 255, 255));
    //缩略图
	TransparentBlt(hdcBuffer,camera1.x+ 700*proportion, camera1.y+10*proportion, 270*proportion, 120*proportion, hdcshrink, 0, 0,1920,1080,RGB(254,254,254));
     SelectObject(hdcBmp,hFrame2);
	TransparentBlt(hdcBuffer,camera1.x+685*proportion+(float)(camera1.x)/1920.0*270*proportion, camera1.y+3*proportion+(float)(camera1.y)/1080.0*120*proportion, 1000.0/1920.0*340.0*proportion, 800.0/1080.0*150*proportion,hdcBmp,0,0,820,580,RGB(255,255,255));
	// 最后将所有的信息绘制到屏幕上
  	TransparentBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, camera1.x, camera1.y,proportion*WNDWIDTH,proportion*WNDHEIGHT,RGB(254,254,254));
	
	
 
	// 回收资源所占的内存

	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);


	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	if (roundstate==0||roundstate==1)  roundtime++;
	if (shouleistate==7&&shouleiexplodepicture<11) shouleiexplodepicture++;
	if (shouleistate==7&&shouleiexplodepicture==11)	shouleistate=9;
	if (shouleistate==4&&shouleiwait<=SHOULEIWAIT) 		shouleiwait++;
	if (shouleistate==4&&shouleiwait==SHOULEIWAIT+1)    
	{
		shouleistate=2;
	
	}
	if (windtimes==WINDINTERVAL)
		{
			WindUpdate();
			windtimes=0;
	     }


	if (rocketstate==7&&rocketexplodepicture<20) rocketexplodepicture++;
	if (rocketstate==7&&rocketexplodepicture==20) rocketstate=3;
	if (rocketstate==4)
		{
			rocketstate=2;
	   }

	if (foodtimes==FOODINTERVAL) FoodUpdate();
	if (foodtimes<FOODINTERVAL) foodtimes++;
	if(soundstart==0)
	{
	SoundUpdate();
	soundstart=1;
	}

	if (weapon4use==0&&weapon4state==0&&cratestate==0&&cratetimes<CRATEINTERVAL) 
		cratetimes++;
	if (weapon4use==0&&weapon4state==0&&cratestate==0&&cratetimes==CRATEINTERVAL)
		{
			cratetimes=0;
			cratestate=1;
	    }


	if (allover==1)endtop--;

	AI();

	Camera();
	ZhunXinUpdate();
	TerrianUpdate();
	ShouLeiDamage ();
	ShouLeiMove();
	RocketDamage();
	RocketMove();
	BoomCrush();
	BoomUpdate();
	PlaneUpdate();
	CrateUpdate();
	HeroCrush();
	HeroFriction();
	HeroUpdate();
	JianTouUpdate ();
	GameStatusUpdate();
	if (jump<INTERVALJUMP) jump++;
	//SoundUpdate();
	TransUpdate();
	ShouLeiUpdate();
	RocketUpdate();
	//ForceUpdate();
	if (force<INTERVALFORCE) force++;	
	ShouLeiExplodeUpdate();
	RocketExplodeUpdate();

	
	HeroMotionUpdate();
	BloodDecrease();
    limit();
	RoundUpdate();
	InvalidateRect(hWnd, NULL, FALSE);
}

VOID SoundUpdate()
{
	//走路声音
	/*if(walk1-walk2!=0&&walk1==1)
	{
		mciSendString(TEXT("play res\\walk.wav"),NULL,0,NULL);
		walk2=walk1;
	}
	if(walk1-walk2!=0&&walk1==0)
	{
		mciSendString(TEXT("play res\\walk.wav"),NULL,0,NULL);
		walk2=walk1;
	}
	*/
	int random;
	random=rand()%8;
	if (heroside==0)
	{
		if (random==0)	mciSendString(TEXT("play res\\761.mp3"),NULL,0,NULL);
		if (random==1)  mciSendString(TEXT("play res\\762.mp3"),NULL,0,NULL);
		if (random==2)  mciSendString(TEXT("play res\\763.mp3"),NULL,0,NULL);
		if (random==3)  mciSendString(TEXT("play res\\764.mp3"),NULL,0,NULL);
		if (random==4)  mciSendString(TEXT("play res\\765.mp3"),NULL,0,NULL);
		if (random==5)  mciSendString(TEXT("play res\\766.mp3"),NULL,0,NULL);
		if (random==6)  mciSendString(TEXT("play res\\767.mp3"),NULL,0,NULL);
		if (random==7)  mciSendString(TEXT("play res\\768.mp3"),NULL,0,NULL);
	}
	if (heroside==1)
	{
	    if (random==0)	mciSendString(TEXT("play res\\m1.mp3"),NULL,0,NULL);
		if (random==1)  mciSendString(TEXT("play res\\m2.mp3"),NULL,0,NULL);
		if (random==2)  mciSendString(TEXT("play res\\m3.mp3"),NULL,0,NULL);
		if (random==3)  mciSendString(TEXT("play res\\m4.mp3"),NULL,0,NULL);
		if (random==4)  mciSendString(TEXT("play res\\m5.mp3"),NULL,0,NULL);
		if (random==5)  mciSendString(TEXT("play res\\m6.mp3"),NULL,0,NULL);
		if (random==6)  mciSendString(TEXT("play res\\m7.mp3"),NULL,0,NULL);
		if (random==7)  mciSendString(TEXT("play res\\m8.mp3"),NULL,0,NULL);
	}
}


VOID ShouLeiUpdate()
{
	m_shoulei.pos.x+=m_shoulei.vel.x;
	m_shoulei.pos.y+=m_shoulei.vel.y;
	m_shoulei.vel.x+=m_shoulei.acceleration.x;
	m_shoulei.vel.y+=m_shoulei.acceleration.y;
 
//己方手雷
if (heroside==0)
{
	    if (shouleistate==1)
	{
	    m_shoulei.pos.x=team1[heroorder1].pos.x;
	    m_shoulei.pos.y=team1[heroorder1].pos.y;
	}
//以下赋初速度的部分只需要执行一次！
		if (shouleistate==0&&shouleistate1==1)
    {   
		m_shoulei.acceleration.y=SHOULEIGRAVITY;
		m_shoulei.vel.x+=windvel;
		if (motionteam1[heroorder1]==-2)
		{
			m_shoulei.vel.x= m_force.line*cos(m_zhunxin.jiaodu)/3.0;
			m_shoulei.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
		if (motionteam1[heroorder1]==-1)
		{
		    m_shoulei.vel.x=-m_force.line*cos(m_zhunxin.jiaodu)/3.0;
		    m_shoulei.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
	    shouleistate1=0;
	}


       	if (shouleistate==0)	ShouLeiCrush();
		if (shouleistate==4||shouleistate==2)
	{
		m_shoulei.vel.x=0;
		m_shoulei.vel.y=0;
		m_shoulei.acceleration.x=0;
		m_shoulei.acceleration.y=0;
	}
}
//敌方手雷
if (heroside==1)
{
	    if (shouleistate==1)
	{
	    m_shoulei.pos.x=team2[heroorder2].pos.x;
	    m_shoulei.pos.y=team2[heroorder2].pos.y;
	}
//以下赋初速度的部分只需要执行一次！
		if (shouleistate==0&&shouleistate1==1)
    {   
		m_shoulei.acceleration.y=SHOULEIGRAVITY;
		m_shoulei.vel.x+=windvel;
		if (motionteam2[heroorder2]==-2)
		{
			m_shoulei.vel.x= m_force.line*cos(m_zhunxin.jiaodu)/3.0;
			m_shoulei.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
		if (motionteam2[heroorder2]==-1)
		{
		    m_shoulei.vel.x=-m_force.line*cos(m_zhunxin.jiaodu)/3.0;
		    m_shoulei.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
	    shouleistate1=0;
	}
	
       	if (shouleistate==0)	ShouLeiCrush();
		if (shouleistate==4||shouleistate==2)
	{
		m_shoulei.vel.x=0;
		m_shoulei.vel.y=0;
		m_shoulei.acceleration.x=0;
		m_shoulei.acceleration.y=0;
	}
}

}
VOID RocketUpdate()
{
	m_rocket.pos.x+=m_rocket.vel.x;
	m_rocket.pos.y+=m_rocket.vel.y;
	m_rocket.vel.x+=m_rocket.acceleration.x;
	m_rocket.vel.y+=m_rocket.acceleration.y;
 
//己方手雷
if (heroside==0)
{
	    if (rocketstate==1)
	{
	    m_rocket.pos.x=team1[heroorder1].pos.x;
	    m_rocket.pos.y=team1[heroorder1].pos.y;
	}
//以下赋初速度的部分只需要执行一次！
		if (rocketstate==0&&rocketstate1==1)
    {   
		m_rocket.acceleration.y=ROCKETGRAVITY;
		m_rocket.vel.x+=windvel;
		if (motionteam1[heroorder1]==-2)
		{
			m_rocket.vel.x= m_force.line*cos(m_zhunxin.jiaodu)/3.0;
			m_rocket.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
		if (motionteam1[heroorder1]==-1)
		{
		    m_rocket.vel.x=-m_force.line*cos(m_zhunxin.jiaodu)/3.0;
		    m_rocket.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/3.0;
		}
	    rocketstate1=0;
	}
		

       	if (rocketstate==0)	RocketCrush();
		if (rocketstate==4||rocketstate==2)
	{
		m_rocket.vel.x=0;
		m_rocket.vel.y=0;
		m_rocket.acceleration.x=0;
		m_rocket.acceleration.y=0;
	}
}
//敌方手雷
if (heroside==1)
{
	    if (rocketstate==1)
	{
	    m_rocket.pos.x=team2[heroorder2].pos.x;
	    m_rocket.pos.y=team2[heroorder2].pos.y;
	}
//以下赋初速度的部分只需要执行一次！
		if (rocketstate==0&&rocketstate1==1)
    {   
		m_rocket.acceleration.y=ROCKETGRAVITY;
		m_rocket.vel.x+=windvel;
		if (motionteam2[heroorder2]==-2)
		{
			m_rocket.vel.x= m_force.line*cos(m_zhunxin.jiaodu)/2.0;
			m_rocket.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/2.0;
		}
		if (motionteam2[heroorder2]==-1)
		{
		    m_rocket.vel.x=-m_force.line*cos(m_zhunxin.jiaodu)/2.0;
		    m_rocket.vel.y=-m_force.line*sin(m_zhunxin.jiaodu)/2.0;
		}
	    rocketstate1=0;
	}
	

       	if (rocketstate==0)	RocketCrush();
		if (rocketstate==4||rocketstate==2)
	{
		m_rocket.vel.x=0;
		m_rocket.vel.y=0;
		m_rocket.acceleration.x=0;
		m_rocket.acceleration.y=0;
	}
}

}

VOID ZhunXinUpdate()
{
//己方
if (heroside==0)
{
	if (weaponteam1[heroorder1]==0||weaponteam1[heroorder1]==1)
	{
    m_zhunxin.jiaodu+=m_zhunxin.w;
	if(motionteam1[heroorder1]==-2)
	{
	m_zhunxin.pos.x = team1[heroorder1].pos.x+(float)m_zhunxin.r*cos(m_zhunxin.jiaodu);
	m_zhunxin.pos.y = team1[heroorder1].pos.y-(float)m_zhunxin.r*sin(m_zhunxin.jiaodu);
	}
	if (motionteam1[heroorder1]==-1)
    {	
   
	m_zhunxin.pos.x = team1[heroorder1].pos.x-(float)m_zhunxin.r*cos(m_zhunxin.jiaodu);
	m_zhunxin.pos.y = team1[heroorder1].pos.y-(float)m_zhunxin.r*sin(m_zhunxin.jiaodu);
	}
	}
	else if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
	{
	m_zhunxin.pos.x += m_zhunxin.vel.x;
	m_zhunxin.pos.y += m_zhunxin.vel.y;
	}
}

//敌方
if (heroside==1)
{
	if (weaponteam2[heroorder2]==0||weaponteam2[heroorder2]==1)
	{
    m_zhunxin.jiaodu+=m_zhunxin.w;
	if(motionteam2[heroorder2]==-2)
	{
	m_zhunxin.pos.x = team2[heroorder2].pos.x+(float)m_zhunxin.r*cos(m_zhunxin.jiaodu);
	m_zhunxin.pos.y = team2[heroorder2].pos.y-(float)m_zhunxin.r*sin(m_zhunxin.jiaodu);
	}
	if (motionteam2[heroorder2]==-1)
    {	
   
	m_zhunxin.pos.x = team2[heroorder2].pos.x-(float)m_zhunxin.r*cos(m_zhunxin.jiaodu);
	m_zhunxin.pos.y = team2[heroorder2].pos.y-(float)m_zhunxin.r*sin(m_zhunxin.jiaodu);
	}
	}
	else if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
	{
	m_zhunxin.pos.x += m_zhunxin.vel.x;
	m_zhunxin.pos.y += m_zhunxin.vel.y;
	}
}
}

VOID HeroUpdate()
{	int i;
	//己方更新
for (i=0;i<3;i++)
{
    team1[i].vel.x += team1[i].acceleration.x;
	team1[i].vel.y += team1[i].acceleration.y;
	team1[i].pos.x += team1[i].vel.x;
	team1[i].pos.y += team1[i].vel.y;
	if (allover==1)
	{
		if (team1[i].pos.y+HERO_SIZE_Y>=endtop)
			team1xietiao[i]=0;
	}
}
for (i=0;i<3;i++)
{
	team2[i].vel.x += team2[i].acceleration.x;
	team2[i].vel.y += team2[i].acceleration.y;
	team2[i].pos.x += team2[i].vel.x;
	team2[i].pos.y += team2[i].vel.y;
	if (allover==1)
	{
		if (team2[i].pos.y+HERO_SIZE_Y>=endtop)
			team2xietiao[i]=0;
	}
}

//人吃血包/武器箱
if (heroside==0)
{
	for (i=0;i<6;i++)
	if (team1[heroorder1].pos.x==food[i].pos.x&&team1[heroorder1].pos.y+60>=food[i].pos.y&&foodstate[i]==1)
	{
		foodstate[i]=0;
		team1xietiao[heroorder1]+=20;
	}
	if (team1[heroorder1].pos.x==crate.pos.x&&team1[heroorder1].pos.y+60>=crate.pos.y&&cratestate==2)
	{
	weapon4side=0;
	weapon4num=heroorder1;
	weapon4state=1;
	cratestate=0;
	weapon4use=1;
	}
}
if (heroside==1)
{
	for (i=0;i<6;i++)
	if (team2[heroorder2].pos.x==food[i].pos.x&&team2[heroorder2].pos.y+60>=food[i].pos.y&&foodstate[i]==1)
	{
		foodstate[i]=0;
		team2xietiao[heroorder2]+=20;
	}
	if (team2[heroorder2].pos.x==crate.pos.x&&team2[heroorder2].pos.y+60>=crate.pos.y&&cratestate==2)
	{
	weapon4side=1;
	weapon4num=heroorder2;
	weapon4state=1;
	cratestate=0;
	weapon4use=1;
	}
}
}

VOID TerrianUpdate() 
{
	if (shouleistate==2)
   {
	int i,j,y,x,k;
	for (i=m_shoulei.pos.x-SHOULEIR;i<=m_shoulei.pos.x+SHOULEIR;i++)
	{
		x=m_shoulei.pos.x-i;
		y=sqrt(float(SHOULEIR)*float(SHOULEIR)-float(x)*(float)(x));
	    j=m_terriansecond[i];
		for (k=0;k<j;k++) 
{
		if (terrianstate[i][k]==1)
		  {
				if (m_shoulei.pos.y-y>m_terrian[i][k].pos1.y)
				{
					if (m_terrian[i][k].pos2.y<=m_shoulei.pos.y+y)
					{
						if (m_terrian[i][k].pos2.y>m_shoulei.pos.y-y)
						    m_terrian[i][k].pos2.y=m_shoulei.pos.y-y;
					}
					else 
					{	
					    terrianstate[i][m_terriansecond[i]]=1;
						m_terrian[i][m_terriansecond[i]].pos2.y=m_terrian[i][k].pos2.y;
						m_terrian[i][m_terriansecond[i]].pos2.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.y=m_shoulei.pos.y+y;
				     	m_terrian[i][k].pos2.y=m_shoulei.pos.y-y;
					    m_terriansecond[i]++;
					}
				}
		       else 
				{
				if (m_shoulei.pos.y+y>=m_terrian[i][k].pos2.y)
					terrianstate[i][k]=0;
				else
				{
					if(m_terrian[i][k].pos1.y<m_shoulei.pos.y+y)
					m_terrian[i][k].pos1.y=m_shoulei.pos.y+y;
				}
				}
		  }
	     }
	 }
	renderagain=1;
	shouleistate=6;
	}
	
	if (rocketstate==2)
   {
	int i,j,y,x,k;
	for (i=m_rocket.pos.x-ROCKETR;i<=m_rocket.pos.x+ROCKETR;i++)
	{
		x=m_rocket.pos.x-i;
		y=sqrt(float(ROCKETR)*float(ROCKETR)-float(x)*(float)(x));
	    j=m_terriansecond[i];
		for (k=0;k<j;k++)
{
		if (terrianstate[i][k]==1)
		  {
				if (m_rocket.pos.y-y>m_terrian[i][k].pos1.y)
				{
					if (m_terrian[i][k].pos2.y<=m_rocket.pos.y+y)
					{
						if (m_terrian[i][k].pos2.y>m_rocket.pos.y-y)
						    m_terrian[i][k].pos2.y=m_rocket.pos.y-y;
					}
					else 
					{	
					    terrianstate[i][m_terriansecond[i]]=1;
						m_terrian[i][m_terriansecond[i]].pos2.y=m_terrian[i][k].pos2.y;
						m_terrian[i][m_terriansecond[i]].pos2.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.y=m_rocket.pos.y+y;
				     	m_terrian[i][k].pos2.y=m_rocket.pos.y-y;
					    m_terriansecond[i]++;
					}
				}
		       else 
				{
				if (m_rocket.pos.y+y>=m_terrian[i][k].pos2.y)
					terrianstate[i][k]=0;
				else
				{
					if(m_terrian[i][k].pos1.y<m_rocket.pos.y+y)
					m_terrian[i][k].pos1.y=m_rocket.pos.y+y;
				}
				}
		  }
	     }
	}
	renderagain=1;
	rocketstate=6;
	}
    
		if (boomstate==3)
   {
	int i,j,y,x,k;
	for (i=boom.pos.x-BOOMR;i<=boom.pos.x+BOOMR;i++)
	{
		x=boom.pos.x-i;
		y=sqrt(float(BOOMR)*float(BOOMR)-float(x)*(float)(x));
	    j=m_terriansecond[i];
		for (k=0;k<j;k++)
{
		if (terrianstate[i][k]==1)
		  {
				if (boom.pos.y-y>m_terrian[i][k].pos1.y)
				{
					if (m_terrian[i][k].pos2.y<=boom.pos.y+y)
					{
						if (m_terrian[i][k].pos2.y>boom.pos.y-y)
						    m_terrian[i][k].pos2.y=boom.pos.y-y;
					}
					else 
					{	
					    terrianstate[i][m_terriansecond[i]]=1;
						m_terrian[i][m_terriansecond[i]].pos2.y=m_terrian[i][k].pos2.y;
						m_terrian[i][m_terriansecond[i]].pos2.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.x=m_terrian[i][k].pos2.x;
						m_terrian[i][m_terriansecond[i]].pos1.y=boom.pos.y+y;
				     	m_terrian[i][k].pos2.y=boom.pos.y-y;
					    m_terriansecond[i]++;
					}
				}
		       else 
				{
				if (boom.pos.y+y>=m_terrian[i][k].pos2.y)
					terrianstate[i][k]=0;
				else
				{
					if(m_terrian[i][k].pos1.y<boom.pos.y+y)
					m_terrian[i][k].pos1.y=boom.pos.y+y;
				}
				}
		  }
	     }
	}
	boomstate=4;
	renderagain=1;
	}


}  // //修改完

VOID GameStatusUpdate()
{
	// TODO
	//更新游戏状态
}

BOOL ButtonClicked(POINT ptMouse, POINT buttonPos, SIZE buttonSize)
{
	RECT rectButton;
	rectButton.left = buttonPos.x;
	rectButton.top = buttonPos.y;
	rectButton.right = buttonPos.x + buttonSize.cx;
	rectButton.bottom = buttonPos.y + buttonSize.cy;

	return PtInRect(&rectButton, ptMouse);
}

VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	if (AIstate==0||(AIstate==1&&heroside==0))
{
	// TODO
	switch (wParam)
	{
	case ' ':
	Spacedown();
		break;
	case '1':if (heroside==0)  weaponteam1[heroorder1]=0;
		     if (heroside==1)weaponteam2[heroorder2]=0;
			 break;
	case '2':if (heroside==0)  weaponteam1[heroorder1]=1;
		     if (heroside==1)weaponteam2[heroorder2]=1;
			 break;
	case '3':if (heroside==0) weaponteam1[heroorder1]=2;
		     if (heroside==1) weaponteam2[heroorder2]=2;
			 break;
	case '4':
		if (weapon4state==1)
		{
			if (heroside==0&&weapon4side==0)
			weaponteam1[weapon4num]=4;
			else if (heroside==1&&weapon4side==1)
			weaponteam2[weapon4num]=4;
		}
		break;
	case 'A':
		Adown();
		break;
	case 'D':
		Ddown();
		break;
	case 'F':
		if (roundstate==0)
	{
		if (zhunxinstate==0)
			{
				if (heroside==0)
					if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
					{
						m_zhunxin.pos.x=team1[heroorder1].pos.x;
						m_zhunxin.pos.y=team1[heroorder1].pos.y;
					}
				if (heroside==1)
					if (weaponteam2[heroorder2]==2||weaponteam1[heroorder1]==4)
					{
						m_zhunxin.pos.x=team2[heroorder2].pos.x;
						m_zhunxin.pos.y=team2[heroorder2].pos.y;
					}

				zhunxinstate=1;
				break;
		    }
		if (zhunxinstate==1) 
		{
				zhunxinstate=0;
				break;
		}
     }
		break;
	case 'L':
		if (proportion<1.2) proportion+=0.2;
		if (camera.y+proportion*WNDHEIGHT>=1080)
			camera.y=1080-proportion*WNDHEIGHT;
		if (camera.x+proportion*WNDWIDTH>=1920)
			camera.x=1920-proportion*WNDWIDTH;
		break;
	case 'K':
		if (proportion>0.8)	proportion-=0.2;
		break;
	case 'P':
		gameStatus.status=7;
		break;
	case VK_ESCAPE :
		 skip=1;
		 zhunxinstate=0;
		 break;
	case VK_UP :
	
		if (zhunxinstate==1)
		{
		if (heroside==0)
		{
			if (weaponteam1[heroorder1]==0||weaponteam1[heroorder1]==1)
			{
	     	m_zhunxin.w=0.02;
		    if (m_zhunxin.jiaodu>=1.5707)
			m_zhunxin.w=0;
			}
			else if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
				m_zhunxin.vel.y=-5;
		}

		if (heroside==1)
		{
			if (weaponteam2[heroorder2]==0||weaponteam2[heroorder2]==1)
			{
	     	m_zhunxin.w=0.02;
		    if (m_zhunxin.jiaodu>=1.5707)
			m_zhunxin.w=0;
			}
			else if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
				m_zhunxin.vel.y=-5;
		}
		}

		if (zhunxinstate==0&&forcestate==0)
		{
		cameracontrol=1;
		if (camera1.y>0)
			camera1.y-=CAMERASPEED;
		else if (camera1.y<0)
			camera1.y=0;
		}
		break;
	case VK_DOWN :
	
		if (zhunxinstate==1)
		{
		    if (weaponteam1[heroorder1]==0||weaponteam1[heroorder1]==1)
			{
	     	m_zhunxin.w=-0.02;
		    if (m_zhunxin.jiaodu>=1.5707)
			m_zhunxin.w=0;
			}
			else if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
				m_zhunxin.vel.y=5;

		  if (weaponteam2[heroorder2]==0||weaponteam2[heroorder2]==1)
			{
	     	m_zhunxin.w=-0.02;
		    if (m_zhunxin.jiaodu>=1.5707)
			m_zhunxin.w=0;
			}
			else if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
				m_zhunxin.vel.y=5;
		}
		if (zhunxinstate==0&&forcestate==0)
		{
				cameracontrol=1;
			if (camera1.y+WNDHEIGHT*proportion<1080)
				camera1.y+=CAMERASPEED;
			else if (camera1.y+WNDHEIGHT*proportion>1080)
				camera1.y=1440-WNDHEIGHT*proportion;
		}
		break;
	case VK_RIGHT :
		Forcevkrightdown();
		break;
	case VK_LEFT :
		Forcevkleftdown();
		break;
	case VK_RETURN:
		if (heroside==0)
		{
			if (weaponteam1[heroorder1]==2&&zhunxinstate==1)
				{
					zhunxinstate=0;
					transtate=1;
					m_zhunxin.vel.x=0;
					m_zhunxin.vel.y=0;
			     }
			else if (weaponteam1[heroorder1]==4&&zhunxinstate==1)
			{
			zhunxinstate=0;
			planestate=1;
			target=m_zhunxin.pos.x;
			}
		}
		if (heroside==1)
		{
			if (weaponteam2[heroorder2]==2&&zhunxinstate==1)
			{
				zhunxinstate=0;
				transtate=1;
				m_zhunxin.vel.x=0;
				m_zhunxin.vel.y=0;
			}
			else if(weaponteam2[heroorder2]==4&&zhunxinstate==1)
			{
				zhunxinstate=0;
				planestate=1;
				target=m_zhunxin.pos.x;
			}
		}
		break;
	default:    break;
	}
}
}

VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
if (AIstate==0||(AIstate==1&&heroside==0))
{
	// TODO
	switch (wParam)
	{
	case ' ':
		break;
	case 'F':
		break;
	case 'A':
	Aup();
		break;
	case 'D':
	Dup();
		break;
	case VK_UP :
		cameracontrol=0;
		m_zhunxin.w=0;
		m_zhunxin.vel.y=0;
		break;
	case VK_DOWN :
		cameracontrol=0;
		m_zhunxin.w=0;
		m_zhunxin.vel.y=0;
		break;
	case VK_RIGHT :
		Forcevkrightup ();
		break;
	case VK_LEFT :
		Forcevkleftup ();
		break;
	default:
		break;
	}
}
}

VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	POINT ptMouse; // 鼠标点击的坐标
	ptMouse.x = LOWORD(lParam);
	ptMouse.y = HIWORD(lParam);

	//如果点击了游戏开始图标
	if (gameStatus.status==0 && ButtonClicked(ptMouse, m_gameStartButton.pos, m_gameStartButton.size))
	{
		// 更改游戏状态
		KillTimer(hWnd, TIMER_ID);
		gameStatus.status=1;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==0 && ButtonClicked(ptMouse, bversus.pos, bversus.size))
	{
		// 更改游戏状态
		KillTimer(hWnd, TIMER_ID);
		gameStatus.status=9;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==9 && ButtonClicked(ptMouse, scene11.pos, scene11.size))
	{
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		AIstate=0;
		// 更改游戏状态
		if (restartstate==0)
		{
		restartstate=1;
		gameStatus.status=2;
		}
		else if (restartstate==1)
		{
		Restart();
		gameStatus.status=2;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==9 && ButtonClicked(ptMouse, scene21.pos, scene21.size))
	{
		AIstate=0;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		if (restartstate==0)
		{
		gameStatus.status=3;
		restartstate=1;
		}
		if (restartstate==1)
		{
		Restart();
		gameStatus.status=3;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==9 && ButtonClicked(ptMouse, scene31.pos, scene31.size))
	{
		AIstate=0;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		if (restartstate==0)
		{
		gameStatus.status=4;
		restartstate=1;
		}
		if (restartstate==1)
		{
		Restart();
		gameStatus.status=4;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
		else if (gameStatus.status==9 && ButtonClicked(ptMouse, scene41.pos, scene41.size))
	{
		AIstate=0;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);
		if (restartstate==0)
		{
		// 更改游戏状态
		gameStatus.status=5;
		restartstate=1;
		}
		if (restartstate=1)
		{
		Restart();
		gameStatus.status=5;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==9 && ButtonClicked(ptMouse, back1.pos, back1.size))
	{
		// 启动计时器
		// 停止计时器
		KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		gameStatus.status=0;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==2&&ButtonClicked(ptMouse, bpause.pos, bpause.size))
		{
		// 更改游戏状态
		gameStatus.status=7;
	    gamestatusjustnow=2;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==0 && ButtonClicked(ptMouse, help.pos, help.size))
	{
		// 更改游戏状态
		KillTimer(hWnd, TIMER_ID);
		gameStatus.status=6;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==0 && ButtonClicked(ptMouse, bexit.pos, bexit.size))
	{
			PostQuitMessage(0);
	}
	else if (gameStatus.status==1 && ButtonClicked(ptMouse, scene1.pos, scene1.size))
	{
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);

		AIstate=1;
		// 更改游戏状态
		if (restartstate==0)
		{
		restartstate=1;
		gameStatus.status=2;
		}
		else if (restartstate==1)
		{
		Restart();
		gameStatus.status=2;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==1 && ButtonClicked(ptMouse, scene2.pos, scene2.size))
	{
		AIstate=1;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		if (restartstate==0)
		{
		gameStatus.status=3;
		restartstate=1;
		}
		if (restartstate==1)
		{
		Restart();
		gameStatus.status=3;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==1 && ButtonClicked(ptMouse, scene3.pos, scene3.size))
	{
		AIstate=1;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		if (restartstate==0)
		{
		gameStatus.status=4;
		restartstate=1;
		}
		if (restartstate==1)
		{
		Restart();
		gameStatus.status=4;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
		else if (gameStatus.status==1 && ButtonClicked(ptMouse, scene4.pos, scene4.size))
	{
		AIstate=1;
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);
		if (restartstate==0)
		{
		// 更改游戏状态
		gameStatus.status=5;
		restartstate=1;
		}
		if (restartstate=1)
		{
		Restart();
		gameStatus.status=5;
		}

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==1 && ButtonClicked(ptMouse, back.pos, back.size))
	{
		// 启动计时器
		// 停止计时器
		KillTimer(hWnd, TIMER_ID);

		// 更改游戏状态
		gameStatus.status=0;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==2&&ButtonClicked(ptMouse, bpause.pos, bpause.size))
		{
		// 更改游戏状态
		gameStatus.status=7;
	    gamestatusjustnow=2;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==3&&ButtonClicked(ptMouse, bpause.pos, bpause.size))
		{
		// 更改游戏状态
		gameStatus.status=7;
	    gamestatusjustnow=3;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==4&&ButtonClicked(ptMouse, bpause.pos, bpause.size))
		{
		// 更改游戏状态
		gameStatus.status=7;
	    gamestatusjustnow=4;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==5&&ButtonClicked(ptMouse, bpause.pos, bpause.size))
		{
		// 更改游戏状态
		gameStatus.status=7;
	    gamestatusjustnow=5;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	else if (gameStatus.status==6&&ButtonClicked(ptMouse, back.pos, back.size))
	{
	    gameStatus.status=0;	
		InvalidateRect(hWnd, NULL, TRUE);
	}
	else if (gameStatus.status==6&&ButtonClicked(ptMouse, bnext.pos, bnext.size))
	{
	gameStatus.status=8;
	InvalidateRect(hWnd, NULL, TRUE);
	}
	else if (gameStatus.status==8&&ButtonClicked(ptMouse, back.pos, back.size))
	{
	gameStatus.status=6;
    InvalidateRect(hWnd, NULL, TRUE);
	}

	else if (gameStatus.status==7&&ButtonClicked(ptMouse, back.pos, back.size))
	{
		AIstate=-1;
		gameStatus.status=0;
		endpage=0;
	    InvalidateRect(hWnd, NULL, TRUE);
	}
	else if (gameStatus.status==7&&ButtonClicked(ptMouse, bresume.pos, bresume.size)&&gameend==0)
	{
		endpage=0;
		gameStatus.status=gamestatusjustnow;
		gamestatusjustnow=0;
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
	    InvalidateRect(hWnd, NULL, TRUE);
	}
	else if (gameStatus.status==7&&ButtonClicked(ptMouse, brestart.pos, brestart.size))
	{
		endpage=0;
		InvalidateRect(hWnd, NULL, TRUE);
		Restart();
		gameStatus.status=gamestatusjustnow;
		gamestatusjustnow=0;
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		Render(hWnd);
	
	}
}

VOID Adown ()
{
	int i,j;
	//己方控制
if (heroside==0&&(roundstate==0||roundstate==1)&&team1throwstate==0)
{

	if (forcestate==0)
	{
		zhunxinstate=0;
	
		team1motionstate[heroorder1]=1;
		motionteam1[heroorder1]=1;
	team1walkterrian[heroorder1]=-1;
	team1walk[heroorder1].pos.y = team1[heroorder1].pos.y;
	team1walk[heroorder1].pos.x=team1[heroorder1].pos.x-1;
	while (1)
{
	team1walk[heroorder1].pos.y+=10;
	for (i=0;i<m_terriansecond[team1walk[heroorder1].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team1walk[heroorder1].pos.x+LeftFoot][i]!=0)
		{ 
			if ((team1walk[heroorder1].pos.y+HERO_SIZE_Y)<m_terrian[team1walk[heroorder1].pos.x+LeftFoot][i].pos2.y)
			    if (team1walk[heroorder1].pos.y+HERO_SIZE_Y>=m_terrian[team1walk[heroorder1].pos.x+LeftFoot][i].pos1.y)
				{
					team1walkterrian[heroorder1]=i;
				}
		}
	}
	if (team1walkterrian[heroorder1]!=-1) break;
}

	if (m_terrian[team1[heroorder1].pos.x-1+LeftFoot][team1walkterrian[heroorder1]].pos1.y>=m_terrian[team1[heroorder1].pos.x+LeftFoot][team1terrian[heroorder1]].pos1.y)
		team1[heroorder1].vel.x=-1;
	else if (m_terrian[team1[heroorder1].pos.x+LeftFoot][team1terrian[heroorder1]].pos1.y-m_terrian[team1[heroorder1].pos.x-1+LeftFoot][team1walkterrian[heroorder1]].pos1.y<=3)
		team1[heroorder1].vel.x=-1;
	else team1[heroorder1].vel.x=0;
		
	}
	

}

//敌方控制

if (heroside==1&&(roundstate==0||roundstate==1))
{
	if (forcestate==0)
	{
		zhunxinstate=0;
		motionteam2[heroorder2]=1;
		team2motionstate[heroorder2]=1;

     team2walkterrian[heroorder2]=-1;
	team2walk[heroorder2] = team2[heroorder2];
	team2walk[heroorder2].pos.x=team2[heroorder2].pos.x-1;
	while (1)
{
	team2walk[heroorder2].pos.y+=10;
	for (i=0;i<m_terriansecond[team2walk[heroorder2].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team2walk[heroorder2].pos.x+LeftFoot][i]!=0)
		{ 
			if ((team2walk[heroorder2].pos.y+HERO_SIZE_Y)<m_terrian[team2walk[heroorder2].pos.x+LeftFoot][i].pos2.y)
			    if (team2walk[heroorder2].pos.y+HERO_SIZE_Y>=m_terrian[team2walk[heroorder2].pos.x+LeftFoot][i].pos1.y)
				{
					team2walkterrian[heroorder2]=i;
				}
		}
	}
	if (team2walkterrian[heroorder2]!=-1) break;
}

	if (m_terrian[team2[heroorder2].pos.x-1+LeftFoot][team2walkterrian[heroorder2]].pos1.y>=m_terrian[team2[heroorder2].pos.x+LeftFoot][team2terrian[heroorder2]].pos1.y)
		team2[heroorder2].vel.x=-1;
	else if (m_terrian[team2[heroorder2].pos.x+LeftFoot][team2terrian[heroorder2]].pos1.y-m_terrian[team2[heroorder2].pos.x-1+LeftFoot][team2walkterrian[heroorder2]].pos1.y<=3)
		team2[heroorder2].vel.x=-1;
	else team2[heroorder2].vel.x=0;
		
	}
}

}
VOID Ddown ()
{
	//己方
	int i;
if (heroside==0&&(roundstate==0||roundstate==1)&&team1throwstate==0)
{
	if (forcestate==0)
	{
		zhunxinstate=0;
		motionteam1[heroorder1]=2;
		team1motionstate[heroorder1]=1;

	team1walkterrian[heroorder1]=-1;
	team1walk[heroorder1] = team1[heroorder1];
	team1walk[heroorder1].pos.x=team1[heroorder1].pos.x+1;
		while (1)
{
	team1walk[heroorder1].pos.y+=10;
	for (i=0;i<m_terriansecond[team1walk[heroorder1].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team1walk[heroorder1].pos.x+LeftFoot][i]!=0)
		{ 
			if ((team1walk[heroorder1].pos.y+HERO_SIZE_Y)<m_terrian[team1walk[heroorder1].pos.x+LeftFoot][i].pos2.y)
			    if (team1walk[heroorder1].pos.y+HERO_SIZE_Y>=m_terrian[team1walk[heroorder1].pos.x+LeftFoot][i].pos1.y)
				{
					team1walkterrian[heroorder1]=i;
				}
		}
	}
	if (team1walkterrian[heroorder1]!=-1) break;
}

	if (m_terrian[team1[heroorder1].pos.x+1+LeftFoot][team1walkterrian[heroorder1]].pos1.y>=m_terrian[team1[heroorder1].pos.x+LeftFoot][team1terrian[heroorder1]].pos1.y)
		team1[heroorder1].vel.x=1;
	else if (m_terrian[team1[heroorder1].pos.x+LeftFoot][team1terrian[heroorder1]].pos1.y-m_terrian[team1[heroorder1].pos.x+1+LeftFoot][team1walkterrian[heroorder1]].pos1.y<=3)
		team1[heroorder1].vel.x=1;
	else team1[heroorder1].vel.x=0;


	}
 }


//敌方
if (heroside==1&&(roundstate==0||roundstate==1))
{
	if (forcestate==0)
	{
		zhunxinstate=0;
		motionteam2[heroorder2]=2;
		team2motionstate[heroorder2]=1;
	  team2walkterrian[heroorder2]=-1;
	team2walk[heroorder2] = team2[heroorder2];
	team2walk[heroorder2].pos.x=team2[heroorder2].pos.x+1;
	while (1)
{
	team2walk[heroorder2].pos.y+=10;
	for (i=0;i<m_terriansecond[team2walk[heroorder2].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team2walk[heroorder2].pos.x+LeftFoot][i]!=0)
		{ 
			if ((team2walk[heroorder2].pos.y+HERO_SIZE_Y)<m_terrian[team2walk[heroorder2].pos.x+LeftFoot][i].pos2.y)
			    if (team2walk[heroorder2].pos.y+HERO_SIZE_Y>=m_terrian[team2walk[heroorder2].pos.x+LeftFoot][i].pos1.y)
				{
					team2walkterrian[heroorder2]=i;
				}
		}
	}
	if (team2walkterrian[heroorder2]!=-1) break;
}

	if (m_terrian[team2[heroorder2].pos.x+1+LeftFoot][team2walkterrian[heroorder2]].pos1.y>=m_terrian[team2[heroorder2].pos.x+LeftFoot][team2terrian[heroorder2]].pos1.y)
		team2[heroorder2].vel.x=1;
	else if (m_terrian[team2[heroorder2].pos.x+LeftFoot][team2terrian[heroorder2]].pos1.y-m_terrian[team2[heroorder2].pos.x+1+LeftFoot][team2walkterrian[heroorder2]].pos1.y<=3)
		team2[heroorder2].vel.x=1;
	else team2[heroorder2].vel.x=0;
		
	  }
}
}
VOID Spacedown ()
{
	//己方
if (heroside==0&&roundstate==0)
{
if (forcestate==0)
	{
	    zhunxinstate=0;
  		if (team1[heroorder1].pos.y>=m_terrian[team1[heroorder1].pos.x+LeftFoot][team1terrian[heroorder1]].pos1.y-HERO_SIZE_Y&&jump==INTERVALJUMP&&team1throwstate==0&&team1launchstate==0)
		{
			team1[heroorder1].vel.y = -HERO_VEL_Y;
			jump=0;
		}
	}
}

//敌方
if (heroside==1&&roundstate==0)
{
if (forcestate==0)
	{
	    zhunxinstate=0;
  		if (team2[heroorder2].pos.y>=m_terrian[team2[heroorder2].pos.x+LeftFoot][team2terrian[heroorder2]].pos1.y-HERO_SIZE_Y&&jump==INTERVALJUMP)
		{
			team2[heroorder2].vel.y = -HERO_VEL_Y;
			jump=0;
		}
	}
}
}
VOID Aup()
{
	//己方
	if(heroside==0)
{
	if (forcestate==0)
	{
		team1motionstate[heroorder1]=0;
		walk1=0;
		team1times[heroorder1]=1;
	    team1[heroorder1].vel.x = 0;
	}
	}
	//敌方
		if(heroside==1)
{
	if (forcestate==0)
	{
		team2motionstate[heroorder2]=0;
		walk1=0;
		team2times[heroorder2]=4;
	    team2[heroorder2].vel.x = 0;
	}
	}
}
VOID Dup()
{
	//己方
	if (heroside==0)
{
if (forcestate==0)
	{
		team1motionstate[heroorder1]=0;
		walk1=0;	
		team1times[heroorder1]=1;
		team1[heroorder1].vel.x = 0;
	}
	}
	//敌方
	if (heroside==1)
{
if (forcestate==0)
	{
		team2motionstate[heroorder2]=0;
		walk1=0;	
		team2times[heroorder2]=4;
		team2[heroorder2].vel.x = 0;
	}
	}

}

VOID CreateMap1 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num)
{
	int i,j,k,ran[2500],R[2500];
	for (i=posleft;i<=posright;i++)
	{
		m_terrian[i][m_terriansecond[i]]= CreateTerrian (i,postop,i,posbottom,NULL);
		terrianstate[i][m_terriansecond[i]]=1;
		m_terriansecond[i]++;
	}
	ran[0]=rand();
	for(i=1;i<=maxC;i++)
	{
	ran[i]=rand();
	R[i]=ran[i]%maxR+100;
	ran[i]%=range+start; 
	}
	for (i=posleft;i<=posright;i++)
		for (j=1;j<=maxC;j++)
			if (m_terrian[i][num].pos1.x==ran[j])
			{  if(jueduizhi(ran[j]-ran[j-1])<60)	continue;
				int x,y;
				for(k=ran[j]-sqrt((float)R[j]*(float)R[j]-10000);k<ran[j]+sqrt((float)R[j]*(float)R[j]-10000);k++)
				{ 
				x=ran[j]-k;
				y=sqrt((float)R[j]*(float)R[j]-(float)x*(float)x);
				if (k>posleft&&k<posright)
				m_terrian[k][num]= CreateTerrian (k,m_terrian[k][num].pos1.y-y+100,k,posbottom,NULL);
				else    
				continue;
		        }
			}
	return;
}

VOID CreateMap3 (int posleft,int posright,int postop,int posbottom,int maxR,int maxC,int range,int start,int num)
{
		int i,j,k,ran[2000],R[2000];
	for (i=posleft;i<=posright;i++)
	{
		m_terrian[i][m_terriansecond[i]]= CreateTerrian (i,postop,i,posbottom,NULL);
		terrianstate[i][m_terriansecond[i]]=1;
		m_terriansecond[i]++;
	}
	ran[0]=rand();
	for(i=1;i<=maxC;i++)
	{
	ran[i]=rand();
	R[i]=ran[i]%maxR+100;
	ran[i]%=range+start; 
	}
	for (i=posleft;i<=posright;i++)
		for (j=1;j<=maxC;j++)
			if (m_terrian[i][num].pos1.x==ran[j])
			{  if(jueduizhi(ran[j]-ran[j-1])<60)	continue;
				int x,y;
				for(k=ran[j]-sqrt((float)R[j]*(float)R[j]-10000);k<ran[j]+sqrt((float)R[j]*(float)R[j]-10000);k++)
				{ 
				x=ran[j]-k;
				y=sqrt((float)R[j]*(float)R[j]-(float)x*(float)x);
				if (k>posleft&&k<posright)
				m_terrian[k][num]= CreateTerrian (k,m_terrian[k][num].pos1.y-y+100,k,posbottom,NULL);
				else    
				continue;
		        }
			}


	ran[0]=rand();
	for(i=1;i<=maxC;i++)
	{
	ran[i]=rand();
	R[i]=ran[i]%20+20;
	ran[i]%=range+start; 
	}
	for (i=posleft;i<=posright;i++)
		for (j=1;j<=maxC;j++)
			if (m_terrian[i][num].pos1.x==ran[j])
			{  if(jueduizhi(ran[j]-ran[j-1])<60)	continue;
				int x,y;
				for(k=ran[j]-sqrt((float)R[j]*(float)R[j]-100);k<ran[j]+sqrt((float)R[j]*(float)R[j]-100);k++)
				{ 
				x=ran[j]-k;
				y=sqrt((float)R[j]*(float)R[j]-(float)x*(float)x);
				if (k>posleft&&k<posright)
				m_terrian[k][num].pos2.y= m_terrian[k][num].pos2.y-y+10;
				else   	continue;
		        }
			}
    return;
}

VOID CreateMap2 (int posleft,int posright,int postop,int posdown)
{
	int i;
	for (i=posleft;i<posright;i++)
	{
		terrianstate[i][m_terriansecond[i]]=-1;
		m_terrian[i][m_terriansecond[i]] = CreateTerrian(i,postop,i,posdown,NULL);
		m_terriansecond[i]++;
	}
}

//旋转函数
/*VOID Rotate (HDC hdc)
{   
	SetGraphicsMode(hdc,GM_ADVANCED);
	XFORM rotate;
	float s,c,x0,y0;
	float *S,*C;
	S=&s;
	C=&c;
	s=0;
	c=-1;
	//angle (6,24,C,S);
	x0=float(m_hero.pos.x)+float(HERO_SIZE_X)/2;
	y0=float(m_hero.pos.y)+float(HERO_SIZE_Y)/2;
	rotate.eM11=c;
	rotate.eM12=s;
	rotate.eM21=-s;
	rotate.eM22=c;
	rotate.eDx=x0-c*x0+s*y0;
	rotate.eDy=y0-c*y0-s*x0;
	SetWorldTransform(hdc,&rotate);
	SetGraphicsMode(hdc,GM_COMPATIBLE);
	return;
}
*/
//绝对值函数
int jueduizhi (int a)
{
	if (a>0) return a;
	else return -a;
}

//角度函数
/*VOID angle (int x1,int x2,float *C,float *S)//x1<x2
{   
	float min1,min2,pos1,pos2,line;
	min1=m_terrian[m_hero.pos.x+x1].pos1.y;
	min2=m_terrian[m_hero.pos.x+x2].pos1.y;
	line=sqrt(float((min1-min2)*(min1-min2)+(x1-x2)*(x1-x2)));
	*S=float((min1-min2))/(float)line;
	*C=float((x2-x1))/(float)line;
	return;
}
*/
//给准心结构体赋值
ZhunXin CreateZhunXin(int r, HBITMAP hBmp)
{

	ZhunXin a;
	a.hzx = hBmp;
	if (motionteam1[0]==-1)
	a.pos.x = team1[0].pos.x-r;
	if (motionteam1[0]==-2)
	a.pos.x = team1[0].pos.x+r;
	
	a.vel.x=0;
	a.vel.y=0;
	a.jiaodu=0;
	a.w=0;
	a.r=r;
	a.pos.y = team1[0].pos.y;
	a.size.cx = 30;
	a.size.cy = 30;
	return a;
}

//按键-力度控制对应函数
VOID Forcevkrightdown ()
{   
	//己方
if (heroside==0)
{
	if (weaponteam1[heroorder1]==0||weaponteam1[heroorder1]==1)
	{
	if(zhunxinstate==1&&motionteam1[heroorder1]==-2)
	{
	   zhunxinstate=0;
	   forcestate=1;
	}
	if (motionteam1[heroorder1]==-2&&forcestate==1)
		if(force==INTERVALFORCE&&m_force.line<=MAXLINE-FORCESPEED)
			{
			m_force.line+=FORCESPEED;
			force=0;
	        }
	}
	else if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
		m_zhunxin.vel.x=5;
}

//敌方
if (heroside==1)
{
	if (weaponteam2[heroorder2]==0||weaponteam2[heroorder2]==1)
	{
	if(zhunxinstate==1&&motionteam2[heroorder2]==-2)
	{
	   zhunxinstate=0;
	   forcestate=1;
	}
	if (motionteam2[heroorder2]==-2&&forcestate==1)
		if(force==INTERVALFORCE&&m_force.line<=MAXLINE-FORCESPEED)
			{
			m_force.line+=FORCESPEED;
			force=0;
	        }
	}
	else if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
		m_zhunxin.vel.x=5;
}

if (zhunxinstate==0&&forcestate==0)
{
	cameracontrol=1;
	if (camera1.x+WNDWIDTH*proportion<1920)
	camera1.x+=CAMERASPEED;
	else if (camera1.x+WNDWIDTH*proportion>1920)
	camera1.x=2560-WNDWIDTH*proportion;
}
   return;
}
VOID Forcevkleftdown ()
{   
	//己方
if (heroside==0)
{
	if (weaponteam1[heroorder1]==0||weaponteam1[heroorder1]==1)
	{
	if(zhunxinstate==1&&motionteam1[heroorder1]==-1)
	{
	   zhunxinstate=0;
	   forcestate=1;
	}
	if (motionteam1[heroorder1]==-1&&forcestate==1)
		if(force==INTERVALFORCE&&m_force.line<=MAXLINE)
		   {
			m_force.line+=FORCESPEED;
			force=0;
	       }
	}
	else if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
		m_zhunxin.vel.x=-5;
}

//敌方
if (heroside==1)
{
	if (weaponteam2[heroorder2]==0||weaponteam2[heroorder2]==1)
	{
	if(zhunxinstate==1&&motionteam2[heroorder2]==-1)
	{
	   zhunxinstate=0;
	   forcestate=1;
	}
	if (motionteam2[heroorder2]==-1&&forcestate==1)
		if(force==INTERVALFORCE&&m_force.line<=MAXLINE)
		   {
			m_force.line+=FORCESPEED;
			force=0;
	       }
	}
	else if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
		m_zhunxin.vel.x=-5;
}

	
if (zhunxinstate==0&&forcestate==0)
{
	cameracontrol=1;
	if (camera1.x>0)
		camera1.x-=CAMERASPEED;
	else if (camera1.x<0||weapon4state==1)
		camera1.x=0;
}
	return;
}
VOID Forcevkrightup()
{
	//己方
if (heroside==0)
{

if (weaponteam1[heroorder1]==0)
{zhunxinstate=0;
	if(motionteam1[heroorder1]==-2&&forcestate==1)
	{
		forcestate=0;
     	team1throwstate=1;
	}
}
if (weaponteam1[heroorder1]==1)
{zhunxinstate=0;
	if(motionteam1[heroorder1]==-2&&forcestate==1)
	{
		forcestate=0;
     	team1launchstate=1;
	}
}
if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
	m_zhunxin.vel.x=0;
}
//敌方
if (heroside==1)
{
	
	
	if (weaponteam2[heroorder2]==0)
	{
zhunxinstate=0;
	if(motionteam2[heroorder2]==-2&&forcestate==1)
	{
		forcestate=0;
     	shouleistate=0;
	}
	}
	if (weaponteam2[heroorder2]==1)
	{
		zhunxinstate=0;
	if(motionteam2[heroorder2]==-2&&forcestate==1)
	{
		forcestate=0;
     	rocketstate=0;
	}
	}
	if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
		m_zhunxin.vel.x=0;
}
    cameracontrol=0;
	return;
}
VOID Forcevkleftup()
{
	//己方
if (heroside==0)
{
	
	if (weaponteam1[heroorder1]==0)
	{
		zhunxinstate=0;
	if (motionteam1[heroorder1]==-1&&forcestate==1)
	{   
		team1throwstate=1;
		forcestate=0;
	}
	}
	if (weaponteam1[heroorder1]==1)
	{
		zhunxinstate=0;
	if (motionteam1[heroorder1]==-1&&forcestate==1)
	{   
		team1launchstate=1;
		forcestate=0;
	}
	}
	if (weaponteam1[heroorder1]==2||weaponteam1[heroorder1]==4)
		m_zhunxin.vel.x=0;
}
//敌方
if (heroside==1)
{
	if (weaponteam2[heroorder2]==0)
	{zhunxinstate=0;
	if (motionteam2[heroorder2]==-1&&forcestate==1)
	{   
		shouleistate=0;
		forcestate=0;
	}
	}
	if (weaponteam2[heroorder2]==1)
	{zhunxinstate=0;
	if (motionteam2[heroorder2]==-1&&forcestate==1)
	{   
		rocketstate=0;
		forcestate=0;
	}
	}
	if (weaponteam2[heroorder2]==2||weaponteam2[heroorder2]==4)
		m_zhunxin.vel.x=0;
}
cameracontrol=0;
	return;
}

//初始化手雷
ShouLei CreateShouLei(HBITMAP hBmp)
{
	ShouLei a;
	a.pos.x=team1[0].pos.x;
	a.pos.y=team1[0].pos.y;
	a.size.cx=SHOULEI_SIZE_X;
	a.size.cy=SHOULEI_SIZE_Y;
	a.vel.x=0;
	a.vel.y=0;
	a.acceleration.x=0;
	a.acceleration.y=0;
	a.hsl=hBmp;
    return a;
}
Rocket CreateRocket (HBITMAP hBmp)
{
	Rocket a;
	a.pos.x=team1[0].pos.x;
	a.pos.y=team1[0].pos.y;
	a.size.cx=ROCKET_SIZE_X;
	a.size.cy=ROCKET_SIZE_Y;
	a.vel.x=0;
	a.vel.y=0;
	a.acceleration.x=0;
	a.acceleration.y=0;
	a.hBmp=hBmp;
    return a;

}

//手雷碰撞
VOID ShouLeiCrush ()
{
	int i;
	//与地形碰撞判断 
	if (m_shoulei.vel.x>0)
	{
		for (i=0;i<m_terriansecond[m_shoulei.pos.x];i++)
	  {  
		    if (terrianstate[m_shoulei.pos.x+SHOULEI_SIZE_X][i]!=0)
		{
		    if ((m_shoulei.pos.y+SHOULEI_SIZE_Y)<m_terrian[m_shoulei.pos.x][i].pos2.y)
			    if (m_shoulei.pos.y+SHOULEI_SIZE_Y>=m_terrian[m_shoulei.pos.x][i].pos1.y)
				   shouleistate=4;
	     	if (m_shoulei.pos.y>m_terrian[m_shoulei.pos.x][i].pos1.y)
			    if (m_shoulei.pos.y<=m_terrian[m_shoulei.pos.x][i].pos2.y)
				   shouleistate=4;
		}
	  }
	}

	if (m_shoulei.vel.x<0)
	{   
		for (i=0;i<m_terriansecond[m_shoulei.pos.x];i++)
	  {
		  if(terrianstate[m_shoulei.pos.x][i]!=0)
		  {
		     if ((m_shoulei.pos.y+SHOULEI_SIZE_Y)<m_terrian[m_shoulei.pos.x][i].pos2.y)
			     if (m_shoulei.pos.y+SHOULEI_SIZE_Y>=m_terrian[m_shoulei.pos.x][i].pos1.y)
				      shouleistate=4;
		     if (m_shoulei.pos.y>m_terrian[m_shoulei.pos.x][i].pos1.y)
			     if (m_shoulei.pos.y<=m_terrian[m_shoulei.pos.x][i].pos2.y)
				      shouleistate=4;
		  }
	  }
	}

	if (m_shoulei.vel.x==0)
	{  
		for (i=0;i<m_terriansecond[m_shoulei.pos.x];i++)
		{
			 if(terrianstate[m_shoulei.pos.x][i]!=0)
		        if ((m_shoulei.pos.y+SHOULEI_SIZE_Y)>=m_terrian[m_shoulei.pos.x][i].pos1.y)
		            shouleistate=4;
		}
	 }
	
	if (shouleistate==4)
	{
	 if (explodesoundstate==0)
	 {
	  mciSendString(TEXT("open res//explode.mp3 alias ex"),NULL,0,NULL);
	  mciSendString(TEXT("play ex"),NULL,0,NULL);
	  mciSendString(TEXT("setaudio ex volume to 60"),NULL,0,NULL);

	  explodesoundstate=1;
	 }
	}
}
VOID RocketCrush()
{
	int i;
	//与地形碰撞判断 
	if (m_rocket.vel.x>0)
	{
		for (i=0;i<m_terriansecond[m_rocket.pos.x];i++)
	  {  
		    if (terrianstate[m_rocket.pos.x+ROCKET_SIZE_X][i]!=0)
		{
		    if ((m_rocket.pos.y+ROCKET_SIZE_Y)<m_terrian[m_rocket.pos.x][i].pos2.y)
			    if (m_rocket.pos.y+ROCKET_SIZE_Y>=m_terrian[m_rocket.pos.x][i].pos1.y)
				   rocketstate=4;
	     	if (m_rocket.pos.y>m_terrian[m_rocket.pos.x][i].pos1.y)
			    if (m_rocket.pos.y<=m_terrian[m_rocket.pos.x][i].pos2.y)
				   rocketstate=4;
		}
	  }
	}

	if (m_rocket.vel.x<0)
	{   
		for (i=0;i<m_terriansecond[m_rocket.pos.x];i++)
	  {
		  if(terrianstate[m_rocket.pos.x][i]!=0)
		  {
		     if ((m_rocket.pos.y+ROCKET_SIZE_Y)<m_terrian[m_rocket.pos.x][i].pos2.y)
				 if (m_rocket.pos.y+ROCKET_SIZE_Y>=m_terrian[m_rocket.pos.x][i].pos1.y)
				      rocketstate=4;
		     if (m_rocket.pos.y>m_terrian[m_rocket.pos.x][i].pos1.y)
			     if (m_rocket.pos.y<=m_terrian[m_rocket.pos.x][i].pos2.y)
				      rocketstate=4;
		  }
	  }
	}

	if (m_rocket.vel.x==0)
	{  
		for (i=0;i<m_terriansecond[m_rocket.pos.x];i++)
		{
			 if(terrianstate[m_rocket.pos.x][i]!=0)
		        if ((m_rocket.pos.y+ROCKET_SIZE_Y)>=m_terrian[m_rocket.pos.x][i].pos1.y)
		            rocketstate=4;
		}
	 }

	if (rocketstate==4)
	{
	 if (explodesoundstate==0)
	 {
	  mciSendString(TEXT("open res//explode.mp3 alias ex"),NULL,0,NULL);
	  mciSendString(TEXT("play ex"),NULL,0,NULL);
	  mciSendString(TEXT("setaudio ex volume to 60"),NULL,0,NULL);
	  explodesoundstate=1;
	 }
	}

}

//手雷伤害
VOID ShouLeiDamage ()
{
	int i=0;
	float distance,x,y;
	if (shouleistate==6&&shouleistate1==0)
	{
	for (i=0;i<3;i++)
	{
		x=team1[i].pos.x-m_shoulei.pos.x;
		y=team1[i].pos.y-m_shoulei.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team1xietiao[i]-=35;
		else if (distance<=20)
			team1xietiao[i]-=27;
		else if (distance<=30)
			team1xietiao[i]-=15;
		else if (distance<=40)
			team1xietiao[i]-=7;
	if (team1xietiao[i]<0) team1xietiao[i]=0;
	}
	for (i=0;i<3;i++)
	{
		x=team2[i].pos.x-m_shoulei.pos.x;
		y=team2[i].pos.y-m_shoulei.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team2xietiao[i]-=35;
		else if (distance<=20)
			team2xietiao[i]-=27;
		else if (distance<=30)
			team2xietiao[i]-=15;
		else if (distance<=40)
			team2xietiao[i]-=7;
	if (team2xietiao[i]<0) team2xietiao[i]=0;
	}
		shouleistate1=2;
	}
}
VOID RocketDamage()
{
	int i=0;
	float distance,x,y;
	if (rocketstate==6&&rocketstate1==0)
	{
	for (i=0;i<3;i++)
	{
		x=team1[i].pos.x-m_rocket.pos.x;
		y=team1[i].pos.y-m_rocket.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team1xietiao[i]-=35;
		else if (distance<=20)
			team1xietiao[i]-=27;
		else if (distance<=30)
			team1xietiao[i]-=15;
		else if (distance<=40)
			team1xietiao[i]-=7;
		else if (distance<=50)
			team1xietiao[i]-=3;
	if (team1xietiao[i]<0) team1xietiao[i]=0;
	}
	for (i=0;i<3;i++)
	{
		x=team2[i].pos.x-m_rocket.pos.x;
		y=team2[i].pos.y-m_rocket.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team2xietiao[i]-=35;
		else if (distance<=20)
			team2xietiao[i]-=27;
		else if (distance<=30)
			team2xietiao[i]-=15;
		else if (distance<=40)
			team2xietiao[i]-=7;
		else if (distance<=50)
			team2xietiao[i]-=3;
	if (team2xietiao[i]<0) team2xietiao[i]=0;
	}
		rocketstate1=2;
	}
}
//回合更新
VOID RoundUpdate ()
{   
	//倒计时
	if ((roundstate==0&&roundtime==ROUNDTIME)||skip==1)
	{
		roundtime=0;
		roundstate=1;
		skip=2;
	}
	if (shouleistate==9)
	{
		roundstate=1;
		roundtime=0;
		shouleistate=5;
	}
	if (rocketstate==3)
	{
		roundstate=1;
		roundtime=0;
		rocketstate=5;
	}
	if (transtate==3)
	{
		roundstate=1;
		roundtime=0;
		transtate=0;
	}

	if (boomstate==6)
	{
		roundstate=1;
		roundtime=0;
		boomstate=7;;
	}
	if (heroside==0)
		if (team1xietiao[heroorder1]==0)
			roundstate=1;

	if (heroside==1)
		if (team2xietiao[heroorder2]==0)
			roundstate=2;

	if (roundtime%50==0) timepast=roundtime/50;
	if (roundstate==1&&roundtime==ROUNDENDTIME)
	{
		timepast=0;
		roundtime=0;
		roundstate=2;
	}

	//回合更新
	if (roundstate==2)
	{	
		
		roundstart1=0;
		RoundEnd();
	   if(forcestate==1)
	  {
		forcestate=0;
     	shouleistate=0;
	  }
		if(heroside==0)
		{  
			while (1)
		{
			heroorder1+=1;
			if (heroorder1==3)	heroorder1=0;
			if (team1xietiao[heroorder1]!=0) break;
			if (team1xietiao[0]==0&&team1xietiao[1]==0&&team1xietiao[2]==0) 
				{
					gameend=1;
					gameStatus.status=7;
					break;
			     }
		}
			heroside=1;
		}
		else
		{   
		 while (1)
		 {
			heroorder2+=1;
			if (heroorder2==3)	heroorder2=0;
			if (team2xietiao[heroorder2]!=0) break;
			if (team2xietiao[0]==0&&team2xietiao[1]==0&&team2xietiao[2]==0)
				{
					gameend=1;
					gameStatus.status=7;
					break;
		     	}
		 }
			heroside=0;
		}
		timepast=0;
		m_zhunxin.jiaodu=0;
     	shouleistate=1;
     	shouleistate1=1;
	    m_force.line=0;
        force=INTERVALFORCE;
		shouleiexplodepicture=0;
		shouleiwait=0;
		roundstate=0;
		team1throwstate=0;

		if (weapon4use==0)
		{
			if (weapon4side==0)
			{
				weaponteam1[weapon4num]=0;
			}
			else if (weapon4side==1)
			{
				weaponteam2[weapon4num]=0;
			}
			weapon4state=0;
			weapon4num=-1;
			weapon4side=-1;
		}

		if (heroside==0&&weapon4side==0)
		{
			if (heroorder1==weapon4num)
				weapon4state=1;
			else weapon4state=0;
		}
		else if (heroside==1&&weapon4side==1)
		{
			if (heroorder2==weapon4num)
				weapon4state=1;
			else weapon4state=0;
		}


		if (roundcount<ENDTIME) roundcount++;
		if (roundcount==ENDTIME) 
			{
				allover=1;
		     }

		 planestate=0;
         boomstate=1,boomstate1=1;
         boompic=0;

		rocketstate=1;
		rocketstate1=1;
		rocketexplodepicture=0;
		team1launchstate=0;
		soundstart=0;
		skip=0;
		AIstart=0;
		AIattack=0;
		AIdirection=-1;
		AIcount=0;
		AImovestate=0;
		AIzhunxinstate=0;
		limitstate=0;
		hurtsoundstate=0;
		explodesoundstate=0;
	}


}

//人物坠落碰撞
VOID HeroCrush ()
{
	if (renderagain==0)
	{
	int i,j;
for (j=0;j<3;j++)
{
	if (team1xietiao[j]!=0)
{
	team1terrian[j]=-1;
	if (team1imitate[j].pos.y==team1[j].pos.y&&team1imitate[j].pos.x==team1[j].pos.x)
		continue;
	else 
	{
		team1imitate[j] = team1[j];
	while (1)
{
	if (team1imitate[j].pos.y>1920||team1imitate[j].pos.y<0)
		team1imitate[j].pos.y=team1[j].pos.y;

	team1imitate[j].pos.y+=10;
	for (i=0;i<m_terriansecond[team1[j].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team1imitate[j].pos.x+LeftFoot][i]!=0)
		{ 
			if ((team1imitate[j].pos.y+HERO_SIZE_Y)<m_terrian[team1[j].pos.x+LeftFoot][i].pos2.y)
			    if (team1imitate[j].pos.y+HERO_SIZE_Y>=m_terrian[team1[j].pos.x+LeftFoot][i].pos1.y)
				{
					team1terrian[j]=i;
				}
		}
	}
	if (team1terrian[j]!=-1) break;
}
	}
	}
}
for (i=0;i<3;i++)
{
	if (team1xietiao[i]!=0)
	{
	if (team1[i].pos.y<m_terrian[team1[i].pos.x+LeftFoot][team1terrian[i]].pos1.y-HERO_SIZE_Y) team1[i].acceleration.y=GRAVITY;
	else if (team1[i].pos.y>m_terrian[team1[i].pos.x+LeftFoot][team1terrian[i]].pos1.y-HERO_SIZE_Y)
	{
		team1[i].pos.y=m_terrian[team1[i].pos.x+LeftFoot][team1terrian[i]].pos1.y-HERO_SIZE_Y;
		team1imitate[j].pos.y=team1[j].pos.y;
		team1[i].vel.y=0;
		team1[i].acceleration.y=0;
	}
	}
}
//敌方模拟
for (j=0;j<3;j++)
{
	if (team2xietiao[j]!=0)
	{
	if (team2imitate[j].pos.y==team2[j].pos.y&&team2imitate[j].pos.x==team2[j].pos.x)
		continue;
	else 
		
	{
	team2imitate[j] = team2[j];
	team2terrian[j]=-1;
	while (1)
{
	if (team2imitate[j].pos.y>1920||team2imitate[j].pos.y<0)
		team2imitate[j].pos.y=team2[j].pos.y;

	team2imitate[j].pos.y +=10;
	for (i=0;i<m_terriansecond[team2[j].pos.x+LeftFoot];i++)
	{
 		if (terrianstate[team2imitate[j].pos.x+LeftFoot][i]!=0)
		{ 
			
			if ((team2imitate[j].pos.y+HERO_SIZE_Y)<m_terrian[team2[j].pos.x+LeftFoot][i].pos2.y)
			    if (team2imitate[j].pos.y+HERO_SIZE_Y>=m_terrian[team2[j].pos.x+LeftFoot][i].pos1.y)
				{
					team2terrian[j]=i;
				}
		}
	}
	if (team2terrian[j]!=-1) break;
}
	}
	}

}
for (i=0;i<3;i++)
{
	if (team2xietiao[i]!=0)
	{
	if (team2[i].pos.y<m_terrian[team2[i].pos.x+LeftFoot][team2terrian[i]].pos1.y-HERO_SIZE_Y) team2[i].acceleration.y=GRAVITY;
	else if (team2[i].pos.y>m_terrian[team2[i].pos.x+LeftFoot][team2terrian[i]].pos1.y-HERO_SIZE_Y)
	{
		team2[i].pos.y=m_terrian[team2[i].pos.x+LeftFoot][team2terrian[i]].pos1.y-HERO_SIZE_Y;
			team2imitate[j].pos.y=team2[j].pos.y;
		team2[i].vel.y=0;
		team2[i].acceleration.y=0;
	}
	}
}	

//掉入岩浆烧死
for (i=0;i<3;i++)
   if (terrianstate[team1[i].pos.x+LeftFoot][team1terrian[i]]==-1) 
	   team1xietiao[i]=0;
for (i=0;i<3;i++)
	if (terrianstate[team2[i].pos.x+LeftFoot][team2terrian[i]]==-1)
		team2xietiao[i]=0;
	}
}

//箭头更新
VOID JianTouUpdate ()
{
	//己方箭头指示
	if (heroside==0)
{	
	jiantoudeltay += redjiantou.vel.y;
	redjiantou.vel.y += redjiantou.acceleration.y;
   if(roundstart1-roundstart2==-1)
   {
	redjiantou.acceleration.y=1;
	redjiantou.pos.x=team1[heroorder1].pos.x;
	jiantoudeltay=-20;
	roundstart1=1;
   } 
   redjiantou.pos.x=team1[heroorder1].pos.x;
   if (jiantoudeltay>=0)
     {
	   redjiantou.acceleration.y=0;
	   redjiantou.vel.y=-1;
     }
   if (jiantoudeltay<=-12&&redjiantou.vel.y<0)
   {
	   redjiantou.vel.y=1;
   }
} 
	redjiantou.pos.y=team1[heroorder1].pos.y+jiantoudeltay;
	//敌方箭头指示
	if (heroside==1)
{
	bluejiantou.vel.y += bluejiantou.acceleration.y;
	jiantoudeltay += bluejiantou.vel.y;
	  if(roundstart1-roundstart2==-1)
   {
	bluejiantou.pos.x=team2[heroorder2].pos.x;
	jiantoudeltay=-20;
	bluejiantou.acceleration.y=1;
	roundstart1=1;
   }
	  bluejiantou.pos.x=team2[heroorder2].pos.x;
	 if (jiantoudeltay>=0)
	 {
	   bluejiantou.acceleration.y=0;
	   bluejiantou.vel.y=-1;
	 }
     if (jiantoudeltay<=-12&&bluejiantou.vel.y<0)
	   {
		   bluejiantou.vel.y=1;	
	    }
}
	bluejiantou.pos.y=team2[heroorder2].pos.y+jiantoudeltay;
}

//手雷爆炸图片更新函数
VOID ShouLeiExplodeUpdate ()
{
	shouleiexplode.pos.x = m_shoulei.pos.x;
	shouleiexplode.pos.y = m_shoulei.pos.y;
}
VOID RocketExplodeUpdate ()
{
	rocketexplode.pos.x = m_rocket.pos.x;
	rocketexplode.pos.y = m_rocket.pos.y;
}

//手雷爆炸震飞效果
VOID ShouLeiMove()
{
	if (shouleistate==6&&shouleistate1==2)
	{
		float x,y,distance,S,C;
		int i;
		//己方震飞
		for (i=0;i<3;i++)
		{
			x=team1[i].pos.x-m_shoulei.pos.x;
			y=team1[i].pos.y-m_shoulei.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>SHOULEIMOVERANGE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team1[i].vel.x=SHOULEIMOVEVEL*C;
				team1[i].vel.y=SHOULEIMOVEVEL*S;
			}
		}
		//敌方震飞
			for (i=0;i<3;i++)
		{
			x=team2[i].pos.x-m_shoulei.pos.x;
			y=team2[i].pos.y-m_shoulei.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>SHOULEIMOVERANGE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team2[i].vel.x=SHOULEIMOVEVEL*C;
				team2[i].vel.y=SHOULEIMOVEVEL*S;
			}
		}
		shouleistate1=3;
		shouleistate=7;
	}
}
VOID RocketMove()
{
	if (rocketstate==6&&rocketstate1==2)
	{
		float x,y,distance,S,C;
		int i;
		//己方震飞
		for (i=0;i<3;i++)
		{
			x=team1[i].pos.x-m_rocket.pos.x;
			y=team1[i].pos.y-m_rocket.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>ROCKETMOVERANGE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team1[i].vel.x=ROCKETMOVEVEL*C;
				team1[i].vel.y=ROCKETMOVEVEL*S;
			}
		}
		//敌方震飞
			for (i=0;i<3;i++)
		{
			x=team2[i].pos.x-m_rocket.pos.x;
			y=team2[i].pos.y-m_rocket.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>ROCKETMOVERANGE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team2[i].vel.x=ROCKETMOVEVEL*C;
				team2[i].vel.y=ROCKETMOVEVEL*S;
			}
		}
		rocketstate1=3;
		rocketstate=7;
	}


}

//人物地面摩擦
VOID HeroFriction()
{
	int i;
	//己方地面阻力
	for (i=0;i<3;i++)
	{
		if (team1motionstate[i]==0)
		{
		if (team1[i].pos.y+HERO_SIZE_Y>=m_terrian[team1[i].pos.x+LeftFoot][team1terrian[i]].pos1.y&&team1[i].vel.x!=0)
		{
			if (team1[i].vel.x>0)
				team1[i].acceleration.x =-1;
			if (team1[i].vel.x<0)
				team1[i].acceleration.x = 1;
		}
		if (team1[i].vel.x==0)
			team1[i].acceleration.x=0;
		}
    }

	//敌方地面阻力
	for (i=0;i<3;i++)
	{
		if (team2motionstate[i]==0)
		{
		if (team2[i].pos.y+HERO_SIZE_Y>=m_terrian[team2[i].pos.x+LeftFoot][team2terrian[i]].pos1.y&&team2[i].vel.x!=0)
		{
			if (team2[i].vel.x>0)
				team2[i].acceleration.x =-1;
			if (team2[i].vel.x<0)
				team2[i].acceleration.x = 1;
		}
		if (team2[i].vel.x==0)
			team2[i].acceleration.x=0;
		}
    }


}

//动作状态更新
VOID HeroMotionUpdate()
{
	int i;
	//己方更新
	for (i=0;i<3;i++)
	{
	if (team1motionstate[i]==0)
	{
		if (motionteam1[i]==-1&&team1[i].vel.x!=0)
			motionteam1[i]=1;
		if (motionteam1[i]==-2&&team1[i].vel.x!=0)
			motionteam1[i]=2;
		if (motionteam1[i]==1&&team1[i].vel.x==0)
			{
				motionteam1[i]=-1;
				team1times[i]=1;
		    }
		if (motionteam1[i]==2&&team1[i].vel.x==0)
			{
				motionteam1[i]=-2;
				team1times[i]=1;
		    }
	}
	}
	//敌方更新
		for (i=0;i<3;i++)
	{
	if (team2motionstate[i]==0)
	{
		if (motionteam2[i]==-1&&team2[i].vel.x!=0)
			motionteam2[i]=1;
		if (motionteam2[i]==-2&&team2[i].vel.x!=0)
			motionteam2[i]=2;
		if (motionteam2[i]==1&&team2[i].vel.x==0)
			{
				motionteam2[i]=-1;
				team2times[i]=4;
		    }
		if (motionteam2[i]==2&&team2[i].vel.x==0)
			{
				motionteam2[i]=-2;
				team2times[i]=4;
		    }
	}
	
	}
}

//回合结束清算函数
VOID RoundEnd ()
{
	int i;
	if (heroside==0)
			team1motionstate[heroorder1]=0;
	if (heroside==1)
			team2motionstate[heroorder2]=0;
	for (i=0;i<3;i++)
	{
			team1[i].vel.x=0;
			team1[i].acceleration.x=0;
	}
	for (i=0;i<3;i++)
	{
			team2[i].vel.x=0;
			team2[i].acceleration.x=0;
	}
	
}

//控制减少血量
VOID  BloodDecrease ()
{
	int i;
	//己方
	for (i=0;i<3;i++)
	{
		if (team1xietiao1[i]-team1xietiao[i]!=0) 
			team1blooddecreasetime[i]++;

		if (team1xietiao1[i]-team1xietiao[i]>0&&hurtsoundstate==0)
		{
			int ran;
			ran=rand()%5;
			if (ran==0) mciSendString(TEXT("play res\\76hurt1.mp3"),NULL,0,NULL);
			if (ran==1) mciSendString(TEXT("play res\\76hurt2.mp3"),NULL,0,NULL);
			if (ran==2) mciSendString(TEXT("play res\\76hurt3.mp3"),NULL,0,NULL);
			if (ran==3) mciSendString(TEXT("play res\\76hurt4.mp3"),NULL,0,NULL);
			if (ran==4) mciSendString(TEXT("play res\\76hurt5.mp3"),NULL,0,NULL);
			hurtsoundstate=1;
		}

		if (team1blooddecreasetime[i]==BLOODDECREASETIME+1)
		{
			team1xietiao1[i]=team1xietiao[i];
			team1blooddecreasetime[i]=0;
		}
	}
	//敌方
			for (i=0;i<3;i++)
	{
		if (team2xietiao1[i]-team2xietiao[i]!=0) 
			team2blooddecreasetime[i]++;

		if (team2xietiao1[i]-team2xietiao[i]>0&&hurtsoundstate==0)
		{
			int ran;
			ran=rand()%5;
			if (ran==0) mciSendString(TEXT("play res\\mhurt1.mp3"),NULL,0,NULL);
			if (ran==1) mciSendString(TEXT("play res\\mhurt2.mp3"),NULL,0,NULL);
			if (ran==2) mciSendString(TEXT("play res\\mhurt3.mp3"),NULL,0,NULL);
			if (ran==3) mciSendString(TEXT("play res\\mhurt4.mp3"),NULL,0,NULL);
			if (ran==4) mciSendString(TEXT("play res\\mhurt5.mp3"),NULL,0,NULL);
			hurtsoundstate=1;
		}
		if (team2blooddecreasetime[i]==BLOODDECREASETIME+1)
		{
			team2xietiao1[i]=team2xietiao[i];
			team2blooddecreasetime[i]=0;
		}
	}
}
//Camera控制
VOID Camera()
{
	if(cameracontrol==0)
	{
	//camera
	if (heroside==0)
	{
			
		if (weaponteam1[heroorder1]==2&&zhunxinstate==1)
		{
	    	if (m_zhunxin.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_zhunxin.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_zhunxin.pos.x-WNDWIDTH/2*proportion;

			
			if (m_zhunxin.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_zhunxin.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_zhunxin.pos.y-WNDHEIGHT*0.5*proportion;
		}

		else if (weaponteam1[heroorder1]==4&&zhunxinstate==1)
		{
	    	if (m_zhunxin.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_zhunxin.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_zhunxin.pos.x-WNDWIDTH/2*proportion;

			
			if (m_zhunxin.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_zhunxin.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_zhunxin.pos.y-WNDHEIGHT*0.5*proportion;
		}
	
		else if (shouleistate==0||shouleistate==2||shouleistate==3||shouleistate==4||shouleistate==6||shouleistate==7)
		{
	    if (m_shoulei.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_shoulei.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_shoulei.pos.x-WNDWIDTH/2*proportion;

			
			if (m_shoulei.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_shoulei.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_shoulei.pos.y-WNDHEIGHT*0.5*proportion;
		}
	  
	  else if (rocketstate==0||rocketstate==2||rocketstate==3||rocketstate==4||rocketstate==6||rocketstate==7)
	  {
	      if (m_rocket.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_rocket.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_rocket.pos.x-WNDWIDTH/2*proportion;

			
			if (m_rocket.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_rocket.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_rocket.pos.y-WNDHEIGHT*0.5*proportion;
	 }

		  else if (planestate==2&&boomstate1==1)
	  {
	      if (plane.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (plane.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=plane.pos.x-WNDWIDTH/2*proportion;

			
			if (plane.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (plane.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=plane.pos.y-WNDHEIGHT*0.5*proportion;
	 }

		  else if (planestate==2&&boomstate1==0)
		  {
		     if (boom.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (boom.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=boom.pos.x-WNDWIDTH/2*proportion;

			
			if (boom.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (boom.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=boom.pos.y-WNDHEIGHT*0.5*proportion;
		  
		  }
		else
		{
			if (team1[heroorder1].pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (team1[heroorder1].pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=team1[heroorder1].pos.x-WNDWIDTH/2*proportion;

			
			if (team1[heroorder1].pos.y<WNDHEIGHT*0.75*proportion)
				camera.y=0;
			else if (team1[heroorder1].pos.y+WNDHEIGHT*0.25*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=team1[heroorder1].pos.y-WNDHEIGHT*0.75*proportion;
		}
	}
	if (heroside==1)
	{
		if (weaponteam2[heroorder2]==2&&zhunxinstate==1)
		{
		   if (m_zhunxin.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_zhunxin.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_zhunxin.pos.x-WNDWIDTH/2*proportion;

			
			if (m_zhunxin.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_zhunxin.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_zhunxin.pos.y-WNDHEIGHT*0.5*proportion;
		}
		
		else if (weaponteam2[heroorder2]==4&&zhunxinstate==1)
		{
		   if (m_zhunxin.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_zhunxin.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_zhunxin.pos.x-WNDWIDTH/2*proportion;

			
			if (m_zhunxin.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_zhunxin.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_zhunxin.pos.y-WNDHEIGHT*0.5*proportion;
		}
		else if (shouleistate==0||shouleistate==2||shouleistate==3||shouleistate==4||shouleistate==6||shouleistate==7)
		{
	    if (m_shoulei.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_shoulei.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_shoulei.pos.x-WNDWIDTH/2*proportion;

			
			if (m_shoulei.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_shoulei.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_shoulei.pos.y-WNDHEIGHT*0.5*proportion;
		}
	  else if (rocketstate==0||rocketstate==2||rocketstate==3||rocketstate==4||rocketstate==6||rocketstate==7)
	  {
	      if (m_rocket.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (m_rocket.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=m_rocket.pos.x-WNDWIDTH/2*proportion;

			
			if (m_rocket.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (m_rocket.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=m_rocket.pos.y-WNDHEIGHT*0.5*proportion;
	 }
		 else if (planestate==2&&boomstate1==1)
	  {
	      if (plane.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (plane.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=plane.pos.x-WNDWIDTH/2*proportion;

			
			if (plane.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (plane.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=plane.pos.y-WNDHEIGHT*0.5*proportion;
	 }

		  else if (planestate==2&&boomstate1==0)
		  {
		     if (boom.pos.x<WNDWIDTH/2*proportion)
				camera.x=0;
			else if (boom.pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else  camera.x=boom.pos.x-WNDWIDTH/2*proportion;

			
			if (boom.pos.y<WNDHEIGHT*0.5*proportion)
				camera.y=0;
			else if (boom.pos.y+WNDHEIGHT*0.5*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=boom.pos.y-WNDHEIGHT*0.5*proportion;
		  
		  }
	else{
			if (team2[heroorder2].pos.x<WNDWIDTH/2*proportion)
				camera.x=0;	
			else if (team2[heroorder2].pos.x+WNDWIDTH/2*proportion>1920)
				camera.x=1920-WNDWIDTH*proportion;
			else camera.x=team2[heroorder2].pos.x-WNDWIDTH/2*proportion;

			
			if (team2[heroorder2].pos.y<WNDHEIGHT*0.75*proportion)
				camera.y=0;
		   	else if (team2[heroorder2].pos.y+WNDHEIGHT*0.25*proportion>1080)
				camera.y=1080-WNDHEIGHT*proportion;
			else camera.y=team2[heroorder2].pos.y-WNDHEIGHT*0.75*proportion;
	    }
	}
	   
		if (camera.x>camera1.x)
		{
			 if ((camera.x-camera1.x)<12) camera1.x++;
		   	 else if ((camera.x-camera1.x)<40)   camera1.x+=6;
			 else if ((camera.x-camera1.x<80))  camera1.x+=12;
			 else camera1.x+=20;
		}
	
		if (camera.x<camera1.x)  
		{	
		   if ((camera1.x-camera.x)<12) camera1.x--;
		   else if ((camera1.x-camera.x)<40) camera1.x-=6;
		   else if ((camera1.x-camera.x)<80) camera1.x-=12;
		   else camera1.x-=20;
		}
		
     	
		if (camera.y>camera1.y) 
			{
				if ((camera.y-camera1.y)<12) camera1.y++; 
		        else if ((camera.y-camera1.y)<30) camera1.y+=4;
				else if ((camera.y-camera1.y)<80) camera1.y+=12;
				else camera1.y+=18;
		     }
	   
		if (camera.y<camera1.y) 
		{
			 if ((camera1.y-camera.y)<12) camera1.y--;
			else if ((camera1.y-camera.y)<30) camera1.y-=4;
			else if ((camera1.y-camera.y)<80) camera1.y-=12;
			else camera1.y-=18;
		}
	}

}

VOID WindUpdate()
{
	int random;
	random=rand ()%5;
	if (random==0) windvel=0;
	if (random==1) windvel=1;
	if (random==2) windvel=2;
	if (random==3) windvel=-1;
	if (random==4) windvel=-2;

}
VOID FoodUpdate()
{
	int i;
	for(i=0;i<6;i++)
	{
		if (foodstate[i]==0)
		{
		  foodpicture[i]=rand()%4;
		  food[i].pos.x=150+rand()%1200;
		  food[i].pos.y=m_terrian[food[i].pos.x+5][0].pos1.y;
		  foodstate[i]=1;
		  break;
		}
	}
	foodtimes=0;

}

VOID CrateUpdate()
{
	if (cratestate==1)
	{
	crate.pos.x=500+rand()%800;
	crate.pos.y=m_terrian[crate.pos.x+5][0].pos1.y;
	cratestate=2;
	}
}
VOID TransUpdate()
{

		if (heroside==0)
		{
			if (transtate==2)
			{
			  team1[heroorder1].pos.x=m_zhunxin.pos.x;
			  team1[heroorder1].pos.y=m_zhunxin.pos.y;
			}
		}
	   
		if (heroside==1)
		{
			if(transtate==2)
			{
				team2[heroorder2].pos.x=m_zhunxin.pos.x;
				team2[heroorder2].pos.y=m_zhunxin.pos.y;
			}
		}
}

VOID Restart()
{
	int i,j;
	for (i=0;i<6;i++)
	{
     foodstate[i]=0;//0表示未绘制，1表示绘制
	}
 foodtimes=0;
 for (i=0;i<1920;i++)
	 for (j=0;j<6;j++)
 terrianstate[i][j]=0;   //1用来表示土地，-1用来表示岩浆,0表示未初始化

 for (i=0;i<1920;i++)
 {
 m_terriansecond[i]=0;
 }
 for (i=0;i<4;i++)
{team1xietiao[i]=100;//己方血条
 team1xietiao1[i]=100;
 team1blooddecreasetime[i]=0;
 motionteam1[i]=-1;
 team1motionstate[i]=0;
  team1times[i]=1;
  weaponteam1[i]=0;
  team1walkterrian[i]=0;
 }

 for (i=0;i<9;i++)
 {
 team2xietiao[i]=100;//敌方血条
 team2xietiao1[i]=100;
 team2blooddecreasetime[i]=0;
 motionteam2[i]=-2;
 team2motionstate[i]=0;
 team2times[i]=4;
  weaponteam2[i]=0;
  team2walkterrian[i]=0;
 }


 jump= INTERVALJUMP;//表示跳跃间断时间
 zhunxinstate=0;   //准心状态1表示显现，0表示隐去
 forcestate=0;//力度条1表示显现，0表示隐去
 shouleistate=1,shouleistate1=1;//shouleistate用来表示手雷是否爆炸or是否绘制;0表示绘制,1表示隐去，2表示爆炸状态,4表示爆炸阻塞状态,3表示爆炸图片显示完毕;shouleistate1表示状态是否改变(1.是否造成伤害,2,是否震飞人,3.手雷初速的)，在Update中做出一次性的执行
 force = INTERVALFORCE;//表示 力度增长间断时间/写在60s更新函数
 roundtime=0;//用来计时实现回合
 roundstate=0;//用来表示回合阶段，回合阶段分为操作阶段（roundstate=0）,回合结束操作阶段（roundstate=1）,回合结束阶段(roundstate=2)
 heroorder1=0,heroorder2=0;//用来循环英雄(1表示循环己方，2表示敌方1)
 heroside=0;//用来指示控制两边。0表示控制己方，1表示控制敌方1。
timepast=0;//用来表示回合已经过去秒数
 roundstart1=0,roundstart2=1;//用来回合开始；roundstart1==0表示开始，roundstart==1表示回合中(用在箭头显示)
 shouleiexplodepicture=0;//用来表示手雷爆炸序列帧
 shouleiwait= 0;//手雷到达位置后等待爆炸时间;

 cameracontrol=0;
 proportion=1;//屏幕缩放比例
 team1throwstate=0;//绘制扔手雷图片状态,1表示放映，0表示不放映
 team1throwtimes=0;
 soundstart=0;

 skip=0;//1表示跳过该回合
 transtate=0;//传送器状态，0表示未使用，1表示开始传送，2表示传送完
 transtimes=0;
 wdtimes=0;
 windtimes=WINDINTERVAL;
 windvel=0;
 gamestart=0;
 rocketstate=1,rocketstate1=1;
 rocketexplodepicture=0;
 team1launchstate=0;
 team1launchtimes=0;
 
 gameend=0;
 endleft=0,endright=1920,endtop=900,endbottom=1080;
 roundcount=0,allover=0;

 planestate=0;
boomstate=1,boomstate1=1;
boompic=0;
weapon4side=-1;
 weapon4num=-1;
 weapon4state=0;
 cratestate=0;
cratetimes=0;
 target=-1;
weapon4use=0;

AIstart=0;
AIattack=0;
weaponr=0,team1r=0,X=0,Y=0;
 angler=0,vshould=0,forceshould=0;
 limitstate=0;
AIdirection=-1;
 AImovestate=0;
AIcount=0;
AIzhunxinstate=0;

hurtsoundstate=0;
explodesoundstate=0;


 int k1,k2;
	for (i=0;i<3;i++)
	{
	k1=rand()%1500+120;
	k2=rand()%600+100;
	team1[i] = CreateHero(k1, k2, HERO_SIZE_X, HERO_SIZE_Y, hteam1hero,0,HERO_MAX_FRAME_NUM);
	}
	//创建敌方英雄
	for (i=0;i<3;i++)
	{
	k1=rand()%1500+120;
	k2=rand()%600+120;
	team2[i] = CreateHero(k1, k2, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp,0,HERO_MAX_FRAME_NUM);
	}


	// 创建地形
    CreateMap1 (100,1800,900,1080,45,70,1600,100,0); 
	CreateMap3 (100,560,500,660,50,30,500,-20,1);
	CreateMap3 (920,1690,400,560,55,70,900,860,1);
	CreateMap2 (0,100,900,1080);
	CreateMap2 (1800,1920,900,1080);

	//创建准心
	m_zhunxin = CreateZhunXin(70,hzhunxin);

	//初始化手雷
    m_shoulei = CreateShouLei(hshoulei);
	m_rocket = CreateRocket(hrocket);
 //初始化力度约束矩形
	m_force.line=0;

	//初始化箭头
	redjiantou.hjiantou=hredjiantou;
	redjiantou.pos.x=team1[0].pos.x;
	redjiantou.pos.y=team1[0].pos.y;
	redjiantou.vel.x=0;
	redjiantou.vel.y=0;
	redjiantou.size.cx=ARROW_SIZE_X;
	redjiantou.size.cy=ARROW_SIZE_Y;
	redjiantou.acceleration.x=0;
	redjiantou.acceleration.y=0;

	bluejiantou.hjiantou=hbluejiantou;
	bluejiantou.pos.x=team2[0].pos.x;
	bluejiantou.pos.y=team2[0].pos.y;
	bluejiantou.vel.x=0;
	bluejiantou.vel.y=0;
	bluejiantou.size.cx=ARROW_SIZE_X;
	bluejiantou.size.cy=ARROW_SIZE_Y;
	bluejiantou.acceleration.x=0;
	bluejiantou.acceleration.y=0;

	//初始化手雷爆炸图片
	shouleiexplode.hBmp=hshouleiexplode;
	shouleiexplode.size.cx=SHOULEIEXPLODE_SIZE_X;
	shouleiexplode.size.cy=SHOULEIEXPLODE_SIZE_Y;
	shouleiexplode.pos.x=m_shoulei.pos.x;
	shouleiexplode.pos.y=m_shoulei.pos.y;

	//
    rocketexplode.hBmp=hrocketexplode;
	rocketexplode.size.cx=ROCKETEXPLODE_SIZE_X;
	rocketexplode.size.cy=ROCKETEXPLODE_SIZE_Y;
	rocketexplode.pos.x=m_rocket.pos.x;
	rocketexplode.pos.y=m_rocket.pos.y;
	//初始camera
	camera.x=0;
	camera.y=0;
	camera1.x=0;
	camera1.y=0;

	//初始化风向
	WD[0].pos.x=rand()%1200+300;
	WD[0].pos.y=m_terrian[WD[0].pos.x+30][0].pos1.y-32;
	WD[1].pos.x=rand()%400+100;
	WD[1].pos.y=m_terrian[WD[1].pos.x+30][1].pos1.y-32;
	WD[2].pos.x=rand()%600+950;
	WD[2].pos.y=m_terrian[WD[2].pos.x+30][1].pos1.y-32;

	//初始化食物
	food[0].pos.x=rand()%1200+300;
	food[0].pos.y=m_terrian[food[0].pos.x+5][0].pos1.y;
    foodstate[0]=1;
	foodpicture[0]=rand()%4;

	
}

VOID PlaneUpdate()
{
	if (planestate==1)
	{
		plane.pos.x=camera1.x+1000;
		plane.pos.y=120;
		planestate=2;
	}

	if (planestate==2)
	{
		plane.pos.x-=10;
		
	}

	if (planestate==2&&boomstate1==1)
	{
		boom.pos.x=plane.pos.x+PLANEX/2;
		boom.pos.y=plane.pos.y+PLANEX/2;
		if (plane.pos.x+PLANEX/2<=target)
		 {
			 boomstate=2;
			 boomstate1=0;
		 }
	}


	if (plane.pos.x+PLANEX<=camera1.x)
		planestate=3;

	if (boomstate==2&&boomstate1==0)
	{
		boom.pos.y+=16;
		BoomCrush();
	}
}

VOID BoomCrush()
{
	int i;
	for (i=0;i<m_terriansecond[boom.pos.x];i++)
		{
			 if(terrianstate[boom.pos.x][i]!=0)
		        if ((boom.pos.y+BOOMY)>=m_terrian[boom.pos.x][i].pos1.y)
		            boomstate=3;
		}

	if (boomstate==3)
	{
	if (explodesoundstate==0)
	 {
	  mciSendString(TEXT("open res//explode.mp3 alias ex"),NULL,0,NULL);
	  mciSendString(TEXT("play ex"),NULL,0,NULL);
	  mciSendString(TEXT("setaudio ex volume to 60"),NULL,0,NULL);
	  explodesoundstate=1;
	 }
	
	}
}
VOID BoomUpdate()
{

	if (boomstate==4)
	{
		float x,y,distance,S,C;
		int i;
		//己方震飞
		for (i=0;i<3;i++)
		{
			x=team1[i].pos.x-boom.pos.x;
			y=team1[i].pos.y-boom.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>BOOMMOVE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team1[i].vel.x=ROCKETMOVEVEL*C;
				team1[i].vel.y=ROCKETMOVEVEL*S;
			}
		}
		//敌方震飞
			for (i=0;i<3;i++)
		{
			x=team2[i].pos.x-boom.pos.x;
			y=team2[i].pos.y-boom.pos.y;
			distance=sqrt(x*x+y*y);
			if (distance>BOOMMOVE) continue;
			else 
			{
				S=y/distance;
				C=x/distance;
				team2[i].vel.x=ROCKETMOVEVEL*C;
				team2[i].vel.y=ROCKETMOVEVEL*S;
			}

		}

  	for (i=0;i<3;i++)
	{
		x=team1[i].pos.x-boom.pos.x;
		y=team1[i].pos.y-boom.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team1xietiao[i]-=35;
		else if (distance<=20)
			team1xietiao[i]-=27;
		else if (distance<=30)
			team1xietiao[i]-=15;
		else if (distance<=50)
			team1xietiao[i]-=7;
	if (team1xietiao[i]<0) team1xietiao[i]=0;
	}
	for (i=0;i<3;i++)
	{
		x=team2[i].pos.x-boom.pos.x;
		y=team2[i].pos.y-boom.pos.y;
		distance=sqrt(x*x+y*y);
		if (distance<=10)
			team2xietiao[i]-=35;
		else if (distance<=20)
			team2xietiao[i]-=27;
		else if (distance<=30)
			team2xietiao[i]-=15;
		else if (distance<=50)
			team2xietiao[i]-=7;
	if (team2xietiao[i]<0) team2xietiao[i]=0;
	}

		boomstate=5;
	}	
}

VOID AI()
{

	if (AIstate==1)
	{	
	if (heroside==1)
	{
		
		if (AIstart==0)
		{
		AIdirection=rand()%2;
		AImove=rand()%50+20;
		weaponr=rand()%2;
		weaponteam2[heroorder2]=weaponr;
		angler=rand()%75+10; 
		team1r=rand()%3;
		angler=angler/180*3.14159265;
		AIstart=1;
		}

		if (AImovestate==0&&AIstart==1)
		{
		   if (AIdirection==0)
		   {
			team2motionstate[heroorder2]=1;
			motionteam2[heroorder2]=1;
			team2[heroorder2].pos.x-=1;
			AIcount++;
			if (AIcount==AImove)
			{
				AImovestate=1;
				team2motionstate[heroorder2]=0;
			}
		   }

		   else if (AIdirection==1)
		   {
			team2motionstate[heroorder2]=1;
			motionteam2[heroorder2]=2;
			team2[heroorder2].pos.x+=1;
			AIcount++;

			if (AIcount==AImove)
			{
				AImovestate=1;
				team2motionstate[heroorder2]=0;
			}
		   }
		}
		if (AImovestate==1)
		{
		X=jueduizhi(team1[team1r].pos.x+LeftFoot-team2[heroorder2].pos.x);
		Y=team2[heroorder2].pos.y-team1[team1r].pos.y-HERO_SIZE_Y;
		vshould=(float)X*sqrt(GRAVITY/(2*(X*tan(angler)-Y)))/cos(angler);
		forceshould=3.0*vshould;
		AImovestate=2;
		}
		
     if (AIattack==0&&AImovestate==2)
	 {
		if (team1[team1r].pos.x-team2[heroorder2].pos.x<=0&&AIzhunxinstate==0)
		{
			motionteam2[heroorder2]=-1;
			zhunxinstate=1;
			AIzhunxinstate=1;
		}
		else if (team1[team1r].pos.x-team2[heroorder2].pos.x>0&&AIzhunxinstate==0)
		{
			motionteam2[heroorder2]=-2;
			zhunxinstate=1;
			AIzhunxinstate=1;
		}
		if (zhunxinstate==1&&AIzhunxinstate==1)
		{
			m_zhunxin.jiaodu+=0.02;
			if (fabs(m_zhunxin.jiaodu-angler)<0.03||m_zhunxin.jiaodu>=3.14159265*80.0/180.0)
				{
					zhunxinstate=0;
					forcestate=1;
			     }
		}
		if (forcestate==1)
		{	
					
					m_force.line+=FORCESPEED;
					if (fabs(m_force.line-forceshould)<1.0||m_force.line>=MAXLINE)
					{
						forcestate=0;
						if(weaponr==0) shouleistate=0;
						else if (weaponr==1) rocketstate=0;
							AIattack=1;
					}
				
		}
		}
	}
	}
	

}

VOID limit()
{

if (limitstate==0)
{
	if (m_shoulei.pos.x<0||m_shoulei.pos.y<-400||m_shoulei.pos.x>1920||m_shoulei.pos.y>1080)
	{
		m_shoulei.vel.x=0;
		m_shoulei.vel.y=0;
		m_shoulei.acceleration.x=0;
		m_shoulei.acceleration.x=0;
		shouleistate=9;
		limitstate=1;
	}

	if (m_rocket.pos.x<0||m_rocket.pos.y<-400||m_rocket.pos.x>1920||m_rocket.pos.y>1080)
	{
		m_rocket.vel.x=0;
		m_rocket.vel.y=0;
		m_rocket.acceleration.x=0;
		m_rocket.acceleration.y=0;
		rocketstate=3;
		limitstate=1;
	}

	int i;

	for (i=0;i<3;i++)
	{
		if (team1[i].pos.x<0||team1[i].pos.x>1920||team1[i].pos.y<0||team1[i].pos.y>1080)
		{
			team1xietiao[i]=0;
			roundstate=1;
			limitstate=1;
		}
	}

	for (i=0;i<3;i++)
	{
	   if (team2[i].pos.x<0||team2[i].pos.x>1920||team2[i].pos.y<0||team2[i].pos.y>1080)
		{
			team2xietiao[i]=0;
			roundstate=1;
			limitstate=1;
		}
	}
}
}