#pragma once
#include<iostream>
using namespace std;
#include<string>
//类模板分文件编写的问题及解决
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	/*{
		this->m_age = age;
		this->m_name = name;
	}*/
	void showPerson();
	/*{
		cout << this->m_name << " " << this->m_age << endl;
	}*/
	T1 m_name;
	T2 m_age;



};
template<class T1, class T2>
Person < T1, T2>::Person(T1 name, T2 age)
{
	this->m_age = age;
	this->m_name = name;
}
template<class T1, class T2>
void Person < T1, T2>::showPerson()
{
	cout << this->m_name << " " << this->m_age << endl;
}