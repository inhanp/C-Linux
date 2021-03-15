#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void fillArray(uint32_t List[], uint32_t Sz);
void Sort(uint32_t List[] , uint32_t Usage);
int32_t squeezeOutOdds(int32_t List[], uint32_t Usage);

void fillArray(uint32_t List[], uint32_t Size) {
    srand( (uint32_t) time(NULL) ); // initialize random

    for (uint32_t pos = 0; pos < Size; pos++) {
        List[pos] = rand() % 1000;
    }
}

void Sort(uint32_t List[], uint32_t Usage) {
    uint32_t unsortedFront = 1;

    while ( unsortedFront < Usage ) {

        uint32_t currElement = List[unsortedFront];
        uint32_t probeLocation = unsortedFront;

        while ( probeLocation > 0 && List[probeLocation-1] > currElement) {
            List[probeLocation] = List[probeLocation-1];
            probeLocation--;
        }

        List[probeLocation] = currElement;
        unsortedFront++;
    }
}   

int32_t squeezeOutOdds(int32_t List[], uint32_t Usage) {
    uint32_t Trailer = 0;

    while ( Trailer < Usage && List[Trailer] % 2 == 0 )
        ++Trailer;

    if ( Trailer == Usage )
        return Trailer;
    
    uint32_t Leader = Trailer + 1;

    while ( Leader < Usage ) {
        if ( List[Leader] % 2 == 0 ) {
            List[Trailer] = List[Leader];
            ++Trailer;
        }

        ++Leader;
    }
    return Trailer;
}

int main(int argc, char** argv) {

    int staticArray[100];
    int num = 100;
    uint32_t* dynamic = (uint32_t*)malloc(num*sizeof(uint32_t));

    fillArray(staticArray, 100);

    Sort(staticArray, 100);

    squeezeOutOdds(staticArray, 100);
}
