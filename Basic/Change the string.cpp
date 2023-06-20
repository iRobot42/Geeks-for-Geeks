string modify( string s ) {
    transform( s.cbegin(), s.cend(), s.begin(),
        islower( s.front() ) ? ::tolower : ::toupper );
    return s;
} // T: 0.01+
