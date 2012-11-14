#pragma once

#include "GlobalDefine.h"

_DECLARE_NAMESPACE_MONG_

namespace Util
{
	class Singleton
	{
	public:
		static T getInstance()
		{
			if( NULL == singleClass )
			{
				singleClass = new T;
			}

			return *singleClass;
		};

		T Singleton::operator ->()
		{
			if( NULL == singleClass )
			{
				singleClass = new T;
			}
			
			return (*singleClass);
		}

	private:
		static  T *singleClass;

	};
}

_UNDECLARE_NAMESPACE_MONG_