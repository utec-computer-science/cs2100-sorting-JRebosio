class BubbleSort {
public:
    template<typename container>
    void sort(container &cnt)
    {
        int n=cnt.end()-cnt.begin()-1;
        for (int i = 0; i < n; i++) 
        for (int j = 0; j < n-i; j++)  
              if (cnt[j] > cnt[j+1])  
              swap(cnt[j], cnt[j+1]);  
    }

};
