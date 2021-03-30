#include <iostream>
extern "C" {
    #include <libavformat/avformat.h>
}

using namespace std;

int main() {
    cout << avformat_configuration() << endl;
    return 0;
}
