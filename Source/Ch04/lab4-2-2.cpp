#include <iostream>
#include <iomanip>
using namespace std;

void sum(int from = 0, int to = 100);

int main()
{
	sum(10, 20);
	sum(90);
	sum();
}

void sum(int from, int to)
{
	int sum = 0;
	for (int i = from; i < to; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	cout << "Even sum :" << sum << endl;
}
