#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

map<string, int> statelist;
void set_data()
{
    statelist["andaman nikobar"] = 400000;
    statelist["andhra pradesh"] = 52787000;
    statelist["arunachal pradesh"] = 1533000;
    statelist["assam"] = 35043000;
    statelist["bihar"] = 123083000;
    statelist["chandigarh"] = 1208000;
    statelist["chhatisgarh"] = 29493000;
    statelist["dadra nagar haveli and daman & diu"] = 1078000;
    statelist["delhi"] = 20571000;
    statelist["goa"] = 1559000;
    statelist["gujarat"] = 69788000;
    statelist["haryana"] = 29483000;
    statelist["himachal pradesh"] = 7394000;
    statelist["jammu kashmir"] = 13408000;
    statelist["jharkhand"] = 38471000;
    statelist["karnataka"] = 66845000;
    statelist["kerala"] = 35489000;
    statelist["ladakh"] = 297000;
    statelist["lakshadweep"] = 68000;
    statelist["madhya pradesh"] = 84516000;
    statelist["maharashtra"] = 124437000;
    statelist["manipur"] = 3165000;
    statelist["meghalaya"] = 3288000;
    statelist["mizoram"] = 1216000;
    statelist["nagaland"] = 2192000;
    statelist["odisha"] = 44033000;
    statelist["puducherry"] = 1572000;
    statelist["punjab"] = 30339000;
    statelist["rajasthan"] = 79281000;
    statelist["sikkim"] = 677000;
    statelist["tamil nadu"] = 76402000;
    statelist["telangana"] = 37725000;
    statelist["tripura"] = 4071000;
    statelist["uttar pradesh"] = 230907000;
    statelist["uttarakhand"] = 11399000;
    statelist["west bengal"] = 98125000;
}

int main()
{
    string state;
    int population;
    set_data();
jump:
    cout << "Enter state name or enter all to display whole list:";
    cin >> state;
    if (state == "all")
    {
        map<string, int>::iterator it;
        for (it = statelist.begin(); it != statelist.end(); it++)
        {
            cout <<  it->first << " -> " << it->second <<endl;
        }
    }
    else
    {
        population = statelist[state];
        if (population == 0)
        {
            cout << "No such state exists!!!" << endl;
            goto jump;
        }
        else
        {
            cout << "Population of " << state << " is " << population << endl;
        }
    }
    return 0;
}