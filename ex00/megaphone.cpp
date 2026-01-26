/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:56:43 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/23 09:53:34 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    int i = 1;
    while (av[i])
    {
        int j = 0;
        while (av[i][j])
        {
            av[i][j] = (char)toupper(av[i][j]);
            j++;  
        }
        std::cout << av[i];
        if(av[i + 1] != NULL)
            std::cout << " ";
        i++;
    }
    std::cout <<std::endl;
    return (0);    
}

/*int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j]; j++)
            av[i][j] = (char)toupper(av[i][j]);
        std::cout << av[i];
        if(av[i + 1] != NULL)
            std::cout << " ";
    }
    std::cout <<std::endl;
    return (0);    
}*/
