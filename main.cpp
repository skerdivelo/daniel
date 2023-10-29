#include <iostream>

using namespace std;


int main(){
    double const basePrice = 800.00;
    int speedOverLimit = 0;
    double fine = 0.0;
    cout << "Enter the speed limit: ";
    cin >> speedOverLimit;
    
    if(speedOverLimit <= 20){ //range 0-20
        fine = basePrice * 0.15;
    }else if(speedOverLimit > 20 && speedOverLimit <= 40){ //range 21-40
        fine = basePrice * 0.25;
    }else if(speedOverLimit > 40 && speedOverLimit <= 50){ //range 41-50
        fine = basePrice * 0.4;
    }else if(speedOverLimit > 50 && speedOverLimit <= 60){ //range 51-60
        fine = basePrice * 0.7;
    }else{
        cout << "You are going to jail!" << endl;
    }
    cout << "Your fine is: €" << fine << endl;
}