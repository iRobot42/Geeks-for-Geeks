int findSum( string s ) {
    const string d{ "0123456789" };
    size_t a{}, b{}, n{};
    while (( a = s.find_first_of( d, b )) != string::npos ) // -1
        n += stoi( s.substr( a, b = s.find_first_not_of( d, a )));
    return n;
} // T: 0.03+
