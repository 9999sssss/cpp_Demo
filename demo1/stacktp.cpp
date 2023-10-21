#include<iostream>
#include"stacktp.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int stacktem_main() {
	Stack<string> st; // create an empty stack
	char ch;
	 string po;	
	std::cout << "Please enter A to add a purchase order,\n"
		<< "p to process a PO,or Q to quit.\n";
	while (cin >> ch && std::toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!std::isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':std::cout << "Enter a po number to add:";
			cin >> po;
			if (st.isfull())
				std::cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'p':
		case 'P':if (st.isempty())
			std::cout << "stack already empty \n";
				else {
			st.pop(po);
			std::cout << "PO #" << po << "popped\n";
			break;
		}
	}

	std::cout << "Please enter A to add a purchase order,\n"
			<< "p to process a po,or Q to quit.\n";
	} 
	std::cout << "Bye\n";
	return 0;
}
 

template <class T,  int n>
void m(T (& array)[n])
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}
}

 