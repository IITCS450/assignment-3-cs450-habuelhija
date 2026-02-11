#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char *argv[]) {
int pid;
int tickets[] = {10,20,30};
int i;

for (i = 0; i < 3; i++) {
pid = fork();
if (pid < 0) {
printf(1, "Fork failed\n");
exit();
} else if (pid == 0) {
settickets(tickets[i]);
for (volatile int j = 0; j < 100000000; j++) {
}
printf(1, "Child with %d tickets finished\n", tickets[i]);
exit();
}
}

for (i = 0; i < 3; i++) {
wait();
}
exit();
}
