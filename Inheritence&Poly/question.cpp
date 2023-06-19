#include <iostream>
using namespace std;

class shapes{
protected:
    int dim1;
    int dim2;

public:
    void getData(int dim1 , int dim2 = 0){
        this->dim1 = dim1;
        this->dim2 = dim2;
    }

    virtual void displayArea() = 0;

};

class rectangle : public shapes{
public:

    void displayArea(){
        cout << "Area of Rectangle is " << dim1*dim2 << '\n';
    }
};

class triangle : public shapes{
public:

    void displayArea(){
        cout << "Area of Triangle is " << 0.5*dim1*dim2 << '\n';
    }

};

class circle : public shapes{
public:

    void displayArea(){
        cout << "Area of circle is " << 3.141*dim1*dim1 << '\n';
    }

};

int main(){

    rectangle rob;
    rob.getData(2 , 6);
    rob.displayArea();

    triangle tob;
    tob.getData(5 , 4);
    tob.displayArea();

    circle cob;
    cob.getData(5);
    cob.displayArea();

return 0;
}
