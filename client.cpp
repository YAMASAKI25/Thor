// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "./gen-cpp/Serv.h"
#include <thrift/protocol/TBinaryProtocol.h>
//#include <thrift/server/TSimpleServer.h>
//#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

#include<iostream>
#include <thrift/transport/TSocket.h>
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
//using namespace ::apache::thrift::server;
using namespace std;



int main(int argc, char **argv) {

      std::shared_ptr<TSocket>socket(new TSocket("localhost",9090));
      std::shared_ptr<TTransport>transport(new TBufferedTransport(socket));
      std::shared_ptr<TProtocol>protocol(new TBinaryProtocol(transport));


      transport->open();
      ServClient client(protocol);
      Req req;
      req.uid = 1242174619;
      req.device_id = 13151153;
      std::cout<<"\nclient send a data  !\n "<<std::endl;

      Rsp rsp = client.rank(req);
      std::cout<<"\nclient send a data ending !\n "<<std::endl;
      
     transport->close();
     return 0;
}