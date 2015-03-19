
// QQTangView.h : CQQTangView ��Ľӿ�
//

#pragma once


class CQQTangView : public CView
{
	CGame game;

protected: // �������л�����
	CQQTangView();
	DECLARE_DYNCREATE(CQQTangView)

// ����
public:
	CQQTangDoc* GetDocument() const;

// ����


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQQTangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // QQTangView.cpp �еĵ��԰汾
inline CQQTangDoc* CQQTangView::GetDocument() const
   { return reinterpret_cast<CQQTangDoc*>(m_pDocument); }
#endif

