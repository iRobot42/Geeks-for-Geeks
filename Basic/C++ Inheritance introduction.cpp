struct Cuboid {
    int length, width, height;
    void display() const {
        cout << length << ' ' << width << ' ' << height << '\n';
    }
};
struct CuboidVol: Cuboid {
    void read_input( int l, int w, int h ) {
        length = l, width = w, height = h;
    }
    void display() const {
        cout << length * width * height << '\n';
    }
};
