
// CodeGraphView.h : CCodeGraphView ��Ľӿ�
//

#pragma once


class CCodeGraphView : public CView
{
protected: // �������л�����
	CCodeGraphView();
	DECLARE_DYNCREATE(CCodeGraphView)

// ����
public:
	CCodeGraphDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CCodeGraphView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CodeGraphView.cpp �еĵ��԰汾
inline CCodeGraphDoc* CCodeGraphView::GetDocument() const
   { return reinterpret_cast<CCodeGraphDoc*>(m_pDocument); }
#endif

