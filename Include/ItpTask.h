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

	virtual int getTaskValue() = 0; //暂时定位只有int类型。以后添加对所有基本类型和数组、字符串的支持
};

//END_NAMESPACE(NTpOrderTask)
 }

#endif #__ItpTask_H_INCLUDED__