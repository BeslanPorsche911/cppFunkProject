#include <iostream>
using namespace std;
void showArr(int array[], int size) {
	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
}
int maxArr(int array[], int size) {
	int max = array[0];
		 for (int i = 0; i < size; i++) {
			if (max > array[i]) {
				max = array[i];
			}
		}
		 return max;
}
int minArr(int array[], int size) {
	int min = array[0];
	for (int i = 0; i < size; i++) {
		if (min < array[i]) {
			min = array[i];
		}
	}
	return min;
}
int summArr(int array[], int size) {
	int summ = 0;
	for (int i = 0; i < size; i++) {
		summ += array[i];
	}
	return summ;
}
float srdArrif(int array[], int size) {
	float avg = 0;
	
		return (float)summArr(array,size)/size;
}
int maxIndArr(int array[], int size) {
	int max = array[0];
	int maxInd = 0;
	for (int i = 0; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
			maxInd = i;
		}
	}
	return maxInd;
}
int minIndArr(int array[], int size) {
	int min = array[0];
	int minInd = 0;
	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
			minInd = i;
		}
	}
	return minInd;
}
void sortArr(int array[], int size) {
	for (int i = 1; i <= size; i++) {
		for (int j = i; j > 0; j++) {
			if (array[j] < array[j - 1]) {
				swap(array[j], array[j - 1]);
			}
			else break;
		}
	}
}
int  summArrElem(int array[], int size, int array2[], int size2) {
	int summ = 0;
	summ += summArr(array, size);
	summ += summArr(array2, size2);
	return summ;
}
void reverceArr(int array[], int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(array[i], array[size - 1 - i]);
	}
}
void swapArr(int array[], int array2[], int array3[], int size, int size2, int size3) {
	for (int i = 0; i < size2/2; i++) {
		swap(array[array2[i]],array[array3[i]]);
	}
}

	
int main()
{
	int array[] = {3,4,5,2,3,1};
	int size = sizeof(array) / sizeof(array[0]);
	int array2[] = { 2,1,4 };
	int size2 = sizeof(array2) / sizeof(array2[0]);
	int array3[] = { 3,4,1};
	int size3 = sizeof(array3) / sizeof(array3[0]);
	showArr(array, size);

	cout <<minArr(array, size)<<endl;
	cout << maxArr(array, size)<<endl;
	cout << summArr(array, size) << endl;
	cout << srdArrif(array, size)<<endl;
	cout << minIndArr(array, size) << endl;
	cout << maxIndArr(array, size) << endl;
	sortArr(array, size);
	cout<< summArrElem(array, size, array2, size2);
	reverceArr(array, size);
	swapArr(array, array2, array3, size, size2, size3);
}