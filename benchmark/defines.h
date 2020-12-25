#include <complex>

using FloatComplex = std::complex<float>;
using DoubleComplex = std::complex<double>;

//typedef float floatType;
//typedef double floatType;
typedef DoubleComplex floatType;
//typedef FloatComplex floatType;


template<typename floatType>
floatType conj(floatType x) {
	return std::conj(x);
}

template<>
inline
double conj(double x) {
	return x;
}

template<>
inline
float conj(float x) {
	return x;
}
