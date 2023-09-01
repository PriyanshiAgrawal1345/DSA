#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    int real;
    int img;
    public:
    ComplexNumbers(int r,int i){
        real=r;
        img=i;
    }
    void plus(ComplexNumbers c){
        real=c.real+real;
        img=c.img+img;
    }
    void multiply(ComplexNumbers c){
        int r=real;
        real=(c.real*real)-(c.img*img);
        img=(c.real*img)+(r*c.img);
    }
    void print(){
        cout<<real<<" + i"<<img<<endl;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}