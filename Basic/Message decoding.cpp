bool decode( string s ) {
    for ( size_t i{}, j{}; i < s.size(); ++i )
        if (( j += s[ i ] == "hello"[ j ]) == 5 )
            return true;
    return false;
} // T: 0.03+
