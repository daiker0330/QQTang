
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ




 // �˴�Ҫ����С DB ֧�֡�δѡ���κ���ͼ��

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��






#include <afxdb.h>        // ODBC


//Protocol
const int CLIENT_WIDTH = 1280, CLIENT_HEIGHT = 720;
const int FPS = 60;
const int GRID_WIDTH = 30, GRID_HEIGHT = 30;
const int GRID_NUM_X = 30, GRID_NUM_Y = 20;

const CPoint DIRECT_VEC[] = {CPoint(0,-1), CPoint(0,1), CPoint(-1,0), CPoint(1,0)};
const int UP=0, DOWN=1, LEFT=2, RIGHT=3;


