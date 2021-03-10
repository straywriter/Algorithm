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

    /**
     * @brief 
     * 
     * @tparam sequenceType 
     * @tparam coreType 
     * @tparam size 
     * @param sequence 
     */
    template <typename sequenceType, typename coreType, unsigned int size>
    void QuickSort(void *sequence)
    {
        //TODO:
        sequenceType *aa = reinterpret_cast<sequenceType *>(sequence);
        (*aa)[0] = coreType(0);
    }

    /**
     * @brief 
     * 
     * @tparam sequenceType 
     * @tparam coreType 
     * @tparam size 
     * @param sequence 
     * @param begin 
     * @param end 
     */
    template <typename sequenceType, typename coreType, unsigned int size>
    void QuickSortRange(void *sequence, unsigned int begin, unsigned int end)
    {
        //check range begin and end

        sequenceType *sequenceData = reinterpret_cast<sequenceType *>(sequence);
        // (*sequenceData)[0]
    }

} // namespace sort