#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C, temp;
    cin >> A >> B >> C;

    int max_num = max(A, max(B,C));
    int min_num = min(A, min(B,C));

    cout << min_num << " " << max_num << endl;

    return 0;
}


