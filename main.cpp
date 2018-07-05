#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int l,x,i,cx,cl;
    cout<<"Introduceti numarul de grade din prima zi:";
    cin>>l;
    cl=l;
    system("cls");
    for(i=2;i<=7;i++)
    {
        system("cls");
        cout<<"Introduceti numarul de garde din urmatoarea zi:";
        cin>>x;
        cx=x;
        if(l>x)
        {
            l=x;
        }
        if(cl<cx)
        {
            cl=cx;
        }
        system("cls");
    }
    cout<<endl<<endl<<"Rezultate:"<<endl<<"=========="<<endl<<endl<<"Cea mai mica temperatura este:"<<l<<endl<<"Cea mai mare temperatura este:"<<cl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl456;
    return 0;
}
