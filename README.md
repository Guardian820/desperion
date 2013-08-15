#Desperion

Desperion est un �mulateur pour le MMORPG Dofus 2.0 �crit en C++, actuellement compatible avec la version:
2.13.4.76020.1

Desperion utilise de nombreuses fonctionnalit�s C++11. Il vous faudra donc utiliser une version de gcc ou de clang (ne pensez m�me pas � MSVC) relativement r�cente: gcc >= 4.7 ou clang >= 3.2.
Attention, le projet protocol_builder inclut l'utilisation d'inheriting constructors, qui n�cessitent l'utilisation de gcc >= 4.8.1 ou clang >= 3.3.

* Desperion est constitu� de six projets:
	* core: biblioth�que incluant les fonctionnalit�s partag�es par tous les projets
	* d2fstream: biblioth�que permettant de lire les diff�rents fichiers du client Dofus
	* protocol_builder: utilitaire pour traduire les fichiers ActionScript du protocole Dofus en fichiers C++
	* login_server: serveur de connexion de l'�mulateur
	* game_server: serveur de jeu de l'�mulateur

Desperion est en refonte, ce qui explique l'absence du serveur de jeu pour le moment.

* Contact:
	* Mail: martin.alex32@hotmail.fr
	* Skype: alexxxxxx195
