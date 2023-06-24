/*
 *  Author: Matt Johnson
 *  Subject: C-style strings
 *  Purpose:
 *  Date: 06/23/23
 * 
 *  Notes:
 */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(void) {
    
    char first_name [20];
    char last_name [20];
    char full_name [50];
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "----------------------------------------------" << endl;
    
    cout << "\nHello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << "\n" << endl;
    
    cout << endl;
    return 0;
}
