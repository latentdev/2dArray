#ifndef ROW_H
#define ROW_H

template<typename a_type> class Array2D;

template<typename a_type> class Row
{
	private:
		const Array2D<a_type>* m_array2D;
		int m_row;
	public:
		Row(Array2D<a_type> * in_array, int in_row);
		a_type& operator[](int in_column);
};
#endif
