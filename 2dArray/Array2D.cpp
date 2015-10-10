#include "Array2D.h"
#include "Array.h"

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
	m_array = new a_type*[in_row*in_col];
	//Array<Array<a_type>>b(in_row, 0);
	//m_array =Array<a_type>(in_row,0);
	//for (int i = 0; i < in_row; i++)
		//b[i] = new Array<a_type>(in_col,0);
	m_row = in_row;
	m_col = in_col;
	for (int i = 0; i < (in_row*in_col); i++)
		m_array[i] = i;
}

template<typename a_type>
inline Array2D<a_type>::Array2D(const Array2D& in_copy)
{

}

template<typename a_type>
inline Array2D<a_type>::~Array2D()
{
//	for (int i = 0; i < m_row; ++i)
	//	delete[] m_array[i];

	//delete[] m_array;
}