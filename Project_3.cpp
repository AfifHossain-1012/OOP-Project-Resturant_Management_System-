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
class resturant
{
private:
    string item,item_name,food,pricenm,amnam;
    int price,amount;
public:
    void set_val(string item,string name,string fname,string pricename,int p,string as,int am)
    {
        item =item;
        item_name=name;
        food=fname;
        pricenm = pricename;
        price=p;
        amnam=as;
        amount=am;
    }

    void setmenu(int quantity)
    {
        cout<<item_name<<" "<<food<<endl;
        cout<<"Bill : "<<price*quantity<<endl;
    }
    friend void Show(resturant item[],int k);
};
void Show(resturant item[],int k)
{

    int y,i;
    cout<<endl<<"Select items: ";
    cin>>y;
    int quantity;

    cout<<"Select Quantity : ";
    cin>>quantity;
    item[y].amount = item[y].amount-quantity;

    fstream file_new("Saad_baat_Ghorr.txt",ios::out);

    for(i=1; i<=k-2; i++)
    {
        file_new<<item[i].item<<"\n";
        file_new<<item[i].item_name<<" "<<item[i].food<<endl;
        file_new<<item[i].pricenm<<" "<<item[i].price<<endl;
        file_new<<item[i].amnam<<" "<<item[i].amount<<endl;
    }
    file_new.close();

    cout<<endl<<"You are selected #"<<y<<endl;
    item[y].setmenu(quantity);

}
int main()
{
    cout<<"1. Add New Items"<<endl;
    cout<<"2. Skeep"<<endl;
    cout<<"Please select anyone :";
    int n;
    cin>>n;
    resturant item[100];
    string nam,namef,namep,namea,amo,pra;
    char ch;
    int x,y,a,in,menu_number;
    if(n==1)
    {
        cout<<"How many items: ";
        cin>>a;
        fstream file("Saad_baat_Ghorr.txt",ios::app);
        for(int i=0; i<a; i++)
        {

            cout<<"Menu No : ";
            cin>>menu_number;
            file<<"#"<<menu_number<<"\n";
            cin.ignore();
            cout<<"Name: ";
            getline(cin,nam);
            file<<"Name: "<<nam<<endl;
            cout<<"Price: ";
            cin>>pra;
            file<<"Price: "<<pra<<endl;
            cout<<"Quantity: ";
            cin>>amo;
            file<<"Quantity: "<<amo<<endl;

        }
        file.close();

    }
    else
    {

    }
    cout<<"===================="<<endl;
    cout<<"Welcome to resturent"<<endl;
    cout<<"1. See all"<<endl;
    cout<<"2. Select"<<endl;
    cout<<"Select: ";
    cin>>x;
    if(x==1)
    {
        fstream file("Saad_baat_Ghorr.txt",ios::in);
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
    else
    {

    }
    string itm,name,foodname,pr,am;
    int ipr,iam,i,cnt=1;

    fstream file("Saad_baat_Ghorr.txt",ios::in);

    while (!file.eof( ))
    {
        file>> itm;
        file>>name;
        file>>foodname;
        file>>pr;
        file>>ipr;
        file>>am;
        file>>iam;
        item[cnt].set_val( itm,name,foodname,pr,ipr,am,iam);
        cnt++;
    }
    file.close();

    Show(item,cnt);
    cout<<endl;
    cout<<"Thank you."<<endl;

    return 0;
}
