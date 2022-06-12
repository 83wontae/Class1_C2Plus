#pragma once

class Person
{
	char *name;
	char *addr;
public:
	Person(const char *name, const char *addr);
	~Person();

	void print();
	void chAddr(const char *newAddr);
};

