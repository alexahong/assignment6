// Brock Ferrell
// CS2401
// November 23, 2015
// Project7
/**@file piece.h
* @brief this file creates the peices for the game and checks if the pieces are the right color
*/
#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

class piece {
public:
	piece() {theColor = blank;}
/** @brief this function flips the piece to the opposite color
* @return void
*/
	void flip()
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}

	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}

/**@brief this function sets the color of a piece to white
* @return void
*/
	void set_white() {theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif

