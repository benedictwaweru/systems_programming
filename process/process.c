/**
 * Process management
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/types.h>

int main() {
    pid_t pid = getpid(); // Get the current process ID

    // Get the current priority of the process
    int current_priority = getpriority(PRIO_PROCESS, pid);
    printf("Current priority: %d\n", current_priority);

    // Set the priority to 10 (lower priority)
    int new_priority = 10;
    int ret = setpriority(PRIO_PROCESS, pid, new_priority);
    if (ret == -1) {
        perror("Error setting priority");
        return 1;
    }

    // Get the new priority of the process
    current_priority = getpriority(PRIO_PROCESS, pid);
    printf("New priority: %d\n", current_priority);

    // Simulate some work
    for (int i = 0; i < 5; i++) {
        printf("Working... %d\n", i+1);
        sleep(1);  // Sleep for 1 second to simulate work
    }

    return 0;
}
