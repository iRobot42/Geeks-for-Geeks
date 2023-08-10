void push( queue< int >& q, int x ) {
    q.push( x );
}
int pop( queue< int >& q ) {
    if ( q.empty() ) return -1;
    const int x{ q.front() };
    return q.pop(), x;
}
int getSize( queue< int >& q ) {
    return q.size();
}
int getBack( queue< int >& q ) {
    return q.empty() ? -1 : q.back();
}
int getFront( queue< int >& q ) {
    return q.empty() ? -1 : q.front();
}
