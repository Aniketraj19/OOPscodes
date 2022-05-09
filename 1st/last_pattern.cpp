#include <iostream>
using namespace std;
int main(){
    int arr[5], i, j, k = 1;
    for (i = 0; i < 5; i++){
        arr[i] = k;
        k += 2;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++){
            cout << arr[j];
        }
        for (j = 0; j < i; j++)
            cout << arr[j]; 
        cout << endl;
    }
    
}