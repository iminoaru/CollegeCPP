#include <iostream>
using namespace std;


//level 1
class staff{
protected:
    int code;
    string name;

public:
    staff(){
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter Name: ";
        getline(cin , name);
        getline(cin , name);
    }
    void display(){
        cout << "Code: " << code << '\n';
        cout << "Name: " << name << '\n';
    }
};

//level 2
class teacher : public staff{
protected:
    string subject;
    string publication;

    public:
    teacher(){
        cout << "Enter subject: ";
        getline(cin , subject);
        getline(cin , subject);
        cout << "Enter publication: ";
        getline(cin , publication);
        getline(cin , publication);
    }
    void display(){
        cout << "Subject: " << subject << '\n';
        cout << "publication: " << publication << '\n';
    }
};

class officer : public staff{
protected:
    char grade;

public:
    officer(){
        cout << "Enter grade: ";
        cin >> grade;

    }

    void display(){
        cout << "Grade: " << grade << '\n';
    }
};

class typist : public staff{
protected:
    int speed;

public:
    typist(){
        cout << "Enter speed: ";
        cin >> speed;

    }

    void display(){
        cout << "Speed: " << speed << '\n';
    }
};

//level3
class casual : public typist{
protected:
    int wages;

public:
    casual(){
        cout << "Enter daily wages: ";
        cin >> wages;

    }

    void display(){
        cout << "Daily Wages: " << wages << '\n';
    }

};

class regular : public typist{
};

int main(){
    casual obj;
    obj.display();

    officer ob;
    ob.display();

    return 0;
}
