//Juan Carlos Perez Ramirez

#include <iostream>

using namespace std;

void sortAsc(int *arr, int size) {
    int pass = 0;
    while (pass == 0) {
        pass = 1;
        for (int i=0; i<size-1; i++) {
            int temp = arr[i+1];
            if (arr[i]>arr[i+1]) {
                arr[i+1] = arr[i];
                arr[i] = temp;
                pass = 0;
            }
        }
        
    }
}

int main()
{
    cout<<"Define int array: \n\n";
    
    cout << "Size: ";
    int n;
    cin >> n;
    
    int* array = new int[n];
    
    cout << endl;
    
    for (int i=0; i<n; i++) {
        cout << "array[" << i <<"] = ";
        cin >> array[i];
    }
    
    sortAsc(array, n);
    
    cout << "\nSorted array: " << "{ ";
    for (int i=0; i<n; i++) {
        if (i<n-1) {
            cout << array[i] << " , ";
        } else {
            cout << array[i] << " }";
        }
        
    }
    return 0;
}



