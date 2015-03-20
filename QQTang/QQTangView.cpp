
// QQTangView.cpp : CQQTangView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "QQTang.h"
#endif

#include "QQTangDoc.h"
#include "QQTangView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQQTangView

IMPLEMENT_DYNCREATE(CQQTangView, CView)

BEGIN_MESSAGE_MAP(CQQTangView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_TIMER()
END_MESSAGE_MAP()

void CQQTangView::Initialize()
{
	now_state = STATE_LOBBY;
	SetTimer(TIMER_RENDER, 1000/FPS, NULL);
	return;
}

// CQQTangView 构造/析构

CQQTangView::CQQTangView()
{
	// TODO: 在此处添加构造代码
	Initialize();
}

CQQTangView::~CQQTangView()
{
}

BOOL CQQTangView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQQTangView 绘制

void CQQTangView::OnDraw(CDC* pDC)
{
	CQQTangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	//创建缓冲DC
	GetClientRect(&m_client);
	m_cacheDC.CreateCompatibleDC(NULL);
	m_cacheCBitmap.CreateCompatibleBitmap(pDC, m_client.Width(),m_client.Height());
	m_cacheDC.SelectObject(&m_cacheCBitmap);

	if(now_state == STATE_LOBBY)
	{
		
	}
	else if(now_state == STATE_INGAME)
	{

	}
}

void CQQTangView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CQQTangView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CQQTangView 诊断

#ifdef _DEBUG
void CQQTangView::AssertValid() const
{
	CView::AssertValid();
}

void CQQTangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQQTangDoc* CQQTangView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQQTangDoc)));
	return (CQQTangDoc*)m_pDocument;
}
#endif //_DEBUG


// CQQTangView 消息处理程序


void CQQTangView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	if(nIDEvent == TIMER_RENDER && now_state == STATE_INGAME)
	{
		CDC *pDC=GetDC();
		OnDraw(pDC);
	}
	CView::OnTimer(nIDEvent);
}