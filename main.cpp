#include <iostream>

#include "src/slide.hpp"



void printthearray(int array[], int size) {
    cout<<"[";
    for (int f=0; f<size; f++) {
        cout<<array[f];
        if (f<size-1) {
            cout<<", ";
        }
    }
    cout<<"]";
};


int main() {
int sizedefinition;
    cout<<"Enter size of your array: ";
    cin>>sizedefinition;

    if (sizedefinition <=0) {
        cout<<"Array size not approved."<<endl;
        return 1;
    }

    int* array=new int[sizedefinition];
    cout<<"Enter"<< sizedefinition << " numbers: "<<endl;
    for (int f=0; f<sizedefinition; f++) {
        cout<<"Value "<<f+1<<": ";
        cin>>array[f];
    }

    int shift;
    cout<<"Enter the amount of shifts for left: ";
    cin>>shift;

    cout<<endl;
    cout<<"First array that was ever given: ";
    printthearray(array,sizedefinition);
    cout<<endl;

    arrayShift(array,sizedefinition,shift);

    cout<<"The shifted array is: ";
    printthearray(array,sizedefinition);
    cout<<endl;
    delete[]array;
    return 0;



}