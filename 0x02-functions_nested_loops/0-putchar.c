#include <unistd.h>
#include <sys/syscall.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char msg[] = "_putchar";

	syscall(SYS_write, 1, msg, sizeof(msg));

return (0);
}
