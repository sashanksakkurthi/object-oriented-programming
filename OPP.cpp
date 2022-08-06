#include <iostream>
using namespace std;

/*
» OOP is faster and easier to execute
» OOP provides a clear structure for the programs
» OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
» OOP makes it possible to create full reusable applications with less code and shorter development time
*/

/*
Inheritance -> inherit attributes and methods from one class to another class
*/

class engine{
public:
    int mileage = 1500;

    void showMileage(){
        cout << mileage << endl;
    };

};

class showroom{
public:
    void sayWash(){
        cout <<"worker say wash"<<endl;
    };
};

// deceleration of class(Blue print)
// inheritance of class engine
class car: public engine,public showroom{

/*
Access Specifiers(Abstraction):-
public -> anywhere inside or outside class,
private -> only inside class,
protected -> cannot access outside class but can be accessed in inherited classes
*/

private:
    string owner_name;
public:                   
    int id;
    string name;
public:

    // constructor with parameter
    car(string x){                
        name = x;
    };

    // function declaration inside the class
    void carsId(){               
        cout << id << endl;
    };   

    void showCar(); 

    void carNumber(int number){  
        cout << number << endl;
    };

    /*
    Encapsulation -> 
                    1.Encapsulation ensure better control of your data
                    2.class attributes as private and access them using setter and getter
                    3.Increased security of data
    */

    // setter(Encapsulation)
    void setCarId(int x){
        id = x;

    }

    // getter(Encapsulation)
    int getCarId(){
        cout << id << endl;
        return id;
    }

    void sayWash(){
        cout <<"owner say wash"<<endl;
    };

};

// function definition outside the class
void car::showCar(){       
    cout << name << endl;
}

int main(){

    /*
    class -> 
            1.class is blueprint for a user defined datatype
            2.class consist of data members and member function
    object -> 
            1.an object is a instance of a class
            2.memory is allocated when a object is instantiated
            3.dot operator is used to access the member function and data member
    */

    car c("BMW");        // Creating an object c of class car
    c.id = 19;           // accessing data member  
    c.carsId();          // accessing member function
    c.carNumber(1234);   // accessing member with a argument
    c.showMileage();
    c.showCar();

    /*
    Polymorphism -> 
                    1.it means may forms
                    2.polymorphism occurs when there is a hierarchy of classes and they are related by inheritance
                    3.this allow us to perform a single action in different ways
    */

    // same function of showroom is used my car and it is inheritance 
    // with there own implementation
    showroom sr;
    sr.sayWash();
    c.sayWash();
};