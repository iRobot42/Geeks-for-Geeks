int sumOfFactors( int n ) {
    int s{ 1 }, r{ sqrt( n )};
#   define LOOP for ( int i{ 2 }; i <= r; ++i )
    LOOP if (!( n % i )) s = 0;
    LOOP while (!( n % i )) n /= i, s += i;
    return n > 2 ? s + n : s;
} // 0.18+
