#include "main.h"

/* By Emohamed */

/**
 *append_text_to_file - appends text at the end of file
 *@filename: the file in hand
 *@text_content: the text to add at the end of the file
 *Return: 1 on success else -1 is returned
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
