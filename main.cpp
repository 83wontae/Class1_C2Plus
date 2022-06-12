#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std;

void g(const Counter& c)
{
	cout << "Counter value = " << c.getValue() << endl;// getValue()함수가 const가 아니라면 에러
}

int main()
{
	/*
	캡슐화(encapsulation)란 ?
	객체 내부의 상세한 구현 부분과 외부 사용자의 관점을 분리함
	내부 속성 등 구현에 대한 부분은 공개하지 않음(정보은닉)
	객체 외부에서는 공개된 인터페이스를 통해 객체를 사용할 수 있음

	캡슐화의 장점
	소프트웨어의 유지보수가 용이함 : 프로그램의 다른 부분에 영향을 미치지 않고 객체 내부 구현 방법을 수정할 수 있음
	재사용이 용이함 : 잘 설계된 캡슐화된 객체는 다른 응용에서도 재사용할 수 있어 소프트웨어 개발 비용을 줄일 수 있음
	*/

	Counter testCounter;
	testCounter.reset();
	cout << "Counter value = " << testCounter.getValue() << endl;
	testCounter.count();
	testCounter.count();
	cout << "Counter value = " << testCounter.getValue() << endl;
	g(testCounter);

	/*
	* Person 클래스의 선언
	*/

	Person* p1 = new Person("김원태", "부천시");
	Person* p2 = new Person("철수", "서울시 종로구");
	p1->print();
	p2->print();
	cout << endl << "주소 변경 : ";
	p2->chAddr("대전시 서구");
	p2->print();
	delete p1;
	delete p2;
}