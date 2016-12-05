/* 
 * File:   main.cpp
 * Author: Nicolas
 *
 * Created on March 3, 2016, 8:40 PM
 */

#include "FtpClient.h"

using namespace std;

int main(int argc, char** argv) 
{   
    FtpClient client(argv[1]);
    client.ftpConnect();
    client.logIn();
    client.start();
    
    return 0;
}

