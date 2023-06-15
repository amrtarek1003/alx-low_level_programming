#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints a string to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    size_t message_len = strlen(message);

    // Write the message to the standard error using the write system call
    write(STDERR_FILENO, message, message_len);

    // Return 1 to indicate an error occurred
    return 1;
}
