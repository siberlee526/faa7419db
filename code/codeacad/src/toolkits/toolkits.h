// toolkits.h : toolkits DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CtoolkitsApp
// �йش���ʵ�ֵ���Ϣ������� toolkits.cpp
//

class CtoolkitsApp : public CWinApp
{
public:
	CtoolkitsApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
