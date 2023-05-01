/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:27:19 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:27:21 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

void    megaphone(int ac, char **av){
    for(int it = 1; it < ac ;it++){
        for(int it1 = 0; it1 < strlen(av[it]); it1++){
            std::cout << (char)toupper(av[it][it1]);
        }
    }
    std::cout << std::endl;
}


int main( int ac, char **av){
    if (ac > 1)
        megaphone(ac, av);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}