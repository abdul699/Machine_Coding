# Machine_Coding
A machine Coding Solution Repo.
 
## Questions:
<details>

<summary>Tic-Tac-Toe</summary>
Tic-Tak-Toe is a 2 Player Game where each player take turns marking the spaces in a 3×3 grid. The player 	 who succeeds in placing three of their marks in a diagonal, 
horizontal, or vertical row is the winner.

The game starts with an empty 3x3 grid.

**Rules of the game:**

The game is played between two players. One player owns the X Sign and can put it on any of the empty 		cells in the grid. The other player owns the O Sign and can in any of the empty cells.The player 	 with X makes the first turn. Each player plays alternately after that.

**Requirements:**

Create a command-line application for tic-tac-toe with the following requirements:
Ask the user for the names of the two players
Allow the user to make moves on behalf of both the players.
Print the grid after every move.
The user will make a move by entering the cell position(row number and column number)
Valid move:
* The cell is empty.
* column and row number are in bound of grid.

Invalid Valid move:
* cell is not empty.
* column and row number are out of bound of grid.

Put the piece on the cell and determine if a player has won or if there are no valid moves left. Ignore all moves mentioned after 		that.
A position in the cell is represented by two values: row number (0-2 or 1-3) and column number (0-2 		or 1-3).

**Example**

2 0 represents the cell at the extreme bottom-left (2nd row, 0th column)\
0 2 represents the cell at the extreme top-right (0th row, 2nd column)

**Input/Output Format:**

The code should strictly follow the input/output format and will be tested with provided test cases. The Code should be fully Object Oriented.

Input Format:\
Multiple lines with each line containing the Cell Position. The row and column numbers will be separated by a space.

Output Format:\
Print the initial grid. This would be followed by the grid after each move. Print custom message for Invalid move and print grid again. If a player wins print PlayerName wins. In case of draw print Match Turned into draw.\
solution: <a href="./tic-tac-toe" target="_top">tik-tac-toe</a>

</details>


