bool isSubSequence( string a, string b ) {
    size_t ia{};
    for ( size_t ib{}; ib < b.size(); ++ib )
        if ( a[ ia ] == b[ ib ] ) ++ia;
    return ia == a.size();
} // T: 0.33+
