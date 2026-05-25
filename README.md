# OOP-chess-project

This project was developed as part of my Object-Oriented Programming semester course at FAST-NUCES.

It is a fully functional Chess game built in C++ using strong OOP principles, featuring both a console-based interface and an SFML graphical interface developed collaboratively as a team project.

---

## 📌 Overview

This Chess game demonstrates real-world application of Object-Oriented Programming concepts such as inheritance, polymorphism, encapsulation, and abstraction.

It allows two players to play a complete chess match with full rule enforcement, move validation, check/checkmate detection, and save/load functionality.

Both console and graphical versions share the same core game logic.

---

## ✨ Features

### ♟ Core Chess Mechanics
- Standard piece movements
- Turn-based gameplay (White starts first)
- Pawn initial double-step move
- Pawn diagonal capturing
- Knight L-shaped movement
- Bishop diagonal movement
- Rook straight-line movement
- Queen combined movement
- King movement with safety validation
- Castling (Kingside & Queenside)
- Check detection
- Checkmate detection
- Prevention of illegal moves

---

### 💾 Save & Load System
- Automatic saving after every valid move
- Resume game from last saved state
- File-based persistence (`savedGame.txt`)
- Works across both console and GUI modes

---

## 🧠 Object-Oriented Design

### 🧩 Class Structure
- `Piece` (Abstract Base Class)
- `Pawn, Rook, Knight, Bishop, Queen, King` (Derived Classes)
- `Board` (Game state + move validation)
- `Game` (Turn management + game flow control)

---

## 🏗 Project Structure
Chess/

│

├── main.cpp

├── Piece.h

├── Pawn.h / Rook.h / Knight.h / Bishop.h / Queen.h / King.h

├── Board.h / Board.cpp

├── Game.h / Game.cpp

├── hiba_functions.cpp

├── save_and_load_Game.cpp

├── taha_functions.cpp

├── SFML_GUI.cpp (team module)

└── savedGame.txt


---

## 🧠 OOP Concepts Used

- **Inheritance** → All pieces inherit from `Piece`
- **Polymorphism** → Runtime move validation via `isValidMove()`
- **Abstraction** → Hidden internal movement logic per piece
- **Encapsulation** → Board state managed through controlled interfaces

---

## 👨‍💻 My Contributions

- Designed and implemented core chess game logic
- Developed move validation system for all chess pieces
- Implemented check and checkmate detection logic
- Built save and load system using file handling in C++
- Managed game flow and turn-based logic
- Debugging, testing, and improving gameplay stability

---

## 👥 Team Project

This project was developed collaboratively.

- Hiba Eman  
- Muhammad Taha  

---

## 📂 Save System Format

Each move is stored as:
sr sc dr dc

Where:
- sr = source row
- sc = source column
- dr = destination row
- dc = destination column

---

## 🎮 Controls (Console Mode)

- Move piece: `e2 e4`
- Exit & save: `exit`
- Menu navigation: numeric input (1–5)

---

## 🚀 Learning Outcomes

This project helped strengthen:
- Object-Oriented Programming fundamentals
- Complex problem decomposition
- File handling in C++
- Debugging multi-module systems
- Designing scalable game logic

---

## 📌 Note

This is a team-based academic project. My primary contributions were focused on core game logic, rule enforcement, and backend implementation.

---

♚ Enjoy the Game  ♔
