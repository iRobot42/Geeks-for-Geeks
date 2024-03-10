#define VERSION 2

#if VERSION == 1
bool areConsecutives( long long arr[], int n ) {
    long long a{ *arr }, s{ a };
    for ( int i{ 1 }; i < n; ++i )
        a = min( a, arr[ i ] ), s += arr[ i ];
    return s == ( 2 * a + n - 1 ) * n / 2;
}

#elif VERSION == 2
bool areConsecutives( long long arr[], int n ) {
    return ( 2 * *min_element( arr, arr + n ) + n - 1 ) * n / 2
        == accumulate( arr, arr + n, 0LL );
}

#endif
