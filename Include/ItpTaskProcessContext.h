/*
 create by WalterChen 2018-01-06
 执行上下文 上下文用来处理自定义处理器和任务的匹配规则
*/

//========================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __ItpTaskProcessContext_H_INCLUDED__
#define __ItpTaskProcessContext_H_INCLUDED__
//========================================================================
namespace NTpOrderTask {
struct __declspec(novtable) ItpTaskProcessContext
{
	virtual int ProcessTask(ItpTask* currentTask) = 0; //转发任务到对应的处理器中
};
}
#endif #__ItpTaskProcessContext_H_INCLUDED__
