/*
 create by baoquan.chen 2018-01-06
 ִ�������� ���������������Զ��崦�����������ƥ�����
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpTaskProcessContext_H_INCLUDED__
#define __ItpTaskProcessContext_H_INCLUDED__
//========================================================================
//#include "ItpTask.h"
//BEGIN_NAMESPACE(NTpOrderTask)
 namespace NTpOrderTask {
struct __declspec(novtable) ItpTaskProcessContext
{
	virtual int ProcessTask(ItpTask* currentTask) = 0; //ת�����񵽶�Ӧ�Ĵ�������
};

//END_NAMESPACE(NTpOrderTask)
 }

#endif #__ItpTaskProcessContext_H_INCLUDED__