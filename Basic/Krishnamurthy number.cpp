string isKrishnamurthy( int n ) {
    const int f[]{ 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
    int sum{}, num{ n };
    do sum += f[ n % 10 ];
    while ( n /= 10 );
    return sum == num ? "YES" : "NO";
} // 0.01+
