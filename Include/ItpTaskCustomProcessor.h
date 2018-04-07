/*
 create by baoquan.chen 2018-01-06
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpTaskCustomProcessor_H_INCLUDED__
#define __ItpTaskCustomProcessor_H_INCLUDED__
//========================================================================
#include "ItpTask.h"

//BEGIN_NAMESPACE(NTpOrderTask)
 namespace NTpOrderTask {

struct __declspec(novtable)  ItpTaskCustomProcessor
{
	virtual int getTaskType() = 0; //�Զ��崦������Ҫ��������������������Ҫһ��
	virtual int processTask(ItpTask* currentTask) = 0;//������Ӧ��������������Ҫ�Զ�ǿת��Ӧ�����Է��㴦�����ܻ�ȡ����ı�Ҫ����
};

//END_NAMESPACE(NTpOrderTask)
 }

#endif #__ItpTaskCustomProcessor_H_INCLUDED__