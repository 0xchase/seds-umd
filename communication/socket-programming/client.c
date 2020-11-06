#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>

int main(){
  int client_socket;
  char buffer[1024];
  struct sockaddr_in addr;
  socklen_t addr_size;

  client_socket = socket(PF_INET, SOCK_STREAM, 0);

  addr.sin_family = AF_INET;
  /* Set port number, can be changed */
  addr.sin_port = htons(7891);
  /* Set IP address, can be changed*/
  addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  /* Set all bits of the padding field to 0 */
  memset(addr.sin_zero, '\0', sizeof addr.sin_zero);  

    /*Connect socket to server */
  addr_size = sizeof addr;
  connect(client_socket, (struct sockaddr *) &addr, addr_size);

  /*Reads the message from the server, stores it in the buffer variable*/
  recv(client_socket, buffer, 1024, 0);

  /*Print the received message*/
  printf("Data received: %s",buffer);   

  return 0;
}