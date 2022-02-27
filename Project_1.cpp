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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
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
        cout << "Name  : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Amount: " << amount << endl;
    }
    void bill()
    {
        cout << "Name: " << name << endl;
        cout << "Bill: " << price << endl;
        cout << "Thank You.";
    }
};
int main()
{
    int t;
    cout << "How many items: ";
    cin >> t;

    string n;
    int nu,p,a,i;
    resturent arr[t*10];

    for(i=1; i<=t; i++)
    {
        cout << "#";
        cout << i << endl;;
        cin.ignore();
        cout << "Name   :";
        getline(cin,n);
        cout << "Price  :";
        cin >> p;
        cout << "Amount :";
        cin >> a;
        arr[i].setValue(i,n,p,a);
        cout << endl;
    }
    cout << "============================" << endl;
    cout << "Welcome to Restaurant" << endl;
    cout << "1.See all" << endl;
    cout << "2.Select" << endl;
    cout << "Select: ";
    int k;
    cin >> k;

    if(k==1)
    {
        for(int i=1; i<=t; i++)
        {
            arr[i].menu();
        }
        cout << endl;
        cout << "Select items: ";
        int s;
        cin >> s;
        cout << endl;
        cout << "You are selected #" << s << endl;

        arr[s].bill();
    }
    else if(k==2)
    {
        cout << endl;
        cout << "Select items: ";
        int s;
        cin >> s;
        cout << endl;
        cout << "You are selected #" << s << endl;

        arr[s].bill();
    }

    return 0;
}

