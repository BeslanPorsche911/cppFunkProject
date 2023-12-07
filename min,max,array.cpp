

#include <iostream>
using namespace std;
int main()
{

	srand(time(NULL));
	int min, max;
	const int size = 15;
	int summ = 0;
	cin >> min, max;
	int array[size] = {};
	for (int i = 0; i < size; i++)
	{
		array[i] = min + rand() % (max + 1 - min);
		cout << array[i] << ' ';
		summ = summ + array[i];
		if (max < array[i])
		{
			max = array[i];
		}
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	cout << min;
	cout << max;
	cout << summ;
    
}
