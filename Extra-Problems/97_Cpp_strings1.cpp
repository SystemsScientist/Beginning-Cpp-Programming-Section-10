/*
 * Author: Matt Johnson
 * Subject: declaring and initializing
 * Purpose:
 * Date: 06/23/23
 *
 * Notes:
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s1;			// empty
	cout << "==> " << s1 << endl;	// prints garbage or nothing

	string s2 {"Frank"};		// Frank
	cout << "==> " << s2 << endl;	// prints Frank

	string s3 {s2};			// Frank
	cout << "==> " << s3 << endl;	// prints Frank

	string s4 {"Frank", 3};		// Fra
	cout << "==> " << s4 << endl;	// prints Fra

	string s5 {s3, 0, 2};		// Fr
	cout << "==> " << s5 << endl;	// prints Fr

	string s6 {3, 'X'};		
	cout << "==> " << s6 << endl;

	cout << endl;
	return 0;
}
