/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:33:15 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:34:17 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# define VERBOSE (1 << 0)

typedef struct s_env			t_env;
typedef struct s_lst			t_lst;
typedef struct s_node			t_node;

struct							s_env
{
	t_lst						*a;
	t_lst						*b;
	int							opt;
};

struct							s_lst
{
	t_node						*begin;
	t_node						*end;
};

struct							s_node
{
	int							data;
	t_node						*next;
	t_node						*prev;
};

t_env							*newenv(char *v);
t_lst							*newlst(void);
t_node							*newnode(int data);
t_lst							*insertnode(t_lst *lst, int data);
void							verifdata(char *data);
int								verifdouble(t_lst *lst, int data);
int								verifsort(t_lst *lst);
int								push_swap(t_env *e);
int								lstlen(t_lst *lst);
void							print(t_env *e, char *s);
void							push(t_env *e, char c);
void							swap(t_env *e, char c);
void							rotate(t_env *e, char c);
void							reverse_rotate(t_env *e, char c);
void							sort(t_env *e, int len);
void							lsort(t_env *e);
int								*gettab(t_node *node, int len);
void							minimal(t_env *e);

#endif
