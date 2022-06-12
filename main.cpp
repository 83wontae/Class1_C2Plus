#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std;

void g(const Counter& c)
{
	cout << "Counter value = " << c.getValue() << endl;// getValue()�Լ��� const�� �ƴ϶�� ����
}

int main()
{
	/*
	ĸ��ȭ(encapsulation)�� ?
	��ü ������ ���� ���� �κа� �ܺ� ������� ������ �и���
	���� �Ӽ� �� ������ ���� �κ��� �������� ����(��������)
	��ü �ܺο����� ������ �������̽��� ���� ��ü�� ����� �� ����

	ĸ��ȭ�� ����
	����Ʈ������ ���������� ������ : ���α׷��� �ٸ� �κп� ������ ��ġ�� �ʰ� ��ü ���� ���� ����� ������ �� ����
	������ ������ : �� ����� ĸ��ȭ�� ��ü�� �ٸ� ���뿡���� ������ �� �־� ����Ʈ���� ���� ����� ���� �� ����
	*/

	Counter testCounter;
	testCounter.reset();
	cout << "Counter value = " << testCounter.getValue() << endl;
	testCounter.count();
	testCounter.count();
	cout << "Counter value = " << testCounter.getValue() << endl;
	g(testCounter);

	/*
	* Person Ŭ������ ����
	*/

	Person* p1 = new Person("�����", "��õ��");
	Person* p2 = new Person("ö��", "����� ���α�");
	p1->print();
	p2->print();
	cout << endl << "�ּ� ���� : ";
	p2->chAddr("������ ����");
	p2->print();
	delete p1;
	delete p2;
}