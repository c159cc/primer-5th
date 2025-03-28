#include "ex12_2.h"
using namespace std;

/**
> Write your own version of a function that uses a shared_ptr to manage a
connection.
 */

struct Connection {
    string ip;
    int port;
    Connection(string _ip, int _port) : ip(_ip), port(_port) {}
};

struct Destination {
    string ip;
    int port;
    Destination(string _ip, int _port) : ip(_ip), port(_port) {}
};

Connection *connect(Destination dest) {
    Connection *conn = new Connection(dest.ip, dest.port);
    cout << "connecting to " << dest.ip << ":" << dest.port << endl;
    return conn;
}

void disconnect(Connection conn) { cout << "disconnecting..." << endl; }

void end_connection(Connection *conn) {
    cout << "ending connection..." << endl;
    disconnect(*conn);
    delete conn;
}
void f(Destination& dest) { 
    Connection *conn = connect(dest); // connect 之后得到一个连接并且有清理这个连接的方法
    shared_ptr<Connection> p(conn, end_connection);
}

int main() {
    Destination dest{"192.1.0.1", 8080};
    f(dest);
    return 0;
}