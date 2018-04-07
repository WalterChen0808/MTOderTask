/*
 create by baoquan.chen 2018-01-06
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpOrderTaskService_H_INCLUDED__
#define __ItpOrderTaskService_H_INCLUDED__
//========================================================================
//#include "ItpTaskCustomProcessor.h"
//BEGIN_NAMESPACE(NTpOrderTask)
 namespace NTpOrderTask {
struct __declspec(novtable)  ItpOrderTaskService
{
	virtual int RegisterCustomProcessor(ItpTaskCustomProcessor* Processor) = 0;

	virtual void SetMaxUserID(int Userid) = 0;

	virtual void SetMaxThreadPoolNum(int num) = 0;

	virtual int startService() = 0;

	virtual void AddTask(ItpTask* task) = 0;

	virtual int stopService() = 0;

	virtual void DeleteSelf() = 0;
};

//END_NAMESPACE(NTpOrderTask)
 }

#endif #__ItpOrderTaskService_H_INCLUDED__