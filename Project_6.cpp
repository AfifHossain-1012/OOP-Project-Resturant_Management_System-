/*
███╗░░██╗░█████╗░███╗░░░███╗███████╗██╗░░░░░███████╗░██████╗░██████╗
████╗░██║██╔══██╗████╗░████║██╔════╝██║░░░░░██╔════╝██╔════╝██╔════╝
██╔██╗██║███████║██╔████╔██║█████╗░░██║░░░░░█████╗░░╚█████╗░╚█████╗░
██║╚████║██╔══██║██║╚██╔╝██║██╔══╝░░██║░░░░░██╔══╝░░░╚═══██╗░╚═══██╗
██║░╚███║██║░░██║██║░╚═╝░██║███████╗███████╗███████╗██████╔╝██████╔╝
╚═╝░░╚══╝╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚══════╝╚══════╝╚═════╝░╚═════╝░
*/

/*
ⲙⲉⲙⲉⲃⲉꞅ _1 :                    |   ⲙⲉⲙⲉⲃⲉꞅ _2 :
NAME : AFIF HOSSAIN IRFAN      |    NAME : MD. JAHIDUL ISLAM SUPTA
ID   : C211005                 |    ID   : C211038 
*/

/*
╭━━━┳━━━┳━━━┳━━━━┳╮ ╭┳━━━┳━━━┳━━━╮
┃╭━━┫╭━━┫╭━╮┃╭╮╭╮┃┃ ┃┃╭━╮┃╭━━┫╭━╮┃
┃╰━━┫╰━━┫┃ ┃┣╯┃┃╰┫┃ ┃┃╰━╯┃╰━━┫╰━━╮
┃╭━━┫╭━━┫╰━╯┃ ┃┃ ┃┃ ┃┃╭╮╭┫╭━━┻━━╮┃
┃┃  ┃╰━━┫╭━╮┃ ┃┃ ┃╰━╯┃┃┃╰┫╰━━┫╰━╯┃
╰╯  ╰━━━┻╯ ╰╯ ╰╯ ╰━━━┻╯╰━┻━━━┻━━━╯
1. OWNER PART  --|
                 |--> 1. (Log In) OR (Sign In) .
                 |--> 2. Show the list of ALL OWNER .
                 |--> 3. OWNER can access --|
                                            |--> 1. View FULL MENU .
                                            |--> 2. Add NEW ITEM to MENU .
                                            |--> 3. Updating Existing Menu . ---------------->|
                                            |--> 4. Deleting an ITEM in Existing Menu .       |--> 1. Edit Name
                                            |--> 5. See ALL PREVIOUS ORDER LIST of customer . |--> 2. Edit Price
                                            |--> 6. Exit .                                    |--> 3. Edit Amount
2. CUSTOMER PART  --|                                                                         |--> 4. Edit WHOLE SELECTED ITEM
                    |--> 1. (Log In) OR (Sign In) .                                           |--> 5. Exit .
                    |--> 2. Show the list of ALL CUSTOMER .
                    |--> 3. CUSTOMER can access --|
                                                  |--> 1. Order Food .
                                                  |--> 2. See ALL PREVIOUS ORDER LIST of customer .
                                                  |--> 3. CUSTOMER can ORDER AGAIN .
                                                  |--> 4. Exit .
*/
#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)

#define endl '\n'

int TotalCost = 0;

class Food
{
protected:
    string F_Name;
    int F_Price;
    int F_Amount;
    int F_Bill;

public:
    void setValueFood(string Name, int Price, int Amount)
    {
        F_Name = Name;
        F_Price = Price;
        F_Amount = Amount;
    }

    // We can't access Protected variable in (int main)
    // so that, We are getting access By return the variable in public function
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
    int GetBill()
    {
        return F_Bill;
    }

    // fun. for Updating Food name By OWNER
    void Edit_Name(string Name)
    {
        F_Name = Name;
    }
    // fun. for Updating Food price By OWNER
    void Edit_Price(int Price)
    {
        F_Price = Price;
    }
    // fun. for Updating Food amount By OWNER
    void Edit_Amount(int Amount)
    {
        F_Amount = Amount;
    }
};

class Customer : public Food
{
protected:
    string C_Id;
    string C_Name;
    string C_Mobile;
    string C_Pass;

public:
    void setValueCustomer(string Id, string Name, string Mobile, string Pass)
    {
        C_Id = Id;
        C_Name = Name;
        C_Mobile = Mobile;
        C_Pass = Pass;
    }

    // We can't access Protected variable in (int main)
    // so that, We are getting access By return the variable in public function
    string Get_C_Id()
    {
        return C_Id;
    }
    string Get_C_Name()
    {
        return C_Name;
    }
    string Get_C_Mobile()
    {
        return C_Mobile;
    }
    string Get_C_Pass()
    {
        return C_Pass;
    }

