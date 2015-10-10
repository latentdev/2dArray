#include "Array2D.h"
//#include "Array.h"

template<typename a_type>
inline Array2D<a_type>::Array2D()
{
	m_array = 0;
	m_row = 0;
	m_col = 0;
}

template<typename a_type>
inline Array2D<a_type>::Array2D(int in_row, int in_col)
{
	m_array = new a_type*[in_row];
	for (int i = 0; i < in_row; i++)
		m_array[i] = new a_type[in_col];
	m_row = in_row;
	m_col = in_col;
}

template<typename a_type>
inline Array2D<a_type>::Array2D(const Array2D& in_copy)
{
	m_array = new a_type*[in_copy.getRow()];
	for (int i = 0; i < (in_copy.getRow()); i++)
	{
		m_array[i] = new a_type[in_copy.getColumn()];
		for (int m = 0; m < in_copy.getColumn; m++)
			m_array[i][m] = in_copy[i][m];
	}
	m_row = in_copy.getRow();
	m_col = in_copy.getColumn();
}

template<typename a_type>
inline Array2D<a_type>::~Array2D()
{
	for (int i = 0; i < m_row; ++i)
		delete[] m_array[i];

	delete[] m_array;
}

template<typename a_type>
Array2D<a_type> & Array2D<a_type>::operator=(const Array2D & in_rhs)
{
	if(m_array!=0)
	{
		for (int i = 0; i < m_row; ++i)
			delete[] m_array[i];

		delete[] m_array;
	}
	
	m_array = new a_type*[in_copy.getRow()];
	for (int i = 0; i < (in_copy.getRow()); i++)
	{
		m_array[i] = new a_type[in_copy.getColumn()];
		for (int m = 0; m < in_copy.getColumn; m++)
			m_array[i][m] = in_copy[i][m];
	}
	m_row = in_copy.getRow();
	m_col = in_copy.getColumn();
}

template<typename a_type>
Row<a_type> Array2D<a_type>::operator[](int in_index)
{
	 Row<a_type> a (this, in_index);
	 return a; 
}

template<typename a_type>
int Array2D<a_type>::getRow()
{
	return m_row;
}

template<typename a_type>
void Array2D<a_type>::setRow(int in_rows)
{
	m_rows = in_rows;

}

template<typename a_type>
int Array2D<a_type>::getColumn()
{
	return m_col;
}

template<typename a_type>
void Array2D<a_type>::setColumn(int in_columns)
{
}

template<typename a_type>
a_type Array2D<a_type>::Select(int in_row, int in_column)
{
	return m_array[in_row][in_column];
}

