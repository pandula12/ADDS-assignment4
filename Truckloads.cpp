#include "Truckloads.h"

Truckloads::Truckloads(){}

Truckloads::~Truckloads(){}

int Truckloads::numTrucks(int numCrates, int loadSize) {
   if (loadSize >= numCrates) {
       return 1;
   } 
   int pile1 = numCrates/2 + numCrates%2;
   int pile2 = numCrates/2;
	return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
}