#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int hr = 12; //12 hour clock hours

int minute = 0; //minutes used for both 24 and 12 hr clock

int sec = 0; //seconds used for both 24 and 12 hr clock

int hr24 = 0; //tracking time in 24 hour format

//string amPm = "am"; ------->tried using a string to track am/pm. Used integer because couldn't implement with string
int menuInput; //variable for menu input

bool exitChecker = true; //if 4 is chosen in menu this becomes false and exits the program

int i = 0; //i used to track if am or pm by comparing hrs24 to 12, changes to 1 if hrs24 >= 12


//prints time, used a long line to make easier to see what was being printed on what line.
void displayCurrentTime(){
	cout << endl;
    cout << endl;
	cout<< "12 Hour Clock <----> Military 24 Clock" << endl;
    cout << endl;
    cout << endl;
	
    if(hr < 10) cout << "0"; 
    cout << hr << ":"; 

    if(minute < 10) cout << "0"; 
    cout << minute << ":"; 
    
    if(sec < 10) cout << "0"; 
    // cout << sec << " "; 

    if(i == 0) cout << "AM "; 
    else if(i == 1) cout << " PM "; 
    
    // cout<< "       *  *        "; 

    if(hr24 < 10) cout << "0"; 
    cout << hr24 << ":"; 

    if(minute < 10) cout << "0"; 
    cout << minute << ":"; 


    if(sec < 10) cout << "0"; 
    // cout << sec << "         *" << endl;
	cout << endl;
}

//displays menu
void displayMenu() {

			
			cout << "1 - add 1 Hour        \n" << endl;
			cout << "2 - add 1 Minute      \n" << endl;
			cout << "3 - add 1 Second      \n" << endl;
			cout << "4 - exit application       \n" << endl;
			
}
//tracks user input and takes appropriate course of action based on user input
void timeEffect(){

	switch (menuInput){
			case 1:
				hr24++;
				hr++;
				if(hr24 == 24){
					hr24 = 0;
				}

				if(hr24 < 12){
					i = 0;
				}

				if(hr == 13){
					hr = 1;
				}
				if(hr24 >= 12){
					i = 1;
				}
				break;
            
			case 2:
				minute++;
				if(minute == 60){
				hr++;
				hr24++;
				minute = 0;
					if(hr24 < 12){
						i = 0;
					}
					if(hr24 >= 12){
						i = 1;
					}
					if(hr == 13){
						hr = 1;
					}
					if(hr24 == 24){
						hr24 = 0;
					}
				}
				break;
            
			case 3:
				sec++;
				if(sec==60){
				minute++;
				sec = 0;
				if(minute==60){
					hr++;
					hr24++;
					minute = 0;
					if(hr24 < 12){
						i = 0;
					}
					if(hr == 13){
						hr = 1;
					}
					if(hr24 >= 12){
						i = 1;
					}
					if(hr24 == 24){
						hr24 = 0;
					}
				}}
				break;
			case 4:
				cout << "good bye!!" << endl;
				exitChecker = false;
				break;
			default:
				cout << "Unexpected Input Received. Please Enter A Valid Menu Item." << endl;
			}

		}
//prints time, displays menu, takes user input, changes time and displays clocks or exits program
int main() {

	while(exitChecker){
		//system("cls"); -->didn't use this because it was not working. Don't see a good way to clear screen
		//sec++;            The rest of these items are the remains of a previous attempt at solving the problem according to the diagram provided
		//checkTime();
		//sleep(1);
		//displayCurrentTime();
		//displayMenu();

		displayCurrentTime();
		displayMenu();
		cin >> menuInput;
		timeEffect();
	}
	return 0;
}