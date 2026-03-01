#include <iostream>
using namespace std;

int main()
{
    int starting_city = 0; //default start point
    int currentGas = 0; //default amount of gas at start

    int mpg; //miles per gallon being used in the trip
    cout << "Enter mpg: ";
    cin >> mpg;

    int n; //n = the amount of cities
    cout << "Enter total number of cities: ";
    cin >> n;
    
    int gas[100]; //fixed number up to 100
    cout << "Enter gas available at each city: ";
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    
    int distance[100]; //fixed distance up to 100
    cout << "Enter distance between cities: ";
    for (int i = 0; i < n; i++)
    {
        cin >> distance[i];
    }

    for (int i = 0; i < n ; i++)
    {
        int gain = gas[i] * mpg - distance[i]; //formula for fuel gain per city
        currentGas = currentGas + gain; //gain of gas added to total amount

        if (currentGas < 0) //if the fuel happens to get less than 0
        {
            starting_city = i + 1; //go to the next city
            currentGas = 0; //reset the amount of gas
        }
    }

    cout << "The preferred starting city for the driver is: "<< starting_city << endl;

    return 0;

}
