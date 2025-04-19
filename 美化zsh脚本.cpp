#include <cstdlib>
int main() {
    system("pacman -S zsh");
        system("git clone https://aur.archlinux.org/oh-my-zsh-git.git");
            system("cd oh-my-zsh-git");
           system("makepkg -si");
          system("mv zshrc .zshrc");
         system("mv .zshrc /home/adm");
        system("chsh -s /usr/bin/zsh");
       system("pacman -S fastfecth");
    system("source .zshrc");
}
