#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <touchgfx/Utils.hpp>


// touchgfx::Unicode::UnicodeChar debugStringBuffer[30];

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    add(customKeyboard);
   	
    customKeyboard.setPosition(0,0,85,219);
   // customKeyboard.keyboard.setBuffer(debugStringBuffer, 30);
	customKeyboard.invalidate();

    MainScreenViewBase::setupScreen();

}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}
