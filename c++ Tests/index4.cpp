







2. When will we use the function overloading?

  T->  1. same function name but different number of arguments
       2. different function name but same number of arguments
       3. same function name but same number of arguments
       4. different function name but different number of arguments

3. The static member functions ____________________.

  T-> 1. Can be called using class name
      2. Can be called using program name
      3. Can be called directly
      4. Can’t be called outside the class


4. Which keyword must be used to declare a member function as a constant member function?


      1. Constant
  T-> 2. Const
      3. ConstFunction
      4. FunctionConst


5. What will be the output of the following C++ code?


#include <iostream>
using namespace std;
class Point
{
    int x, y;
	public:
    Point(int i = 0, int j =0)
	{
        x = i;
        y = j;
	}
    int getX() const
    {
    	return x;
    }
    int getY()
    {
       return y;
    }
};
int main()
{
    const Point t;
    cout << t.getX() << " ";
    cout << t.gety();
    return 0;
}


        1. Garbage Values
        2. 0 0
        3. Compiler Error in line cout << t.getX() << " ";
   T->  4. Compiler Error in line cout << t.gety();


6. Which of the following operators can be overloaded?

        1. .* (Pointer-to-member Operator )
        2. :: (Scope Resolution Operator)
        3. .* (Pointer-to-member Operator )
   T->  4. -> (arrow Operator)
        

7. What is the correct syntax for constant member function of a class?

       1. const return_type function_name(data_type parameter)    {    }
       2. constant return_type function_name(data_type parameter)    {    }
   T-> 3. return_type function_name(data_type parameter)const     {    }
       4. return_type function_name(data_type parameter)constant    {    }



8. The static member functions ____________________.


  T-> 1. Can be called using class name
      2. Can be called using program name
      3. Can be called directly
      4. Can’t be called outside the function
      


9. Syntax for making member function as Constant is __________.

      1. void display()
  T->  2. void display() const
      3. const void display()
      4. void const display()


10. When overloading unary operators using Friend function,it requires_____ argument/s.

      1. Zero
   T->2. One
      3. Two
      4. none of above
// When unary operators are overloaded through a member function, 
//they do not take any explicit arguments. 
//But when overloaded by a friend function, they take one argument.