int minSum( int a[], int b[], int n ) {
    int ia{ min_element( a, a + n ) - a }, ma{ a[ ia ] },
        ib{ min_element( b, b + n ) - b }, mb{ b[ ib ] };
    if ( ia != ib ) return ma + mb;
    a[ ia ] = b[ ib ] = INT_MAX;
    return min( ma + *min_element( b, b + n ),
                mb + *min_element( a, a + n ) );
} // T: 0.44+
