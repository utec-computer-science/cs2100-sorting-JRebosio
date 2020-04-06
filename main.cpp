#include "common_types.h"
#include "Sort.h"


int main(){
    vector <int> vec;
    vec.push_back(40);
    vec.push_back(80);
    vec.push_back(16);
    vec.push_back(30);
    Sort<HeapSort> HS;
    Sort<MergeSort> MS;
    Sort<QuickSort> QS;
    Sort<InsertionSort> IS;
    Sort<SelectionSort> SS;
    Sort<BubbleSort> BS;
    //BS(vec);
    
    return 0;
}
