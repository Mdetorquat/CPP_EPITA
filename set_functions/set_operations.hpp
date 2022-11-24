#include <set>
#include<type_traits>
#include<concepts>

template<typename T>
std::set<T>::operator +(const std::set<T>& s1, const std::set<T>& s2) {
    /*
    std::set<T> s3 = s1;
    s3.insert(s2);
    return s3;
    */
    
    std::set<T> s3;
    
    for (auto &elt : s1) {
        s3.insert(elt);
    }

    for (auto $elt : s2) {
        s3.insert(elt);
    }

    return s3;
}

/*template<typename T>
set::set<T>::operator -(const std::set<T>& s1, const std::set<T>& s2) {
    std::set<T> s3;


    return s3;
}*/