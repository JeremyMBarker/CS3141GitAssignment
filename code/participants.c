/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int
main (int argc, char *argv[])
{
  int i = 0;

  printf ("%02d: Kim Tracy\n", ++i);
  printf ("%02d: Justin Williams\n", ++i);
  printf ("%02d: Steven Bertolucci\n", ++i);
  printf ("%02d: Andrew Wolowiec\n", ++i);
  printf ("%02d: Ben Closner\n", ++i);
  printf ("%02d: Dan Knenlein\n", ++i);
  printf ("%02d: Baron Lenardson\n", ++i);
  printf ("%02d: Jordan Gagnon\n", ++i);
  printf ("%02d: Joshua Prewett\n", ++i);
  printf ("%02d: Eric Widmann\n" , ++i);
  printf ("%02d: Michael Lay\n" , ++i);
  printf ("%02d: Michael LeCaptain\n" , ++i);
  printf ("%02d: Eric Widmann\n" , ++i);
  printf ("%02d: Kyle Bray\n" , ++i);
  printf ("%02d: Jacob Striebel\n" , ++i);
  printf ("%02d: Andrew Fox\n" , ++i);
  printf ("%02d: Gage Heeringa\n" , ++i);
  printf ("%02d: Joseph Aldape\n" , ++i);
  printf ("%02d: Marcus Stojcevich\n" , ++i);
  printf ("%02d: Jacob Woloschek\n" , ++i);
  printf ("%02d: Spencer Miskoviak\n" , ++i);
  printf ("%02d: Brandon Froncek\n" , ++i);
  printf ("%02d: Zach DeKraker\n", ++i);
  printf ("%02d: Alec Rivet\n" , ++i);
  printf ("%02d: Andee Anderson\n". ++i);

  printf ("There are %i participants.\n", i);
  return 0;
} // main
