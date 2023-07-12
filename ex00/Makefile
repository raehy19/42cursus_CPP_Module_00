# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 06:22:52 by rjeong            #+#    #+#              #
#    Updated: 2023/07/13 07:24:46 by rjeong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := c++
CFLAGS := -Wall -Wextra -Werror -MMD -MP -std=c++98
RM := rm -f

all : $(NAME)

SRCS := \
	megaphone.cpp

OBJS := \
	$(SRCS:.c=.o)

DEPS := \
	$(SRCS:.c=.d)

-include $(DEPS)

clean :
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re
