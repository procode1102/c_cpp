// if-else branches
#include <iostream>
using namespace std;

int main(){
    string dev_type;
    cout << "developer specialization: " << endl;
    cin >> dev_type;
    
    /**
     * detecting equal values with branches
     * 
    */
   if (dev_type == "full-stack"){
        cout << "development specialization: " << dev_type << endl;
   }

   //equality and inequality operators
    //the equality operator checks whether two values are equal

    //the inequality operator (!=) evaluates to true if the left and right sides are not equal, or different.

   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   if(firstString.compare(secondString) < 0){
    cout << firstString << " " << secondString << endl;
   }else {
    cout << secondString << " " << firstString << endl;
   }

    // stringVar.at(index);
        //replace string character at the index argument.

        //cannot assign an additional string character.

        //cannot assign a double string at given index argument.

        //

    


    return 0;

}