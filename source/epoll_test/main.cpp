/*************************************************************************
    > File Name: main.cpp
    > Author: mxl
    > Mail: xiaolongicx@gmail.com
    > Created Time: Tue 10 Apr 2018 10:14:58 AM CST
 ************************************************************************/

#include<iostream>

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <strings.h>
#include <netinet/in.h>

using namespace std;

#define MAX_EVENTS 500 

int main(int argc, char ** argv)
{
    int epoll_fd = epoll_create(1024);
    cout << epoll_fd << endl;
    
    int listen_fd = socket(AF_INET, SOCK_STREAM, 0);
    fcntl(listen_fd, F_SETFL, O_NONBLOCK);
    cout << listen_fd << endl;

	// bind & listen    
    sockaddr_in sin;    
    bzero(&sin, sizeof(sin));    
    sin.sin_family = AF_INET;    
    sin.sin_addr.s_addr = INADDR_ANY;    
    sin.sin_port = htons(6666);    
    bind(listen_fd, (const sockaddr*)&sin, sizeof(sin));
    listen(listen_fd, 5); 

	int op = EPOLL_CTL_ADD;
	
	struct epoll_event epv = {0, {0}};
	int ectl = epoll_ctl(epoll_fd, op, listen_fd, &epv);
	cout << ectl <<endl;
	
	struct epoll_event events[MAX_EVENTS];
	epoll_wait(epoll_fd, events, MAX_EVENTS, -1);
 
    return 0;
}

