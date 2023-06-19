/*7. Create a class named Shirt that has the public data members collarSize and sleeveLength.
Create a class named Pants that has the public data members waistSize and inSeam. Write a
program that declares one object of each type Shirt and Pants and assigns values to the objects’
data fields.  Write two overloaded functions named displayClothingFacts(). One version of the
function takes a Shirt object as an argument; the other version takes a Pants object.
Each version displays the facts about the piece of clothing. Your main() function should
demonstrate that you can call displayClothingFacts() with either type of clothing.*/

#include <iostream>
using namespace std;

class Shirt{
    public:
            int collarSize , sleeveLength;
    public:
            void displayClothingFacts(int , int);
    };

class Pants{
    public:
            int waistSize , inSeam;
    public:
            void displayClothingFacts(int , int);
    };

void Shirt::displayClothingFacts(int collarSize , int sleeveLength){
    cout << "collarSize and sleeveLength are: " << collarSize << "  " << sleeveLength << '\n';
}

void Pants::displayClothingFacts(int waistSize , int inSeam){
    cout << "waistSize and inSeam are: " << waistSize << "  " << inSeam;
}

int main(){

    Shirt Shirtobject;
    Pants PantsObject;

    cout << "Enter collarSize and sleeveLength: ";
    cin >> Shirtobject.collarSize >> Shirtobject.sleeveLength;
    cout << "Enter waistSize and inSeam: ";
    cin >> PantsObject.waistSize >> PantsObject.inSeam;

    Shirtobject.displayClothingFacts(Shirtobject.collarSize , Shirtobject.sleeveLength);
    PantsObject.displayClothingFacts(PantsObject.waistSize , PantsObject.inSeam);

    return 0 ;
}
