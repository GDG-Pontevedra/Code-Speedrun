// Code Speedrun #0 - C++

#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <ostream>
#include <sstream>

using namespace std;

unsigned numDays(int n, string s, string t) {

	int u = 0;
	while (s != t) {
	
		for (int i = 0; i < n; i++) {
			if (t[i] == s[i]) {
				continue;
			}
			
			if (s[i] > t[i]) {
				if ((90 - s[i]) + (t[i] - 65) >= 13) {
					
					s[i] = 13 - ('Z'- s[i] + 1) + 'A';
					cout << s[i] << endl;
				}

				else {
					if (s[i] == 90) {
						s[i] = 'A';
					}
					else {
						s[i]++;
					}
					
				}
				cout << s << endl;
			}
			else {
				if (t[i] - s[i] < 13) {
					if (s[i] == 90) {
						s[i] = 'A';
					}
				
					else {
						
						s[i]++;
						cout << u << endl;
					}
					cout << s << endl;
				}

				else {

					if (s[i] + 13 < 90) {
						s[i] += 13;

					}
					else {
						s[i] = (90 - s[i] + 14);
						cout << "aqui4" << endl;
					}
					cout << u << endl;
					cout << s << endl;
				}
				
			}
			u++;
		}
	}

	return u;

}


int main() {
	
	std::string s, t;

	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::cout << numDays(s.size(), s, t) << std::endl;

}
