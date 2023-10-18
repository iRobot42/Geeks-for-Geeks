int getNum( int a[], int n ) {
    const auto m{ minmax_element( a, a + n )};
    const int min{ *m.first }, max{ *m.second };
    return min * max / __gcd( min, max );
} // 0.33+
