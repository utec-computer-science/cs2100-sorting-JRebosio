#include "common_types.h"

class MergeSort {
public:

    
    template<typename container>
    void sort(container &cnt) 
    {
      auto first= cnt.begin();
      auto last= cnt.end()-1;
      mergesort(cnt,first,last);
    }

    

    template<typename container,typename T>
    void mergesort(container &cnt, T first, T last) 
    {
          if (first != last) 
          {
            T mid = first + (last - first) / 2;
            mergesort(cnt, first, mid);
            mergesort(cnt, mid + 1, last);
            merge(cnt, first, mid, last);
          }
    }



    template<typename container, typename T>
    void merge(container &cnt, T first, T mid,T last) 
    {
        container left((mid - first) + 1);
        container right(last - mid);
        T beg = first;
        mid++;
        T lbeg = left.begin();
        T rbeg = right.begin();
        
        for ( auto &i : left) 
        {
            i = *beg;
            beg++;
        }
        for ( auto &i : right) 
        {
            i = *mid;
            mid++;
        }
        while (lbeg != left.end() && rbeg != right.end()) 
        {
            if (*lbeg<= *rbeg) 
            {
                *first = *lbeg;
                lbeg++;
            } 
            else 
            {
                *first = *rbeg;
                rbeg++;
            }
            first++;
        }
        while (lbeg != left.end()) 
        {
            *first = *lbeg;
            lbeg++;
            first++;
        }
        while (rbeg != right.end()) 
        {
            *first = *rbeg;
            rbeg++;
            first++;
        }
  }
};

