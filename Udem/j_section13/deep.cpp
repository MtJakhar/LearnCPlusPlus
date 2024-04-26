#include <iostream> 
using namespace std;

class Deep {
  private:
    int *data;
  public:
   void set_data_value(int d) { *data = d; }
   int get_data_value() {return *data; }
   //Constructor
   Deep(int data);
   //Copy
   Deep(const Deep &source);
   //Destructor
   ~Deep();
};

Deep::Deep(int d) {
  data = new int;
  *data = d;
}

Deep::Deep(const Deep &source) : Deep {*source.data} {
  cout << "Created Copy" << source.data << endl;
}

int main () {
  return 0;
}
