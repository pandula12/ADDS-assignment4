#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

class EfficientTruckloads {
    public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();
    private:
    int truckTable[1000][1000];
};

#endif