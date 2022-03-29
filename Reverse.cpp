#include "Reverse.h"
using namespace std;

Reverse::Reverse() {
}

int Reverse::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }
    static int total = 0;
    static int remainder = 0;
    if(value > 0){
      remainder=value%10;
      total=total*10+remainder;
      reverseDigit(value/10);
   }
   else {
        return total;
   }
   return total;
}

string Reverse::reverseString(string letters) {
    static int i = 0;
    static string reverseLetters = letters;
    int strLength = letters.length();
    while (i < strLength) {
        reverseLetters[i] = letters[strLength-1-i];
        i++;
        reverseString(letters);
    }
    return reverseLetters;
}
   

Reverse::~Reverse(){
}
