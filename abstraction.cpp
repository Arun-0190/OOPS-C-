#include<iostream>
using namespace std;

class A{
    protected: double a;
    public: void getdata(){
        cout<<"enter a(radius or side length): ";
        cin>>a;
    }
    virtual double area() = 0;
};

class circle : public A{
    public: double area(){
        return a*a*3.14;
    }
};

class square : public A{
    public: double area(){
        return a*a;
    }
};

class rectangle : public A{
    public: double area(){
        double b;
        cout<<"Enter breadth: ";
        cin>>b;
        return a*b;
    }
};

int main(){
    circle c1;
    c1.getdata();
    double x = c1.area();
    cout<<"Area of cirle of given radius is: "<<x<<endl;

    square s1;
    s1.getdata();
    double y = s1.area();
    cout<<"Area of square of given side length is: "<<y<<endl;

    rectangle r1;
    r1.getdata();
    double z = r1.area();
    cout<<"Area of rectangle of given length and breadth is: "<<z<<endl;
    return 0;
    
}