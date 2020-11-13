#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
int main(){
  int my_socket, newSocket;
  char buffer[1024];
  struct sockaddr_in addr;
  struct sockaddr_storage storage;
  socklen_t addr_size;

  my_socket = socket(PF_INET, SOCK_STREAM, 0);
  
  addr.sin_family = AF_INET;
  /* Set port number, can be changed*/
  addr.sin_port = htons(7891);
  /* Set IP address, can be changed */
  addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  
  memset(addr.sin_zero, '\0', sizeof addr.sin_zero);  

  bind(my_socket, (struct sockaddr *) &addr, sizeof(addr));
    /*Checks to make sure the server is listening */
  if(listen(my_socket,5)==0)
    printf("Listening\n");
  else
    printf("Error\n");

  addr_size = sizeof storage;
  newSocket = accept(my_socket, (struct sockaddr *) &storage, &addr_size);

  /*Sends the message*/
  strcpy(buffer,"Hello World\n");
  send(newSocket,buffer,13,0);

  return 0;
}