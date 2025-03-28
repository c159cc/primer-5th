#include "ex12_2.h"
using namespace std;

/**
> Write a function that returns a dynamically allocated vector of ints. Pass
that vector to another function that reads the standard input to give values to
the elements. Pass the vector to another function to print the values that were
read. Remember to delete the vector at the appropriate time.
 */

 vector<int>* genVec(){
    return new vector<int>();
 }

 void readVec(vector<int>* v){
     int x; 
     for (; cin >> x; ) { 
         v->push_back(x);
     }
 }

 void printVec(vector<int>* v){
     for(int i=0; i<v->size(); i++){
         cout << v->at(i) << " ";
     }
     cout << endl;
 }

 int main() {
     auto *pv = genVec();

     readVec(pv);

     printVec(pv);

     delete pv;
     
     return 0;
 }