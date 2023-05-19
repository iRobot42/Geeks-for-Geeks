string conRevstr( string S1, string S2 ) {
    return { S1.append( S2 ).crbegin(), S1.crend() };
} // T: 0.01
