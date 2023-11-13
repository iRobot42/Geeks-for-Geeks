long long minDaysToEmpty( long long c, long long l ) {
    long long d{}, w{ c };
    do w = min( c, w + l ) - ++d;
    while ( w > 0 );
    return d;
}
