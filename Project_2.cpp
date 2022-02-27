/*
─────────────────────────────────────────────────────────
─██████████████─██████████████─██████████─██████████████─
─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░██─██░░░░░░░░░░██─
─██░░██████░░██─██░░██████████─████░░████─██░░██████████─
─██░░██──██░░██─██░░██───────────██░░██───██░░██─────────
─██░░██████░░██─██░░██████████───██░░██───██░░██████████─
─██░░░░░░░░░░██─██░░░░░░░░░░██───██░░██───██░░░░░░░░░░██─
─██░░██████░░██─██░░██████████───██░░██───██░░██████████─
─██░░██──██░░██─██░░██───────────██░░██───██░░██─────────
─██░░██──██░░██─██░░██─────────████░░████─██░░██─────────
─██░░██──██░░██─██░░██─────────██░░░░░░██─██░░██─────────
─██████──██████─██████─────────██████████─██████─────────
─────────────────────────────────────────────────────────
*/
#include<bits/stdc++.h>
using namespace std;

class resturent
{
private:
    int number;
    string name;
    int price;

public:
    void setValue(int nu,string n,int p)
    {
        number=nu;
        name=n;
        price=p;
    }
    void menu()
    {
        cout << "#" << number << endl;
        cout << "Name  : " << name << endl;
        cout << "Price : " << price << endl;
    }
    void bill(int amount)
    {
        cout << "Name: " << name << endl;
        cout << "Bill: " << price*amount << endl;
        cout << "Thank You.";
    }
};

int main()
{
    cout << "                                    Welcome to AFIF's!\n";
    cout << "                       " << "    _____\n";
    cout << "                       " << "   /     \\   ____   ____    __ __\n";
    cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
    cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";

    cout<<"1. Add new items."<<endl;
    cout<<"2. Skip."<<endl;

    int b;
    cin>>b;

    resturent arr[1000];
    string n;
    int p,i;

    if(b==1)
    {
        cout<<"How many items: ";
        int a;
        cin>>a;
        fstream file("R.txt",ios::app);
        for(int i=1; i<a; i++)
        {

            cout<<"#";
            cout<<i<<endl;
            file<<"#"<<i<<"\n";

            cin.ignore();
            cout<<"Name  : ";
            getline(cin,n);
            file<<"Name  : "<<n<<endl;

            cout<<"Price : ";
            cin>>p;
            file<<"Price : "<<p<<endl;

            arr[i].setValue(i,n,p);

        }
        file.close();
    }


    if(b==2)
    {
        fstream file("R.txt",ios::in);
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
    cout<<"===================="<<endl;
    cout<<"Welcome to resturent"<<endl;
    cout<<"1. See all."<<endl;
    cout<<"2. Select."<<endl;
    cout<<"Select: ";

    int x;
    cin>>x;
    if(x==1)
    {
        fstream file("R.txt",ios::in);
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();

        cout<<endl<<"Select items: ";
        int y;
        cin>>y;

        int amount;

        cout<<"Select Amount : ";
        cin>>amount;
        cout<<endl<<"You are selected #"<<y<<endl;
        arr[y].bill(amount);
        //break;
    }

    if(x==2)
    {
        cout<<endl<<"Select items: ";
        int y;
        cin>>y;

        int amount;

        cout<<"Select Amount : ";
        cin>>amount;
        cout<<endl<<"You are selected #"<<y<<endl;
        arr[y].bill(amount);
    }
    return 0;
}
