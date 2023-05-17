void MyQueue::push( int x ) {
    arr[ rear++ ] = x;
}
int MyQueue::pop() {
    return front == rear ? -1 : arr[ front++ ];
}
// T: 0.77 - 0.82
