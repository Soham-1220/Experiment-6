#include<iostream>
#include<string>
using namespace std;

int main() {
    string password, input;
    password = "Soham"; // Set your password here

    cout << "Enter password: ";
    cin >> input;

    if(input == password) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied. Incorrect password." << endl;
    }
    return 0;
}
/* output 
Enter password: password123
Access denied. Incorrect password.
PS C:\Users\SOHAM\OneDrive\Attachments\cppfiles> .\passwordauthenticate.exe

Enter password: Soham
Access granted. */
