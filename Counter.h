#pragma once
/*
Counter ��� ����
- ���� 1�� ������ų �� �ִ�.
- 0���� �ʱ�ȭ ��ų �� �ִ�.
- ������ ����� ���� �˷��� �� �ִ�.
*/

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED


class Counter
{
	int value; // ������� ���� ���� ����

public:
	Counter() : value{ 0 } //()�� ��� ���� {}�� ����ϸ� ��Ȯ�� ���� ����ؾ� �ʱ�ȭ�� ����
	{
		value = 0;
	}

public:
	void count() // ������� ���� +1 ����
	{
		++value;
	}

	void reset() // ������� ���� 0���� �ʱ�ȭ
	{
		value = 0;
	}

	int getValue() const// ������� ���� ���� �˷� �ش�.
	{
		return value;
	}
};


#endif // !COUNTER_H_INCLUDED