#ifndef MERGESORT_H
#define MERGESORT_H

#include <Sort.h>
#include <vector>
using namespace std;
class MergeSort : public Sort
{
    public:
        MergeSort();
        merge(vector<int>, int, int, int);
        devide(vector<int>, int, int);
        virtual ~MergeSort();

    protected:

    private:
};

#endif // MERGESORT_H
