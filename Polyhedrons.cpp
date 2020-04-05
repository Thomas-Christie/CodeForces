#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    map<string, int> shapes;
    shapes.insert(pair<string, int>("Tetrahedron", 4));
    shapes.insert(pair<string, int>("Cube", 6));
    shapes.insert(pair<string, int>("Octahedron", 8));
    shapes.insert(pair<string, int>("Dodecahedron", 12));
    shapes.insert(pair<string, int>("Icosahedron", 20));
    for(int i=0; i<n; i++) {
        string shape;
        cin >> shape;
        int sides = shapes[shape];
        total += sides;
    }
    cout << total;
}
