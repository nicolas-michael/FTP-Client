/* 
 * File:   FtpClient.h
 * Author: Nicolas
 *
 * Created on March 10, 2016, 12:17 AM
 */
#include <cstdlib>
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <netinet/tcp.h>
#include <sys/uio.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string>

using namespace std;

class FtpClient 
{
    public:
        FtpClient();
        FtpClient(char*);
        void ftpConnect();
        void logIn();
        void start();
        virtual ~FtpClient();
    private:
        int ftpConnect(int);
        void getUserCommand();
        int readResponse(int, bool);
        void readFile(string);
        void writeFile(string);
        void Error(string);
        void openFtp(string);
        void changeDirectory(string);
        void listDirectory();
        void getFile(string);
        void putFile(string);
        void parsePassive(string);
        void closeFtp();
        void quitFtp();
        void getServer();
        string server;
        int port;
        int pasvSD;
        int mainSD = -1;
        int pasvPort;
        bool connected;
        string command;
        
        const int LOGGED_IN = 230;
        const int LOG_IN_TIMEOUT = 421;
};



