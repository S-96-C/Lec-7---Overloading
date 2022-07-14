#include <iostream>
using namespace std;

class Employee {
  private:
    int empno;
    float salary;
  public:
  // I want to create a constructor
  // which is called the default 
  // constructor
   Employee(); // 1. Constructors have the same name as the class name
   // 2. Constructors don't have return types

   // I want to have another 
   // constructor called the
   // overloaded constructor
   Employee(int pempno, float psalary);

   void assignDetails();
    void assignDetails(int pemno, float psalary);
    void display();
};

// default constructor
Employee::Employee() {
   empno = 0;
   salary = 0;
   cout << "Default constructor called" << endl;
}
// overloaded constructior
Employee::Employee(int pempno,
    float psalary) {
      empno = pempno;
      salary = psalary;
      cout << "Overloaded constructor called " << endl;
}
void Employee::assignDetails() {
   empno = 0;
   salary = 0;
}
// overloaded method
void Employee::assignDetails(int pempno, float psalary) {
   empno = pempno;
   salary = psalary;
}

void Employee::display() {
  cout << "Empno : " << empno << endl
       << "Salary : " << salary << endl;
}

int main() {
    // employee object is being created
    // here the constructor will be
    // called
    // since we don't have any arugments then the default constructor is called automatically
    Employee emp; // the default constructor is called
    emp.display();

   // I am creating an object
   // and passing two arguments
   // 100, 50000
   // it will automatically call
   // the overloaded constructor
    Employee emp2(100, 50000);
    emp2.display();
}