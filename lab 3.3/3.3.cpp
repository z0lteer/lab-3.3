#include <iostream>
using namespace std;

int main() {
    double x;  
    double R;
    double y; 

    
    cout << "R = ";
    cin >> R;
   

   
    cout << "x = ";
    cin >> x;

    
    if (x <= -4) {
        y = -1;  
    }
    else if (x > -4 && x <= 0) {
        y = (1.0 / 4.0) * x + 1;  
    }
    else if (x > 0 && x <= 2) {
        y = x * x; 
    }
    else if (x > 2 && x <= 10) {
        y = (-1.0 / 2.0) * x + 5;  
    }
    else {
        y = 0;  
    }

  
    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}
