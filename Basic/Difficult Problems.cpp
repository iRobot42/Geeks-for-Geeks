int difProblem( string n ) {
    bool inc{ true }, dec{ true };
    for ( size_t i{ 1 }; i < n.size() && ( inc || dec ); ++i )
        if ( n[ i ] > n[ i-1 ] ) dec = false;
        else if ( n[ i ] < n[ i-1 ] ) inc = false;
    return inc || dec;
} // 0.05+
