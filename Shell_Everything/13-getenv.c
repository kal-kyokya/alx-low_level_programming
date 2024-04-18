#include "main.h"

/**
 * _getenv - Retrieves the value of an environment variable.
 * @env_var_name: The name of the environment variable.
 *
 * Return: The value of the environment variable in a string.
 */
char *_getenv(const char *env_var_name)
{
	char **env;
	char *token, *value, *temp;
	int count;

	count = 0;
	env = environ;
	while (env[count] != NULL)
	{
		temp = malloc(strlen(env[count]));
		if (temp == NULL)
			return (NULL);
		temp = strcpy(temp, env[count]);
		token = strtok(temp, "=");
		value = strchr(env[count], '=');
		if (strcmp(env_var_name, token) == 0)
		{
			value = strtok(NULL, " ");
			break;
		}
		else
			count++;;
	}

	free(temp);
	return (value);
}
