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

int i = 1, f = 1, TotalCost = 0;

class Food
{
protected:
    int F_Id;
    string F_Name;
    int F_Price;
    int F_Amount;

public:
    void setValueFood(int Id,string Name,int Price,int Amount)
    {
        F_Id = Id;
        F_Name = Name;
        F_Price = Price;
        F_Amount = Amount;
    }



    // We can't access Protected variable in (int main)
    // so that, We are getting access By return the variable in public function
    int GetFoodId()
    {
        return F_Id;
    }
    string GetFoodName()
    {
        return F_Name;
    }
    int GetFoodPrice()
    {
        return F_Price;
    }
    int GetFoodAmount()
    {
        return F_Amount;
    }



    //fun. for Updating Food name By OWNER
    void Edit_Name(string Name)
    {
        F_Name = Name;
    }
    //fun. for Updating Food price By OWNER
    void Edit_Price(int P)
    {
        F_Price = P;
    }
    //fun. for Updating Food amount By OWNER
    void Edit_Amount(int A)
    {
        F_Amount = A;
    }



    //

};

class Owner:public Food
{
protected:
    string O_Id;
    string O_Name;
    string O_Mobile;
    string O_Pass;

public:
    void setValueOwner(string Id,string Name,string Mobile,string Pass)
    {
        O_Id = Id;
        O_Name = Name;
        O_Mobile = Mobile;
        O_Pass = Pass;
    }



    // We can't access Protected variable in (int main)
    // so that, We are getting access By return the variable in public function
    string GetId()
    {
        return O_Id;
    }
    string GetName()
    {
        return O_Name;
    }
    string GetMobile()
    {
        return O_Mobile;
    }
    string GetPass()
    {
        return O_Pass;
    }

};

