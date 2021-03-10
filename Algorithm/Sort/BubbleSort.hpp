#pragma once

#include "assert.h"

namespace sort
{
// difine
#ifndef SORT_SWAP
#define SORT_SWAP
    /** swap two value */
    template <typename T>
    void Swap(T &first, T &second)
    {
        T temp(first);
        first = second;
        second = temp;
    }
#endif

    /* -----code----- */

    /**
     * bubble sort for range
     * @tparam sequenceType 
     * @tparam coreType 
     * @tparam size 
     * @param sequence 
     * @param begin 
     * @param end 
     * @param positive
     */
    template <typename sequenceType, typename coreType>
    void BubbleSortRange(void *sequence, unsigned int size, unsigned int begin, unsigned int end, bool positive = true)
    {
        assert((end > begin && begin >= 0 && end <= size) && "bubble sort range error");
        assert((sequence) && "bubble sort data is null");
        sequenceType *sequenceData = reinterpret_cast<sequenceType *>(sequence);

        unsigned int tempSize = end - begin - 1;
        for (auto i = begin; i < tempSize; ++i)
        {
            for (auto j = begin; j < tempSize - i; ++j)
            {
                if (positive ? ((*sequenceData)[j] > (*sequenceData)[j + 1]) : ((*sequenceData)[j] < (*sequenceData)[j + 1]))
                {
                    Swap<coreType>((*sequenceData)[j], (*sequenceData)[j + 1]);
                }
            }
        }
    }

    /**
     * bubble sort 
     * @tparam sequenceType 
     * @tparam coreType 
     * @tparam size 
     * @param sequence 
     */
    template <typename sequenceType, typename coreType>
    void BubbleSort(void *sequence,unsigned int size, bool positive = true)
    {
        assert((sequence) && "bubble sort data is null");
        BubbleSortRange<sequenceType, coreType>(sequence,size, 0, size, positive);
    }

} // namespace sort