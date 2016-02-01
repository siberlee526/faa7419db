
// CodeGraphView.cpp : CCodeGraphView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CodeGraph.h"
#endif

#include "CodeGraphDoc.h"
#include "CodeGraphView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCodeGraphView

IMPLEMENT_DYNCREATE(CCodeGraphView, CView)

BEGIN_MESSAGE_MAP(CCodeGraphView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCodeGraphView ����/����

CCodeGraphView::CCodeGraphView()
{
	// TODO: �ڴ˴���ӹ������

}

CCodeGraphView::~CCodeGraphView()
{
}

BOOL CCodeGraphView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCodeGraphView ����

void CCodeGraphView::OnDraw(CDC* /*pDC*/)
{
	CCodeGraphDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCodeGraphView ��ӡ

BOOL CCodeGraphView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CCodeGraphView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CCodeGraphView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CCodeGraphView ���

#ifdef _DEBUG
void CCodeGraphView::AssertValid() const
{
	CView::AssertValid();
}

void CCodeGraphView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCodeGraphDoc* CCodeGraphView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCodeGraphDoc)));
	return (CCodeGraphDoc*)m_pDocument;
}
#endif //_DEBUG


// CCodeGraphView ��Ϣ�������
