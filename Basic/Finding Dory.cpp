long long nisDoryOrNot( long long n ) {
    const long long t1{ 5 * n + 4 }, r1{ sqrt( t1 )};
    const long long t2{ 5 * n - 4 }, r2{ sqrt( t2 )};
    return t1 == r1 * r1 || t2 == r2 * r2;
} // 0.01+
