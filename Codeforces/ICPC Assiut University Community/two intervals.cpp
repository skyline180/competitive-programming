#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int leftBoundary = max(l1, l2);
    int rightBoundary = min(r1, r2);

    if(leftBoundary <= rightBoundary){
        cout << leftBoundary << " " << rightBoundary << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}
