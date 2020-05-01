#include <iostream>  
using namespace std;  
template<class X,class Y> void fun(X a,Y b)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main()  
{  
   fun(15,12.3);  
   
   return 0;  
}  

/*
Output : 

Value of a is : 15
Value of b is : 12.3
*/
