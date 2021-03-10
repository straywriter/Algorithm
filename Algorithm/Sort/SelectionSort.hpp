#pragma once

namespace sort
{
// difine
#ifndef SORT_SWAP
#define SORT_SWAP
    /**
     * @brief swap two value
     * 
     */
    template <typename T>
    void Swap(T &first, T &second)
    {
        T temp(first);
        first = second;
        second = temp;
    }
#endif
    template <typename sequenceType, typename coreType, unsigned int size>
    void SelectionSort(void * data,bool positive)
    {


    }

    

} // namespace sort