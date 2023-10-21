#include "valarray_demo.h"

void valarray_demo::print_str()
{
	int gpa[5] = { 1,2,3,4,5 };
	valarray<int> v1(gpa, 5);
	valarray<double> scores(4);

	scores = 10.3;

	cout << scores.size() << endl;

	cout << "v1.size():" << v1.size() << endl;
	cout << "v1.max():" << v1.max() << endl;
	cout << "v1.min():" << v1.min() << endl;
	cout << "v1.sum():" << v1.sum() << endl;
	cout << "operator[](3)" << v1.operator[](3) << endl;
}