    void setValueOrder(string CName, string FName, int Amount, int Bill)
    {
        C_Name = CName;
        F_Name = FName;
        F_Amount = Amount;
        F_Bill = Bill;
    }
};

class Owner : public Customer
{
protected:
    string O_Id;
    string O_Name;
    string O_Mobile;
    string O_Pass;

public:
    void setValueOwner(string Id, string Name, string Mobile, string Pass)
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
    /// Peace be with you.

    cout << "                       " << "    _____\n";
    cout << "                       " << "   /     \\   ____   ____    __ __\n";
    cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
    cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";

    Owner ownerArr[1000], customerArr[1000], foodArr[1000], orderArr[1000];

    // Owner file --> Data --> Owner Array
    fstream fileOwner("OwnerList.txt", ios::in);
    string temp_O_string;
    string Owner_Id, Owner_Name, Owner_Mobile, Owner_Pass;
    int owner = 0, Each_File_Line = 1;

    while (getline(fileOwner, temp_O_string))
    {
        if (Each_File_Line == 1)
        {
            Owner_Id = temp_O_string;
        }

        else if (Each_File_Line == 2)
        {
            Owner_Name = temp_O_string;
        }

        else if (Each_File_Line == 3)
        {
            Owner_Mobile = temp_O_string;
        }

        else if (Each_File_Line == 4)
        {
            Owner_Pass = temp_O_string;

            owner++;
            ownerArr[owner].setValueOwner(Owner_Id, Owner_Name, Owner_Mobile, Owner_Pass);

            Each_File_Line = 0;
        }
        Each_File_Line++;
    }
    fileOwner.close();

    // Customer file --> Data --> Customer Array
    fstream fileCustomer("CustomerList.txt", ios::in);
    string temp_C_string;
    string Customer_Id, Customer_Name, Customer_Mobile, Customer_Pass;
    int customer = 0;

    while (getline(fileCustomer, temp_C_string))
    {
        if (Each_File_Line == 1)
        {
            Customer_Id = temp_C_string;
        }

        else if (Each_File_Line == 2)
        {
            Customer_Name = temp_C_string;
        }

        else if (Each_File_Line == 3)
        {
            Customer_Mobile = temp_C_string;
        }

        else if (Each_File_Line == 4)
        {
            Customer_Pass = temp_C_string;

            customer++;
            customerArr[customer].setValueCustomer(Customer_Id, Customer_Name, Customer_Mobile, Customer_Pass);

            Each_File_Line = 0;
        }
        Each_File_Line++;
    }
    fileCustomer.close();

    // Food file --> Data --> Food Array
    fstream fileFood("FoodList.txt", ios::in);
    string temp_F_string;
    string Food_Name, Food_Price, Food_Amount;
    int food = 0;

    while (getline(fileFood, temp_F_string))
    {
        if (Each_File_Line == 1)
        {
            Food_Name = temp_F_string;
        }

        else if (Each_File_Line == 2)
        {
            Food_Price = temp_F_string;
        }

        else if (Each_File_Line == 3)
        {
            Food_Amount = temp_F_string;

            food++;
            foodArr[food].setValueFood(Food_Name, stoi(Food_Price), stoi(Food_Amount));

            Each_File_Line = 0;
        }
        Each_File_Line++;
    }
    fileFood.close();

    // Order file --> Data --> Order Array
    fstream fileOrder("OrderList.txt", ios::in);
    string temp_Or_string;
    string Order_C_Name, Order_F_Name, Order_Amount, Order_Bill;
    int order = 0;

    while (getline(fileOrder, temp_Or_string))
    {
        if (Each_File_Line == 1)
        {
            Order_C_Name = temp_Or_string;
        }

        else if (Each_File_Line == 2)
        {
            Order_F_Name = temp_Or_string;
        }

        else if (Each_File_Line == 3)
        {
            Order_Amount = temp_Or_string;
        }

        else if (Each_File_Line == 4)
        {
            Order_Bill = temp_Or_string;

            order++;
            orderArr[order].setValueOrder(Order_C_Name, Order_F_Name, stoi(Order_Amount), stoi(Order_Bill));

            Each_File_Line = 0;
        }
        Each_File_Line++;
    }
    fileOrder.close();

    // Access OWNER or CUSTOMER
    cout << endl << endl;
    cout << "                    |==============================|" << endl;
    cout << "                    |       OWNER OR CUSTOMER:     |" << endl;
    cout << "                    |==============================|" << endl;
    cout << endl << endl;
    cout << "1. Access as OWNER."                      << endl;
    cout << "2. Access as CUSTOMER."                   << endl << endl;
    cout << "Please, Select an option : ";
    int select;
    cin >> select;
    cout << endl << endl;

