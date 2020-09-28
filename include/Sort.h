#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>
class Sort
{
    public:
        std::vector<int> arr;
        int length;
        Sort();
        void takeInput();
        void MergeSort();
        void print();
        virtual ~Sort();

    protected:

    private:
};

#endif // SORT_H
