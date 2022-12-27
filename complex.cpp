#include<iostream>
using namespace std;

class complex 
{
public:
    int real;
    int imaginary;
    void getvalue()
    {
        cin>>real;
        cin>>imaginary;
    }
    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;

    }
    void sum(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imaginary=c1.imaginary+c2.imaginary;
    }
    void mult(complex c1,complex c2)
    {
        float temp1,temp2;
        temp1=(c1.real*c2.real) - (c1.imaginary*c2.imaginary);
        temp2=(c1.real*c2.imaginary) + (c1.imaginary*c2.real);
        cout<<temp1<<"+"<<temp2<<"i\n";

    }
};
int main()
{
    complex c1,c2,c3,c4;
    cout<<"enter real and imaginary part of first value:";
    c1.getvalue();
    cout<<"enter real and imaginary part of second value:";
    c2.getvalue();
    c3.sum(c1,c2);
    c3.display();
    c4.mult(c1,c2);
    c4.display();
    return 0;
}
