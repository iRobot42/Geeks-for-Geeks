int isPrime( int number ) {
    const int root{ sqrt( number )};
    for ( int factor{ 2 }; factor <= root; ++factor )
        if (!( number % factor )) return 0;
    return number > 1;
} // 0.01+
