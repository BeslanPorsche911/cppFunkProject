

#include <iostream>
using namespace std;


void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i];
    }
}

int countByIndex(int array[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == num) count++;
    }
    return count;
}

void deleteByIndex(int array[], int array2[], int size, int index) {
    for (int i = 0; i < index; i++) {
        array2[i] = array[i];
       
    }
    for (int j = index + 1; j < size; j++) {
        array2[j - 1] = array[j];
    }
}

void deleteByRange(int array[], int array2[], int size, int range1, int range2) {
    ++range2;
    if (range1 > range2) swap(range1, range2);
    for (int i = 0; i < range1; i++) {
        array2[i] = array[i];
    }
    for (int i = range2, k = range1; i < size; i++, k++) {
        array2[k] = array[i];
    }
}

void exchangeReverseArrays(int array[], int array2[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size-1; j > i-1
            
            
            ; j--) {
            swap(array[j], array2[i]);
        }
    }
}
int pereg(int a, int b) {
    return a + b;

}
int pereg2(int a, int b, int c) {
    return a + b + c;
}
int main()
{
   /* int array[] = { 2, 3, 7, 1 };
    int array2[] = { 1, 4, 3, 2 };
    int size = sizeof(array) / sizeof(array[0]);
    showArray(array, size);
    cout << endl;
    showArray(array2, size);
    exchangeReverseArrays(array, array2, size);
    cout << endl;
    showArray(array, size);
    cout << endl;
    showArray(array2, size);*/
    cout << pereg(1,4) << endl;
    cout << pereg2(1,4,5) << endl;
   
    
}


