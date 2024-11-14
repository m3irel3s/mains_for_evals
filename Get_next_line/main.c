// #include "get_next_line.h"
// #include "get_next_line_bonus.h"


// // //cc -D BUFFER_SIZE=3 main.c get_next_line.c get_next_line_utils.c -g
// int main(void)
// {
// 	char	*res;
// 	int	fd = open("tests/test0.txt", O_RDONLY);
// 	res = get_next_line(fd);
// 	printf("%s", res);
// 	free(res);
// 	// while ((res = get_next_line(fd)))
// 	// {
// 	// 	printf("%s", res);
// 	// 	free(res);
// 	// }
// 	// printf("Buffer size:[%d]", BUFFER_SIZE);
// }

// cc -D BUFFER_SIZE=3 main.c get_next_line_bonus.c get_next_line_utils_bonus.c -g
// int main(void)
// {	
// 	char *res;
// 	int fd1 = open("tests/test1.txt", O_RDONLY);
// 	int fd2 = open("tests/test2.txt", O_RDONLY);
// 	int fd3 = open("tests/test3.txt", O_RDONLY);
// 	int fd4 = open("tests/test6.txt", O_RDONLY);
// 	int fd5 = open("tests/test5.txt", O_RDONLY);
// 	int files_open = 5;

// 	if (fd1 == -1 || fd2 == -1 || fd3 == -1 || fd4 == -1 || fd5 == -1)
// 	{
// 		perror("Error opening file");
// 		return 1;
// 	}

// 	while (files_open > 0)
// 	{
// 		if (fd1 != -1 && (res = get_next_line(fd1)))
// 		{
// 			printf("File test1.txt: %s", res);
// 			free(res);
// 		}
// 		else if (fd1 != -1)
// 		{
// 			close(fd1);
// 			fd1 = -1;
// 			files_open--;
// 		}

// 		if (fd2 != -1 && (res = get_next_line(fd2)))
// 		{
// 			printf("File test2.txt: %s", res);
// 			free(res);
// 		}
// 		else if (fd2 != -1)
// 		{
// 			close(fd2);
// 			fd2 = -1;
// 			files_open--;
// 		}

// 		if (fd3 != -1 && (res = get_next_line(fd3)))
// 		{
// 			printf("File test3.txt: %s", res);
// 			free(res);
// 		}
// 		else if (fd3 != -1)
// 		{
// 			close(fd3);
// 			fd3 = -1;
// 			files_open--;
// 		}

// 		if (fd4 != -1 && (res = get_next_line(fd4)))
// 		{
// 			printf("File test4.txt: %s", res);
// 			free(res);
// 		}
// 		else if (fd4 != -1)
// 		{
// 			close(fd4);
// 			fd4 = -1;
// 			files_open--;
// 		}

// 		if (fd5 != -1 && (res = get_next_line(fd5)))
// 		{
// 			printf("File test5.txt: %s", res);
// 			free(res);
// 		}
// 		else if (fd5 != -1)
// 		{
// 			close(fd5);
// 			fd5 = -1;
// 			files_open--;
// 		}
// 	}
//  	printf("Buffer size:[%d]", BUFFER_SIZE);
// }
