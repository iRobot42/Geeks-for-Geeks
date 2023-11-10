int dataTypeSize( string s ) {
    switch ( s.front() ) {
        case 'I': return sizeof( int );
        case 'C': return sizeof( char );
        case 'L': return sizeof( long );
        case 'F': return sizeof( float );
        case 'D': return sizeof( double );
    } return 0;
} // 0.01+
