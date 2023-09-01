#include<iostream>
using namespace std;



//WARNING:-  don't use (becoz it can be changed in any fn and it will change everywhere)
int global=5;    //global variable which can be accessed by all functions(i.e main and all other fns)



//# define macro
//it doesn't occupy any space(memory)
//it changes to value of macro everywhere in the code before compilation
//ERROR:--- one cannot change its value in the code
#define pi 3.14
#define area(r) (pi*r*r)



//tertiary operator:-  (condition) ? (true) : (false)
#define min(a,b) ((a)>(b) ? (b):(a))



//INLINE FUNCTION
//created when body is of 1 line (2 or 3 it may work or not)(>3 no)
//it will replace the function-call with the single line body before compilation
inline int getmax(int& a,int& b){
    return (a>b) ? (a):(b) ;
}



//DEFAULT ARGUMENT
//it starts from right to left(iff righmost arg is not made default you cannot make arg left to it default )
//default arg---> it will take default value given if that arg is not passed
void print(int arr[],int  size,int start=0){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    //CONSTANT VARIABLE
    //no one can change or alter its value once declared
    const double PI=3.14


    int r=5;
    double areaofcircle=pi*r*r;
    cout<<areaofcircle<<endl;
    cout<<area(r)<<endl;

    int a=4;
    int b=3;
    cout<<min(a,b)<<endl;

    cout<<getmax(a,b)<<endl;

    int arr[5]={1,2,3,4,5};
    print(arr,5,3);
    cout<<endl;
    print(arr,5);
    //ERROR
    //pi=pi+1;
}


