#include<iostream>
#include<locale.h>
#include<string>


using namespace std;

class Student
{
	string *name;
	string *group;
	int *course;

public:
	Student() // �����������
	{
		name = new string[30];	// ��������� ������
		group = new string[15];
		course = new int;
	}

	void setAddStudent(string n = "Name", string g = "Groupe", int c = 0)	// ������
	{
		cout << "\n ������� ��� �������� -> ";
		cin >> n;
		*name = n;

		cout << " ������� �������� ������ -> ";
		cin >> g;
		*group = g;

		cout << " ������� ���� -> ";
		cin >> c;
		*course = c;
	}

	void printStudent()
	{
		cout << "\n��������� � ��������:\n\n" << " ��� �������� \t- " << *name << "\n ������ \t- " << *group << "\n ���� �������� \t- " << *course << "\n\n";
	}

	~Student() // ����������
	{
		delete[] name, group;	// ������� ������ ���������� - ����������� ������
		delete course;
	}

};

int main()
{
	setlocale(LC_ALL, "RUS");

	Student first;
	first.setAddStudent();
	first.printStudent();


	system("pause");
}