/*
Part 2:
 
Ask an additional question of the user:
 How many calories of cereal is the user willing to eat today?

Your program then computes how many ounces of cereal the user can eat and stay within the number of calories input in this part. Your answer should be printed rounded to one decimal place.
 
*/

// Azraf Hossain
// Lecture 2
// 9/16/24


#include <iostream>
#include <string>

using namespace std;


int main() {
    // define the name of the cereal, amount of calories per serving and the number of ounces per serving
    string name;
    cout << "What is the name of your cereal? " << endl;
    cin >> name;

    int calories;
    cout << "How many calories per serving? " << endl;
    cin >> calories;

    int ounces;
    cout << "How many ounces per serving? " << endl;
    cin >> ounces;

    double perOz;
    perOz = calories / ounces;

    cout << "One serving of " << name << " is " << calories << " ounces and has " << perOz << " calories per ounce." << endl;
    
    int total;
    cout << "How many calories of " << name << " would you like to consume today?" << endl;
    cin >> total;

    float totaloz = (total/perOz);

    
    cout << "You should eat " << totaloz << " ounces of " << name << endl;


    return 0;
}
