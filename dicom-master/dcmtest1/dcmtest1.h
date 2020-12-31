
#pragma once

#ifndef __AFXWIN_H__

#endif

#include "resource.h"    


class Cdcmtest1App : public CWinApp
{
public:
	Cdcmtest1App();


// ÷ÿ–¥
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

//  µœ÷
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdcmtest1App theApp;
