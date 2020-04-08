#include "common_types.h"
#include "Sort.h"
 


int main(){
  auto shell_it (ostream_iterator<int>{cout, ", "});
 const size_t data_points{100};
 const int mean {57};
 const size_t dev {3};
 

  random_device rd;
  mt19937 gen {rd()};
  normal_distribution<  > d {mean, dev};


  vector<int> uno,dos,tres,cuatro,cinco,seis;
  uno.reserve(data_points);
  generate_n(back_inserter(uno), data_points, [&] { return d(gen); });


  copy(uno.begin(), uno.end(), back_inserter(dos)); 
  copy(uno.begin(), uno.end(), back_inserter(tres)); 
  copy(uno.begin(), uno.end(), back_inserter(cuatro)); 
  copy(uno.begin(), uno.end(), back_inserter(cinco)); 
  copy(uno.begin(), uno.end(), back_inserter(seis)); 
    

    Sort<InsertionSort> IS(uno);
    Sort<HeapSort> HS(dos);
    Sort<MergeSort> MS(tres);
    Sort<QuickSort> QS(cuatro);
    Sort<SelectionSort> SS(cinco);
    Sort<BubbleSort> BS(seis);
    


    cout<<"\nInsertion Sort :\n\n";copy(uno.begin(),uno.end(),shell_it); 
    cout<<"\n\nHeap Sort :\n\n";copy(dos.begin(),dos.end(),shell_it);
    cout<<"\n\nMerge Sort :\n\n";copy(tres.begin(),tres.end(),shell_it); 
    cout<<"\n\nQuick Sort :\n\n";copy(cuatro.begin(),cuatro.end(),shell_it); 
    cout<<"\n\nSelection Sort :\n\n";copy(cinco.begin(),cinco.end(),shell_it); 
    cout<<"\n\nBubble Sort :\n\n";copy(seis.begin(),seis.end(),shell_it); 
    
    return 0;
}
