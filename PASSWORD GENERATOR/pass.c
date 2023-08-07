#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

string pd(int totalletters, int totalnumbers, int totalsymbols) { // function
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//intialization
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_+-=[]{}|;:,.<>?";

    string password;
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < totalletters; ++i) {       // loop for letters
        password += letters[rand() % letters.length()];
    }
    
    for (int i = 0; i < totalsymbols; ++i) {         // loop for letters
        password += symbols[rand() % symbols.length()];
    }

    for (int i = 0; i < totalnumbers; ++i) {         // loop for numbers
        password += numbers[rand() % numbers.length()];
    }

    for (int i = 0; i < password.length(); ++i) {  //loop for swaping
        int j = rand() % password.length();
        swap(password[i], password[j]);
    }

    return password;
}

int main() {
    int totalletters, totalnumbers, totalsymbols;

    cout << "Enter the number of letters in the password: ";
    cin >> totalletters;

    cout << "Enter the number of numbers in the password: ";
    cin >> totalnumbers;

    cout << "Enter the number of symbols in the password: ";
    cin >> totalsymbols;

    if (totalletters <= 0 || totalnumbers <= 0 || totalsymbols <= 0) {
        cout << "Invalid input. Please enter positive integers for the number of letters, numbers, and symbols." << endl;
        return 1;
    }

    string password = pd(totalletters, totalnumbers, totalsymbols);//function call
    cout << "your Password is: " << password << endl;

    return 0;
}
