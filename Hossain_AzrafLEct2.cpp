// Azraf Hossain
// Lecture 2
// 9/16/24


#include <iostream>
#include <string>

using namespace std;

int main(){

    // define datatypes
    string words = "are you sigma?";
    int add = 4;
    float flt = 4.1;
    bool yes = true;
    char letter = 'S';
    double numbers = 4.52836; 

    // output of all datatypes
    cout << words << endl;
    cout << add << endl;
    cout << flt << endl;
    cout << yes << endl;
    cout << letter << endl;
    cout << numbers << endl;  


    // code from slide 37
    int inches; //variable to store total inches
    inches = 100; //store 100 in the variable inches

    cout << inches << " inch(es) = "; //output the value of inches and the equal sign 
    cout << inches / 12 << " feet (foot) and "; //output maximum number of feet (foot) 
    cout << inches % 12 << " inch(es)" << endl; //output remaining inches
    

    // define characters
    char a = 'A';
    char b = 'B';

    // output the comparisons
    cout << (a > b);


    // Defination and output of equations
    double equations = 2 + 3.5;
    double equationss = 6 / 4 + 3.9;
    double equationsss = 5.4 * 2 - (13.6 + 18 / 2);
    
    cout << "2 + 3.5" << endl;
    cout << "6 / 4 + 3.9" << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2)" << endl;
    cout << equations << endl;
    cout << equationss << endl;
    cout << equationsss << endl;
    
    return 0;

}