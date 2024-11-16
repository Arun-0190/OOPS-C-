#include <iostream>
using namespace std;
class vehicle {
    public :

        vehicle(){

            cout<<"This is a vehicle"<<endl;

        }
    
};

//for multilevel inheritance

/*
class car : public vehicle{

    public: 

        car(){

            cout<<"This vehicle is a car"<<endl;
        }

};

class name : public car {

    public:

        name(){
            cout<<"This car is a BMW";
        }
};
*/

/*
class car {

    public: 

        car(){

            cout<<"This vehicle is a car"<<endl;
        }

};
*/


//for hierarcheal inheritance

class car : public vehicle {

    public: 

        car(){

            cout<<"This vehicle is a car"<<endl;
        }

};

class bike : public vehicle {

    public : 
        bike(){

            cout<<"This vehicle is a bike."<<endl;

    }
};

class rum : public vehicle{

    public: 
        rum(){
            cout<<"Hello comerade!! After rum everything can be vehicle!!"<<endl;
        }

};

//making for the hybrid inheritance

class hehe : public car, public bike, public rum{

    public : 
        hehe(){

            cout<<"am drunk buddy!!"<<endl;
            cout<<"Am moving up and down....";
        }
};

//for multiple inheritance

/*
class name : public vehicle, public car {

    public:

        name(){
            cout<<"This car is a BMW";
        }
};
*/

int main(){

    hehe h1;
    
    return 0;
}