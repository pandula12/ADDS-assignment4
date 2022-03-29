#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
using namespace std;

int main() {
    Reverse Rev1;
    Truckloads Truck1;
    EfficientTruckloads effTruck1;
    int value;
    string letters;
    int numCrates;
    int loadSize;
    cin>>value>>letters>>numCrates>>loadSize;
    cout<<Rev1.reverseDigit(value)<<" "<<Rev1.reverseString(letters)<<" "<<Truck1.numTrucks(numCrates, loadSize)<<" "<<effTruck1.numTrucks(numCrates, loadSize)<<endl;
    
    return 0;
}