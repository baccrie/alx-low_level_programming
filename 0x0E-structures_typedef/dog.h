/**
 * struct dog - 0.Poppy
 * @name: memeber thats holds name
 * @age: member that holds age
 * @owner: memeber that holds owner
 * Description: a structure with three elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
