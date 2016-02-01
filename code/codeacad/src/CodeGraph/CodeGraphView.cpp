
// CodeGraphView.cpp : CCodeGraphView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCodeGraphView 构造/析构

CCodeGraphView::CCodeGraphView()
{
	// TODO: 在此处添加构造代码

}

CCodeGraphView::~CCodeGraphView()
{
}

BOOL CCodeGraphView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCodeGraphView 绘制

void CCodeGraphView::OnDraw(CDC* /*pDC*/)
{
	CCodeGraphDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCodeGraphView 打印

BOOL CCodeGraphView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CCodeGraphView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CCodeGraphView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CCodeGraphView 诊断

#ifdef _DEBUG
void CCodeGraphView::AssertValid() const
{
	CView::AssertValid();
}

void CCodeGraphView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCodeGraphDoc* CCodeGraphView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCodeGraphDoc)));
	return (CCodeGraphDoc*)m_pDocument;
}
#endif //_DEBUG


// CCodeGraphView 消息处理程序
