#ifndef ARRAY2D_H
#define ARRAY2D_H
#include "Row.h"

template<typename a_type> class Array2D
{
private:
	a_type** m_array;
	int m_row;
	int m_col;
public:
	Array2D();
	Array2D(int in_row, int in_col);
	Array2D(const Array2D& in_copy);
	~Array2D();
	Array2D& operator=(const Array2D& in_rhs);
	Row<a_type> operator[](int in_index);
	int getRow();
	void setRow(int in_rows);
	int getColumn();
	void setColumn(int in_columns);
	a_type Select(int in_row, int in_column);

};
#endif
