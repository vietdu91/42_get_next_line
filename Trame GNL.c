/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Trame GNL.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manu <Manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:59:46 by Manu              #+#    #+#             */
/*   Updated: 2021/06/07 23:48:03 by Manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h> // READ
#include <stdlib.h> // MALLOC / FREE

#define BUFF_SIZE

// Fonctions à utiliser peut-être
//		- strjoin
//		- strlen
//		- strdup
//		- ajouter une fct ft_strnew (malloc + b_zero d'un string) dans Libft

// /!\ Faire gaffe à free un peu tout !!

int	get_next_line (int fd, char **line)
{
// Déclaration des variables
	char			*buff;
	static char		*save;
	int				res;
	
// Gestion des erreurs --> renvoi -1
//		- si line != ft_strdup("")
//		- si BUFF_SIZE < 1
//		- si fd < 0 ou fd > 1024
//		- si read renvoie -1 + penser à free le buff

// Malloc le buff selon BUFF_SIZE

// Lire le fichier jusqu'à la fin d'une ligne et 
// sauvegarder cette valeur dans *line, pour que d'autres puissent y accéder.
//		Res lit la fonction read
// 		Mettre un '\0' à buff[res]
// 		Join save et buff dans save

// 		Attribution de la ligne entière à line

// 		Attribution du save

// Valeur retournée
//		- s'il reste encore des lignes dans le fichier = 1
//		- si fin de fichier (res) = 0
//		- si erreur = -1
// Si c'est la fin d'une ligne, arrêtez l'exécution. Mais prépare aussi le tampon pour la lecture suivante
// Aussi, faut gèrer l'absence de saut de ligne
}
