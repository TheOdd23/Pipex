/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:48:50 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 10:38:09 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h> 
# include <string.h>
# include <stdarg.h>

# define BUFFER_SIZE 1

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*********************************************/
/********** "RETOURNE INT" **********/
/*********************************************/

/*transforme une nombre en charactères en int*/
int		ft_atoi(const char *str);

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères alphanumériques*/
int		ft_isalnum(int c);

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères alphas*/
int		ft_isalpha(int c);

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères ascii*/
int		ft_isascii(int c);

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères numérique*/
int		ft_isdigit(int c);

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères imprimables*/
int		ft_isprint(int c);

/*Compare n charactères de deux strings et renvoie la différence*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*Compare n nombre d'octets de deux blocs mémoires et renvoie la différence*/
int		ft_memcmp(const void *str1, const void *str2, size_t n);

/*Met toutes les lettres majuscules en minuscules*/
int		ft_tolower(int ch);

/*Met toutes le lettres minuscules en majuscules*/
int		ft_toupper(int ch);

/*Compte le nombre de nodes dans une liste*/
int		ft_lstsize(t_list *lst);

/*************************************************/
/********** "RETOURNE VOID *" **********/
/************************************************/

/*Cherche la première occurence du char passé en paramètre dans la string passée
 * en paramètre et renvoie un pointeur vers sa première occurence*/
void	*ft_memchr(const void *str, int c, size_t n);

/*Copie n bytes du bloc mémoire s1 dans le bloc s2*/
void	*ft_memcpy(void *s1, const void *s2, size_t n);

/*Copie n bytes du bloc mémoire s1 dans le bloc 2 et le bloc deux conserve les
 * bytes excédant si s1 est plus petit que n*/
void	*ft_memmove(void *s1, const void *s2, size_t n);

/*Copie le charactere c dans les n charactères
 * de la string passée en paramètre*/
void	*ft_memset(void *str, int c, size_t n);

/*Alloue la mémoire nécessaire en mettant des 0 à tous les bytes*/
void	*ft_calloc(size_t num, size_t size);

/**********************************************/
/********** "PAS DE RETOUR" **********/
/**********************************************/

/*Met à 0 n nombre de bytes dans la string passée en paramètre*/
void	ft_bzero(void *str, size_t n);

/*Applique la fonction 'f' sur chaque charactère de
 * la string passée en paramètre*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/*Écrit le charactère c dans le file descriptor passé en paramètre*/
void	ft_putchar_fd(char c, int fd);

/*Écrit l'ensemble de la string dans le file descriptor passé en paramètre*/
void	ft_putstr_fd(char *s, int fd);

/*Écrit l'ensemble de la string dans le file descriptor passé en paramètre,
 * suivi d'un retour à la ligne*/
void	ft_putendl_fd(char *s, int fd);

/*Écrit l'int dans le file descriptor passé en paramètre*/
void	ft_putnbr_fd(int n, int fd);

/*Ajoute la node 'new' au début de la liste*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*Ajoute la node 'new' à la fin de la liste*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/*Libère la mémoire du contenu de la node passée en paramètre*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*Applique la fonction 'f' sur le contenu de chaque node de la liste passée
 * en paramètre*/
void	ft_lstiter(t_list *lst, void (*f) (void *));

/*Supprime et libère la node passée en paramètre et toutes les suivantes*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**************************************************/
/********** "RETOURNE CHAR" ************/
/**************************************************/

/*Retourne la string partir de la première occurence du char c dans la string
 * passée en paramètre*/
char	*ft_strchr(const char *str, int c);

/*Alloue de la mémoire pour faire une copie de la string passée en
 * paramètre et la renvoie*/
char	*ft_strdup( const char *str);

/*Cherche la string to_find dans la string passée
 * en paramètre dans n nombre de bytes*/
char	*ft_strnstr(const char *str, const char *to_find, size_t n);

/*Cherche et renvoie un pointeur à la position de la dernière occurence du
 * charactère dans la tring passée en paramètre*/
char	*ft_strrchr(const char *str, int ch);

/*Concatene les deux strings passées en paramètre*/
char	*ft_strjoin(char const *s1, char const *s2);

/*Retourne un fragment de la string, qui commence
 * par start et qui est de taille len*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*Retourne une copie de la string passée en paramètre, sans les charactères
 * spécifiés dans set au début et la fin de la string*/
char	*ft_strtrim(char const *s1, char const *set);

/*Retourne une string représentant l'int passé en paramètre*/
char	*ft_itoa(int n);

/*Crée une copie de la string passée en paramètre, dont la fonction 'f' aura
 * été appliqué à tous ses charactères*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/***************************************************/
/********** "RETOURNE CHAR" *************/
/***************************************************/

/*Retourne un array de strings, dont chaque string sera composée des charactères
 * délimités par le charactère passé en paramètre*/
char	**ft_split(char const *s, char c);

/*************************************************/
/********** "RETOURNE SIZE_T" **********/
/*************************************************/

/*Retourne la longueur de la string résultant
 * de la concaténation de src et dest*/
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/*Retourne la longueur de la copie de la string passée en paramètre*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/*Retourne la longueur de la string passée en paramètre*/
size_t	ft_strlen(const char *str);

/***************************************************/
/********** "RETOURNE T_LIST" * **********/
/***************************************************/

/*Alloue de la mémoire et initialise le contenu de la nouvelle node avec
 * le 'content' passé en paramètre*/
t_list	*ft_lstnew(void *content);

/*Retourne la dernière node de la liste*/
t_list	*ft_lstlast(t_list *lst);

/*Crée une nouvelle liste résultant de l'application de la fonction 'f' sur
 * le contenu de chaque node de la liste passée en paramètre*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));

/***************************************************/
/********** "FONCTIONS PRINTF" **********/
/***************************************************/

int		ft_check_var(va_list ap, const char var);
int		ft_printf(const char *str, ...);
int		ft_printnbr(int nbr);
int		ft_printunbr(unsigned int nbr);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_hexalen(unsigned long nb);
int		ft_printhex(unsigned int nbr, const char var);
int		ft_printptr(void *ptr);
void	ft_printhexptr(unsigned long nb, int *len, char *base);
char	*ft_itoa_pf(int n);

/***********************************************************/
/******** "FONCTIONS GET_NEXT_LINE" ********/
/***********************************************************/

char	*get_next_line(int fd);
char	*create_stash(char *stash, char *buffer);
char	*create_buffer(char *stash, int fd);
char	*create_new_line(char *stash);
char	*stash_trim(char *stash);

#endif
