#include <set>
#include<type_traits>
#include<concepts>

template<typename T>
std::set<T> operator +(const std::set<T>& s1, const std::set<T>& s2) {
    /*
    std::set<T> s3 = s1;
    s3.insert(s2);
    return s3;
    */
    
    std::set<T> s3;
    
    for (auto& elt : s1) {
        s3.insert(elt);
    }

    for (auto& elt : s2) {
        s3.insert(elt);
    }

    return s3;
}

template<typename T>
std::ostream& operator <<(std::ostream& os, const std::set<T>& s) {
    
	for (auto& elt : s) {
		os << elt << " ";
	}

	return os;
}

template<typename T>
std::set<T> operator -(const std::set<T>& s1, const std::set<T>& s2) {
	
	std::set<T> s3;

	for (auto& elt : s1) {
		if (s2.find(elt) == s2.end()) {
			s3.insert(elt);
		}
	}
	return s3;
}

template<typename T>
std::set<T> operator ^(const std::set<T>& s1, const std::set<T>& s2) {
	
	std::set<T> s3;

	for (auto& elt : s1) {
		if (s2.find(elt) == s2.end()) {
			s3.insert(elt);
		}
	}
	
	for (auto& elt : s2) {
		if (s1.find(elt) == s1.end()) {
			s3.insert(elt);
		}
	}

	return s3;
}

template<typename T>
std::set<T> operator *(const std::set<T>& s1, const std::set<T>& s2) {
	
	std::set<T> s3;

	for (auto& elt : s1) {
		for (auto& elt2 : s2) {
			s3.insert(elt + elt2);
		}
	}

	return s3;
}

template<typename T>
std::set<T> operator ^(const std::set<T>& s1, int n) {
	
	std::set<T> s2;

	if (n < 0) {
		throw std::invalid_argument("Sorry, n must be non-negative");
	}

	if (n == 0) {
		s2.insert(T());
	}

	else {
		for (auto& elt : s1) {
			std::set<T> tmp = s1 ^ (n - 1);
			for (auto& elt2 : tmp) {
				s2.insert(elt + elt2);
			}
		}
	}

	return s2;
}

