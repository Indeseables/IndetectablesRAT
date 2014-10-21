
int errorMsg(int i, char *message);
int init_WSA();
int connectToPyServ(char *ipToConn, int port);
int senderToServ(SOCKET socketConn);
int recvData(SOCKET socketConn, char Buffer[100], int counter, int breaker);
int closeConnection(SOCKET socketConn, int closeIndicator, int counter, int breaker);
