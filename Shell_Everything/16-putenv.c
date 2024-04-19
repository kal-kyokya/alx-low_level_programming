#include "main.h"

/**
 * _putenv - Adds an element to the environment variable list.
 * @name: Name of the variable to be added to the environment.
 * @value: Value of the said variable.
 * @count: Number of variables in the said list.
 *
 * Return: A pointer to the new version of the list, NULL if error.
 */
char **_putenv(const char *name, const char *value, int count)
{
	int counter;
	char **env;
	char *new_env_var;

	counter = 0;
	env = malloc(sizeof(char *) * (count + 2));
	if (env == NULL)
	{
		dprintf(2, "Error: Failed to allocate memory for environ double pointer.\n");
		return (NULL);
	}
	while (environ[counter])
	{
		env[counter] = environ[counter];
		counter++;
	}

	new_env_var = malloc(sizeof(char) * (strlen(name) + strlen(value) + 2));
	if (new_env_var == NULL)
	{
		dprintf(2, "Error: Failed to allocate memory for new_env_var.\n");
		free(env);
		return (NULL);
	}
	if (sprintf(new_env_var, "%s=%s", name, value) < 0)
	{
		dprintf(2, "Error: Failed to store using sprintf().\n");
		free(env);
		free(new_env_var);
		return (NULL);
	}
	env[count] = new_env_var;
	env[count + 1] = NULL;

	return (env);
}
