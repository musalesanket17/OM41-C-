Result: Pass
Marks: 27/30
Percentage: 93.33 %
Questions: 10
Correct Answers: 9
Attempted: 10


1. What is  output of this program?                                                                                                                                  
void fun(int, int);
void fun(int=10,int=20,int=30);
int main()
{
	fun(1,2);
	return 0;
}

void fun(int x,int y,int z)
{
        Cout<<endl<<x<<endl<<y<<endl<<z;
}


void fun(int x,int y)
{
	cout<<endl<<x<<endl<<y;
}

OPYION-> 
          1. 1    2                                                                                                2
          2. Compile time error
          3. 1     2      30                                                                               2                                                                                 30
          4. none of the above

2. which of the following statement is correct in context of object?  
   OPTION :->      1. value stored inside object is called state of the object 
         2. Property of an object which distinguishes it from all other objects is called state of the object
         3. Member function of class represent behaviour of object  




3. Which of following access specifier is used in a structure definition by default?
 OPTION :->   1. protected
    2. public
    3. private
    4. friend


4. ...........are member functions of the class,which is used to read the state of the object.
OPTION :->     1. constructor
     2. Mutators
     3. Iterator
     4. Inspectors
     5. Destructor

5. Pick the incorrect statement for namespaces in C++. OPTION :->                                                                                               
OPTION :->  a) Namespace declarations are always global scope
  b) Keyword namespace is used at the starting of a namespace definition
  c) Namespace has access specifiers like private or public
  d) Namespace definitions can be nested



6. 
#include <iostream>
using namespace std;
namespace na
{
int num1 = 10;
}
int main( void )
{
int num1 = 20;
using namespace na;
cout<<"Num1 : "<<num1<<endl; 
Cout<<"Num1 :”<<na::num1<<endl;
return 0;
}
OPTION :->
     1. 20                                                                                                
     2. 10                                                                                   
     3. 20                                                                                 
     4. E
     5. None of the above


7. Which of the following permits function overloading in c++?
   OPTION :->
        1. Type of arguments
        2. Number of arguments
        3. Type,Number and Sequence of arguments
        4. Return type of function
        5. Both C and D

8. What is  output of this program?      
  #include <iostream>
  using namespace std;
  namespace na
  {
    int num1 = 10;
    int num3 = 30;
  }
  namespace na
  {
    int num2 = 20;
    int num3 = 40;
  }
  int main( void )
  {
    cout<<"Num1 : "<<na::num1<<endl; 
    cout<<"Num3 : "<<na::num3<<endl; 
    cout<<"Num2 : "<<na::num2<<endl; 
    cout<<"Num3 : "<<na::num3<<endl; 
    return 0;
  }
     OPTION :->    1. Compile Time Error
         2. Num1 : 10    Num3 : 30    Num2 : 20    Num3 : 40
         3. Runtime Error
         4. None of the above












10. Which of the following statements is/are correct in context of class?

 1.Class is a collection of data member and member functions.
 2.Class is a physical entity.

   OPTION :->
      1. Only 2 is correct
      2. Only 1 is correct
      3. Both 1 and 2 are correct
      4. None of the above