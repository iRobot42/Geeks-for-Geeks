int sumExceptFirstLast( vector< int >& arr ) {
    return accumulate( arr.cbegin() + 1, arr.cend() - 1, 0 );
}
