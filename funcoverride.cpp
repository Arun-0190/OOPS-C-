#include<iostream>
using namespace std;

class rum{
    public: void nashe(){
        cout<<"rum is here";
    }
};

class whisky{
    public: void nashe(){
        cout<<"whisky is here";
        
    }
};

int main(){
    whisky w1;
    rum r1;
    r1.nashe();
    cout<<endl;
    w1.nashe();
    return 0;
}