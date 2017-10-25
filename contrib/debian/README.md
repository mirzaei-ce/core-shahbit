
Debian
====================
This directory contains files used to package shahbitd/shahbit-qt
for Debian-based Linux systems. If you compile shahbitd/shahbit-qt yourself, there are some useful files here.

## shahbit: URI support ##


shahbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install shahbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your shahbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/shahbit128.png` to `/usr/share/pixmaps`

shahbit-qt.protocol (KDE)

