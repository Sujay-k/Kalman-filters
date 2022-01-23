// Author: Sujaykumar Kulkarni <kulkarnisujayk@gmail.com>
#include <vector>

typedef unsigned char uint8;

template <class T>
class Matrix{
  // underlying standard vector
  vector<vector<T>> data;
  uint8 row_ , col_;

  public:
    // Constructor
    Matrix(uint8 row, uint8 col) :
    row_(row),
    col_(col)
    {
        vector<vector<T>> v(row_, vector<T>(col_));
        data = v;
    }

    ~Matrix() {
        data.clear();
    }

    inline uint8 rowSize() {
        return row_;
    }

    inline uint8 colSize() {
        return col_;
    }

    // resize matrix
    inline void resize(uint8 row, uint8 col) {
        row_ = row;
        col_ = col;

        vector<vector<T>> v(row_, vector<T>(col_));
        data = v;
    }

    // Reset matrix
    inline void reset() {
        memset(&data, sizeof(data), 0);
    }
};

template <class T>
class State : public Matrix<T>{
    public:
        State(uint8 row, uint8 col) : Matrix<T>(row, col) {}
};

template <class T>
class Covariance : public Matrix<T>{
    public:
        Covariance(uint8 row, uint8 col) : Matrix<T>(row, col) {}
};