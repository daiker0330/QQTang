
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展




 // 此处要求最小 DB 支持。未选择任何视图。

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持






#include <afxdb.h>        // ODBC


//Protocol
const int CLIENT_WIDTH = 1280, CLIENT_HEIGHT = 720;
const int FPS = 60;
const int GRID_WIDTH = 30, GRID_HEIGHT = 30;
const int GRID_NUM_X = 30, GRID_NUM_Y = 20;

const CPoint DIRECT_VEC[] = {CPoint(0,-1), CPoint(0,1), CPoint(-1,0), CPoint(1,0)};
const int UP=0, DOWN=1, LEFT=2, RIGHT=3;


