
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if(x == 0.0 && y == 0.0){
        cout << "Origem" << endl;
    }
    else if( y == 0.0){
        cout << "Eixo X" << endl;
    }
    else if(x == 0.0 ){
        cout << "Eixo Y" << endl;
    }
//--------------------------------------
    else if(x > 0.0 && y > 0.0){
        cout << "Q1" << endl;
    }
    else if(x < 0.0 && y > 0.0){
        cout << "Q2" << endl;
    }
    else if(x < 0.0 && y < 0.0){
        cout << "Q3" << endl;
    }
    else if(x > 0.0 && y < 0.0){
        cout << "Q4" << endl;
    }


    return 0;
}



/*
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x == 0.0 && y == 0.0) cout << "Origem" << endl;
    else if (y == 0.0) cout << "Eixo X" << endl;
    else if (x == 0.0) cout << "Eixo Y" << endl;
    else cout << (x > 0.0 ? (y > 0.0 ? "Q1" : "Q4") : (y > 0.0 ? "Q2" : "Q3")) << endl;

    return 0;
}

*/
