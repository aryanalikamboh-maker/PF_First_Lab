

#include <iostream>
#include <string>
using namespace std;

// --- Functions Declaration ---
void createAccount(int accNo[], string name[], float balance[], int &count);
void displayAll(int accNo[], string name[], float balance[], int count);
void searchAccount(int accNo[], string name[], float balance[], int count);
void depositMoney(int accNo[], float balance[], int count);
void withdrawMoney(int accNo[], float balance[], int count);
void totalBankCash(float balance[], int count);
void richestCustomer(string name[], float balance[], int count);
void poorestCustomer(string name[], float balance[], int count);
void editAccountName(int accNo[], string name[], int count);

int main()
{
    int accNo[100];
    string name[100];
    float balance[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== BANK SYSTEM MENU =====\n";
        cout << "1.  Create Account\n";
        cout << "2.  Display All Accounts\n";
        cout << "3.  Search Account\n";
        cout << "4.  Deposit Money\n";
        cout << "5.  Withdraw Money\n";
        cout << "6.  Check Total Bank Cash\n";
        cout << "7.  View Richest Customer\n";
        cout << "8.  View Poorest Customer\n";
        cout << "9.  Edit Account Name\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            createAccount(accNo, name, balance, count);
        }
        else if (choice == 2)
        {
            displayAll(accNo, name, balance, count);
        }
        else if (choice == 3)
        {
            searchAccount(accNo, name, balance, count);
        }
        else if (choice == 4)
        {
            depositMoney(accNo, balance, count);
        }
        else if (choice == 5)
        {
            withdrawMoney(accNo, balance, count);
        }
        else if (choice == 6)
        {
            totalBankCash(balance, count);
        }
        else if (choice == 7)
        {
            richestCustomer(name, balance, count);
        }
        else if (choice == 8)
        {
            poorestCustomer(name, balance, count);
        }
        else if (choice == 9)
        {
            editAccountName(accNo, name, count);
        }

    } while (choice != 10);

    return 0;
}

// --- Functions Definition ---

void createAccount(int accNo[], string name[], float balance[], int &count)
{
    if (count < 100)
    {
        cout << "Enter Account No: ";
        cin >> accNo[count];
        cout << "Enter Name: ";
        cin >> name[count];
        cout << "Enter Starting Balance: ";
        cin >> balance[count];
        count++;
        cout << "--- Account Created Successfully! ---\n";
    }
    else
    {
        cout << "Bank database is full!\n";
    }
}

void displayAll(int accNo[], string name[], float balance[], int count)
{
    if (count == 0)
    {
        cout << "No accounts found.\n";
    }
    else
    {
        cout << "Acc No\tName\tBalance\n";
        for (int i = 0; i < count; i++)
        {
            cout << accNo[i] << "\t" << name[i] << "\t" << balance[i] << endl;
        }
    }
}

void searchAccount(int accNo[], string name[], float balance[], int count)
{
    int search;
    cout << "Enter Account No to Search: ";
    cin >> search;
    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == search)
        {
            cout << "Found! Name: " << name[i] << " | Balance: " << balance[i] << endl;
            return;
        }
    }
    cout << "Account not found.\n";
}

void depositMoney(int accNo[], float balance[], int count)
{
    int search;
    float amt;
    cout << "Enter Account No: ";
    cin >> search;
    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == search)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> amt;
            balance[i] += amt;
            cout << "New Balance: " << balance[i] << endl;
            return;
        }
    }
    cout << "Account not found.\n";
}

void withdrawMoney(int accNo[], float balance[], int count)
{
    int search;
    float amt;
    cout << "Enter Account No: ";
    cin >> search;
    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == search)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> amt;
            if (balance[i] >= amt)
            {
                balance[i] -= amt;
                cout << "Success! Remaining: " << balance[i] << endl;
            }
            else
            {
                cout << "Insufficient Balance!\n";
            }
            return;
        }
    }
    cout << "Account not found.\n";
}

void totalBankCash(float balance[], int count)
{
    float total = 0;
    for (int i = 0; i < count; i++)
    {
        total += balance[i];
    }
    cout << "Total Cash in Bank: " << total << endl;
}

void richestCustomer(string name[], float balance[], int count)
{
    if (count == 0)
    {
        cout << "No data.\n";
    }
    else
    {
        int maxIdx = 0;
        for (int i = 1; i < count; i++)
        {
            if (balance[i] > balance[maxIdx])
            {
                maxIdx = i;
            }
        }
        cout << "Richest Customer: " << name[maxIdx] << " (" << balance[maxIdx] << ")\n";
    }
}

void poorestCustomer(string name[], float balance[], int count)
{
    if (count == 0)
    {
        cout << "No data.\n";
    }
    else
    {
        int minIdx = 0;
        for (int i = 1; i < count; i++)
        {
            if (balance[i] < balance[minIdx])
            {
                minIdx = i;
            }
        }
        cout << "Poorest Customer: " << name[minIdx] << " (" << balance[minIdx] << ")\n";
    }
}

void editAccountName(int accNo[], string name[], int count)
{
    int search;
    cout << "Enter Account No: ";
    cin >> search;
    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == search)
        {
            cout << "Enter New Name: ";
            cin >> name[i];
            cout << "Name Updated!\n";
            return;
        }
    }
    cout << "Account not found.\n";
}