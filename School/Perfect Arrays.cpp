bool IsPerfect( int a[], int n ) {
    auto l{ a }, r{ a + --n };
    while ( l < r ) if ( *l++ != *r-- ) return false;
    return true;
} // T: 0.16 - 0.18
