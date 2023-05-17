void MyStack::push( int x ) {
    arr[ ++top ] = x;
}
int MyStack::pop() {
    return top < 0 ? -1 : arr[ top-- ];
} // T: 0.01
