/*
 * Xournal++
 *
 * List of unused colors for toolbar customisation
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv3
 */

#ifndef __CUSTOMIZEABLECOLORLIST_H__
#define __CUSTOMIZEABLECOLORLIST_H__

#include <XournalType.h>
#include <glib.h>
#include <StringUtils.h>
#include <ListIterator.h>

#include "../../XojColor.h"

class CustomizeableColorList
{
public:
	CustomizeableColorList();
	virtual ~CustomizeableColorList();

public:
	ListIterator<XojColor*> getPredefinedColors();

private:
	void addPredefinedColor(int color, string name);

private:
	XOJ_TYPE_ATTRIB;

	GList* colors;

};

#endif /* __CUSTOMIZEABLECOLORLIST_H__ */
