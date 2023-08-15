vector< int > sortVector( vector< int > v ) {
    return sort( v.begin(), v.end() ), v;
}
vector< int > reverseVector( vector< int > v ) {
    return { v.crbegin(), v.crend() };
}
