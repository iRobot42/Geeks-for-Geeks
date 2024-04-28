int getChocolateCost( vector< int > a, int p ) {
    return *max_element( a.cbegin(), a.cend() ) * p;
}
