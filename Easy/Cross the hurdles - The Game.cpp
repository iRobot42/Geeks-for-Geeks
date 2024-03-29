long long game( int energies[], int heights[], int n ) {
    long long e{};
    for ( int i{}; i < n; e += i+1 - heights[ i++ ] )
        if (( e += energies[ i ] ) < heights[ i ] )
            return -1;
    return e;
}
