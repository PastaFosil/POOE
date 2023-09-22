//Juan Carlos Perez Ramirez

#include <iostream>

using namespace std;

void exchange(int* arr, int size, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    
    for (int i=1; i<size; i++) {
        if (arr[i]>max) {  
            max = arr[i];
        }
        if (arr[i]<min) {
            min = arr[i];
        }
    }
}
int main()
{
    cout << "Define int array: " << endl << endl;
    
    cout << "Size of array: ";
    int n;
    cin >> n;
    cout << "\n";
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    cout << endl;
    
    int max, min;
    exchange(array, n, max, min);
    
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;
    return 0;
}
