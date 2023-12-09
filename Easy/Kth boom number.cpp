string BoomNumber( long long k ) {
    long long p{ 2 };
    while ( k > p ) k -= p, p *= 2;
    string s;
    while ( p /= 2 )
        if ( k <= p ) s += '2';
        else k -= p, s += '3';
    return s;
}
