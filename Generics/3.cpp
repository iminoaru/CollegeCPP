#include <iostream>
using namespace std;

template <typename T>
class GC{
    
private:
    T data;

public:
    GC(T value) : data(value) {}

    T getter() {
        return data;
    }
};

int main() {
    
    GC<int> intOb(108);
    GC<double> doubleOb(574.84);
    GC<string> stringOb("Radhe Radhe!");

    cout << "Integer data: " << intOb.getter() << '\n';
    cout << "Double data: " << doubleOb.getter() << '\n';
    cout << "String data: " << stringOb.getter() << '\n';

    return 0;
}
