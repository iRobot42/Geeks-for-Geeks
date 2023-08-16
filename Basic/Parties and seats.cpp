void Election2019( char party[], int seats[], int n ) {
    map< char, int > smap;
    int smax{};
    while ( n-- )
        smap[ party[ n ]] = seats[ n ],
        smax = max( smax, seats[ n ]);
    for ( const auto& p : smap )
        cout << p.first << ' ' << p.second << '\n';
    cout << smax << endl;
} // 0.01+