    // Access as OWNER
    if (select == 1)
    {
        string Check_V1Pass = "OOP";
        cout << "\tDear Sir, Please enter your '1st step Verified Password' : ";
        string V1Pass;
        cin >> V1Pass;
        cout << endl;

        if (V1Pass == Check_V1Pass)
        {
            cout << "\tYou have Successfully completed 1st Step Verified Process." << endl << endl;
            cout << endl << endl;
            cout << "\t                    |==============================|"       << endl;
            cout << "\t                    |             OWNER            |" << endl;
            cout << "\t                    |      LOG IN or SIGN IN :     |"       << endl;
            cout << "\t                    |==============================|"       << endl;
            cout << endl << endl;
            cout << "\t1. Log In for Existing Account."                            << endl;
            cout << "\t2. Sign Up for New Account."                                << endl << endl;
            cout << "\tPlease, Select an option : ";
            int select2;
            cin >> select2;
            cout << endl << endl;

            // Login Part AS OWNER
            if (select2 == 1)
            {
                cout << endl << endl;
                cout << "                    |==============================|" << endl;
                cout << "                    |             LOG IN:          |" << endl;
                cout << "                    |==============================|" << endl;
                cout << endl << endl;
                while (1)
                {
                    string V2Id, V2Name, V2Mobile, V2Pass;
                    int count = 0;

                    cout << "\t\tEnter your Log In Id : ";
                    cin >> V2Id;
                    cout << endl;

                    cout << "\t\tEnter your User Name : ";
                    cin >> V2Name;
                    cout << endl;

                    cout << "\t\tEnter your Mobile Number : ";
                    cin >> V2Mobile;
                    cout << endl;

                    cout << "\t\tWe have send your '2 Step Verified Password' on your Mobile Number." << endl;
                    cout << "\t\t60 seconds remaining...." << endl;
                    cout << endl;

                    cout << "\t\tEnter your Log In Password : ";
                    cin >> V2Pass;
                    cout << endl << endl;

                    for (int j = 1; j <= owner; j++)
                    {
                        if (ownerArr[j].GetId() == V2Id)
                        {
                            if (ownerArr[j].GetName() == V2Name)
                            {
                                if (ownerArr[j].GetMobile() == V2Mobile)
                                {
                                    if (ownerArr[j].GetPass() == V2Pass)
                                    {
                                        cout << endl << "\t\t\t\t     Successfully LOGGED IN!! " << endl;
                                        cout << endl << endl;
                                        cout << "\t\t                        |==============================|" << endl;
                                        cout << "\t\t                        |        OWNER DETAILS :       |" << endl;
                                        cout << "\t\t                        |==============================|" << endl;
                                        cout << endl << endl;
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
                    if (count == 1)
                    {
                        break;
                    }

                    // If there was something WRONG, so that he can try again
                    // The loop will run until OWNER puts Correct Data
                    else
                    {
                        cout << endl;
                        cout << "\t\tINCORRECT! User ID or NAME or MOBILE NUMBER or PASSWORD." << endl;
                        cout << "\t\tPLEASE, Try Again. " << endl << endl;
                    }
                }
            }

            // Add NEW Account For more OWNER
            else if (select2 == 2)
            {
                cout << endl << endl;
                cout << "                    |==============================|" << endl;
                cout << "                    |            SIGN IN:          |" << endl;
                cout << "                    |==============================|" << endl;
                cout << endl << endl;

                cout << endl << endl;
                cout << "\t\tHow many New Admin you want to add : ";
                int newAdmin;
                cin >> newAdmin;
                cout << endl << endl;

                string NewId, NewName, NewMobile, NewPass;
                int k = owner;

                for (int j = k + 1; j <= k + newAdmin; j++)
                {
                    cout << "\t\tEnter NEW Log In Id : ";
                    cin >> NewId;
                    cout << endl << endl;

                    cout << "\t\tEnter NEW User Name : ";
                    cin >> NewName;
                    cout << endl << endl;

                    cout << "\t\tEnter NEW Mobile Number : ";
                    cin >> NewMobile;
                    cout << endl << endl;

                    cout << "\t\tWe have send your '2 Step Verified Password' on your Mobile Number." << endl;
                    cout << "\t\t60 seconds remaining...." << endl << endl;

                    cout << "\t\tEnter your Password : ";
                    cin >> NewPass;
                    cout << endl << endl;

                    cout << endl << endl;

                    ownerArr[j].setValueOwner(NewId, NewName, NewMobile, NewPass);
                    owner++;
                }

                cout << "\t\tSuccessfully UPDATED NEW OWNER" << endl;
                cout << "\t\tAfter Updating NEW OWNER" << endl;
                
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |    THE LIST OF ALL OWNER :   |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= owner; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"          << endl;
                    cout << "\t\t\t\t| ID        : " << ownerArr[j].GetId()     << endl;
                    cout << "\t\t\t\t| Name      : " << ownerArr[j].GetName()   << endl;
                    cout << "\t\t\t\t| Mobile    : " << ownerArr[j].GetMobile() << endl;
                    cout << "\t\t\t\t| Password  : " << ownerArr[j].GetPass()   << endl;
                    cout << "\t\t\t\t|-------------------------------"          << endl;
                    cout << endl;
                }
            }
        } 

        // Owner to access the Food Menu
        while (1)
        {
            cout << "                       " << "Welcome As Owner"                          << endl;
            cout << endl << endl;
            cout << "                    |==============================|" << endl;
            cout << "                    |  OWNER TO ACCESS FOOD MENU : |" << endl;
            cout << "                    |==============================|" << endl;
            cout << endl << endl;
            cout << "                       " << "Choose an option from the list below : "   << endl << endl;
            cout << "                       " << "1. View Full Menu."                        << endl;
            cout << "                       " << "2. Add New food to Menu."                  << endl;
            cout << "                       " << "3. Update Existing Menu."                  << endl;
            cout << "                       " << "4. Deleting an ITEM in Existing Menu."     << endl;
            cout << "                       " << "5. Previous ORDERED list."                 << endl;
            cout << "                       " << "6. Exit."                                  << endl << endl;
            cout << "                       " << "Please, Select an option : ";
            int select3;
            cin >> select3;
            cout << endl << endl;

            // Show Full Food Menu
            if (select3 == 1)
            {
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |           FULL MENU :        |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << "\t\t\t\t| #       : " << j                          << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << endl;
                }
            }

            // Add New Food By OWNER
            else if (select3 == 2)
            {
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    | NEW FOOD ITEM ADD BY OWNER : |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                int newPrice, newAmount;
                string newName;
                cout << "\t\t\t\tHow many items do you want to add : ";
                int newItems;
                cin >> newItems;
                cout << endl << endl;
                ll h = food;

                for (int j = h + 1; j <= h + newItems; j++)
                {
                    // Asking for NEW FOOD NAME
                    cin.ignore();
                    cout << "\t\t\t\tName     : ";
                    cin >> newName;

                    // Asking for NEW FOOD PRICE , AND CHECKING NEGATIVE VALUE
                    cout << endl;
                    int nPrice;
                    while (1)
                    {
                        cout << "\t\t\t\tPrice      : ";
                        cin >> nPrice;
                        if (nPrice >= 0)
                        {
                            newPrice = nPrice;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE PRICE !!!, TRY AGAIN" << endl;
                    }

                    // Asking for NEW FOOD AMOUNT , AND CHECKING NEGATIVE VALUE
                    cout << endl;
                    int nAmount;
                    while (1)
                    {
                        cout << "\t\t\t\tAmount     : ";
                        cin >> nAmount;
                        if (nAmount >= 0)
                        {
                            newAmount = nAmount;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE AMOUNT !!!, TRY AGAIN" << endl;
                    }

                    foodArr[j].setValueFood(newName, newPrice, newAmount);
                    food++;
                }
                cout << "\t\t\t\t   Successfully the items was added in the menu" << endl;

                cout << endl << endl;
                cout << "\t\t\t\t                    |===================================|" << endl;
                cout << "\t\t\t\t                    | AFTER ADDING NEW ITEM FULL MENU : |" << endl;
                cout << "\t\t\t\t                    |===================================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << "\t\t\t\t| #       : " << j                          << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << endl;
                }
            }

            // Update existing Food Menu
            else if (select3 == 3)
            {
                // Showing Full Menu
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |           FULL MENU :        |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------" << endl;
                    cout << "\t\t\t\t| #       : " << j << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------" << endl;
                    cout << endl;
                }

                cout << endl << endl;
                cout << "\t\t\t\tFrom this Menu , Which Item do you want to edit :";
                int x;
                cin >> x;
                cout << endl << endl;

                // Showing Selected Item
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |        SELECTED ITEM :       |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                cout << endl;
                cout << "\t\t\t\tSelected Food Name        : " << foodArr[x].GetFoodName();
                cout << endl;
                cout << "\t\t\t\tSelected Food Price       : " << foodArr[x].GetFoodPrice();
                cout << endl;
                cout << "\t\t\t\tSelected food amount      : " << foodArr[x].GetFoodAmount();
                cout << endl << endl;

                cout << endl << endl;
                cout << "\t\t\t\t                    |===================================|" << endl;
                cout << "\t\t\t\t                    | UPDATING EXISTING ITEM BY OWNER : |" << endl;
                cout << "\t\t\t\t                    |===================================|" << endl;
                cout << endl << endl;
                cout << "\t\t\t\t1. Edit Food Name."                         << endl;
                cout << "\t\t\t\t2. Edit Food Price."                        << endl;
                cout << "\t\t\t\t3. Edit Food Quantity."                     << endl;
                cout << "\t\t\t\t4. Edit the all the info of Selected Item." << endl;
                cout << "\t\t\t\t5. Exit."                                   << endl << endl;
                cout << "\t\t\t\tPlease, Select an option : ";
                int select4;
                cin >> select4;
                cout << endl << endl;

                string FName;
                int FPrice, FAmount;

                // Changing Name
                if (select4 == 1)
                {
                    cout << endl << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << "\t\t\t\t                    |         EDITING NAME :       |" << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << endl << endl;
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Name : ";
                    cin.ignore();
                    getline(cin, FName);
                    foodArr[x].Edit_Name(FName);
                    cout << endl;
                }

                // Changing Price
                else if (select4 == 2)
                {
                    cout << endl << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << "\t\t\t\t                    |         EDITING PRICE :      |" << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << endl << endl;

                    // CHECKING NEGATIVE VALUE
                    cout << endl;
                    int fPrice;
                    while (1)
                    {
                        cout << "\t\t\t\t\tEnter New Food Price : ";
                        cin >> fPrice;
                        if (fPrice >= 0)
                        {
                            FPrice = fPrice;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE PRICE !!!, TRY AGAIN" << endl;
                    }
                    foodArr[x].Edit_Price(FPrice);
                    cout << endl;
                }

                // Changing Amount
                else if (select4 == 3)
                {
                    cout << endl << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << "\t\t\t\t                    |        EDITING AMOUNT :      |" << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << endl << endl;

                    // CHECKING NEGATIVE VALUE
                    cout << endl;
                    int fAmount;
                    while (1)
                    {
                        cout << "\t\t\t\t\tEnter New Food Amount : ";
                        cin >> fAmount;
                        if (fAmount >= 0)
                        {
                            FAmount = fAmount;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE AMOUNT !!!, TRY AGAIN" << endl;
                    }
                    foodArr[x].Edit_Amount(FAmount);
                    cout << endl;
                }

                // Changing Whole Item
                else if (select4 == 4)
                {
                    cout << endl << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << "\t\t\t\t                    |       EDITING ALL INFO :     |" << endl;
                    cout << "\t\t\t\t                    |==============================|" << endl;
                    cout << endl << endl;

                    // ASKING FOR NEW NAME 
                    cout << endl;
                    cout << "\t\t\t\t\tEnter New Food Name : ";
                    cin >> FName;
                    cout << endl;

                    // Asking for NEW PRICE , AND CHECKING NEGATIVE VALUE
                    cout << endl;
                    int fPrice;
                    while (1)
                    {
                        cout << "\t\t\t\t\tEnter New Food Price : ";
                        cin >> fPrice;
                        if (fPrice >= 0)
                        {
                            FPrice = fPrice;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE PRICE !!!, TRY AGAIN" << endl;
                    }

                    // // Asking for NEW AMOUNT , AND CHECKING NEGATIVE VALUE
                    cout << endl;
                    int fAmount;
                    while (1)
                    {
                        cout << "\t\t\t\t\tEnter New Food Amount : ";
                        cin >> fAmount;
                        if (fAmount >= 0)
                        {
                            FAmount = fAmount;
                            break;
                        }
                        else
                            cout << "\t\t\t\tINVALIDE AMOUNT !!!, TRY AGAIN" << endl;
                    }

                    foodArr[x].setValueFood(FName, FPrice, FAmount);
                }

                // Exit
                else if (select4 == 5)    break;

                // Invalid Selection
                else    cout << "\t\t\t\tYou have selected 'INVALID OPTION'. " << endl;

                cout << endl << "\t\t\t\t\t  Successfully Updated..... " << endl;

                cout << "\t\t\t\tAfter Updating FULL MENU" << endl;
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |  AFTER UPDATING FULL MENU :  |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << "\t\t\t\t| #       : " << j                          << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << endl;
                }
            }

            // Deleting an ITEM in Existing Menu
            else if (select3 == 4)
            {
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |           FULL MENU :        |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << "\t\t\t\t| #       : " << j                          << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()   << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()  << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount() << endl;
                    cout << "\t\t\t\t|-------------------------------"           << endl;
                    cout << endl;
                }

                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |        DELETING ITEM :       |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                cout << "\t\t\t\tSELECT the ITEM number theat YOU want to DELETE : ";
                int delete_number;
                cin >> delete_number;
                cout << endl;

                for (int j = delete_number; j <= food - 1; j++)
                {
                    swap(foodArr[j + 1], foodArr[j]);
                }
                food = food - 1;

                cout << endl << "\t\t\t\t\t  Successfully DELETED..... " << endl;

                cout << "\t\t\t\tAfter deleting FULL MENU" << endl;
                cout << endl << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t\t                    |  AFTER DELETING FULL MENU :  |" << endl;
                cout << "\t\t\t\t                    |==============================|" << endl;
                cout << endl << endl;
                for (int j = 1; j <= food; j++)
                {
                    cout << endl;
                    cout << "\t\t\t\t|-------------------------------"            << endl;
                    cout << "\t\t\t\t| #       : " << j                           << endl;
                    cout << "\t\t\t\t| Name    : " << foodArr[j].GetFoodName()    << endl;
                    cout << "\t\t\t\t| Price   : " << foodArr[j].GetFoodPrice()   << endl;
                    cout << "\t\t\t\t| Amount  : " << foodArr[j].GetFoodAmount()  << endl;
                    cout << "\t\t\t\t|-------------------------------"            << endl;
                    cout << endl;
                }
            }

            // All Previous Ordered list
            else if (select3 == 5)
            {
                cout << endl
                     << endl;
                cout << "\t\t\t                    |==============================|" << endl;
                cout << "\t\t\t                    |    PREVIOUS ORDERED LIST :   |" << endl;
                cout << "\t\t\t                    |==============================|" << endl;
                cout << endl
                     << endl;
                for (int j = 1; j <= order; j++)
                {
                    cout << endl;
                    cout << "\t\t|-------------------------------" << endl;
                    cout << "\t\t| Customer Nsme : " << orderArr[j].Get_C_Name() << endl;
                    cout << "\t\t| Food Name     : " << orderArr[j].GetFoodName() << endl;
                    cout << "\t\t| Food Amount   : " << orderArr[j].GetFoodAmount() << endl;
                    cout << "\t\t| Food Bill     : " << orderArr[j].GetBill() << endl;
                    cout << "\t\t|-------------------------------" << endl;
                    cout << endl;
                }
            }

            // Exit
            else if (select3 == 6)
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

    string CustomerName;

    cout << endl << endl;
    cout << "\t                    |==============================|" << endl;
    cout << "\t                    |           CUSTOMER           |" << endl;
    cout << "\t                    |      LOG IN or SIGN IN :     |" << endl;
    cout << "\t                    |==============================|" << endl;
    cout << endl << endl;
    cout << "\t1. Log In for Existing Account." << endl;
    cout << "\t2. Sign Up for New Account." << endl << endl;
    cout << "\tPlease, Select an option : ";
    int selectC;
    cin >> selectC;
    cout << endl << endl;

    // Login Part AS CUSTOMER
    if (selectC == 1)
    {
        cout << endl << endl;
        cout << "                    |==============================|" << endl;
        cout << "                    |             LOG IN:          |" << endl;
        cout << "                    |==============================|" << endl;
        cout << endl << endl;
        while (1)
        {
            string VId, VName, VMobile, VPass;
            int ok = 0;

            cout << "\t\tEnter your Log In Id : ";
            cin >> VId;
            cout << endl;

            cout << "\t\tEnter your User Name : ";
            cin >> VName;
            cout << endl;

            cout << "\t\tEnter your Mobile Number : ";
            cin >> VMobile;
            cout << endl;

            cout << "\t\tEnter your Log In Password : ";
            cin >> VPass;
            cout << endl;

            for (int j = 1; j <= customer; j++)
            {
                if (customerArr[j].Get_C_Id() == VId)
                {
                    if (customerArr[j].Get_C_Name() == VName)
                    {
                        if (customerArr[j].Get_C_Mobile() == VMobile)
                        {
                            if (customerArr[j].Get_C_Pass() == VPass)
                            {
                                cout << endl << "\t\t        Successfully LOGGED IN!! " << endl;
                                cout << endl << endl;
                                cout << "\t\t                        |==============================|" << endl;
                                cout << "\t\t                        |      CUSTOMER DETAILS :      |" << endl;
                                cout << "\t\t                        |==============================|" << endl;
                                cout << endl << endl;
                                cout << endl;
                                cout << "\t\tOwner ID       : ";
                                cout << VId << endl;
                                cout << "\t\tOwner Name     : ";
                                cout << VName << endl;
                                cout << "\t\tOwner Mobile   : ";
                                cout << VMobile << endl;
                                cout << "\t\tOwner Password : ";
                                cout << VPass << endl;
                                cout << endl;

                                CustomerName = VName;

                                ok = 1;
                                break;
                            }
                        }
                    }
                }
            }

            // If successfully Logged in, then the loop will break
            if (ok == 1)
            {
                break;
            }

            // If there was something WRONG, so that he can try again
            // The loop will run until OWNER puts Correct Data
            else
            {
                cout << endl;
                cout << "\t\tINCORRECT! User ID or NAME or MOBILE NUMBER or PASSWORD." << endl;
                cout << "\t\tPLEASE, Try Again. " << endl
                     << endl;
            }
        }
    }

    // Add NEW Account For more CUSTOMER
    else if (selectC == 2)
    {
        cout << endl << endl;
        cout << "\t\t                |==============================|" << endl;
        cout << "\t\t                |            SIGN IN:          |" << endl;
        cout << "\t\t                |==============================|" << endl;
        cout << endl << endl;

        cout << endl;
        cout << "\t\tHow many New CUSTOMER about going to add : ";
        int newCustomer;
        cin >> newCustomer;
        cout << endl << endl;

        string New_C_Id, New_C_Name, New_C_Mobile, New_C_Pass;
        int l = customer;

        for (int j = l + 1; j <= l + newCustomer; j++)
        {
            cout << "\t\tEnter NEW Log In Id : ";
            cin >> New_C_Id;
            cout << endl;

            cout << "\t\tEnter NEW User Name : ";
            cin >> New_C_Name;
            cout << endl;

            cout << "\t\tEnter NEW Mobile Number : ";
            cin >> New_C_Mobile;
            cout << endl;

            cout << "\t\tEnter your Password : ";
            cin >> New_C_Pass;
            cout << endl;

            cout << endl;

            customerArr[j].setValueCustomer(New_C_Id, New_C_Name, New_C_Mobile, New_C_Pass);
            customer++;

            CustomerName = New_C_Name;
        }
        cout << "\t\t\t\tSuccessfully UPDATED NEW CUSTOMER" << endl;

        cout << "\t\t\t\tAfter Updating NEW CUSTOMER" << endl;
        cout << endl << endl;
        cout << "\t\t\t\t                    |==============================|" << endl;
        cout << "\t\t\t\t                    |  THE LIST OF ALL CUSTOMER :  |" << endl;
        cout << "\t\t\t\t                    |==============================|" << endl;
        cout << endl << endl;
        for (int j = 1; j <= customer; j++)
        {
            cout << endl;
            cout << "\t\t\t\t|-------------------------------"                << endl;
            cout << "\t\t\t\t| ID        : " << customerArr[j].Get_C_Id()     << endl;
            cout << "\t\t\t\t| Name      : " << customerArr[j].Get_C_Name()   << endl;
            cout << "\t\t\t\t| Mobile    : " << customerArr[j].Get_C_Mobile() << endl;
            cout << "\t\t\t\t| Password  : " << customerArr[j].Get_C_Pass()   << endl;
            cout << "\t\t\t\t|-------------------------------"                << endl;
            cout << endl;
        }
    }

    // Showing Full Menu
    cout << endl << endl;
    cout << "\t\t                    |==============================|" << endl;
    cout << "\t\t                    |           FULL MENU :        |" << endl;
    cout << "\t\t                    |==============================|" << endl;
    cout << endl << endl;
    for (int j = 1; j <= food; j++)
    {
        cout << endl;
        cout << "\t\t|-------------------------------"            << endl;
        cout << "\t\t| #         " << j                           << endl;
        cout << "\t\t| Name    : " << foodArr[j].GetFoodName()    << endl;
        cout << "\t\t| Price   : " << foodArr[j].GetFoodPrice()   << endl;
        cout << "\t\t| Amount  : " << foodArr[j].GetFoodAmount()  << endl;
        cout << "\t\t|-------------------------------"            << endl;
        cout << endl;
    }

    while (1)
    {
    Start:
        int cost;
        cout << endl << endl;
        cout << "\t\t\t                    |==============================|" << endl;
        cout << "\t\t\t                    |         ORDERING PART :      |" << endl;
        cout << "\t\t\t                    |==============================|" << endl;
        cout << endl << endl;
        cout << "\t\t\tChoose an option from the list below: "             << endl;
        cout << "\t\t\t1. Order Food."                                     << endl;
        cout << "\t\t\t2. See Previous Ordered Food List."                 << endl;
        cout << "\t\t\t3. Exit."                                           << endl;
        cout << "\t\t\tPlease, Select an option: ";
        int option;
        cin >> option;
        cout << endl << endl;

        // Order Food
        if (option == 1)
        {
        Start1:
            cout << endl << endl;
            cout << "\t\t\t                    |==============================|" << endl;
            cout << "\t\t\t                    |           ORDER FOOD :       |" << endl;
            cout << "\t\t\t                    |==============================|" << endl;
            cout << endl << endl;
            cout << endl << endl;
            cout << "\t\t\tEnter Food Number :";
            int a;
            cin >> a;
            cout << endl << endl;

            // CHECKING VALID NUMBER
            if (a > food)
            {
                cout << endl << endl;
                cout << "\t\t\tThe Food Number didn't match in the menu" << endl;
                cout << endl << endl;
                goto Start1;
            }

            else
            {
            Amount:
                cout << endl << endl;
                cout << "\t\t\tEnter Food Amount : ";
                int amount;
                cin >> amount;
                cout << endl << endl;

                // CHECKING VALIDE AMOUNT
                if (amount > foodArr[a].GetFoodAmount() || amount < 0)
                {
                    cout << endl;
                    cout << "\t\t\tSorry sir, You have selected more than Maximum Food in the stock OR NEGATIVE VALUE" << endl;
                    goto Amount;
                }
                else if (amount <= foodArr[a].GetFoodAmount())
                {
                    string Or_C_Name, Or_F_Name;
                    int Or_F_Amount, Or_F_Bill;

                    Or_C_Name = CustomerName;

                    cout << endl;
                    cout << "\t\t\tSelected Food Name        : " << foodArr[a].GetFoodName();
                    Or_F_Name = foodArr[a].GetFoodName();
                    cout << endl;

                    cout << "\t\t\tSelected Food Price       : " << foodArr[a].GetFoodPrice();
                    cout << endl;

                    cout << "\t\t\tSelected food amount      : " << amount;
                    Or_F_Amount = amount;
                    cout << endl << endl;

                    int quantity = foodArr[a].GetFoodAmount() - amount;
                    foodArr[a].Edit_Amount(quantity);

                    cost = foodArr[a].GetFoodPrice() * amount;
                    Or_F_Bill = cost;

                    order++;
                    orderArr[order].setValueOrder(Or_C_Name, Or_F_Name, Or_F_Amount, Or_F_Bill);

                    TotalCost += cost;

                    cout << endl;
                    cout << "\t\t\t\tSir, You have ordered " << cost << " Taka food in this session";
                    cout << endl;
                    cout << "\t\t\t\tSir, Your total bill is : " << TotalCost << " Taka" << endl;
                    cout << endl;

                    cout << endl;
                    cout << "\t\t\t\tChoose an option from the list below : " << endl << endl;
                    cout << "\t\t\t\t1. Order Again."                         << endl;
                    cout << "\t\t\t\t2. Exit."                                << endl << endl;
                    cout << "\t\t\t\tPlease, Select an option : ";

                    int option;
                    cin >> option;
                    cout << endl << endl;

                    if (option == 1)
                        goto Start;
                    else
                        break;
                }
            }
        }

        else if (option == 2)
        {
            cout << endl << endl;
            cout << "\t\t                    |==============================|" << endl;
            cout << "\t\t                    |    PREVIOUS ORDERED LIST :   |" << endl;
            cout << "\t\t                    |==============================|" << endl;
            cout << endl << endl;
            for (int j = 1; j <= order; j++)
            {
                cout << endl;
                cout << "\t\t|-------------------------------"                  << endl;
                cout << "\t\t| Customer Nsme : " << orderArr[j].Get_C_Name()    << endl;
                cout << "\t\t| Food Name     : " << orderArr[j].GetFoodName()   << endl;
                cout << "\t\t| Food Amount   : " << orderArr[j].GetFoodAmount() << endl;
                cout << "\t\t| Food Bill     : " << orderArr[j].GetBill()       << endl;
                cout << "\t\t|-------------------------------"                  << endl;
                cout << endl;
            }
        }

        else if (option == 3)
            break;
    }

    // Before Assigning Data in File, Make SURE those file are EMPTY
    // So, Deleting All Data OF OWNER File And FOOD File
    remove("OwnerList.txt");
    remove("CustomerList.txt");
    remove("FoodList.txt");
    remove("OrderList.txt");

    // Now, sending OWNER Array --> data --> OWNER File
    fstream fOwner("OwnerList.txt", ios::app);
    for (int j = 1; j <= owner; j++)
    {
        fOwner << ownerArr[j].GetId() << endl;
        fOwner << ownerArr[j].GetName() << endl;
        fOwner << ownerArr[j].GetMobile() << endl;
        fOwner << ownerArr[j].GetPass() << endl;
    }
    fOwner.close();

    // Now, sending CUSTOMER Array --> data --> CUSTOMER File
    fstream fCustomer("CustomerList.txt", ios::app);
    for (int j = 1; j <= customer; j++)
    {
        fCustomer << customerArr[j].Get_C_Id() << endl;
        fCustomer << customerArr[j].Get_C_Name() << endl;
        fCustomer << customerArr[j].Get_C_Mobile() << endl;
        fCustomer << customerArr[j].Get_C_Pass() << endl;
    }
    fCustomer.close();

    // Now, sending FOOD Array --> data --> FOOD File
    fstream fFood("FoodList.txt", ios::app);
    for (int j = 1; j <= food; j++)
    {
        fFood << foodArr[j].GetFoodName() << endl;
        fFood << foodArr[j].GetFoodPrice() << endl;
        fFood << foodArr[j].GetFoodAmount() << endl;
    }
    fFood.close();

    // Now, sending ORDER Array --> data --> ORDER File
    fstream fOrder("OrderList.txt", ios::app);
    for (int j = 1; j <= order; j++)
    {
        fOrder << orderArr[j].Get_C_Name() << endl;
        fOrder << orderArr[j].GetFoodName() << endl;
        fOrder << orderArr[j].GetFoodAmount() << endl;
        fOrder << orderArr[j].GetBill() << endl;
    }
    fOrder.close();

    return 0;
}
