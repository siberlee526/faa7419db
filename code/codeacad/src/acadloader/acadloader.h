// acadloader.h : acadloader DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CacadloaderApp
// �йش���ʵ�ֵ���Ϣ������� acadloader.cpp
//

class CacadloaderApp : public CWinApp
{
public:
	CacadloaderApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
