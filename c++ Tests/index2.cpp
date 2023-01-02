Result: Fail
Marks: 15/30
Percentage: 33.33 %
Questions: 10
Correct Answers: 5
Attempted: 10


1. Which of the following statements is correct?

 1.A reference is useful, when we intend to change the values of actual arguments through the function call.
 2.A reference is useful, when we want to save memory by preventing the ceation of large structure variable that are being passed to the function.

          1. Only 1 is correct.
          2. Only 2 is correct.
         T-> 3. Both 1 and 2 are correct.
          4. Both 1 and 2 are incorrect.


2. What is output of following code?                                                                                                                                
#include<iostream>
using namespace std;

int main()
{
	int i;
	int arr[4]={10,20,30,40};
	int (&k)[4]=arr;
	for(i=0;i<4;i++)
	cout<<k[i]<<" ";

	return 0;

}

           1. 10 20 30 40
           2. 10           20       30         40
           3. compile time error
           4. none of the above


 3. what is meaning of following statement?  
  #include<iostream> 
   using namespace std;   
 int main() 
 {  
       int &a=5; 
       cout<<a<<endl; 
        return 0;   
}          

         1. 5
         2. segmentation fault
         3. Runtime error
       T->  4. compile time error
                                                                                                                                                                                                                                                                                                                                                                           
  
4. Which of the following statements are incorrect related to malloc() function?
 
          1. We cannot initialize memory with user defined value using malloc()
          2. If we create object using malloc() then constructor do not get call
          3. Using malloc() we can reserved space on heap segment only
       T-> 4. none of the above

5. Pick the correct statement about references.

         1. References can be assigned value NULL
       T->  2. References once initialized, we cannot change its referent variable
         3. Reference should not be initialized when created
         4. Reference is the same as pointers
 
 
6. Which of the following is used to release the dynamically allocated memory in CPP if we allocate memory using operator?

         1. remove
         2. free()
     T-> 3. delete
         4. Both 2 and 3

7. Which of the following is/are valid ways to allocate memory for an integer by dynamic memory allocation in CPP?

        1. int *p = new int(100);
        2. int *p;    p = new int;   *p = 100;
        3. int *p = NULL;    p = new int;     *p=100;
        4. Only 1 and 2
  T->    5. All of these

8. During dynamic memory allocation in C++, what happens if a new operator fails to allocate memory?

        1. It returns False
        2. It returns NULL
     T-> 3. Throws bad_alloc exception
        4. None of these



9. #include<iostream> 
using namespace std; 
#define a1 a
int main() 
{
    int a1=1000; 
    int &ref=a; 
    cout<<"ref="<<ref<<endl;
    return 0; 
}

   T-> 1. ref=1000
       2. compile time error
       3. run time error
       4. none of above


10. In which situations a destructor is called?

       1. we allocate memory using the new operator and free it using delete operator.
       2. object goes out of scope
       3. program terminated
   T-> 4. both A and B

