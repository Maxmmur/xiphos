/***************************************************************************
                          main.cpp  -  description
                             -------------------
    begin                : Mon May 8 2000
    copyright            : (C) 2000 by Terry Biggs
    email                : tbiggs@infinet.com
 ***************************************************************************/
 
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */  

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gnome.h>
#include <swmodule.h>

#include "GnomeSword.h"
#include "menustuff.h"
#include "support.h"
#include "callback.h"
#include "interface.h"
#include "filestuff.h"

int
main (int argc, char *argv[])
{
  GtkWidget *mainwindow;
  GtkWidget *menu1;
  GtkWidget *menu2;
  GtkWidget *menu3;
  GtkWidget *menu4;
  GtkWidget *menu5;  

  gnome_init ("GnomeSword", VERSION, argc, argv);

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */

  menu1 = create_menu1();
  menu2 = create_menuInt1();
  menu3 = create_menuInt2();
  menu4 = create_menuInt3();
  mainwindow = create_mainwindow ();
  setDiretory();
  loadbookmarkarray();
  loadoptionarray();
  initSword(mainwindow,menu1,menu2,menu3,menu4,menu5);
  gtk_widget_show (mainwindow);
  UpdateChecks(mainwindow); //-- set toggle state of buttons and menu items
  gtk_main ();
  return 0;
}

