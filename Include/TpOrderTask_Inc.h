#pragma once

#ifndef __TpOrderTask_Inc_H_INCLUDE__
#define __TpOrderTask_Inc_H_INCLUDE__

#ifdef _AFXDLL

#ifdef _TP_ORDER_TASK_DLL_FLAG
#define XTP_TASKORDER_CLASSEXT _declspec(dllexport)
#define XTP_TASKORDER_STDEXT	 _declspec(dllexport)
#else
#define XTP_TASKORDER_CLASSEXT _declspec(dllimport)
#define XTP_TASKORDER_STDEXT	 _declspec(dllimport)
#endif
#else
#define XTP_TASKORDER_CLASSEXT 
#define XTP_TASKORDER_STDEXT	
#endif

#include <vector>
#include <map>
#include <set>

#include "CTpAutoLock.h"
#include "CTpCriticalSectionLock.h"
#include "ItpTaskCustomProcessor.h"
#include "ItpTask.h"
#include "ItpOrderTaskService.h"
#include "ItpTaskProcessContext.h"

using namespace NTpOrderTask;

/*
处理真正业务的思路：
由用户自定义任务类型，以及不同任务的处理逻辑。
由用户自定义不同的处理任务的处理器 
不同任务接受同一个上下文，根据任务类型不同上下文交给不同对象或者方法处理 //与命令模式相似
*/

XTP_TASKORDER_CLASSEXT ItpOrderTaskService* Tp_GetOrderTaskService();

enum Enum_TaskProcessingState
{
	Tx_TaskProcessINIT,	//初始化状态，表示无任务或者有新任务，可以立即执行
	Tx_TaskProcessING,	//任务正在执行，表示有新任务，并且原来任务还在处理中
	Tx_TaskProcessNEW	//表示有新任务，原任务处理完成，可以继续执行新任务
};

#endif #__TpOrderTask_Inc_H_INCLUDE__
