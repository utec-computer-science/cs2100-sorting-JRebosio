#include "common_types.h"
class QuickSort{
public:

    template<typename container>
    void sort(container &cnt)
    
    {
      auto first = cnt.begin();
      auto last= cnt.end()-1;
         quick(cnt,first,last);

    }



    template<typename container, typename T>
    void quick(container &cnt, T first, T last) 
    
    {
        T beg = first;
        T end = last;
        auto pivot = *(first + (end-beg)/2);
        do{
            auto vbeg = *beg;
            auto vend = *end;
            if(vbeg >= pivot && vend <= pivot)
            
            {
                swap(*beg,*end);
                beg++;
                end--;
            }
            if(vbeg < pivot)
                beg++;
            if(vend > pivot)
                end--;
        }while(beg <= end);
        if(first < end)
            quick(cnt,first,end);
        if(beg < last)
            quick(cnt,beg,last);
    }
};
