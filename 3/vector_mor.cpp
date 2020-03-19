#include <iostream>

using namespace std;

template <class T, int N>
class Vector
{
private:
    T *elements;

public:
    Vector()
    {
        this->elements = new T[N];
    }

    Vector(const Vector &other)
    {
        this->elements = new T[N];
        for (int i = 0; i < N; i++)
            this->elements[i] = other.elements[i];
    }

    ~Vector()
    {
        delete[] this->elements;
    }

    T &operator[](int idx)
    {
        return this->elements[idx];
    }

    Vector<T, N> operator+(const Vector<T, N> &other)
    {
        Vector result;
        for (int i = 0; i < N; i++)
            result.elements[i] = elements[i] + other.elements[i];
        return result;
    }

    Vector<T, N> operator-(const Vector<T, N> &other)
    {
        Vector result;
        for (int i = 0; i < N; i++)
            result.elements[i] = elements[i] - other.elements[i];
        return result;
    }

    bool operator<(const Vector &other)
    {
        for (int i = 0; i < N; i++)
        {
            if (elements[i] != other.elements[i])
                return elements[i] < other.elements[i];
        }
        return 0;
    }

    bool operator>(const Vector &other)
    {
        for (int i = 0; i < N; i++)
        {
            if (elements[i] != other.elements[i])
                return elements[i] > other.elements[i];
        }
        return 0;
    }

    friend std::ostream &operator<<(ostream &os, Vector vector)
    {
        os << "<";
        for (int i = 0; i < N; i++)
        {
            os << vector.elements[i];
            if (i != N - 1)
                cout << ",";
        }
        os << ">";
        return os;
    }

    friend std::istream &operator>>(istream &is, Vector &vector)
    {
        for (int i = 0; i < N; i++)
        {
            is >> vector.elements[i];
        }
        return is;
    }
};