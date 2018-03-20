# Lem-in
Lem-in is a project task from UNIT Factory school. The program will receive the data describing the ant farm from the standard output in the following format:

number_of_ants
the_rooms
the_links

The ant farm is defined by the following lines:

3
##start
1 23 3
2 16 7
#comment
3 16 3
4 16 5
5 9 3
6 1 5
7 4 8
##end
0 9 5
0-4
0-6
1-3
4-3
5-2
3-5
#another comment
4-2
2-1
7-6
7-2
7-4
6-5

There are two parts:

The rooms, which are defined by: name coord_x coord_y
The links, which are defined by: name1-name2
Comment line starts with # and can be placed anyware. Lines that start with ## are commands modifying the properties of the line that comes right after. For example, ##start signals the ant farm’s entrance and ##end its exit.

Results displayed on the standard output in the following format:

number_of_ants
the_rooms
the_links
Lx-y Lz-w Lr-o ... x, z, r represents the ants’ numbers (going from 1 to number_of_ants) and y, w, o represents the rooms’ names.

#Output :

3
##start
1 23 3
2 16 7
#comment
3 16 3
4 16 5
5 9 3
6 1 5
7 4 8
##end
0 9 5
0-4
0-6
1-3
4-3
5-2
3-5
#another comment
4-2
2-1
7-6
7-2
7-4
6-5

L1-3 L2-2
L1-4 L2-7 L3-3
L1-0 L2-6 L3-4
L2-0 L3-0

