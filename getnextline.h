#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF 10000
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/includes/libft.h"

typedef struct	s_lst
{
	char			*buf;
	int				fd;
	struct s_lst	*next;
}				t_lst;

int get_next_line(int const fd, char **line);
#endif