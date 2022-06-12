#pragma once
/*
Counter 기능 정의
- 값을 1씩 증가시킬 수 있다.
- 0으로 초기화 시킬 수 있다.
- 현재의 계수기 값을 알려줄 수 있다.
*/

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED


class Counter
{
	int value; // 계수기의 현재 값을 저장

public:
	Counter() : value{ 0 } //()를 사용 가능 {}를 사용하면 정확한 값을 사용해야 초기화가 가능
	{
		value = 0;
	}

public:
	void count() // 계수기의 값을 +1 증가
	{
		++value;
	}

	void reset() // 계수기의 값을 0으로 초기화
	{
		value = 0;
	}

	int getValue() const// 계수기의 현재 값을 알려 준다.
	{
		return value;
	}
};


#endif // !COUNTER_H_INCLUDED