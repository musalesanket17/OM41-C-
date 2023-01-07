Result: Pass
Marks: 48/60
Percentage: 73.33 %
Questions: 20
Correct Answers: 16
Attempted: 20





1. Following keyword is used before a function in a base class to be overridden in derived class in C++


        1. override
     T->2. virtual
        3. new override
        4. new



2. procedure oriented programs are divided into small code units called as ------.


      T->1. functions
         2. class
         3. data types
         4. macro



3. Which option is true about the catch block in exception handling?
    I.   one try block should have at least one catch block.
    II.  one try block can have multiple catch blocks.
    III. every try block must have a generic catch.
    IV.  generic block should be the last catch block.


         1. Only III
         2. Both I and II
         3. Both I and IV
     T-> 4. I, II and IV



4. Copy constructor must recieve its arguments by


     T-> 1. only pass-by-refernece
         2. only pass-by-value
         3. only pass by address
         4. All of the above



5. #include<iostream>
int main()
{
    int x=10,y=0;
    try
    {
        int res=x/y;
        std::cout<<"res::"<<res<<std::endl;
    
    }
    catch(int)
    {
        std::cout<<"Enter Other Than 0"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"can not divide by zero"<<std::endl;
    }
    return 0;
}


      T->1. program abnormally terminated(run time error).
         2. Enter Other Than 0
         3. can not divide by zero
         4. it continues with the code below the catch block.




6. What is true about templates?
  I.   we can write templates for functions
  II.  we can write templates for classes.
  III. we can write templates in multiple files.
  IV.  we can not write templates in multiple files.


      T->1. I, II and IV.
         2. I and II.
         3. I, II and III.
         4. Only II




7. Inheritance is used for achieving ...


         1. Class Re-usability
         2. Creating a hierarchy of classes
         3. Extendibility
     T-> 4. All of Above



8. class xyz: public abc,public mnp{}; this is called as


         1. Multilevel inheritance
      T->2. Multiple inheritance
         3. Hybrid inheritance
         4. Hierarchical Inheritance


9. C++ abstract class can contain


         1. Pure virtual function
         2. Non-virtual function
         3. Only pure virtual function
     T-> 4. pure virtual,non-virtual function,virtual function


10. #include<iostream> 
using namespace std; 
#include<stdlib.h>
namespace NPoint
{
    class Point 
    { 
        int xPosition;
        int yPosition;
        public:
        Point() 
        { 
            xPosition=100;
            yPosition=200;
            cout << "parameterless constructor called"; 
        } 
        void Print()
        {
            cout<<"this->xPosition="<<this->xPosition<<endl;
            cout<<"this->yPosition="<<this->yPosition<<endl;

        }
    };
} 
using namespace NPoint;
int main() 
{ 
   Point *ptr= new Point;
   return 0; 
}


How to access Print member function on pointer ptr?


        1. ptr->Print();
        2. (*ptr).Print();
        3. ptr.Print();
    T-> 4. both ptr->Print(); and (*ptr).Print();


11. What do you mean by down casting ?


        1. Storing address of derived class object into base class pointer.
        2. Storing address of derived class object into derived class pointer.
        3. Storing address of base class object into base class pointer.
     T->4. Storing address of base class object into derived class pointer.
        

12. IS-A relationship in C++ is


     T->1. Inheritance
        2. Encapsulation
        3. Composition
        4. None



13. How to calculate the size of an object of the class in cpp ?


    T-> 1. sum of the size of all non static data members of that class.
        2. sum of the size of all static data members of that class.
        3. sum of the size of all static and non static data members of that class.
        4. sum of the size of all non static data members and member functions of that class.



14. Which of the following can not be declare as virtual in C++?


    T-> 1. constructor
        2. destructor
        3. function
        4. friend function



15. In the public mode of inheritance, a public member of base becomes ______ members of derived.


        1. private
    T-> 2. public
        3. protected
        4. default


16. wchar_t follows ____ character set.


        1. ascii
     T->2. unicode
        3. ascii and unicode
        4. none of above




17. class A 
{};
class B: public A
{};
class C: public B
{};
class D: public C
{};

Which is the type of inheritance in given code ?


      1. Multiple
      2. Hybrid
      3. Hierarchical
   T->4. Multilevel




18. If you want to write multiple functions in a class with same name, then what C++ feature will you use?


      1. Function overriding
      2. Encapsulation
  T-> 3. Function overloading
      4. None



19. Friend function speically is used for


   T->  1. to access private data memeber of different class
        2. to avoid private data memeber of different class
        3. Both A & B
        4. None of the above



20. cout is a/an


       1. operator
       2. function
   T-> 3. object
       4. macro

