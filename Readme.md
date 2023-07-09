# Guidelines
## To install wxWidgets, you must access on the website of wxWidgets: http://www.wxWidgets.org/ (macOS)
1. Install brew 
2. Install wxWidgets: <command>brew install wxwidgets</command>


## Using wxWidgets
### Attributes:
1. wxPanel: which is used for creating frameworkd to put any button, texts,...
2. wxCheckbox: which is used for creating a checkbox
3. wxButton: which is used for creating a button
4. wxStaticText: which is used for creating a static text (could not be edited)
5. wxTextCtrl: which is used for creating a editable text
6. wxPoint(x, y): which is used for setting position of object
7. wxSize(height, width): which is used for setting size of object | (-1 is value of autofix)
8. wxSlider(parent, wxID, curVal, minVal, maxVal, wxPoint, wxSize, ...)

## Note:
<p> We do not need to care about deallocating memory, because they will be deallocated automatically (button, radiobox, ...)
    