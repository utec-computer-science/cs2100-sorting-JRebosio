#include "common_types.h"
class InsertionSort {
public:

    template<typename container>
    void sort(container &cnt)
    {
        int n=cnt.end()-cnt.begin();
        
        for (int i = 1; i < n; i++) 
        {  
          auto key = cnt[i];  
          int j = i - 1;  
          while (j >= 0 && cnt[j] > key) 
          {  
            cnt[j + 1] = cnt[j];  
            j = j - 1;  
          }  
        cnt[j + 1] = key;  
        }  
    }

};
