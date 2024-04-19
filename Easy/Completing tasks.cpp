pair< vector< int >, vector< int >> findTasks( int* a, int m, int n ) {
    vector< int > tanya, manya;
    unordered_set< int > completed{ a, a + m };
    for ( int task{ 1 }, count{}; task <= n; ++task )
        if ( completed.find( task ) == completed.cend() )
            ( ++count & 1 ? tanya : manya ).push_back( task );
    return { tanya, manya };
}
