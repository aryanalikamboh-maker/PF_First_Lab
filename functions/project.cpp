#include<iostream>
#include<string>
using namespace std;

int main() {
    // Arrays declaration
    int accNo[100];
    string name[100];
    float balance[100];

    int count = 0; // Kitne accounts ban chuke hain
    int choice;

    do {
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

        // 1. CREATE
        if (choice == 1) {
            cout << "Enter Account No: "; cin >> accNo[count];
            cout << "Enter Name: "; cin >> name[count];
            cout << "Enter Starting Balance: "; cin >> balance[count];
            count++;
            cout << "--- Account Created Successfully! ---\n";
        }

        // 2. DISPLAY
        else if (choice == 2) {
            if (count == 0) cout << "No accounts found.\n";
            else {
                cout << "Acc No\tName\tBalance\n";
                for (int i = 0; i < count; i++) {
                    cout << accNo[i] << "\t" << name[i] << "\t" << balance[i] << endl;
                }
            }
        }

        // 3. SEARCH
        else if (choice == 3) {
            int search;
            cout << "Enter Account No to Search: "; cin >> search;
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (accNo[i] == search) {
                    cout << "Found! Name: " << name[i] << " | Balance: " << balance[i] << endl;
                    found = 1;
                }
            }
            if (found == 0) cout << "Account not found.\n";
        }

        // 4. DEPOSIT
        else if (choice == 4) {
            int search; float amt;
            cout << "Enter Account No: "; cin >> search;
            for (int i = 0; i < count; i++) {
                if (accNo[i] == search) {
                    cout << "Enter Amount to Deposit: "; cin >> amt;
                    balance[i] += amt;
                    cout << "New Balance: " << balance[i] << endl;
                }
            }
        }

        // 5. WITHDRAW
        else if (choice == 5) {
            int search; float amt;
            cout << "Enter Account No: "; cin >> search;
            for (int i = 0; i < count; i++) {
                if (accNo[i] == search) {
                    cout << "Enter Amount to Withdraw: "; cin >> amt;
                    if (balance[i] >= amt) {
                        balance[i] -= amt;
                        cout << "Success! Remaining: " << balance[i] << endl;
                    } else cout << "Insufficient Balance!\n";
                }
            }
        }

        // 6. TOTAL BANK CASH
        else if (choice == 6) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total += balance[i];
            }
            cout << "Total Cash in Bank: " << total << endl;
        }

        // 7. RICHEST CUSTOMER
        else if (choice == 7) {
            if (count == 0) cout << "No data.\n";
            else {
                int maxIdx = 0;
                for (int i = 1; i < count; i++) {
                    if (balance[i] > balance[maxIdx]) maxIdx = i;
                }
                cout << "Richest Customer: " << name[maxIdx] << " (" << balance[maxIdx] << ")\n";
            }
        }

        // 8. POOREST CUSTOMER
        else if (choice == 8) {
            if (count == 0) cout << "No data.\n";
            else {
                int minIdx = 0;
                for (int i = 1; i < count; i++) {
                    if (balance[i] < balance[minIdx]) minIdx = i;
                }
                cout << "Poorest Customer: " << name[minIdx] << " (" << balance[minIdx] << ")\n";
            }
        }

        // 9. EDIT NAME
        else if (choice == 9) {
            int search;
            cout << "Enter Account No: "; cin >> search;
            for (int i = 0; i < count; i++) {
                if (accNo[i] == search) {
                    cout << "Enter New Name: "; cin >> name[i];
                    cout << "Name Updated!\n";
                }
            }
        }

        // 10. EXIT
        else if (choice == 10) {
            cout << "Exiting... Good Bye!\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 10);

    return 0;
}