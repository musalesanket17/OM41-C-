Result: Pass
Marks: 27/30
Percentage: 86.67 %
Questions: 10
Correct Answers: 9
Attempted: 10




1. Runtime polymorphism is achieved by_____________.


      1. friend function
  T-> 2. virtual function
      3. operator overloading
      4. function overloading



2. Compile time polymorphism is also called ________.

      1. Static polymorphism / binding
      2. Early binding
      3. strong typing
   T->4. Both Static polymorphism / binding and Early binding

?






4. 7. What is the output of following code? 
#include <iostream>
using namespace std;
class Base 
{
public:
    void Func() 
    {
        cout<<"Base Function!"<<endl;
    }
};
class Derived: public Base 
{
public:
    void Func()
    {
        cout<<"Derived Function!"<<endl;
    }
};
int main() 
{ 
    Derived dObject;
    Base *bPntr = &dObject;  //line No-22
    bPntr -> Func();
    return 0; 
}


  T->1. Base Function!
     2. Derived Function!
     3. Base Function!Derived Function!
     4. compile time error



5. At line no. 22 Which type of casting is achived?
#include <iostream>
using namespace std;
class Base 
{
public:
    void baseFunc() 
    {
        cout<<"Base Function!"<<endl;
    }
};
class Derived: public Base 
{
public:
    void derivedFunc()
    {
        cout<<"Derived Function!"<<endl;
    }
};
int main() 
{ 
    Derived dObject;
    Base *bPntr = &dObject;  //line No-22
    bPntr -> baseFunc();
    return 0; 
}


         1. Downcasting
    T->  2. Upcasting
         3. Basecasting
         4. runtime casting



6. A pure virtual function is an example of ______________ which does not have ______________.

         1. run time polymorphism, any function to operate
         2. polymorphism, any function to operate
     T-> 3. runtime polymorphism, any body
         4. class, any body


7. C++ abstract class can contain_______________.

        1. Pure virtual functions
        2. Non-virtual functions
        3. virtual functions
     T->4. pure virtual functions,non-virtual functions,virtual functions


8. allows us to treat a derived type as though it were its base type

        1. Deep Copy
        2. Constant data members
    T-> 3. Upcasting
        4. Downcasting


9. IS-A relationship in C++ is

    T->1. Inheritance
        2. Encapsulation
        3. Composition
        4. Aggregation


10. Which of the following keywords are used to handle the exceptions?


       1. try
       2. catch
       3. throw
  T->  4. All of the above

