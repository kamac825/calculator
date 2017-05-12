/*Created by Kamac825 on 5/11/17 using Visual Studio 2017*/
/*This program comes "AS IS" with no warranties*/

#include <iostream>




using namespace std;


double in1;
double in2;
double answer;
int opp;
int hold = 1;
int exit1 = 5;
int yes = 1;
int sure;

int main() {

	while (hold = 1) {
		//collecting data

		cout << "Enter a value " << endl;
		cin >> (in1);

		cout << "Enter a second value" << endl;
		cin >> (in2);

		cout << "Enter a number (1=ADD,2=SUB,3=MUL,4=DIV or 5 to EXIT)" << endl;
		cin >> (opp);


		if (opp == 1) {
			answer = (in1 + in2);
		}
		if (opp == 2) {
			answer = (in1 - in2);
		}
		if (opp == 3) {
			answer = (in1 * in2);
		}
		if (opp == 4) {
			answer = (in1/in2);
		}
		if (opp == 5){
		   cout << "Are you sure (1=yes,2=no)" << endl;
			cin >> (sure);
            if (sure == yes) {
				break;
			}

		}
	
		
		cout << "Your Answer is: " << answer << endl;

    }

}