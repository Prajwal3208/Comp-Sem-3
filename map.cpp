#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int>state;
    map<string,int>::iterator it;
    int ch,key,n,m;
    string s1;

    cout<<"enter no elements you want to insert:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"map implementation:"<<endl;
        cout<<"1.insert element in the map:"<<endl;
        cout<<"2.size of the map:"<<endl;
        cout<<"3.find elememt key in the map:"<<endl;
        cout<<"4.display map"<<endl;
        cout<<"5.exit:"<<endl;
        cout<<"enter your choice:";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"enter no of states:";
            cin>>m;
            for(int i=0;i<m;i++)
            {
                cout<<"enter value you want to be insert:";
                cin>>s1;
                cout<<"enter the key element:";
                cin>>key;
                state.insert(pair<string,int>(s1,key));
            }
            break;
        case 2:
            cout<<"size of the map:";
            cout<<state.size()<<endl;
            break;
            
        case 3:
            cout<<"enter key element:";
            cin>>key;
            
        default:
            break;
        }
    }

}