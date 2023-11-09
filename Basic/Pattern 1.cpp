#define V1

#ifdef V1
void printSquare( int n ) {
    string s;
    for ( int i{}; i < n; ++i ) s += "* ";
    while ( n-- ) cout << s << '\n';
} // 0.01+

#elif defined( V2 )
void printSquare( int n ) {
    for ( int row{}; row < n; ++row ) {
        for ( int col{}; col < n; ++col )
            cout << "* ";
        cout << '\n';
    }
} // 0.01+

#endif
