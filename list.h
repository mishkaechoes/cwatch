/* list.h
 * A simple double-linked-list data-structure and manipulation functions
 *
 * Copyright (C) 2012, Giuseppe Leone <joebew42@gmail.com>,
 *                     Vincenzo Di Cicco <enzodicicco@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __LIST_H
#define __LIST_H

// List node
typedef struct list_node_s
{
    void *data;
    struct list_node_s *prev;
    struct list_node_s *next;
} LIST_NODE;

// List
typedef struct list
{
    // Pointer to first and last node
    LIST_NODE *first;
    LIST_NODE *last;
} LIST;

/**
 * Initialize list data structure
 * @return list: a pointer to the new allocated list structure
 */
LIST *list_init();

/**
 * Push an element at the end of list
 * @param list: a LIST pointer
 * @param data: a void pointer
 * @return LIST_NODE: return the pointer of the node added
 */
LIST_NODE *list_push(LIST *, void *);

/**
 * Remove and return the first element of the list
 * @param list: a LIST pointer
 * @return void: a VOID pointer to destination data pointer
 */
void *list_pop(LIST *);

/**
 * Remove a node from list
 * @param node: a POINTER to list_node to remove
 */
void list_remove(LIST *, LIST_NODE *);

/**
 * Deallocate list data structure
 */
void list_free(LIST *);

#endif /* !__LIST_H */
