
// CodeGraph.h : CodeGraph Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCodeGraphApp:
// �йش����ʵ�֣������ CodeGraph.cpp
//

class CCodeGraphApp : public CWinApp
{
public:
	CCodeGraphApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCodeGraphApp theApp;
