int Evaluate( string s ) {
    return stoi( s.substr( s.find( '=' ) + 1 ))
         - stoi( s.substr( s.find( '+' ) + 1 ));
} // 0.01+
