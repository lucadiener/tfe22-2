#include "vectorint.hpp"

VectorInt::VectorInt(int size) {
    m_size = size;
    mp_Data = new int[size];
    m_size = size;
    for(int i = 0; i<m_size; i++) {
        mp_Data[i] = m_null;
    }
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}