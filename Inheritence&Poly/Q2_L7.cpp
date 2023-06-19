/*2. There is a class student, that stores name of school or university from which
he is enrolled and name of highest degree he has obtained so far. It has the function
to get and display the members. Design a class Employee with name and employee number.
Derive Manager, Scientist and Laborer classes from Employee class. The manager class
has extra attribute title (string type) and dues (float type). The scientist class has
extra attributes number of publications. The Laborer class has nothing extra. The classes
have necessary functions for set and display the information. The manager and scientist are
students of a university also. Use inheritance. Test your program by creating objects of
type manager, scientists and laborer.  */


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string school_name;
  string degree_name;

public:
  void get_info() {
    cout << "Enter school name: ";
    getline(cin, school_name);
    cout << "Enter highest degree obtained: ";
    getline(cin, degree_name);
  }

  void display_info() {
    cout << "School / University Name: " << school_name << endl;
    cout << "Highest Degree Obtained: " << degree_name << endl;
  }
};

class Employee {
private:
  string name;
  int emp_num;

public:
  void get_info() {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee number: ";
    cin >> emp_num;
    cin.ignore();
  }

  void display_info() {
    cout << "Employee Name: " << name << endl;
    cout << "Employee Number: " << emp_num << endl;
  }
};

class Manager : public Employee, public Student {
private:
  string title;
  float dues;

public:
  void get_info() {
    Employee::get_info();
    Student::get_info();
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter dues: ";
    cin >> dues;
    cin.ignore();
  }

  void display_info() {
    Employee::display_info();
    Student::display_info();
    cout << "Title: " << title << endl;
    cout << "Dues: " << dues << endl;
  }
};

class Scientist : public Employee, public Student {
private:
  int num_publications;

public:
  void get_info() {
    Employee::get_info();
    Student::get_info();
    cout << "Enter number of publications: ";
    cin >> num_publications;
    cin.ignore();
  }

  void display_info() {
    Employee::display_info();
    Student::display_info();
    cout << "Number of publications: " << num_publications << endl;
  }
};

class Laborer : public Employee {
public:
};

int main() {
  Manager manager;
  Scientist scientist;
  Laborer laborer;

  cout << "Enter Manager Information:\n";
  manager.get_info();
  cout << endl;

  cout << "Enter Scientist Information:\n";
  scientist.get_info();
  cout << endl;

  cout << "Enter Laborer Information:\n";
  laborer.get_info();
  cout << endl;

  cout << "Manager Information:\n";
  manager.display_info();
  cout << endl;

  cout << "Scientist Information:\n";
  scientist.display_info();
  cout << endl;

  cout << "Laborer Information:\n";
  laborer.display_info();
  cout << endl;

  return 0;
}

