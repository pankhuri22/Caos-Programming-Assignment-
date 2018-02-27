//pankhuri kasliwal
//2016253



#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
  char data[128];

    if(read(0, data, 128) < 0)
     write(2, "An error occurred in the read.\n", 31);

    exit(0);
}
*/
int main(int argc, char* argv[])
{
  char* file = argv[1];
  int fd;
  struct flock lock;

  printf("opening %s\n" , file);
  fd = open(file, O_RDWR2);
  printf("locking\n");
  memset(&lock, 0 , sizeof(lock));
  lock.l_type = F_WRLCK;
  fcntl(fd,F_SETLKW , &lock);

  printf("locked; hit Enter to unlock....");
  getchar();
  printf("unlocking\n");
  lock.l_type = F_UNLCK;
  fcntl(fd, F_SETLKW, &lock);

  close(fd);
  return 0;

}
