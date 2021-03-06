#ifndef TOOLBUTTON_H_
#define TOOLBUTTON_H_

#include "gui/interface/Button.h"

class ToolButton: public ui::Button
{
	int currentSelection;
	ByteString toolIdentifier;
public:
	ToolButton(ui::Point position, ui::Point size, ByteString text_, ByteString toolIdentifier, String toolTip = String());
	virtual void OnMouseUnclick(int x, int y, unsigned int button);
	virtual void OnMouseUp(int x, int y, unsigned int button);
	virtual void OnMouseClick(int x, int y, unsigned int button);
	virtual void Draw(const ui::Point& screenPos);
	void SetSelectionState(int state);
	int GetSelectionState();
	virtual ~ToolButton();
};

#endif /* TOOLBUTTON_H_ */
