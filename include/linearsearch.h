//
// Created by vscilab on 9/11/2019.
//
#include <cstdint>
#include <cstdlib>

#ifndef EX01_LINEARSEARC_LINEARSEARCH_H
#define EX01_LINEARSEARC_LINEARSEARCH_H

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

template <class T>
int64_t find(const T& value, T array[], size_t size)
{
    //if (array == nullptr) return -1;
    for (int i=0; array != nullptr && i < size; i++ )
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}
}}}}


#endif //EX01_LINEARSEARC_LINEARSEARCH_H
