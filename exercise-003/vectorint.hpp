#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

#include <cstddef>

class VectorInt {
public:
    VectorInt(int size);
    VectorInt(const VectorInt& src);
    ~VectorInt();
private:
    int m_size;
    int* mp_Data;
    int m_null{0};
};

#endif