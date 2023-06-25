/*
 *  Author: Matt Johnson
 *  Subject: section challenge
 *  Purpose:
 *  Date: 06/25/23
 * 
 *  Requirements:
 * 
 *          A simple and very old method of sending secret messages is the substitution cipher.
 *          You might have used this cipher with your friends when you were a kid.
 *          Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 *          For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z'.
 * 
 *          Write a program that asks a user to enter a secret message.
 * 
 *          Encrypt this message using the substitution cipher and display the encrypted message.
 *          Then decrypt the encrypted message back to the original message.
 * 
 *          You may use the 2 strings below for your substitution.
 *          For example, to encrypt you can replace the character at position n in alphabet with the
 *          character at position n in key.
 * 
 *          To decrypt you can replace the character at position n in key with the character at
 *          position n in alphabet.
 * 
 *          Have fun! And make the cipher stronger if you wish!
 *          Currently, the cipher only substitutes letters - you could easily add digits, punctuation,
 *          whitespace and so on and so forth. Also, the cipher only substitutes a lowercase letter
 *          with an uppercase letter and vice-versa. This could be improved.
 * 
 *          Remember, the less code you write the less code you have to test!
 *          Reuse existing functionality in libraries and in the std::string class!
 */

#include <iostream>

using namespace std;

int main(void) {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    cout << "Requirements for the Section 10 Challenge.\n" << endl;
    
    cout << endl;
    return 0;
}
