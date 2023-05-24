int largest( vector< int >& a, int n ) {
    return *max_element( a.cbegin(), a.cend() );
} // T: 0.01
