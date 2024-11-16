#include<iostream>
using namespace std;

class Arun
{
    int x,y,z,sum1,sum2;
    public:
        Arun(){
            cout<<"Doing sum with no parameters in constructor:"<<endl;
            cout<<"Enter x: ";
            cin>>x;
            cout<<"Enter y: ";
            cin>>y;
            sum1 = x+y;
            cout<<"Sum is: "<<sum1<<endl;
        }
        

    Arun(int x,int y,int z)
    {
        cout<<endl<<"Doing sum with parameters in constructor:"<<endl;
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
        cout<<"Enter z: ";
        cin>>z;
        sum2 = x+y+z;
        cout<<"Sum is: "<<sum2<<endl;
    }
};

int main(){
    int a, b, c;
    Arun A1;
    Arun A2(a,b,c);
    return 0;
}