#pragma once

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

#ifndef SORT_CHECK
#define SORT_CHECK
#include <iostream>
// define file line function
#define ASSERT_FILE __FILE__
#define ASSERT_LINE __LINE__
#if defined(__GNUC__) || defined(__clang__)
#define ASSERT_FUNCTION __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
#define ASSERT_FUNCTION __FUNCSIG__
#elif defined(__SUNPRO_CC)
#define ASSERT_FUNCTION __func__
#else
#define ASSERT_FUNCTION __FUNCTION__
#endif
// assert basic
#ifndef SORT_NDEBUG
#define ASSERT(expression, message)                                  \
    do                                                               \
    {                                                                \
        if (!expression)                                             \
        {                                                            \
            std::cerr << (!expression)                               \
                      << "failed in:" << ASSERT_FILE                 \
                      << " line:" << ASSERT_LINE                     \
                      << " function:" << ASSERT_FUNCTION             \
                      << "\nexpression:" << #expression              \
                      << "\nerror message:" << message << std::endl; \
            std::terminate();                                        \
        }                                                            \
    } while (0)
#else
#define ASSERT(expression, message) \
    do                              \
    {                               \
    } while (0)
#endif
#endif

    /* -----code----- */

    //TODO: the size is useless
    template <typename sequenceType, typename coreType>
    void InsertionSort(void *data, unsigned int size, bool positive)
    {
        ASSERT((data), "");
        InsertionSortRange(data, size, 0, size, positive);
    }

    template <typename sequenceType, typename coreType>
    void InsertionSortRange(void *data, unsigned int size, unsigned int begin, unsigned int end, bool positive = true)
    {
    }

} // namespace sort