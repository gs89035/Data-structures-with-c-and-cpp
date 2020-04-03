/*Head recursion
                           fun(3)
                            /\
                           /  \
                      fun(2)   print(3)
                        /\
                       /  \
                   fun(1)  print(2)
                     /\
                    /  \
                fun(0)  print(1) 
                  |       
                  X
 */                 
#include <stdio.h>
void fun(int n);

int main()
{
   int n=3;
   fun(3);
}

void fun(int n)
{
 if(n>0)
 {
     fun(n-1);
     printf("%d\n",n);
 }   
   

}