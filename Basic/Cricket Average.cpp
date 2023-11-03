int Average( vector< int > run, vector< string > status ) {
    const double score{ accumulate( run.cbegin(), run.cend(), 0. )};
    const int outs{ count( status.cbegin(), status.cend(), "out" )};
    return outs ? ceil( score / outs ) : -1;
} // 0.16+
