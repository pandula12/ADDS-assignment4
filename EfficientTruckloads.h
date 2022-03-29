#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <map>

class EfficientTruckloads {
    public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();
    private:
    std::map<int, std::map<int,int>> truckTable;
};

#endif