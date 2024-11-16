#include<iostream>
using namespace std;

static int count =0;

class chomu
{
    public:
        chomu(){
            count++;
            cout<<"No. of objects created: "<<count<<endl;
        }
        ~chomu(){
            cout<<"No. of objects destroyed: "<<count<<endl;
            count--;
        }
};

int main()
{
    chomu c1,c2,c3,c4;
    return 0;
}