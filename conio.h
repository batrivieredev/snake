#ifndef CONIO_H
#define CONIO_H

void clrscr(); // Efface l'écran
int kbhit();   // Vérifie si une touche a été pressée
int getch();   // Lit un caractère sans attendre l'appui sur "Entrée"
void gotoxy(int x, int y); // Déplace le curseur à la position (x, y)

#endif
