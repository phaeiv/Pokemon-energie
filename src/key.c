#include "include/include.h"

int		acces_menu()
{
	if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyB) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyC) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyD) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyE) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyG) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyH) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyI) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyJ) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyK) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyL) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyM) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyO) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyR) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyS) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyT) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyU) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyV) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyW) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyX) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyY) == sfTrue)
		return (1);
	else if (sfKeyboard_isKeyPressed(sfKeyZ) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_A) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_B) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_X) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_Y) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_LB) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_RB) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_SELECT) == sfTrue)
		return (1);
	else if (sfJoystick_isButtonPressed(0, KEY_START) == sfTrue)
		return (1);
	return (0);
}
