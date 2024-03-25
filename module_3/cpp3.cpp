#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Define your function here */
void SortVector(vector<int> & myVec){
   sort(myVec.begin(), myVec.end(), greater<int>());
}

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

//iteration that increases the sum value when each vector element is added to it.
   int num_elements_1 = 3;
   vector<int> userVals(num_elements_1);
    // unsigned int i;
   int sumVal;
   
   userVals.at(0) = 1;
   userVals.at(1) = 9;
   userVals.at(2) = 4;

   sumVal = 0;

   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
      cout << sumVal << endl;
   }


//loop that decreases the vector size by one upon every iteration.
num_elements_1 = 3;
vector<int> userVals_1(num_elements_1);
int j;

userVals_1.at(0) = 2;
userVals_1.at(1) = 4;
userVals_1.at(2) = 7;

for (j = userVals_1.size() - 1; j >= 0; --j) {
    cout << userVals_1.at(j) << endl;
    
}
cout << endl;

//loop that detects the largest equl value in a vector upon every iteration.
int num_elements_2 = 4;
vector<int> userVals_2(num_elements_2);
int k;
int maxVal;

userVals_2.at(0) = 2;
userVals_2.at(1) = 6;
userVals_2.at(2) = 8;
userVals_2.at(3) = 4;

maxVal = userVals_2.at(0);
for(k = 0; k < userVals_2.size(); k++){
    if(userVals_2.at(k) >= maxVal){
        maxVal = userVals_2.at(k);
        cout << maxVal << endl;
    }
}

//loop that iterates through a vector and outputs all elements less than 0/negative.
int num_elements_3 = 4;
vector<int> userVals_3(num_elements_3);
int l;

userVals_3.at(0) = -1;
userVals_3.at(1) = 3;
userVals_3.at(2) = 6;
userVals_3.at(3) = -7;

for(l = 0; l < userVals_3.size(); ++l){
    if(userVals_3.at(l) < 0){
        cout << userVals_3.at(l) << endl;
    }
}





//loop that iterates over a vector and converts every negative element to a positive inverse.
int num_elements_4 = 4;
vector<int> userVals_4(num_elements_4);
int m;

userVals_4.at(0) = -1;
userVals_4.at(1) = 4;
userVals_4.at(2) = -5;
userVals_4.at(3) = 8;


//iterate until the length of vector is reached, but not included in the iteration.
for(m = 0; m < userVals_4.size(); ++m){
    if(userVals_4.at(m) < 0){
        userVals_4.at(m) = -1 * userVals_4.at(m);
    }
    cout << userVals_4.at(m) << endl;
}


//vector resize
    //the size of a list of items is not known during a program's compile time. 

    //thus, a vector's size need not be specified in the vector's declaration.

    //instead, a vector's size can be set or changed while a program executes using resize(N).
        //Ex: highScore.resize(10) resizes the highScores vector to have 10 elements.

    //resize() can be called multiple times

    //if the new size is larger, resize() adds elements at the end.

    //if smaller, resize() deletes elements from the end.

    //If userScores has size 3 (elements 0, 1, 2), 
    
        //userScores.resize(2);

        //would delete element 2, leaving elements 0 and 1.

        //a subsequent access to userScores.at(2) would result in an error.

    vector <int> vector_vals;

    vector_vals.resize(3);
    vector_vals.at(0) = 11;
    vector_vals.at(1) = 22;
    vector_vals.at(2) = 33;

    /*
        swapping two variables

            sometimes a program must swap values among two variables.

            swapping two variables x and y means to assign y's value to x, and x's value to y. 

            a temporary variable is a variable used briefly to store a value.


    */
   int x = 22;
   int y = 99;
   x = y;
   y = x;
   x = y;

   cout << x << endl;
   cout << y << endl;
   
   x = 22;
   int tempVal;
   tempVal = x;

   x = y;
   y = x;

   cout << x << endl;
   cout << y << endl;

   x = 22;
   tempVal = x;
   x = y;
   y = tempVal;
   cout << y << endl;

   /*
    arrays vs vectors
        C++ supports two kinds of ordered list types.

        Arrays: declared as 'int myList[10]', accessed as myList[i].

        Vectors: declared as 'vector<int> myList(10)', accessed as myList.at(i).

        Arrays have a simpler syntax than vectors, but vectors are safer to use.

        Thus, using vectors rather than arrays is good practice.

        Vectors are safer because the access v.at(i) is checked during execution to 
        ensure the index is within the vector's valid range.

        An array access a[i] involves no such check.


    two dimensional arrays

        int myArray[R][C]
            represents a table of int variables with R rows and C columns, 
            so R*C elements total.

        int myArray[2][3] 
            creates a table with 2 rows and 3 columns, for 6 int variables total.

        myArray[0][0] = 33; or num = myArray[1][2].


        reassigning two-dimensional array indices.
        myArray[0][0] = 55; 
        myArray[1][1] = 77;
        myArray[1][2] = 99;




   */

    /* Type your code here */
   int in;

   cin >> in;

   vector<int> vec(in);

   for(int i = 0; i < in; ++i){
      cin >> vec[i];
   }
   SortVector(vec);

   for(int i = 0; i < in; ++i){
      cout << vec[i] << ",";  
      
   }
   cout << endl;
   
   














    return 0;
}


