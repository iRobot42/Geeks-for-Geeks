string calc_Sum( int* a, int n, int* b, int m ) {
    string s;
    char c{};
    while ( n || m || c ) {
        if ( n ) c += a[ --n ];
        if ( m ) c += b[ --m ];
        s += c % 10 + '0';
        c /= 10;
    }
    while ( s.back() == '0' ) s.pop_back();
    return reverse( s.begin(), s.end() ), s;
}
