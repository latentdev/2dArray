#include "Row.h"
#include "Array2d.cpp"

template<typename a_type>
Row<a_type>::Row(Array2D<a_type> * in_array, int in_row)
{
	m_array2D = in_array;
	m_row = in_row;
}
template<typename a_type>
a_type & Row<a_type>::operator[](int in_column)
{
	return m_array2D.Select(m_row, in_column);
}
