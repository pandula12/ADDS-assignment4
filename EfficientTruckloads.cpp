#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads()
{
    truckTable[0][0] = 0;
}

EfficientTruckloads::~EfficientTruckloads() {}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    if (loadSize >= numCrates)
    {
        return 1;
    }
    if (truckTable[numCrates][loadSize] == 0)
    {
        int pile1 = numCrates / 2 + numCrates % 2;
        int pile2 = numCrates / 2;
        truckTable[numCrates][loadSize] = numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
    }
    return truckTable[numCrates][loadSize];
}