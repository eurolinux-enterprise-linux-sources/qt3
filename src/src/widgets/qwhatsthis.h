/****************************************************************************
**
** Definition of QWhatsThis class
**
** Copyright (C) 1992-2008 Trolltech ASA.  All rights reserved.
**
** This file is part of the widgets module of the Qt GUI Toolkit.
**
** This file may be used under the terms of the GNU General
** Public License versions 2.0 or 3.0 as published by the Free
** Software Foundation and appearing in the files LICENSE.GPL2
** and LICENSE.GPL3 included in the packaging of this file.
** Alternatively you may (at your option) use any later version
** of the GNU General Public License if such license has been
** publicly approved by Trolltech ASA (or its successors, if any)
** and the KDE Free Qt Foundation.
**
** Please review the following information to ensure GNU General
** Public Licensing requirements will be met:
** http://trolltech.com/products/qt/licenses/licensing/opensource/.
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://trolltech.com/products/qt/licenses/licensing/licensingoverview
** or contact the sales department at sales@trolltech.com.
**
** This file may be used under the terms of the Q Public License as
** defined by Trolltech ASA and appearing in the file LICENSE.QPL
** included in the packaging of this file.  Licensees holding valid Qt
** Commercial licenses may use this file in accordance with the Qt
** Commercial License Agreement provided with the Software.
**
** This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
** INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE. Trolltech reserves all rights not granted
** herein.
**
**********************************************************************/

#ifndef QWHATSTHIS_H
#define QWHATSTHIS_H

#ifndef QT_H
#include "qobject.h"
#endif // QT_H

#ifndef QT_NO_WHATSTHIS

#include "qcursor.h"

class QToolButton;
class QPopupMenu;
class QStyleSheet;

class Q_EXPORT QWhatsThis: public Qt
{
public:
    QWhatsThis( QWidget *);
    virtual ~QWhatsThis();

    virtual QString text( const QPoint & );
    virtual bool clicked( const QString& href );

    // the common static functions
    static void setFont( const QFont &font );    
    
    static void add( QWidget *, const QString &);
    static void remove( QWidget * );
    static QString textFor( QWidget *, const QPoint & pos = QPoint(), bool includeParents = FALSE );

    static QToolButton * whatsThisButton( QWidget * parent );

    static void enterWhatsThisMode();
    static bool inWhatsThisMode();
    static void leaveWhatsThisMode( const QString& = QString::null, const QPoint& pos = QCursor::pos(), QWidget* w = 0 );

    static void display( const QString& text, const QPoint& pos = QCursor::pos(), QWidget* w = 0 );
};

#endif // QT_NO_WHATSTHIS

#endif // QWHATSTHIS_H
