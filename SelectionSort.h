#include "common_types.h"
class SelectionSort {
public:
    template<typename container>
    void sort(container &cnt)
    {
        int n= cnt.end()-cnt.begin()-1;
        int j,min;
        for (int i = 0; i < n; i++) 
        {  
          min=i;
          for (j = i+1; j < n; j++)  
            if (cnt[j] < cnt[min])  
                min = j;  
        
        swap(cnt[min],cnt[i]);  
        }   
    }

};
