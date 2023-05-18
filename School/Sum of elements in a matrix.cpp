int sumOfMatrix( int N, int M, vector< vector< int > > Grid ) {
    int sum{};
    for ( const auto& row : Grid )
        for ( const int i : row )
            sum += i;
    return sum;
} // T: 0.41 - 0.45
