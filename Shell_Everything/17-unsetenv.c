#include "main.h"

/**
 * _unsetenv - Removes a specific variable from the environment variable list.
 * @var: String name of the variable to be deleted.
 *
 * Return: 0 if program runs succesfully, -1 otherwise.
 */
int _unsetenv(const char *var)
{
	char **env, **new_env;
	int count, counter;
	char *var_name;

	if (var == NULL || *var == '\0')
		return (-1);
	env = environ;
	count = counter = 0;
	while (env[count] != NULL)
		count++;
	new_env = malloc(sizeof(char *) * count);
	if (new_env == NULL)
	{
		dprintf(2, "Error: Failed to allocate memory for new_env.\n");
		return (-1);
	}
	while (counter < count)
	{
		var_name = strchr(env[counter], '=');
		if (strcmp(var_name, var) == 0)
		{
			counter++;
			continue;
		}
		new_env[counter] = env[counter];
		counter++;
	}
	new_env[counter] = NULL;

	count = 0;
	while (new_env[count] != NULL)
	{
		count++;
		printf("%s\n", new_env[count]);
		count++;
	}

	printf("\n");

	return (0);
}
