// demo2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"valarray_demo.h"
#include"studentc.h"
#include"stacktp.h"
#include"tempmemb.h"

void set(Student& sa, int n);
int use_stuc();
const int pupils = 3;
const int quizzes = 5;

 int use_stuc() {
	Student ada[pupils] = { Student(quizzes),Student(quizzes),Student(quizzes) };
	int i;
	for (i = 0; i < pupils; ++i)
	{
		set(ada[i], quizzes);
	}
	system("cls");
	cout << "\nStudent List :\n";
	for (i = 0; i < pupils; ++i)
	{
		cout << ada[i].Name() << endl;
	}
	cout << "\nResults:";
	for (i = 0; i < pupils; ++i)
	{
		cout << endl << ada[i];
		cout << "average:" << ada[i].Average() << endl;
	}
	cout << "Done.\n";
	return 0;
}
void set(Student& sa, int n)
{
	cout << "please enter the student's name:";
	getline(cin, sa);
	cout << "Please enter  " << n << "  quiz scores:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> sa[i];
	}
	while (cin.get() != '\n')
	{
		continue;
	}
}

void enum_() {
	enum   { red, orange, yello, green, blue, violet, indigo, ultraviolet };

	for (int i = 0; i < yello; i++)
	{
		cout << i << endl;
	}
}

void stackkp_()
{
	Stack<int> kernels;
	Stack<string> colonels;
}

int main()
{
	const int n = 5;
	int arr[n] = { 1,3,4,5,6 };

	//use_stuc();
	//enum_();
	//stacktem_main();

	//m<int,n>(arr);	
	tempmemb_main();
	
}
