// "The standard library saves programmers from having to reinvent the wheel."
                                                         // Bjarne Stroustrup
vector< int > sortArr( vector< int > a, int n ) {
    return sort( a.begin(), a.end() ), a;
} // T: 0.59+
