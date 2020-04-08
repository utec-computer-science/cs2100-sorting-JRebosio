
#include "common_types.h"
class HeapSort {
public:

    template<typename container>
    void sort(container &cnt){
        int n=cnt.end()-cnt.begin();

            for (auto i = n / 2 - 1; i >= 0; i--)
                heapify(cnt, n, i);

            for (auto i = n - 1; i >= 0; i--) {
                swap((*cnt.begin()), *(cnt.begin() + i));

                heapify(cnt, i, 0);
            }

    }

    template<typename container>
    void heapify(container &cnt, int n, int i){
        
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;

        if (l < n && (*(cnt.begin()+l) > *(cnt.begin()+largest)))
                largest = l;

        if (r < n && (*(cnt.begin()+r) > *(cnt.begin()+largest)))
                largest = r;

        if (largest != i)
        {
            swap(*(cnt.begin()+i), *(cnt.begin()+largest));

            heapify(cnt, n, largest);
        }

    }


};
