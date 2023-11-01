string upto_K_places( int k ) {
    string s{ k ? "3." : "3" };
    int rm{ 16 };
    for ( int i{}; i < k; ++i )
        rm = rm % 113 * 10,
        s += rm / 113 + 48;
    return s;
} // 0.01+
