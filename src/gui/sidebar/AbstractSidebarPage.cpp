#include "AbstractSidebarPage.h"

AbstractSidebarPage::AbstractSidebarPage(Control* control)
{
	XOJ_INIT_TYPE(AbstractSidebarPage);

	this->control = control;
	this->tabButton = NULL;
}

AbstractSidebarPage::~AbstractSidebarPage()
{
	XOJ_RELEASE_TYPE(AbstractSidebarPage);

	this->control = NULL;
}

bool AbstractSidebarPage::selectPageNr(size_t page, size_t pdfPage)
{
	XOJ_CHECK_TYPE(AbstractSidebarPage);

	// TODO LOW PRIO why not pageSelected?

	return false;
}

Control* AbstractSidebarPage::getControl()
{
	XOJ_CHECK_TYPE(AbstractSidebarPage);

	return this->control;
}

void AbstractSidebarPage::setTmpDisabled(bool disabled)
{
	XOJ_CHECK_TYPE(AbstractSidebarPage);

	GdkCursor* cursor = NULL;
	if (disabled)
	{
		cursor = gdk_cursor_new_for_display(gdk_display_get_default(), GDK_WATCH);
	}

	if (gtk_widget_get_window(this->getWidget()))
	{
		gdk_window_set_cursor(gtk_widget_get_window(this->getWidget()), cursor);
	}

	gtk_widget_set_sensitive(this->getWidget(), !disabled);


	if (cursor)
	{
		g_object_unref(cursor);
	}
}
