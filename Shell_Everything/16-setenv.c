#include "main.h"

/**
 * _setenv - Creates or overwrites an environment variable.
 * @name: Name of the variable to be added to the environment.
 * @value: Value of the said variable.
 * @overwrite: binary value defining overwrite permission.
 *
 * Return: 0 if success, -1 otherwise.
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char **env;
	int count, counter;
	char *token, *new_env_var;

	if (name == NULL || value == NULL)
		return (-1);
	env = environ;
	count = counter = 0;
	token = strtok(env[count], "=");
	while (env[count])
	{
		if (strcmp(token, name) == 0 && overwrite == 0)
			return (0);
		else if (strcmp(token, name) == 0 && overwrite != 0)
		{
			new_env_var = malloc(sizeof(char) * (strlen(name) + strlen(value) + 2));
			if (new_env_var == NULL)
			{
				dprintf(2, "Error: Failed to allocate memory for new_env_var.\n");
				return (-1);
			}
			if (sprintf(new_env_var, "%s=%s", name, value) < 0)
			{
				dprintf(2, "Error: Failed to store using sprintf().\n");
				free(new_env_var);
				return (-1);
			}
			env[count] = new_env_var;
			printf("This is env[%d]: %s\n\n", count, env[count]);

			break;
		}
		else
			count++;
	}
	env = malloc(sizeof(char *) * (count + 2));
	if (env == NULL)
	{
		dprintf(2, "Error: Failed to allocate memory for environ double pointer.\n");
		return (-1);
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
		return (-1);
	}
	if (sprintf(new_env_var, "%s=%s", name, value) < 0)
	{
		dprintf(2, "Error: Failed to store using sprintf().\n");
		free(env);
		free(new_env_var);
		return (-1);
	}
	env[count] = new_env_var;
	env[count + 1] = NULL;

	environ = env;
	printf("This is env[%d]: %s\n\n", count, env[count]);
	return (0);
}
