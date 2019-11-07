/* Author: Denice Veluz
Evaluates multiple arithmetic expressions and does a square function
*/

#include <iostream>
using namespace std;

int main() {
	int sumofs = 0;
    int s; 
	char plus = '+'; 
	char two; //Second variable to declare the square operator
	cin >> s;

	while (cin >> two){ 
		
		if (two == '^'){ //Operator for squaring the number
			s = s*s;
			cin >> two;
		}

        if (plus == '-'){ //Operator for subratction
			sumofs = sumofs - s;
		}

		if (plus =='+'){ //Operator for addition
			sumofs = s + sumofs; //Needs separate if's so that it doesn't carry on to check the rest
		}
        cin >> s;
        plus = two;
		
		if (plus == ';') {
			cout << sumofs << endl;
			sumofs = 0;	//When it reads the ; then it will reset
			plus ='+';
			
			
		}
	}
}