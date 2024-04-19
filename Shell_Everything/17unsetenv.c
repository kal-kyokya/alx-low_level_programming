#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int _unsetenv(const char *var)
{
    if (var == NULL || *var == '\0' || strchr(var, '=') != NULL)
        return -1;
    int count = 0;
    while (environ[count] != NULL)
        count++;
    char **new_env = (char **)malloc((count + 1) * sizeof(char *));
    if (new_env == NULL)
        return -1;

    int new_index = 0;
    for (int i = 0; environ[i] != NULL; i++)
    {
        char *name_end = strchr(environ[i], '=');
        if (name_end == NULL)
            continue;
        if (strncmp(environ[i], var, name_end - environ[i]) != 0)
            new_env[new_index++] = environ[i];
    }
    new_env[new_index] = NULL;

    count = 0;
    while (new_env[count] != NULL)
    {
                count++;
                printf("%s\n", new_env[count]);
                count++;
    }
    printf("\n");
    environ = new_env;
    return 0;
}
