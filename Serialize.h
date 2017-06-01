#include <fstream>
#include <Eigen/Core>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <string>

// Serialization for Eigen Matrices
namespace boost
{
	template<class Archive, typename _Scalar, int _Rows, int _Cols, int _Options, int _MaxRows, int _MaxCols>
	inline void serialize(
		Archive & ar, 
		Eigen::Matrix<_Scalar, _Rows, _Cols, _Options, _MaxRows, _MaxCols> & t, 
		const unsigned int file_version
		) 
	{
		size_t rows = t.rows(), cols = t.cols();
		ar & rows;
		ar & cols;
		if( rows * cols != t.size() )
			t.resize( rows, cols );

		for(size_t i=0; i < static_cast<size_t>(t.size()); i++)
			ar & t.data()[i];
	}
}