/* Facts */
male(rifat).
male(umut).
male(serhat).
male(ismet).
male(ferhat).
male(ahmet).
male(mehmet).
male(sedat).
male(musa).
female(zeynep).
female(zehra).
female(sevim).
female(ilayda).
female(sebiha).
female(hatice).
female(meryem).
/* In here I get all the characters inside of her/him gender because of that keep code short */

parent(ahmet, rifat).   /*ahmet  is rifat's  father*/
parent(ahmet, ismet).   /*ahmet  is ismet's  father*/
parent(rifat, meryem).  /*rifat  is meryem's father*/
parent(rifat, serhat).  /*rifat  is serhat's father*/
parent(rifat, sedat).   /*rifat  is sedat's  father*/
parent(rifat, furkan).  /*rifat  is furkan's father*/
parent(rifat, ferhat).  /*rifat  is ferhat's father*/
parent(hatice, ferhat). /*hatice is ferhat's mother*/
parent(hatice, meryem). /*hatice is meryem's mother*/
parent(hatice, serhat). /*hatice is serhat's mother*/
parent(ismet, zeynep).  /*ismet  is zeynep's father*/
parent(ismet, zehra).   /*ismet  is zehra's  father*/
parent(ismet, sevim).   /*ismet  is sevim's  father*/
parent(ismet, ilayda).  /*ismet  is ilayda's father*/
parent(ismet, sebiha).  /*ismet  is sebiha's father*/
parent(mehmet, ahmet).  /*mehmet is ahmet's  father*/
parent(mehmet, umut).   /*mehmet is umut's   father*/
/* In here I get all the father or mother relationships inside of parent relationship. Because of I alrady did get all of the characters male and female. In rules parts when I get a relationship they will processed to be male and female.*/

/* Rules */
father(X,Y):- male(X),/*X is Y’s father*/
    parent(X,Y).

mother(X,Y):- female(X),/*X is Y’s mother*/
    parent(X,Y).

brother(X,Y):- /*(X,Y or Y,X) X is Y’s brother*/
    male(X),
    father(F, Y), father(F,X),X \= Y.

brother(X,Y):- male(X),/*X is Y’s brother*/
    mother(M, Y), mother(M,X),X \= Y.

sister(X,Y):- /*(X,Y or Y,X)X is Y’s sister*/
    female(X),
    father(F, Y), father(F,X),X \= Y.

sister(X,Y):- female(X),/*X is Y’s sister*/
    mother(M, Y), mother(M,X),X \= Y.

uncle(X,Y):- /*X is Y’s uncle*/
    parent(Z,Y), brother(Z,X).

grand_uncle(X,Y) :- /*X is Y’s grand uncle*/
    parent(Z,Y),
    uncle(X,Z).








