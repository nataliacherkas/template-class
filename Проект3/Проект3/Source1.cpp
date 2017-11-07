#include <iostream>
using namespace std;

template <class T>

class ArithmeticOp
{
public:
	T sum(T a, T b);
	T diff(T a, T b);
	T mult(T a, T b);
	T div(T a, T b);
};


template <class T>

T ArithmeticOp<T>::sum(T a, T b)
{
	return a + b;
}

template <class T>

T ArithmeticOp<T>::diff(T a, T b)
{
	return a - b;
}

template <class T>

T ArithmeticOp<T>::mult(T a, T b)
{
	return a * b;
}

template <class T>

T ArithmeticOp<T>::div(T a, T b)
{
	if (b == 0)
		return 0;
	else
		return a / b;
}

int main()
{
	ArithmeticOp<int> ar;
	ArithmeticOp<float> ar2;
	ArithmeticOp<double> ar3;
	cout << "sum: " << ar.sum(5,2) << endl;
	cout << "diff: " << ar.diff(10,8) << endl;
	cout << "mult: " << ar2.mult(4.8,5.8) << endl;
	cout << "div: " << ar3.div(5.2222,3.4444) << endl;
	system("pause");

	return 0;
}
