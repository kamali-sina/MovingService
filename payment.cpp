#include "payment.hpp"

using namespace std;

Payment::Payment(/* args */)
{
}

void Payment::requestInformation()
{
    string card_number;
    string password;
    cout << "Enter your information: " << endl;
    cout << "Enter your card number: ";
    cin >> card_number;
    cout << "Enter your password: ";
    cin >> password;
}

void Payment::verifyInformation()
{
    cout << "Verifying information ..." << endl;
    cout << "Information Verified" << endl;
}

void Payment::endTransaction()
{
    is_transaction_completed = true;
}