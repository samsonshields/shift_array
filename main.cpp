#include <iostream>
using namespace std;

int prompt_length() {
    int length;
    while (true) {
        cout << "Input length of array: "<< endl;
        cin >> length;
        if (length<1) {
            cout << "Out of range! Try again." << endl;
        } else {
            break;
        }
    }
    return length;
}

int prompt_shift() {
    int shift;
    while (true) {
        cout << "Input shift number: "<< endl;
        cin >> shift;
        if (shift<0) {
            cout << "Out of range! Try again." << endl;
        } else {
            break;
        }
    }
    return shift;
}

void prompt_arr(int arr[], int length) {
    cout << "Input array elements: " << endl;
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
}

void rotate(int arr[], int length, int k){
    k = k % length;
    for(int i = 0; i < length; i++){
        if(i < k){
            cout << arr[length + i - k] << " ";
        }
        else {
            cout << arr[i - k] << " ";
        }
    }
}

int main() {
    int length = prompt_length();
    int arr[length];
    prompt_arr(arr, length);
    int shift = prompt_shift();
    cout << "Rotated array: ";
    rotate(arr, length, shift);
    return 0;
}
