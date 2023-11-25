#include "include/MyLibrary.h"

int main() {
  PrintName("Gall Anonim");
  const char* path = PROJECTPATH;
  PrintInfo(PROJECTPATH);
  return 0;
}
/** Wynik dzialania programu:
[INFO]:: Name: Gall Anonim
[INFO]:: /home/ganonim/workspace/ppo/2023_2024/lab01/ex
*/
// Oczywiście, ścieżka do projektu będzie się różnić.
