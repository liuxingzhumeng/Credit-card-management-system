// ScreenWnd.cpp: implementation of the CScreenWnd class.
//实现马赛克显示效果的图片动画
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Resource.h"
#include "AS.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CScreenWnd::CScreenWnd()
{
	m_bitmap.LoadBitmap(IDB_BITMAP3);//拷贝资源位图
	
    m_bitmap.GetBitmap(&bm);//得到位图结构中的大小信息
}

CScreenWnd::~CScreenWnd()
{

}

void CScreenWnd::CreatScreenWnd()
{
	//建立大小与位图大小相同的窗口
	CreateEx(0,AfxRegisterWndClass(0,AfxGetApp()->LoadStandardCursor(IDC_ARROW)),
		_T("ImageScreen"),
		WS_POPUP,
		0,0,bm.bmWidth,bm.bmHeight,
		NULL,
		NULL,
		NULL );
}

BEGIN_MESSAGE_MAP(CScreenWnd, CWnd)
//{{AFX_MSG_MAP(CScreenWnd)
ON_WM_PAINT()
//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScreenWnd message handlers

void CScreenWnd::OnPaint() 
{
	CPaintDC dc(this); // device context for painting	
	// TODO: Add your message handler code here
	MemDC.CreateCompatibleDC(NULL);//建立一个和dc兼容的内存DC放置位图
	old_bitmap=MemDC.SelectObject(&m_bitmap);//将创建的位图选入内存DC
	int i,j,stepx,stepy,dispnum,x,y; 
	int lwf[10][10];      //数组记录已显示过的数据组 	
	for ( i=0; i<10; i++ ) 		
		for ( j=0; j<10; j++ ) 			
			lwf[i][j]=0; 		
		stepx=bm.bmWidth/10; //设置显示格子的大小
		stepy=bm.bmHeight/10; 
		srand( (unsigned)time( NULL ) ); 		
		dispnum=0; 	
		//记录已显示过的数据组的个数 		
		while(1) 			
		{ x=rand() % 10; 		
		  y=rand() % 10; 		
		if ( lwf[x][y] ) //如果为1，则已经显示了，跳出循环。			
			continue; 	
		lwf[x][y]=0; //显示，设置为1				
		dc.StretchBlt(x*stepx, y*stepy, //目标设备逻辑横、纵坐标 
				   	       stepx,stepy, //显示位图的像素宽、高度 
			&MemDC, //位图内存设备对象 
					  x*stepx, y*stepy, //位图的起始横、纵坐标 
					       stepx,stepy, //位图的像素宽、高度 
			SRCCOPY); 		
		dispnum++; 		
		if ( dispnum >=700 ) 			
			break; 		
		Sleep(2); 		
		}		
		MemDC.SelectObject(old_bitmap);
		// Do not call CWnd::OnPaint() for painting messages
}
