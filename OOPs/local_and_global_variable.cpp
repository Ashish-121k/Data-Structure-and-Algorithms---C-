#include<iostream>
using namespace std;

int x = 40;        //global variable

void fun(){
    int  x = 60;
    cout<<x<<endl;

    ::x = 7;
    cout<<::x<<endl;

}

int main(){

    ::x = 5;        // global variable change
    int x = 20;
    cout<<x<<endl;
    cout<<::x<<endl;
    fun();
    cout<<::x<<endl;
    return 0;
    
}

/*
/Static Variable : A static variable is a type of variable used in programming languages like 
C, C++, Java, and others. Unlike regular variables, which are created and destroyed every time
 a function is called, static variables retain their value between function calls.

In C and C++, a static variable declared within a function retains its value even after the function 
exits, and it's accessible only within the scope of the function in which it is declared.

Here's a simple example in C:

    #include <stdio.h>

    void func() {
        static int count = 0;
        count++;
        printf("Count is %d\n", count);
    }

    int main() {
        func(); // Output: Count is 1
        func(); // Output: Count is 2
        func(); // Output: Count is 3
        return 0;
    }

In this example, the variable count is declared as static inside the function func(). It retains its 
value between function calls, so every time func() is called, the value of count persists and increments.

Static variables can also be declared at the global scope, in which case they retain their value 
throughout the execution of the program and are accessible from any function within the same file.

In object-oriented programming languages like Java, static variables are associated with the class
 rather than with instances of the class. They are shared among all instances of the class and can be 
 accessed using the class name rather than an instance variable.
 */






