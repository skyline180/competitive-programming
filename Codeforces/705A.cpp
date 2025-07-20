#include<iostream>
using namespace std;

int main()
{
    int n;  cin >> n;
    string feeling = "I hate ";

    for(int i=2;i<=n;i++){
        if(i%2==0){
            feeling = feeling + "that I love ";
        }else{
            feeling = feeling + "that I hate ";
        }
    }

    cout << feeling << "it" << endl;

    return 0;
}
