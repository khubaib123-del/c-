#include <iostream>
using namespace std;

class Payment {
public:
    double amount;
    virtual void pay() = 0;
};

class Cash : public Payment {
public:
    void pay() {
        cout << "Cash: Rs " << amount << endl;
    }
};

class Card : public Payment {
public:
    string card;

    void pay() {
        cout << "Card: Rs " << amount << endl;
        cout << "Last 4 digits: "
             << card.substr(card.length() - 4) << endl;
    }
};

class Wallet : public Payment {
public:
    string name;

    void pay() {
        cout << name << ": Rs " << amount << endl;
    }
};

int main() {
    int choice;
    cout << "1 Cash\n2 Card\n3 Wallet\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        Cash c;
        cout << "Enter amount: ";
        cin >> c.amount;
        c.pay();
    }

    else if (choice == 2) {
        Card c;
        cout << "Enter amount: ";
        cin >> c.amount;
        cout << "Enter card number: ";
        cin >> c.card;
        c.pay();
    }

    else if (choice == 3) {
        Wallet w;
        cout << "Enter amount: ";
        cin >> w.amount;
        cout << "Enter wallet name: ";
        cin >> w.name;
        w.pay();
    }

    else {
        cout << "Invalid choice\n";
    }

    return 0;
}

