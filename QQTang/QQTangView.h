
// QQTangView.h : CQQTangView 类的接口
//

#pragma once


class CQQTangView : public CView
{
	CGame game;

protected: // 仅从序列化创建
	CQQTangView();
	DECLARE_DYNCREATE(CQQTangView)

// 特性
public:
	CQQTangDoc* GetDocument() const;

// 操作


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CQQTangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // QQTangView.cpp 中的调试版本
inline CQQTangDoc* CQQTangView::GetDocument() const
   { return reinterpret_cast<CQQTangDoc*>(m_pDocument); }
#endif

