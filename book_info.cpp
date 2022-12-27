#include<iostream>
#include<string>
using namespace std;

class publication
{
    public:
    string Title;
    float Price;
    void getdata()
    {
        cout<<"\nEnter the name:"<<endl;
        cin>>Title;
        cout<<"Enter the price"<<endl;
        cin>>Price;

    }
    void putdata() const 
    {
        cout<<"\nTitle:"<<Title;
        cout<<"\nPrice:"<<Price;
    }
};
class book: public publication
{
    public:
    int pages;
    void getdata()
    {
        publication::getdata();
        cout<<"\nenter the pages:";
        cin>>pages;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"\npages"<<pages;

    }

};
class casset: public publication
{
    public:
    float time;
    void getdata()
    {
        publication::getdata();
        cout<<"\nenter time of the casset";
        cin>>time;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"\ntime"<<time;
        cin>>time;

    }
    
};
int main()
{
    book book1;
    casset casset1;
    book1.getdata();
    casset1.getdata();
    book1.putdata();
    casset1.putdata();
    cout<<endl;
    return 0;
}