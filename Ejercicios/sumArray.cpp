//Juan Carlos Perez Ramirez

#include <iostream>

using namespace std;

int suma(int arr[5]) {
    int sum = 0;
    for (int i=0; i<5; i++) {
        sum += arr[i];
    };
    
    return sum;
};

int main()
{
    cout << "Sumare cinco numeros de tu eleccion" << endl;
    cout << "Defina los cinco numeros a sumar: " << endl;
    
    int nums[5];
    
    for (int i=0; i<5; i++) {
        cout << "Defina " << i+1 << "o numero: ";
        cin >> nums[i];
    };
    
    cout << "R = " << suma(nums);

    return 0;
}
