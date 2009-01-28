/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2004 Marco Pesenti Gritti
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Author: Marco Pesenti Gritti <marco@gnome.org>
 */

#ifndef __GECKO_UTILS_H__
#define __GECKO_UTILS_H__


G_BEGIN_DECLS

typedef enum {
    GECKO_FONT_VARIABLE = 0,
    GECKO_FONT_FIXED,
    GECKO_NUM_FONTS
} GeckoFontType;

void            gecko_set_caret   (gboolean       value);
/*void            gecko_set_color   (GeckoColorType  type,
					const gchar   *color);*/
void            gecko_set_font    (GeckoFontType   font_type,
				        const gchar   *fontname);
gboolean       gecko_init         (void);
void           gecko_shutdown     (void);

G_END_DECLS

#endif /* __GS_GECKO_UTILS_H__ */
