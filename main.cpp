#include <iostream>
using namespace std;

#include <string>
#include <func.hpp>

#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

int main(int, char**) {

    string greeting = "Hello world!";

    cout << greeting << endl;
    cout << sum(1, 2) << endl;

    string ip = "93.184.216.34";

    asio::error_code ec;
    asio::io_context cxt;
    asio::ip::tcp::endpoint endpoint(asio::ip::make_address(ip, ec), 80);

    asio::ip::tcp::socket socket(cxt);
    socket.connect(endpoint, ec);

    if(!ec)
        cout << "Connected to: " << ip << "!" << endl;
}
