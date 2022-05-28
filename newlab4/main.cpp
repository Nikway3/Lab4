#include "zxc.h"

int main() {
   /* auto* tr1 = new Equilateral_Triangle();*/
    /*vector<Tmp_figure*> figures;*/
    Equilateral_Triangle tr1;
    cout << tr1.classname() << endl;
    tr1.initFromDialog();
   /* figures.push_back((Tmp_figure*)tr1);*/
    cout << "Square: " << tr1.square() << endl;
    cout << "Perimeter: " << tr1.perimeter() << endl;
    cout << "Size: " << tr1.size() << endl;
    tr1.draw();
   /* auto* tr2 = new Ellipse();*/
    Ellipse tr2;
    cout << tr2.classname() << endl;
    tr2.initFromDialog();
    /*figures.push_back((Tmp_figure*)tr2);*/
    cout << "Square: " << tr2.square() << endl;
    cout << "Perimeter: " << tr2.perimeter() << endl;
    cout << "Size: " <<tr2.size() << endl;
    tr2.draw();
    return 0;
}
