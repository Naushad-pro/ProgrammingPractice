#include "Sort.h"
using namespace std;
Sort::Sort()
{
    std::cout<<"object created of sorting\n";
    Sort::takeInput();
}

void Sort::takeInput(){
    cin>>Sort::length;
    int i = 0;
    int j = 0;
    while(Sort::arr.size() < Sort::length){
      cin>>j;
      Sort::arr.push_back(j);
    }
}

void Sort::print(){
    for( int i = 0; i < Sort::arr.size(); ++i )
    {
        std::cout<< Sort::arr[i]<<" ";
    }
}

Sort::~Sort()
{
    std::cout<<"Object destroyed of sorting\n";
}
