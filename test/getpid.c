#include <stdio.h>
#include <unistd.h>
/**
 * main - procces id
 * Return: Always 0.
 */
int main(void)
{
	pid_t m_pid;
	m_pid = getpid();
	printf("id hijo %u\n", m_pid);
	m_pid = getppid();
	printf("id padre %u\n", m_pid);
	return (0);
}
