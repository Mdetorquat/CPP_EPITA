// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful

/*template<class IT>
void swap(IT &a, IT &b) {
     IT tmp = a;
     a = b;
     b = tmp;
}*/

template<class IT>
IT minIndex(IT begin, IT end) {
    IT minimum = begin;
    while (++begin != end) {
        if (*begin < *minimum) {
            minimum = begin;
        }
    }
    return minimum;
}

template<class IT>
void my_selection_sort(IT begin, IT end) {
    while (begin != end) {
        auto min = minIndex(begin, end);
        std::swap(*begin, *min);
        ++begin;
    }
}