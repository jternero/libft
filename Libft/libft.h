/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:06:00 by jternero          #+#    #+#             */
/*   Updated: 2022/10/06 22:30:03 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//This function tells if int c is an alphabetic character
int		ft_isalpha(int c);
//this function tells if int c is an numeric Character
int		ft_isdigit(int c);
// this function tells if int c it included on ASCII table
int		ft_isascii(int c);
//this function tells if the int is an alphanumeric character
int		ft_isalnum(int c);
//this function tells if the int c is a printable character.
int		ft_isprint(int c);
//This functions return the length of the *s
size_t	ft_strlen(const char *s);
//This function changes the value of pointer to the selected char
void	*ft_memset(void *b, int c, size_t len);
//This function changes the value of pointer s into NULL
void	ft_bzero(void *s, size_t n);
//This function copies n characters from memory area src to memory area dest.
void	*ft_memcpy(void *dst, const void *src, size_t n);
//This function move a pointer value to another pointer
// without overlaping its value
void	*ft_memmove(void *dst, const void *src, size_t len);
//This Function will return the lenght of src.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//This function will return the lenght of 
//the initial length of dst plus the length of src. 
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize);
//This function changes a lowcase letter into uppercase letter
int		ft_toupper(int c);
//This function changes a uppercase letter into lowercase letter
int		ft_tolower(int c);
// This function compares at most the first n bytes of str1 and str2.
//... if Return value < 0 then it indicates str1 is less than str2.
//... if Return value > 0 then it indicates str2 is less than str1.
//... if Return value = 0 then it indicates str1 is equal to str2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//This function locates the last occurrence of c 
//(converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string.
//A pointer to the located character, 
//or NULL if the character doesn't occur in the string.
char	*ft_strrchr(const char *str, int c);
//The strchr() function finds the first occurrence of c (converted to a char)
// in the string pointed to by s. 
//The terminating NUL character is considered to be part of the string.
char	*ft_strchr(const char *str, int c);
//This function returns a pointer to the matching byte or NULL
//if the character does not occur in the given memory area.
char	*ft_memchr(const void *s, int c, size_t n);
//if Return value < 0 then it indicates str1 is less than str2.
//if Return value > 0 then it indicates str2 is less than str1.
//if Return value = 0 then it indicates str1 is equal to str2.
int		ft_memcmp(const void *str1, const void *str2, size_t n);
//If littleone is an empty string, bigone is returned;
//if littleone occurs nowhere in bigone, NULL is returned; 
//otherwise a pointer to the first character 
//of the first occurrence of little is returned.
char	*ft_strnstr(const char *big, const char *little, size_t len);
//covert string to integer
int		ft_atoi(const char *str);
//
void	*ft_calloc(size_t count, size_t size);
//
char	*ft_strdup(const char *src);
//
char	*ft_substr(char const *s, unsigned int start, size_t len);
//
char	*ft_strtrim(char const *s1, char const *set);
//
char	*ft_strjoin(char const *s1, char const *s2);
//
char	**ft_split(char const *s, char c);
//
char	*ft_itoa(int n);
//
char	*ft_strmapi(const char *s, char f(unsigned int, char));
//
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//
void	ft_putchar_fd(char c, int fd);
//
void	ft_putstr_fd(char *s, int fd);
//
void	ft_putendl_fd(char *s, int fd);
//
void	ft_putnbr_fd(int n, int fd);
//
t_list	*ft_lstnew(void *content);
//
void	ft_lstadd_front(t_list **lst, t_list *new);
//
int		ft_lstsize(t_list *lst);
//
t_list	*ft_lstlast(t_list *lst);
//
void	ft_lstadd_back(t_list **lst, t_list *new);
//
void	ft_lstdelone(t_list *lst, void (*del)(void*));
//
void	ft_lstiter(t_list *lst, void (*f)(void *));
//
void	ft_lstclear(t_list **lst, void (*del)(void*));
//
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif