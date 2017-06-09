#ifndef DockSplitterH
#define DockSplitterH
/*******************************************************************************
** Qt Advanced Docking System
** Copyright (C) 2017 Uwe Kindler
** 
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
** 
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
** 
** You should have received a copy of the GNU Lesser General Public
** License along with this library; If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/


//============================================================================
/// \file   DockSplitter.h
/// \author Uwe Kindler
/// \date   24.03.2017
/// \brief  Declaration of CDockSplitter
//============================================================================

//============================================================================
//                                   INCLUDES
//============================================================================
#include <QSplitter>

namespace ads
{
struct DockSplitterPrivate;

/**
 * Splitter used internally instead of QSplitter
 */
class CDockSplitter : public QSplitter
{
	Q_OBJECT
private:
	DockSplitterPrivate* d;
	friend class DockSplitterPrivate;

public:
	CDockSplitter(QWidget *parent = Q_NULLPTR);
	CDockSplitter(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR);

	/**
	 * Prints debug info
	 */
	virtual ~CDockSplitter();

	/**
	 * Returns true, if any of the internal widgets is visible
	 */
	bool hasVisibleContent() const;
}; // class CDockSplitter

} // namespace ads

//---------------------------------------------------------------------------
#endif // DockSplitterH
