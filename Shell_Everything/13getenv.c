#include "main.h"
#include <string.h>

char *_getenv(const char *name) {
    extern char **environ;  // Access to environment variables array
    char **env = environ;   // Pointer to environment variables array

    // Iterate through environment variables
    while (*env != NULL) {
        // Find the position of the equal sign
        char *equal_sign = strchr(*env, '=');
        if (equal_sign != NULL) {
            // Calculate the length of the variable name
            size_t name_length = equal_sign - *env;
            // Compare the variable name with the provided name
            if (strncmp(*env, name, name_length) == 0 && name[name_length] == '\0') {
                // Return a pointer to the value (after the equal sign)
                return equal_sign + 1;
            }
        }
        env++;  // Move to the next environment variable
    }

    // Variable not found
    return NULL;
}
