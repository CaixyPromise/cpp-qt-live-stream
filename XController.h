/*******************************************************************************
**                                                                            **
**                     Jiedi(China nanjing)Ltd.                               **
**	               创建：夏曹俊，此代码可用作为学习参考                       **
*******************************************************************************/

/*****************************FILE INFOMATION***********************************
**
**  Project       : FFmpegSDK实战课程
**  Description   : 基于FFMpegSDK的实战课程
**  Contact       : xiacaojun@qq.com
**  博客   : http://blog.csdn.net/jiedichina
**  视频课程
**  http://edu.csdn.net/lecturer/lecturer_detail?lecturer_id=961
**  http://edu.51cto.com/lecturer/12016059.html
**  http://study.163.com/u/xiacaojun
**  https://jiedi.ke.qq.com/
**  购买课程后可以加群咨询课程学习问题
**  群号 132323693 fmpeg的直播推流课程
**  微信公众号  : jiedi2007
**	头条号	 : 夏曹俊
**
*******************************************************************************/

#pragma once
#include "XDataThread.h"
#include <QThread>
#include <string>
class XController:public XDataThread
{
public:
	std::string outUrl;
	int camIndex = -1;
	std::string inUrl ="";
	std::string err = "";
	
	static XController *Get()
	{
		static XController xc;
		return &xc;
	}
	//设定美颜参数
	virtual bool Set(std::string key, double val);
	virtual bool Start();
	virtual void Stop();
	void run();
	virtual ~XController();
protected:
	int vindex = 0; //视频流索引
	int aindex = 1; //音频流索引
	XController();
};

