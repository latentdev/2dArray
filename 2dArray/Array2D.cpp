#include "Array2D.h"

template<typename a_type>
inline Array2D<a_type>::Array2D()
{
	m_array = 0;
}

template<typename a_type>
inline Array2D<a_type>::Array2D(int in_row, int in_col)
{
	m_array = 0;
	m_row = in_row;
	m_col = in_col;
}

template<typename a_type>
inline Array2D<a_type>::Array2D(const Array2D& in_copy)
{

}

template<typename a_type>
inline Array2D<a_type>::~Array2D()
{

}