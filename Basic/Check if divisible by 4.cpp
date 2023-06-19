int divisibleBy4( string n ) {
    return !( stoi( n.size() > 2 ? n.substr( n.size() - 2 ) : n ) % 4 );
} // T: 0.02+
