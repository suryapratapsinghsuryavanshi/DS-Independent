/*Syntax of Map*/

//map <key_dataType, value_dataType> mapName;

/*The key_dataType is the data type of the key.
The value_dataType is the data type of the value.
mapName is the name of the map.*/

/*HEADER FOR MAP*/
#include <map>

/*Creating a Map*/

#include <iostream>
// To use the map data structure
#include <map>

using namespace std;

int main ()
{
    // Create a map with strings as the key and the integer type as the values
    // Names of the students will be of the data type string and the roll numbers as the integer types
    map<string, int> mp;

    // Assign values to the map

    mp["Asia"] = 1; // Inserts key = "Asia" with value = 1
    mp["Europe"] = 2; // Inserts key = "Europe" with value = 2
    mp["Australia"] = 3; // Inserts key = "Australia" with value = 3
    mp["Antarctica"] = 4 ; // Inserts key = "Antarctica" with value = 4

    // We can retrieve the roll number or the values corresponding to the keys quickly without going through the whole array

    cout << "The roll number of Antarctica is: " << mp["Antarctica"] << endl;
    cout << "The roll number of Europe is: " << mp["Europe"] << endl;

    return 0;
}

