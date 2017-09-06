#include "A16.h"
#ifndef A16_TPP_
#define A16_TPP_
#include <iostream>
#include <iterator>


template<typename T> 
void A16::print (const T &t){
	T v = t;
	std::ostream_iterator<int> outIter( std::cout, " " );
    copy( v.begin(), v.end(), outIter );
	//for (std::ostream_iterator<T> iter = tcopy.begin(); iter!=tcopy.end();++iter){
	//	std::cout << *iter << " ";
	//}
	//std::cout << std::endl;
}

bool A16::lessThan(int a, int b){
	return a<b;
}

#endif // A16_TPP_
