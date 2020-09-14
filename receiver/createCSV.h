#include "functions.h"

createCSV(unordered_map<string,int>& m)
{
    ofstream  file("output.csv");
    file.open("output.csv", ios::out | ios::app);

    unordered_map<string, int> ::iterator it;

    for (it = m.begin(); it != m.end(); ++it) 
    {
        file << it->first << "," << it->second << "\n";
    }
 }
