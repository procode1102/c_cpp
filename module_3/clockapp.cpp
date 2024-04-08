
/* ***********************
    Project 1: Chada Tech Clocks

    Developer: Aaron Bevans

    SNHU CS-210-R4727 Programming Languages 24EW4

    Descriotion: 12 and 24 hour clock application

    Language: c++
   **********************
*/
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

//user input will change based on menu choice.
int user_input; 

// //used to exit the application when 4th menu option is entered.
// bool init_exit = true;

//12 hours in a day.
int hour = 12;

//minutes will increase or decrease for both 12 and 24hr clocks.
int _min = 0;

//seconds will increase or decrease for both 12 and 24hr clocks.
int seconds = 0;

//24 hour clock format.
int hour_24 = 0;

//tracks am or pm times.
int i = 0;

// function will display a the time changes
void displayClocks(){
    cout << "**************************  ***************************" << endl;  
    cout << "*      12 Hour Clock     *  *       24 Hour Clock      *"<< endl;
    cout << "*                                                      *" << endl;                                
    cout << "**************************  ***************************" << endl; 

    cout << "         " << hour << ":";

    if(_min < 10){
        cout << "0";
        
    }
    cout << _min << ":";

    if(seconds < 10){
        cout << "0";
        
    }
    cout << seconds << " ";

    if(i == 0){
        cout << "am ";
    }else if(i == 1){
        cout << " pm ";
    }
    cout << "                " ;

    if(hour_24 < 10){
        cout << "0";
        
    }
    cout << hour_24 << ":";


    if(_min < 10){
        cout << "0";
        
    }
    cout << _min << ":";

    if(seconds <= 60){
        cout << seconds << endl;


    }
    cout << "                     " << endl;

    
    

}

//menu options to modify time to exit.
void menu_options(){
    cout << endl;
    cout << "               ****************************\n";
    cout << "               * 1 - Add One Hour         *\n";
    cout << "               * 2 - Add One Minute       *\n";
    cout << "               * 3 - Add Onr Second       *\n";
    cout << "               * 4 - Exit Program         *\n";
    cout << "               ****************************\n";


}

void modifiedTime(){
    //user enters 1 from menu options.
    if(user_input == 1){
        //increment the hour by 1 when user enters 1 (24 hour clock).
        hour_24++;

        //increment the hour by 1 when user enters 1 (12 hour clock).
        hour++;
        if(hour_24 == 24){
            hour_24 = 0;
        }
        if(hour_24 < 12){
            i = 0;
        }

        if(hour == 13){
            hour = 1;
        }

        if(hour_24 >= 12){
            i = 1;
        }


    //user enters 2 from menu options.
    }else if(user_input == 2){
        //increment the minute by 1 
        _min++;
        if(_min == 60){
            hour++;
            hour_24++;
            _min = 0;
            if(hour_24 < 12){
                i = 0;
            }
            if(hour_24 >= 12){
                i = 1;
            }
            if(hour == 13){
                hour = 1;
            }
            if(hour_24 == 24){
                hour_24 = 0;
    
            }


        }
    //user enters 3 from menu options.
    }else if(user_input == 3){
        seconds++;
        if(seconds == 60){
            _min++;
            seconds = 0;
            if(_min == 60){
                hour++;
                hour_24++;
                _min = 0;
                if(hour_24 < 12){
                    i = 0;
                }
                if(hour == 13){
                    hour = 1;
                }
                if(hour >= 12){
                    hour = 1;
                }
                if(hour_24 == 24){
                    hour_24 = 0;
                }
                // if(seconds < 60){
                //     seconds++;
                // }

                
            }
        }
    }else if(user_input == 4){

        cout << endl << "Exiting Clock Program" << endl;
        
    }else{
        cout << "unidentified user input." << endl;
    }

}

// main() function displays user menu, prints time and time change
int main(){

    do{
        
        displayClocks();
        menu_options();
        cin >> user_input;
        modifiedTime();
        

    



    }while(user_input != 4);



    

    return 0;

}









