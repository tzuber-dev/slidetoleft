#include <iostream>

#include "src/slide.hpp"



void printthearray(int array[], int size) {
    cout<<"[";
    for (int f=0; f<size; f++) {
        std::cout<<array[f];
        if (f<size-1) {
            std::cout<<", ";
        }
    }
    std::cout<<"]";
};


int main() {
int sizedefinition;
    cout<<"Enter size of your array: ";
    cin>>sizedefinition;

    if (sizedefinition <=0) {
        std::cout<<"Array size not approved."<<endl;
        return 1;
    }

    int* array=new int[sizedefinition];
    cout<<"Enter"<< sizedefinition << " numbers: "<<endl;
    for (int f=0; f<sizedefinition; f++) {
        std::cout<<"Value "<<f+1<<": ";
        cin>>array[f];
    }

    int shift;
    std::cout<<"Enter the amount of shifts for left: ";
    cin>>shift;

    std::cout<<endl;
    std::cout<<"First array that was ever given: ";
    printthearray(array,sizedefinition);
    std::cout<<endl;

    arrayShift(array,sizedefinition,shift);

    std::cout<<"The shifted array is: ";
    printthearray(array,sizedefinition);
    std::cout<<endl;
    delete[]array;
    return 0;



}
