#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

class VectorInt {
public:
    VectorInt(int size);
    VectorInt(const VectorInt& src);
    ~VectorInt();

    void at(int value);
    void size();
    void resize(int size);
    void push_back(int value);
    void clear();
    void print_vector();
    VectorInt& operator = (const VectorInt& vec_neu);
private:
    int m_size;
    int* mp_Data;
};

#endif