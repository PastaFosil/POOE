//Juan Carlos Perez Ramirez

#include <iostream>

using namespace std;

void getMax(int* array, int size) {
    int max = array[0];
    
    for (int i=1; i<size; i++) {
        if (array[i]>max) {
            max = array[i];
        };
    };
    
    cout << "Greater value: " << max;
};

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
    };
    
    getMax(array, n);
    
    delete[] array;
    
    return 0;
}
