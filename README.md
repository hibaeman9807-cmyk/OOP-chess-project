# ♔ OOP Chess Project

> A fully functional Chess game built in C++ using strong Object-Oriented Programming principles, featuring both console and SFML graphical interfaces.

**Developed as part of the Object-Oriented Programming semester course at FAST-NUCES**

---

## 📌 Overview

This project demonstrates real-world application of OOP concepts including **inheritance**, **polymorphism**, **encapsulation**, and **abstraction**. It's a complete chess implementation where two players can play a full match with comprehensive rule enforcement, move validation, and check/checkmate detection.

Both console and graphical versions share the same core game logic, making this a scalable and maintainable codebase.

---

## ✨ Features

### ♟ Core Chess Mechanics
- ✓ Standard piece movements for all chess pieces
- ✓ Turn-based gameplay (White starts first)
- ✓ Pawn initial double-step move
- ✓ Pawn diagonal capturing
- ✓ Knight L-shaped movement
- ✓ Bishop diagonal movement
- ✓ Rook straight-line movement
- ✓ Queen combined movement
- ✓ King movement with safety validation
- ✓ **Castling** (Kingside & Queenside)
- ✓ **Check detection**
- ✓ **Checkmate detection**
- ✓ Prevention of illegal moves

### 💾 Save & Load System
- Automatic saving after every valid move
- Resume game from last saved state
- File-based persistence (`savedGame.txt`)
- Works seamlessly across both console and GUI modes

### 🎮 User Interfaces
- **Console Mode**: Text-based interface with move commands
- **GUI Mode**: SFML-based graphical interface (team module)

---

## 🧠 Object-Oriented Design

### 🧩 Class Structure

```
Piece (Abstract Base Class)
├── Pawn
├── Rook
├── Knight
├── Bishop
├── Queen
└── King

Board (Game state + move validation)
Game (Turn management + game flow control)
```

### 🏗 Project Structure

```
Chess/
├── main.cpp                      # Entry point
├── Piece.h                       # Abstract base class
├── Pawn.h / Rook.h              # Piece implementations
├── Knight.h / Bishop.h
├── Queen.h / King.h
├── Board.h / Board.cpp          # Board logic
├── Game.h / Game.cpp            # Game management
├── hiba_functions.cpp           # Core logic contribution
├── taha_functions.cpp           # Team contribution
├── save_and_load_Game.cpp       # Save/load functionality
├── SFML_GUI.cpp                 # GUI implementation
└── savedGame.txt                # Game persistence file
```

### 🏛 OOP Concepts Implemented

| Concept | Implementation |
|---------|-----------------|
| **Inheritance** | All pieces inherit from abstract `Piece` class |
| **Polymorphism** | Runtime move validation via `isValidMove()` |
| **Abstraction** | Hidden internal movement logic per piece type |
| **Encapsulation** | Board state managed through controlled interfaces |

---

## 📊 Save System Format

Each move is stored in the following format:
```
sr sc dr dc
```

Where:
- `sr` = source row
- `sc` = source column
- `dr` = destination row
- `dc` = destination column

**Example**: `e2 e4` (Pawn opening move)

---

## 🎮 How to Play

### Console Mode Controls
| Command | Action |
|---------|--------|
| `e2 e4` | Move piece from e2 to e4 |
| `exit` | Exit game and save |
| `1-5` | Menu navigation |

### Move Format
- Use standard algebraic notation or coordinate format
- Coordinates are zero-indexed (0-7)
- The game validates all moves automatically

---

## 👨‍💻 Contributions

### My Contributions (Hiba Eman)
- ✓ Designed and implemented core chess game logic
- ✓ Developed comprehensive move validation system for all pieces
- ✓ Implemented check and checkmate detection algorithms
- ✓ Managed game flow and turn-based game management
- ✓ Debugging, testing, and gameplay stability improvements

### Team Members
- **Hiba Eman** - Core game logic, rule enforcement, backend
- **Muhammad Taha** - SFML GUI implementation, team support, Built robust save and load system

---

## 🚀 Learning Outcomes

This project strengthened expertise in:

- ✓ Object-Oriented Programming fundamentals
- ✓ Complex problem decomposition and system design
- ✓ File handling and I/O in C++
- ✓ Debugging multi-module systems
- ✓ Designing scalable and maintainable game logic
- ✓ Collaborative development practices

---

## 🛠 Tech Stack

- **Language**: C++
- **Graphics Library**: SFML (for GUI mode)
- **Build System**: Standard C++ compilation
- **Storage**: File-based persistence

---

## 📋 Game Rules Implemented

This implementation follows standard chess rules including:

- All standard piece movements and captures
- Pawn promotion mechanics
- Castling rights validation
- Check and checkmate detection
- Stalemate considerations
- Move legality validation
- Turn enforcement

---

## 📌 Notes

- This is a team-based **academic project** developed as part of coursework
- Primary focus was on backend logic and rule enforcement
- All team contributions are documented and credited
- Code demonstrates professional OOP practices suitable for production environments

---

## ♚ Enjoy the Game ♔

Feel free to explore the code, understand the OOP patterns, and enjoy playing chess!

For questions or suggestions, reach out to the development team.

---

**Last Updated**: 2026  
**Institution**: FAST-NUCES  
**Course**: Object-Oriented Programming
