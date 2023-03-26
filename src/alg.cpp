// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t) {
int count = 0;
for (int j = value; j>0; j--){
    if (value % j==0){
        count +=1;
    }
}
if (count ==2){
    return (true);
}
else {
    return (false);
}
}

uint64_t nPrime(uint64_t n) {
int count =0;
int b=1;
int nomer=0;
while (count !=n){
    bool Obj = true;
    b++;
    for (int j = 2; j<b; j++){
        if(b % j==0)
        Obj = false;
    }
    if (Obj == true){
        nomer = b;
        count++;
    }
}
return nomer;
}

uint64_t nextPrime(uint64_t) {
while (checkPrime(value)==false){
    value ++;
}
return(value);
}

uint64_t sumPrime(uint64_t hbound) {
int sum = 0;
for (int j=2, j<hbound; j++){
    if (checkPrime(j) == true){
        sum+=j;
    }
}
return sum;
}
