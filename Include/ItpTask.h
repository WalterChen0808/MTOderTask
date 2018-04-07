/*
 create by baoquan.chen 2018-01-06
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpTask_H_INCLUDED__
#define __ItpTask_H_INCLUDED__
//========================================================================

//BEGIN_NAMESPACE(NTpOrderTask)
 namespace NTpOrderTask {

struct __declspec(novtable) ItpTask
{
	virtual int getUserID() = 0;

	virtual int getTaskType() = 0;

	virtual int getTaskValue() = 0; //��ʱ��λֻ��int���͡��Ժ���Ӷ����л������ͺ����顢�ַ�����֧��
};

//END_NAMESPACE(NTpOrderTask)
 }

#endif #__ItpTask_H_INCLUDED__