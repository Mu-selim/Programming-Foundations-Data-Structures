#include <iostream>
#include <map> // initialze the collection of map
using namespace std;

int main()
{
    map<string, string> countryCapital;
    countryCapital["Egypt"] = "Cairo";
    countryCapital["Finlad"] = "helsinki";
    countryCapital["Spain"] = "Madrid";
    countryCapital["japan"] = "Tokyo";
    countryCapital["Russia"] = "Mosco";
    countryCapital["Sudi-aribia"] = "Reiad";

    // key : Country
    // value : Capital
    for(auto &i : countryCapital)
    {
        cout << "Country is " << i.first << " , it's capital is " << i.second << endl;
    } 
}