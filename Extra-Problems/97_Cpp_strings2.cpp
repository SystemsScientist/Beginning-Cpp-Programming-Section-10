/*
 * Author: Matt Johnson
 * Subject: assignment "="
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

	string s1;

	s1 = "C++ Rocks!";
	cout << s1 << endl;

	string s2 {"Hello"};
	s2 = s1;
	cout << s2 << endl;

	cout << endl;
	return 0;
}
