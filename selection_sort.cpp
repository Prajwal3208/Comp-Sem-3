#include<iostream>
using namespace std;
int n;

template< class T>
class mysort
{
private:
    T a[20];
public:
    void read();
    void display();
    void sort(); 

};

template<class T>
void mysort<T> :: read()
{
    cout<<"enter size of the array:"<<endl;
    cin>>n;
    cout<<"enter the number of student:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

}

template<class T>
void mysort<T> ::display()
{
    cout<<"entered no are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<endl;
}

template<class T>
void mysort<T>::sort()
{
    T temp;
    for(int i=0;i<n-1;i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
}

int main()
{
    int ch;
    do
    {
        cout<<"enter your choice:";
        cout<<"1.integer array:";
        cout<<"2.flost array:";
        cout<<"3.exit"<<endl;

        cin>>ch;
        switch (ch)
        {
        case 1:
            mysort<int>s1;
            s1.read();
            s1.sort();
            cout<<"after sorting enter array elements are:"<<endl;
            s1.display();
            break;
        case 2:
            mysort<float>s2;
            s2.read();
            s2.sort();
            cout<<"after sorting enter array elements are:"<<endl;
            s2.display();
        default:
            cout<<"exit"<<endl;
            break;
        }

    } while (ch!=3);
    return 0;
    
}

