void gfSeries( int n ) {
    long a{}, b{ 1 };
    while ( n-- ) cout << a << ' ',
        swap( a = a * a - b, b );
    cout << endl;
} // 0.01+
