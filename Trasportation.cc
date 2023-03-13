/*You are making a program for a bus service. 
A bus can transport 50 passengers at once. 
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.*/

#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int people;
    int last;
    int rem;
    cin >> people;
    
    last = people % 50;
    
    rem = 50 - last;
    cout << rem;
    
    
    return 0;
}
