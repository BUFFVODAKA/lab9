/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int age,h,b;
    string n;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> h;
        if(h<100){
            n = "Chopper";
        }if(h>=100 && h<180){
            n = "Usopp";
        }if(h>=180){
            cout << "Enter your bounty: ";
            cin >> b;
            if(b>1100000000){
                n = "Zoro";
            }
            if(b<=1100000000){
                n = "Sanji";
            }
        }
    }else if(age>25 && age<=60){
        cout << "Enter your bounty: ";
        cin >> b;
        if(b>500000000){
            n = "Jinbe";
        }
        if(b<=500000000){
            n = "Franky";
        }
    }
    if(age>60){
        n = "Brook";
    }
    
    

    cout << "Your character = " << n;
    return 0;
}