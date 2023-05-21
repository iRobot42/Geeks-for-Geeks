int findFocalLength( float R, string type ) {
    return type[ 3 ] == 'v' ? floor( -R / 2 ) : R / 2;
} // T: 0.01
