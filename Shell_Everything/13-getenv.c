#include "main.h"

/**
 * _getenv - Retrieves the value of an environment variable.
 * @env_var_name: The name of the environment variable.
 *
 * Return: The value of the environment variable in a string.
 */
char *_getenv(const char *env_var_name)
{
	int count;
	char *str, *value;

	count = 0;
	while (environ[count] != NULL)
	{
		str = strtok(environ[count], "=");
		if (str == NULL)
			return (NULL);
		if (str == env_var_name)
		{
			value = strtok(NULL, "=");
			break;
		}
		count++;
	}

	return (value);
}
