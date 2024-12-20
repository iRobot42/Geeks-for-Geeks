vector< vector< int >> findAllPairs( vector< int >& arr, int target ) {
    vector< vector< int >> res;
    for ( size_t i{}; i < arr.size(); ++i ) {
        const int x{ target - arr[ i ] };
        for ( size_t j{ i+1 }; j < arr.size(); ++j )
            if ( arr[ j ] == x ) res.push_back({ i, j });
    }
    return res;
}
