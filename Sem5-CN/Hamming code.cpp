#include <iostream>
using namespace std;

int main() {
    int arr[7];
    int p1, p2, p4;

    for (int i = 0; i < 7; i++) {
        cout << "Enter the element of bit code: ";
        cin >> arr[i];
    }

    p1 = arr[0] ^ arr[2] ^ arr[4] ^ arr[6];
    p2 = arr[1] ^ arr[2] ^ arr[5] ^ arr[6];
    p4 = arr[3] ^ arr[4] ^ arr[5] ^ arr[6];

    // p1 = arr[2] ^ arr[4] ^ arr[6];
    // p2 = arr[2] ^ arr[5] ^ arr[6];
    // p4 = arr[4] ^ arr[5] ^ arr[6];

    int binaryNumber = (p4 << 2) | (p2 << 1) | p1;

    cout << "The decimal value of the binary number " << p4 << p2 << p1 << " is: " << binaryNumber << endl;
    if(binaryNumber!=0)
    {
    if (arr[binaryNumber]==0)
    {
       arr[binaryNumber]=1;
    }
    }
    else
    {
        arr[binaryNumber]=0;
    }
    cout << "Correct bit code is: ";
    for (int i = 0; i < 7; i++) {
        cout<< arr[i];
    }
    
    return 0;
}
