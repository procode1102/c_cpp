#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "iterating through vectors" << endl << endl;

    //setting the constant number of vector elements/vector size.
    const int num_elements = 4;

    // declaring an iteration variable.
    unsigned int i;

    //creating/declearing a vactor.
    vector<int> num_vector(num_elements);

    

    //assigning numbers to the vector.
    num_vector.at(0) = 5;
    num_vector.at(1) = 10;
    num_vector.at(2) = 15;
    num_vector.at(3) = 20;

    for(i = 0; i < num_vector.size(); ++i){
        cout << "Number: " << num_vector.at(i) << endl;
    }







    return 0;
}
