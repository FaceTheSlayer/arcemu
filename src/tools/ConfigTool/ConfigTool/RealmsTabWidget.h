/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2008-2012 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef REALMSTABWIDGET_H
#define REALMSTABWIDGET_H

#include "ui_RealmsTabWidget.h"

class RealmsTabWidget : public QWidget, public Ui::RealmsTabWidget
{
	Q_OBJECT
public:
	RealmsTabWidget( QWidget *parent = NULL );
	~RealmsTabWidget();

private Q_SLOTS:
	void onListRowChanged( int row );

};

#endif
