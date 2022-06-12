#pragma once
#include "Counter.h"
class User
{
public:
	void KillMonster()
	{
		m_Counter.count();
	}

	Counter m_Counter;
};

