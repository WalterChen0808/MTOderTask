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

XTP_TASKORDER_CLASSEXT ItpOrderTaskService* Tp_GetOrderTaskService();

enum Enum_TaskProcessingState
{
	Tx_TaskProcessINIT,	//初始化状态，表示无任务或者有新任务，可以立即执行
	Tx_TaskProcessING,	//任务正在执行，表示有新任务，并且原来任务还在处理中
	Tx_TaskProcessNEW	//表示有新任务，原任务处理完成，可以继续执行新任务
};

//思路:
/************************************************************************/
/* 将控制线程对应的检测任务的逻辑业务称之为控制业务
   将任务执行线程对应的真正的任务处理逻辑也为称之为处理业务
   将任务产生线程对应的任务任务分桶存储逻辑称之为产生业务
 */
/*控制业务对应一个控制业务任务对象(控制对象)，处理业务对应一个处理业务任务对象（处理对象），产生业务对应一个产生业务对象（产生对象）
在程序初始化时，创建合适数量的线程，组成线程池。
控制对象使用一个专属线程独立处理（处理频率可设置）
处理对象使用线程池处理（处理频率由控制对象控制，一旦检测有新任务，通知线程池执行处理对象run方法）
产生对象使用一个专属线程独立处理（频率由用户处理，添加任务的频率）
*/

/*
处理真正业务的思路：
由用户自定义任务类型，以及不同任务的处理逻辑。
由用户自定义不同的处理任务的处理器 

不同任务接受同一个上下文，根据任务类型不同上下文交给不同对象或者方法处理 //与命令模式相似
*/
/************************************************************************/

#endif #__TpOrderTask_Inc_H_INCLUDE__
