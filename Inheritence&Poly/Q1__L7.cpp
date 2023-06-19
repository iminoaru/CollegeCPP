/* 1. Consider an example of declaring the examination result. Design three classes: Student, Exam, and Result.
The Student class has data members representing roll number, name. Create the class Exam by inheriting Student class.
The Exam class adds fields (data members) representing the marks scored in six subjects. Derive the Result from the
Exam class, and it has its own fields such as total_marks. Write an interactive program to model this relationship.*/

#include <iostream>
using namespace std;

class Student{
protected:
	
    int rollno;
    string name;

public:
	
    void getter(){
        cout << "Enter name : ";
        getline(cin , name);
        cout << "Enter rollno: ";
        cin >> rollno;
    }
    
	void setter(){
		cout << name << " " << rollno << '\n';
	}
	
};

class Exam : public Student{
protected:
	
    int marks[6];
    
public:
    void marksgetter(){
        cout << "Enter Marks: ";
        for(int i = 0 ; i < 6 ; i++){
            cin >> marks[i];
        }
    }
    
};

class Result : public Exam{
protected:
	
    int total_marks = 0;
    
public:
    int tmarks(){
    for(int i = 0 ; i < 6 ; i++){
        total_marks += marks[i];
    }
    return total_marks;
    }
    
};

int main(){

	Result obj;
	obj.getter();
	obj.setter();
	obj.marksgetter();
	cout << obj.tmarks();	
		
	return 0;
}









