string longest( string a[], int n ) {
    int m{};
    while ( --n ) m = a[ n ].size() > a[ m ].size() ? n : m;
    return a[ m ];
} // T: 0.01
