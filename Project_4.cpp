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
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
const int maxn = 2e5+10;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'


class resturent
{
private:
    int number;
    string name;
    int price;
    int amount;

public:
    void setValue(int nu,string n,int p,int a)
    {
        number=nu;
        name=n;
        price=p;
        amount=a;
    }
    void menu()
    {
        cout << "#" << number << endl;
        cout << "Name     : " << name << endl;
        cout << "Price    : " << price << endl;
        cout << "Amount   : " << amount << endl;
    }
    void bill(int amount)
    {
        cout << "Name: " << name << endl;
        cout << "Bill: " << price*amount << endl;
        cout << "Thank You." << endl;
    }
    void resetMenu()
    {
        fstream file("R.txt",ios::app);
        file << number << endl;
        file << name << endl;
        file << price << endl;
        file << amount << endl;

        file.close();
    }
    int resetValue(resturant arr,int am)
    {
        arr.amount=arr.amount - am;
        amount = arr.amount;
        return arr.amount;
    }
    friend int value(resturant arr);
};

int value(resturant arr)
{
    int am = arr.amount;
    return am;
}

int main()
{
    ///Peace be with you.
    optimize();


    cout << "                                    Welcome to AFIF's!\n";
    cout << "                       " << "    _____\n";
    cout << "                       " << "   /     \\   ____   ____    __ __\n";
    cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
    cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";

    resturent arr[1000];
    string n;
    int p,i,a,i=1;

    fstream file("R.text",ios::in);
    while(!file.eof())
    {

        file<<"#"<<i<<"\n";
        file<<n<<endl;
        file<<p<<endl;
        file<<a<<endl;

        arr[i].setValue(i,n,p,a);
        i++;
    }
    file.close();


    cout<<"1. Add new items."<<endl;
    cout<<"2. Edit existing item."<<endl;
    cout<<"3. Skip."<<endl;

    int b;
    cin>>b;

    resturent arr[1000];
    string nj;
    int pj,aj;

    if(b==1)
    {
        cout<<"How many items: ";
        int a;
        cin>>a;
        int list = a;
        i=i-1;

        fstream file("R.txt",ios::app);
        for(int j=i; j<i+a; j++)
        {

            cout<<"#";
            cout<<j<<endl;

            cin.ignore();
            cout<<"Name      : ";
            getline(cin,nj);

            cout<<"Price     : ";
            cin>>pj;

            cout <<"Amount   :";
            cin>>aj;

            arr[j].setValue(j,nj,pj,aj);
        }
    }

    if(b==2)
    {
        ll manuNum;
        cout << "Manu Number" << endl;
        cin >> manuNum;

        cout<<"#";
        cout<<manuNum<<endl;

        cin.ignore();
        cout<<"New Name  : ";
        getline(cin,nj);

        cout<<"Price     : ";
        cin>>pj;

        cout <<"Amount   :";
        cin>>aj;

        arr[manuNum].setValue(manuNum,nj,pj,aj);
    }


    if(b==3)
    {
        for(int k=1; k<j; k++)
        {
            cout<<"#"<<k<<endl;
            cout<<"Name     : "<<arr[j].nj<<endl;
            cout<<"Price    : "<<arr[j].pj<<endl;
            cout<<"Quantity : "<<arr[j].aj<<endl;
        }
    }


    cout<<"===================="<<endl;
    cout<<"Welcome to Afif's"<<endl;
    cout<<"1. See all."<<endl;
    cout<<"2. Select."<<endl;
    cout<<"Select: ";

    int x;
    cin>>x;
    if(x==1)
    {
        for(int k=1; k<j; k++)
        {
            cout<<"#"<<k<<endl;
            cout<<"Name     : "<<arr[j].nj<<endl;
            cout<<"Price    : "<<arr[j].pj<<endl;
            cout<<"Quantity : "<<arr[j].aj<<endl;
        }
    }
    cout<<endl<<"Select items: ";
    int y;
    cin>>y;

    int amount;
    cout<<"Select Amount : ";
    cin>>amount;

    int z,count = 0;
    cout<<endl<<"You are selected #"<<y<<endl;

    if(amount<=arr[y].aj)
    {
        arr[y].bill(amount);
        z=arr.resetValue(arr[y],amount);

        cout << endl << "Remaining Quantity" << y << " is :" << z << endl;
        count++
    }
    else
    {
        cout << "Sorry :( , We are out of stock. " << endl;
    }
    fstream file("R.txt",ios::out);

    for(int k=1; k<j; k++)
    {
        cout<<"#"<<k<<endl;
        cout<<"Name     : "<<arr[j].nj<<endl;
        cout<<"Price    : "<<arr[j].pj<<endl;
        cout<<"Quantity : "<<arr[j].aj<<endl;
    }
    file.close();


    if(x==2)
    {
        cout<<endl<<"Select items: ";
        int y;
        cin>>y;

        int amount;
        cout<<"Select Amount : ";
        cin>>amount;

        cout<<endl<<"You are selected #"<<y<<endl;

        if(amount<=arr[y].aj)
        {
            arr[y].bill(amount);
            z=arr.resetValue(arr[y],amount);

            cout << endl << "Remaining Quantity" << y << " is :" << z << endl;
            count++
        }
        else
        {
            cout << "Sorry :( , We are out of stock. " << endl;
        }

        fstream file("R.txt",ios::out);

        for(int k=1; k<j; k++)
        {
            cout<<"#"<<k<<endl;
            cout<<"Name     : "<<arr[j].nj<<endl;
            cout<<"Price    : "<<arr[j].pj<<endl;
            cout<<"Quantity : "<<arr[j].aj<<endl;
        }
        file.close();
    }
    return 0;
}
