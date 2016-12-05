# FTP-Client
### CSS432 Network Design Final Project
Command terminal FTP client written in C++ (Linux). Supported commands are as follows:

| FTP client interface    | Corresponding RFC959 commands | Behavior                                                                                |
| ----------------------- | ----------------------------- | --------------------------------------------------------------------------------------- |
| open ip port            | N/A                           | Establish a TCP connection to ip on port.                                               |
| name: account           | USER account                  | Send a user identification to the server.                                               |
| password: user_password	| PASS user_password SYST       |	Send the user password to the server.                                                   |
| cd subdir	              | CWD subdir                    | change the server's current working directory to subdir                                 |
| ls                      | PASV LIST                     | Ask the server to send back its current directory contents through the data connection. |
| get file                | PASV RETR file                | Get a file from the current remote directory.                                           |
| put file                | PASV STOR file                | Store a file into the current remote directory.                                         |
| close	                  | QUIT                          | Close the connection but not quit ftp.                                                  |
| quit                    | QUIT (if not closed)          | Close the connection and quit ftp.                                                      |