int main()
{
    ///Peace be with you.


    cout << "                                    Welcome to AFIF's!\n";
    cout << "                       " << "    _____\n";
    cout << "                       " << "   /     \\   ____   ____    __ __\n";
    cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
    cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";

    Owner obj_Owner,ownerArr[1000],foodArr[1000];


    // Owner file --> Data --> Owner Array
    fstream fileOwner("OwnerList.txt",ios::in);
    string Owner_Id,Owner_Name,Owner_Mobile,Owner_Pass;
    int owner = 1;

    while (fileOwner >> Owner_Id)
    {
        fileOwner >> Owner_Name;
        fileOwner >> Owner_Mobile;
        fileOwner >> Owner_Pass;

        ownerArr[owner].setValueOwner(Owner_Id,Owner_Name,Owner_Mobile,Owner_Pass);
        owner++;
    }
    fileOwner.close();



    // Food file --> Data --> Food Array
    fstream fileFood("FoodList.txt",ios::in);
    int Food_Id,Food_Price,Food_Amount,food = 1;
    string Food_Name;

    while(fileFood >> Food_Id)
    {
        fileFood >> Food_Name;
        fileFood >> Food_Price;
        fileFood >> Food_Amount;

        foodArr[food].setValueFood(Food_Id,Food_Name,Food_Price,Food_Amount);
        food++;
    }
    fileFood.close();



    // Access OWNER or CUSTOMER
    cout << "Select to access as OWNER or CUSTOMER : " << endl << endl;
    cout << "1. Access as OWNER." << endl;
    cout << "2. Access as CUSTOMER." << endl << endl;
    cout << "Please, Select an option : ";
    int select;
    cin >> select;
    cout << endl << endl;

    //Access as OWNER
    if(select == 1)
    {
        string Check_V1Pass = "F.R.I.E.N.D.S" ;
        cout << "\tDear Sir, Please enter your '1st step Verified Password' : " ;
        string V1Pass;
        cin >> V1Pass;
        cout << endl;

        if(V1Pass == Check_V1Pass)
        {
            cout << "\tYou have Successfully completed 1st Step Verified Process." << endl << endl;
            cout << "\tChoose an option from the list below : " << endl << endl;
            cout << "\t1. Log In for Existing Account." << endl;
            cout << "\t2. Sign Up for New Account." << endl << endl;
            cout << "\tPlease, Select an option : ";
            int select2;
            cin >> select2;
            cout << endl << endl;

            // Login Part AS OWNER
            if(select2 == 1)
            {
                while(1)
                {
                    string V2Id, V2Name, V2Mobile, V2Pass;
                    int count = 0;

                    cout << "\t\tEnter your Log In Id : ";
                    cin >> V2Id ;
                    cout << endl;

                    cout << "\t\tEnter your User Name : ";
                    cin >> V2Name ;
                    cout << endl;

                    cout << "\t\tEnter your Mobile Number : ";
                    cin >> V2Mobile ;
                    cout << endl;

                    cout << "\t\tWe have send your '2 Step Verified Password' on your Mobile Number." << endl;
                    cout << "\t\t60 seconds remaining...." << endl;
                    cout << endl;

                    cout << "\t\tEnter your Log In Password : ";
                    cin >> V2Pass ;
                    cout << endl;

                    for(int j=1; j<owner; j++)
                    {
                        if(ownerArr[j].GetId() == V2Id)
                        {
                            if(ownerArr[j].GetName() == V2Name)
                            {
                                if(ownerArr[j].GetMobile() == V2Mobile)
                                {
                                    if(ownerArr[j].GetPass() == V2Pass)
                                    {
                                        cout << endl << "\t\t        Successfully LOGGED IN!! " << endl;
                                        cout << endl << "\t\t          Owner Details: " << endl;
                                        cout << endl;
                                        cout << "\t\tOwner ID       : ";
                                        cout << V2Id << endl;
                                        cout << "\t\tOwner Name     : ";
                                        cout << V2Name << endl;
                                        cout << "\t\tOwner Mobile   : ";
                                        cout << V2Mobile << endl;
                                        cout << "\t\tOwner Password : ";
                                        cout << V2Pass << endl;
                                        cout << endl;

                                        count = 1;
                                        break;
                                    }
                                }
                            }
                        }
                    }

                    // If successfully Logged in, then the loop will break
                    if(count == 1)
                    {
                        break;
                    }

                    // If there was something WRONG, so that he can try again
                    // The loop will run until OWNER puts Correct Data
                    else
                    {
                        cout << endl;
                        cout << "\t\tINCORRECT! User ID or NAME or MOBILE NUMBER or PASSWORD" << endl;
                        cout << "\t\tPLEASE , Try Again" << endl << endl;
                    }
                }
            }

            // Add NEW Account For more OWNER
            else if(select2 == 2)
            {
                cout << endl;
                cout << "\t\tHow many New Admin you want to add : " ;
                int newAdmin;
                cin >> newAdmin;
                cout << endl << endl;

                string NewId, NewName, NewMobile, NewPass;
                int k = owner;

                for(int j=k; j<k+newAdmin; j++)
                {
                    cout << "\t\tEnter NEW Log In Id : ";
                    cin >> NewId ;
                    cout << endl;

                    cout << "\t\tEnter NEW User Name : ";
                    cin >> NewName ;
                    cout << endl;

                    cout << "\t\tEnter NEW Mobile Number : ";
                    cin >> NewMobile ;
                    cout << endl;

                    cout << "\t\tWe have send your '2 Step Verified Password' on your Mobile Number." << endl;
                    cout << "\t\t60 seconds remaining...." << endl << endl;

                    cout << "\t\tEnter your Password : ";
                    cin >> NewPass ;
                    cout << endl;

                    cout << endl;

                    ownerArr[j].setValueOwner(NewId,NewName,NewMobile,NewPass);
                    owner++;
                }

                cout << "\t\tSuccessfully UPDATED NEW OWNER" << endl;
            }
        }



        // Now, sending OWNER Array --> data --> OWNER File
        fstream fileOwner("OwnerList.txt", ios::app);
        for(int j=1; j<=owner; j++)
        {
            fileOwner << ownerArr[j].GetId() << endl;
            fileOwner << ownerArr[j].GetName() << endl;
            fileOwner << ownerArr[j].GetMobile() << endl;
            fileOwner << ownerArr[j].GetPass() << endl;
        }
        fileOwner.close();



        //Owner to access the Food Menu
        while(1)
        {
            cout << "                       " << "Welcome As Owner" << endl;
            cout << "                       " << "Choose an option from the list below : " << endl << endl;
            cout << "                       " << "1. View the Full Menu." << endl;
            cout << "                       " << "2. Add New food to Menu." << endl;
            cout << "                       " << "3. Update Existing Menu." << endl;
            cout << "                       " << "4. Exit." << endl << endl;
            cout << "                       " << "Please, Select an option : ";
            int select3;
            cin >> select3;

            // Show Full Food Menu
            if(select3 == 1)
            {
                for(int j=1; j<=food-1; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << "\t\t\t\t| #       : " << foodArr[j].GetFoodId()     << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << endl;
                }
            }

            // Add New Food By OWNER
            else if(select3 == 2)
            {
                int x,num,p,a;
                string n;
                cout << "\t\t\t\tHow many items do you want to add : " ;
                cin >> x;
                cout << endl << endl;
                ll h = food;

                for(int j=h; j<h+x; j++)
                {
                    cout << "\t\t\t\t#        : ";
                    num = food;
                    cout << num << endl;
                    //cin >> arr[i].number << endl;

                    cin.ignore();
                    cout << "\t\t\t\tName     : ";
                    cin >> n;

                    cout << "\t\t\t\tPrice    : ";
                    cin >> p;

                    cout << "\t\t\t\tAmount   : ";
                    cin >> a;

                    foodArr[j].setValueFood(num,n,p,a);
                    food++;

                }
                cout << "\t\t\t\t   Successfully the items was added in the menu" << endl;
            }

            // Update existing Food Menu
            else if(select3 == 3)
            {
                // Showing Full Menu
                cout << "\t\t\t\tFull Menu of the Restaurant :";
                for(int j=1; j<food-1; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"   << endl;
                    cout << "\t\t\t\t| #       : " << foodArr[j].GetFoodId()     << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"   << endl;
                    cout << endl;
                }


                cout << "\t\t\t\tWhich Item do you want to edit :";
                int x;
                cin >> x;

                // Showing Selected Item
                cout << endl;
                cout << "\t\t\t\tSelected Food Number      : " << foodArr[x].GetFoodId();
                cout << endl;
                cout << "\t\t\t\tSelected Food Name        : " << foodArr[x].GetFoodName();
                cout << endl;
                cout << "\t\t\t\tSelected Food Price       : " << foodArr[x].GetFoodPrice();
                cout << endl;
                cout << "\t\t\t\tSelected food amount      : " << foodArr[x].GetFoodAmount();
                cout << endl << endl;

                cout << "\t\t\t\tChoose an option from the list below : " << endl << endl;
                cout << "\t\t\t\t1. Edit Food Name." << endl;
                cout << "\t\t\t\t2. Edit Food Price." << endl;
                cout << "\t\t\t\t3. Edit Food Quantity." << endl;
                cout << "\t\t\t\t4. Edit the all the info of Selected Item." << endl;
                cout << "\t\t\t\t5. Exit." << endl << endl;
                cout << "\t\t\t\tPlease, Select an option : ";
                int select4;
                cin >> select4;
                cout << endl << endl;

                string FName;
                int FPrice,FAmount;
                // Changing Name
                if (select4 == 1)
                {
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Name : ";
                    cin.ignore ();
                    getline (cin, FName);
                    foodArr[x].Edit_Name(FName);
                }

                // Changing Price
                else if (select4 == 2)
                {
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Price : ";
                    cin >> FPrice;
                    foodArr[x].Edit_Price(FPrice);
                }

                // Changing Amount
                else if (select4 == 3)
                {
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Amount : ";
                    cin >> FAmount;
                    foodArr[x].Edit_Amount(FAmount);
                }

                // Changing Whole Item
                else if (select4 == 4)
                {
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Name : ";
                    cin >> FName;

                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Price :";
                    cin >> FPrice;

                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Amount :";
                    cin >> FAmount;

                    foodArr[x].setValueFood(x,FName,FPrice,FAmount);
                }

                // Exit
                else if (select4 == 5) break;

                cout << endl << "\t\t\t\t\t  Successfully Updated..... " << endl;
            }
            else if(select3 == 4)
            {
                break;
            }
        }
    }


    // Access As CUSTOMER

    cout << endl << endl;
    cout << "                            |==============================|" << endl;
    cout << "                            | Welcome to the CENTRAL PERK! |" << endl;
    cout << "                            |==============================|" << endl;
    cout << endl << endl;

    // Showing Full Menu
    cout << "\t\tFull Menu of the Restaurant :";
    for(int j=1; j<=food; j++)
    {
        cout << endl;
        cout << "\t\t|-------------------------------"   << endl;
        cout << "\t\t| #         " << foodArr[j].GetFoodId()     << endl;
        cout << "\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
        cout << "\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
        cout << "\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
        cout << "\t\t|-------------------------------"   << endl;
        cout << endl;
        cout << endl;
    }

    while(1)
    {
Start:
        int cost;
        cout << "\t\t\tChoose an option from the list below: " << endl;
        cout << "\t\t\t1. Order Food." << endl;
        cout << "\t\t\t2. Exit." << endl;
        cout << "\t\t\tPlease, Select an option: ";
        int option;
        cin >> option;

        if(option == 1)
        {
Start1:
            cout << "\t\t\tEnter Food Number :";
            int a;
            cin >> a;

            if(a > food)
            {
                cout << "\t\t\tThe Food Number didn't match in the menu" << endl;
                goto Start1;
            }

            else
            {
Amount:
                cout << "\t\t\tEnter Food Amount :";
                int amount;
                cin >> amount;

                if(amount > foodArr[a].GetFoodAmount())
                {
                    cout << endl;
                    cout << "\t\t\tSorry sir, You have selected more than Maximum Food in the stock" << endl;
                    goto Amount;
                }
                else if(amount <= foodArr[a].GetFoodAmount())
                {
                    cout << endl;
                    cout << "\t\t\tSelected Food Number      : " << foodArr[a].GetFoodId();
                    cout << endl;
                    cout << "\t\t\tSelected Food Name        : " << foodArr[a].GetFoodName();
                    cout << endl;
                    cout << "\t\t\tSelected Food Price       : " << foodArr[a].GetFoodPrice();
                    cout << endl;
                    cout << "\t\t\tSelected food amount      : " << foodArr[a].GetFoodAmount();
                    cout << endl << endl;

                    int quantity = foodArr[a].GetFoodAmount() - amount;
                    foodArr[a].Edit_Amount(quantity);

                    cost = foodArr[a].GetFoodPrice() * amount;
                    TotalCost += cost;

                    cout << endl;
                    cout << "\t\t\t\tSir, You have ordered " << cost << " Taka food in this session";
                    cout << endl;
                    cout << "\t\t\t\tSir, Your total bill is : " << TotalCost << " Taka" << endl;
                    cout << endl;

                    cout << endl;
                    cout << "\t\t\t\tChoose an option from the list below : " << endl << endl;
                    cout << "\t\t\t\t1. Order Again." << endl;
                    cout << "\t\t\t\t2. Exit." << endl << endl ;
                    cout << "\t\t\t\tPlease, Select an option : ";

                    int option;
                    cin >> option;

                    if (option == 1) goto Start;
                    else break;
                }
            }
        }

        else if(option == 2) break;
    }




    fstream fFood("FoodList.txt", ios::out);
    for(int j=1; j<=food; j++)
    {
        fFood << foodArr[j].GetFoodId()     << endl;
        fFood << foodArr[j].GetFoodName()   << endl;
        fFood << foodArr[j].GetFoodPrice()  << endl;
        fFood << foodArr[j].GetFoodAmount() << endl;
    }
    fFood.close();


    return 0;
}
