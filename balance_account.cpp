#include <iostream>
#include <limits>  // For input validation
using namespace std;
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance > 0 ? initialBalance : 0) {}

    void credit(double amount) {
        if (amount > 0) balance += amount;
        else cout << "Invalid amount!" << endl;
    }
    void debit(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
        else cout << "Invalid or insufficient funds!" << endl;
    }
    double getBalance() const { return balance; }
};
double getValidAmount() {
    double amount;
    while (true) {
        cout << "Enter amount: $";
        cin >> amount;
        if (cin.fail() || amount <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a positive number." << endl;
        } else {
            return amount;
        }
    }
}
int main() {
    BankAccount account(500.0);
    int choice;
    double amount;
    while (true) {
        cout << "1. Credit  2. Debit  3. Check Balance  4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: amount = getValidAmount(); account.credit(amount); break;
            case 2: amount = getValidAmount(); account.debit(amount); break;
            case 3: cout << "Balance: $" << account.getBalance() << endl; break;
            case 4: return 0;
            default: cout << "Invalid choice!" << endl;
        }
    }
}