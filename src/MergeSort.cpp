#include "MergeSort.h"
using namespace std;
MergeSort::MergeSort() : Sort::Sort()
{
    std::cout<<"Merge sort constructor called "<<MergeSort::arr.size() - 1<<"\n";
    MergeSort::devide( MergeSort::arr, 0, MergeSort::arr.size() - 1);
    MergeSort::print();

}

 MergeSort::devide(vector<int> arr, int l, int r){
     cout<<"l "<<l<<" "<<"r "<<r<<"\n";
    if(r > l ){
         int m = l + ( r - l )/2;
         MergeSort::devide(arr, l, m);
         MergeSort::devide(arr, m+1, r);
         MergeSort::merge(arr, l, m, r);
    }


}

MergeSort::merge(vector<int> arr, int l, int m, int r){
    vector<int> firstHalf;
    vector<int> secondHalf;
    for(int i = 0; i <= m; ++i ){
        firstHalf.push_back(arr[l + i]);
    }

    for(int j = 0; j < r - m; ++j){
        secondHalf.push_back(arr[m+1+j]);
    }

    int p = 0, q = 0, t = 0;
    for(int t = 0; t < r; ++t){
        if(p <= m && q <= (r - m) ){
            if(firstHalf[p] < secondHalf[q]){
                arr[t] = firstHalf[p++];
            }else{
                arr[t] = secondHalf[q++];
            }
        }else if( p > m){
            arr[t] = secondHalf[q++];
        }else{
            arr[t] = firstHalf[p++];
        }
    }
}
MergeSort::~MergeSort()
{
    std::cout<<"Merge sort destructor called\n";
    //dtor
}

