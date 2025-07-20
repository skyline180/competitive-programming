#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int original_a = a, original_b = b, original_c = c;

    if(a>b){
        swap(a, b);
    }
    if(b>c){
        swap(b, c);
    }
    if(a>b){
        swap(a, b);
    }

    cout << a << endl << b << endl << c << endl;
    cout << endl;
    cout << original_a << endl << original_b << endl << original_c << endl;

    return 0;
}

/*

//Using array;  sort(arrray)

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Input
    int A, B, C;
    cin >> A >> B >> C;

    // Store the numbers in an array
    int arr[] = {A, B, C};

    // Sort the array in ascending order
    sort(arr, arr + 3);

    // Output sorted numbers
    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl; // Print a blank line

    // Output original numbers
    cout << A << " " << B << " " << C << endl;

    return 0;
}


*/
