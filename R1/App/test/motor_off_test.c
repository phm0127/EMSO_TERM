#include "sprinkler.h"
#include <unistd.h>
#include <sys/fcntl.h>
#include <sys/ioctl.h>

int main(void){
    int fd;
    fd = open("/dev/motor", O_RDWR);
    
    /* motor on */
    ioctl(fd, MOTOR_OFF, 0);    

    close(fd);    
}
