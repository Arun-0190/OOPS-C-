#include <iostream>
using namespace std;

class Hehe{
    int a;
    int b;
    public: 
        void getdata(int x, int y){
        a = x;
        b = y;
        }
        void display(){
            cout<<"a is: "<<a<<endl<<"b is: "<<b<<endl;
        }
        void operator -(){
            a = -a;
            b = -b;
        }
};

int main(){
    Hehe h1;
    h1.getdata(78,69);
    cout<<"Before operator overloading: "<<endl;
    h1.display();
    -h1;
    cout<<"After operator overloading: "<<endl;
    h1.display();
    return 0;
    
}