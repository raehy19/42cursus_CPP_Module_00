# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 13:25:52 by rjeong            #+#    #+#              #
#    Updated: 2023/07/13 13:25:52 by rjeong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

CC := c++
CFLAGS := -Wall -Wextra -Werror -MMD -MP -std=c++98
RM := rm -f

all : $(NAME)

SRCS := \
	phonebook.cpp \


OBJS := \
	$(SRCS:.cpp=.o)

DEPS := \
	$(SRCS:.cpp=.d)

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
