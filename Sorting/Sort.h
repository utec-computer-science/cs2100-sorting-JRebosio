#include "HeapSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"


template<typename Metodo>
class Sort : private Metodo{
public:
    template<typename container>
    Sort( container &cnt){
        this-> sort(cnt);
      
    };
    

};

