void printPat( int n ) {
    for ( int rows{ n }; rows; --rows ) {
        for ( int number{ n }; number; --number )
            for ( int times{ rows }; times; --times )
                cout << number << ' ';
        cout << '$';
   }
} // T: 0.01
