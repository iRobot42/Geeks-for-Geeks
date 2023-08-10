void push( stack< int >& s, int x ) {
    s.push( x );
}
int pop( stack< int >& s ) {
    if ( s.empty() ) return -1;
    const int top{ s.top() };
    return s.pop(), top;
}
int getSize( stack< int >& s ) {
    return s.size();
}
int getTop( stack< int >& s ) {
    return s.empty() ? -1 : s.top();
}
