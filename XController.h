/*******************************************************************************
**                                                                            **
**                     Jiedi(China nanjing)Ltd.                               **
**	               �������Ĳܿ����˴��������Ϊѧϰ�ο�                       **
*******************************************************************************/

/*****************************FILE INFOMATION***********************************
**
**  Project       : FFmpegSDKʵս�γ�
**  Description   : ����FFMpegSDK��ʵս�γ�
**  Contact       : xiacaojun@qq.com
**  ����   : http://blog.csdn.net/jiedichina
**  ��Ƶ�γ�
**  http://edu.csdn.net/lecturer/lecturer_detail?lecturer_id=961
**  http://edu.51cto.com/lecturer/12016059.html
**  http://study.163.com/u/xiacaojun
**  https://jiedi.ke.qq.com/
**  ����γ̺���Լ�Ⱥ��ѯ�γ�ѧϰ����
**  Ⱥ�� 132323693 fmpeg��ֱ�������γ�
**  ΢�Ź��ں�  : jiedi2007
**	ͷ����	 : �Ĳܿ�
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
	//�趨���ղ���
	virtual bool Set(std::string key, double val);
	virtual bool Start();
	virtual void Stop();
	void run();
	virtual ~XController();
protected:
	int vindex = 0; //��Ƶ������
	int aindex = 1; //��Ƶ������
	XController();
};
