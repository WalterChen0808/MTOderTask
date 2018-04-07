/*
 create by WalterChen 2018-01-06
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpTaskCustomProcessor_H_INCLUDED__
#define __ItpTaskCustomProcessor_H_INCLUDED__
//========================================================================
#include "ItpTask.h"
namespace NTpOrderTask {
struct __declspec(novtable)  ItpTaskCustomProcessor
{
	virtual int getTaskType() = 0; //自定义处理器与要处理的任务的任务类型需要一致
	virtual int processTask(ItpTask* currentTask) = 0;//处理相应的任务。在里面需要自动强转对应任务，以方便处理器能获取任务的必要数据
};
}
#endif #__ItpTaskCustomProcessor_H_INCLUDED__
