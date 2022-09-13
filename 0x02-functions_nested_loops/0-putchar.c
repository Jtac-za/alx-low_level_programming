#include <unistd.h>
#include <sys/syscall.h>

int main(void)
{
	const char msg[] = "_putchar\n";
	syscall(SYS_write, 1, msg, sizeof(msg));

	return 0;
}
