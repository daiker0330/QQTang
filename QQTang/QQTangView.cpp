
// QQTangView.cpp : CQQTangView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
END_MESSAGE_MAP()

// CQQTangView ����/����

CQQTangView::CQQTangView()
{
	// TODO: �ڴ˴����ӹ������

}

CQQTangView::~CQQTangView()
{
}

BOOL CQQTangView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQQTangView ����

void CQQTangView::OnDraw(CDC* /*pDC*/)
{
	CQQTangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ�����������ӻ��ƴ���
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


// CQQTangView ���

#ifdef _DEBUG
void CQQTangView::AssertValid() const
{
	CView::AssertValid();
}

void CQQTangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQQTangDoc* CQQTangView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQQTangDoc)));
	return (CQQTangDoc*)m_pDocument;
}
#endif //_DEBUG


// CQQTangView ��Ϣ��������