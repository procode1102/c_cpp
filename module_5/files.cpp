#include <iostream>
//including input filestream
#include <fstream>

using namespace std;

// file input
    //Opening and reading from a file
        /*
            1. Sometimes a program should get input from a file 
            rather than from a user typing on a keyboard. 

            to read file input, craete new input stream that comes
            from a file.

            rather than the predefined input stream cin that comes 
            from the standard input (keyboard)

            input stream can perform just like cin.

            2. 'inFS.open(str)' function has a string parameter str 
            that specifies the name of the file to open.

            The filename parameter can be a C++ string or a null-terminated C string.

            program can use a user-entered string as the filename.
            ex: cin >> filename.

            3. is_open function checks that a file has been opened.

            4. Reading until the end of the file










        */
        

int main(){
    //setting input file stream.
    ifstream inFS;

    //declaring input string variable.
    string text_message;
    

    cout << "testing fstream function..." << endl;

    cout << "opening file test_file.txt..." << endl;

    //opening test file using inFS file stream.
    inFS.open("test_file.txt");
    
    //condition that checks if file cannot be open.
    if(!inFS.is_open()){
        cout << "could not open target file." << endl;


        //1 - error indicator.
        return 1; 
    }

    //inFs stream now enabled as cin stream
    //test_file.txt should output text message, else error is output.
    cout << "reading data..." << endl << endl;

    //sending in input stream to variable.
    inFS >> text_message;
    

    //closing file.
    inFS.close(); 



    //output string and string variable data.
    cout << text_message << endl << endl;

    // cout << "closing file now. Good bye!" << endl;

    //returning no errors.
    return 0;
}