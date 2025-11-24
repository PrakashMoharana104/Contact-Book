# ⭐ What is Unique in My Project

Many students create a basic contact book in C, but this project includes **unique improvements** that make it stand out:

### ✅ **Unique Features & Improvements Added**
- **Persistent Storage with Binary Files**  
  Unlike many student projects that store contacts temporarily, my project uses a **binary file (`contacts.dat`)** to store data permanently.

- **Case-Insensitive Search & Edit**  
  Searching and editing contacts works even if the user types names in different cases (e.g., *prakash*, *PRAKASH*, *PrAkAsH*).

- **Safe Input Handling Using `fgets()`**  
  Ensures no buffer overflow errors and avoids issues caused by `scanf()`.

- **Name Cleanup Using `strcspn()`**  
  Automatically removes unwanted trailing newline characters.

- **Menu-Driven Structure with Better User Experience**  
  Clean menu, safe input via buffers, and prevention of crashes.

- **Optimized Delete Operation**  
  Shifts all elements correctly to maintain list order.

---

# 📒 Contact Book in C

A simple and efficient **Contact Book Application** built in **C Language**.  
It allows users to **add, view, search, edit, and delete** contacts with full data persistence.

---

## 🧠 Why I Used C Language

I used **C** because:

- It provides **full control over memory** (important for arrays and structs).
- It helps understand **low-level file handling** using `fopen`, `fread`, `fwrite`.
- Perfect for learning **menu-driven programming**.
- Ideal for implementing **structures** and **data management systems** manually without frameworks.

---

## 🧠 Concepts, Libraries & Techniques Used

### ✔ **Libraries Used**
| Library | Purpose |
|--------|----------|
| `<stdio.h>` | Input/Output functions (`printf`, `fgets`, file handling) |
| `<stdlib.h>` | Functions like `atoi`, memory management |
| `<string.h>` | `fgets`, `strcasecmp`, `strcspn`, string operations |

---

### ✔ **C Concepts Used**
- Structure (`struct Contact`)  
- File handling (binary mode)  
- Arrays for storing contacts  
- Case-insensitive comparison (`strcasecmp`)  
- Safe input reading with `fgets()`  
- Menu-driven logic  
- Loop-based record management  

---

### ✔ **System Working Explanation**

1. **Loading Contacts:**  
   Reads `contacts.dat` using `fread()` when the program starts.

2. **Adding a Contact:**  
   Takes name & number → stores them at `contacts[count]` → writes to file.

3. **Viewing Contacts:**  
   Displays all saved records sequentially.

4. **Searching:**  
   Uses `strcasecmp()` for case-insensitive search.

5. **Editing:**  
   Locates the contact → overwrites fields → saves file again.

6. **Deleting:**  
   Removes the record → shifts remaining elements → updates file.

---

## 📸 Screenshots

### ➤ Add Contact  
<p align="center">
  <img src="https://raw.githubusercontent.com/PrakashMoharana104/Contact-Book/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-AddContact.png" width="400">
</p>

### ➤ Contact List  
<p align="center">
  <img src="https://raw.githubusercontent.com/PrakashMoharana104/Contact-Book/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-ContactList.png" width="400">
</p>

### ➤ Main Menu  
<p align="center">
  <img src="https://raw.githubusercontent.com/PrakashMoharana104/Contact-Book/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-Mainmenu.png" width="400">
</p>

---

## 🚀 Features

- ➕ Add New Contact  
- 📋 View All Contacts  
- 🔍 Search Contact  
- ✏️ Edit Contact  
- ❌ Delete Contact  
- 💾 File-based permanent storage  

---

## 🛠️ How to Run

### **1️⃣ Compile**
```bash
gcc contact-book.c -o contact-book
```

### **2️⃣ Run**
```bash
./contact-book
```

---

## 🗂️ File Information

| File Name | Description |
|----------|-------------|
| `contact-book.c` | Main program |
| `contacts.dat` | Stores all contacts in binary format |

---

## 📘 Example Output
```
Contact Book Menu:
1. Add Contact
2. View Contacts
3. Search Contact
4. Edit Contact
5. Delete Contact
6. Exit
Enter your choice: 1
Enter name: Prakash
Enter phone number: 7008422011
Contact added successfully!
```

---

## 👨‍💻 Author

**Prakash Maharana**  
📧 Developed as a mini-project using pure C.

### Contact:
- **Personal:** legendviper104@gmail.com  
- **Business:** maharanaprakash104@gmail.com  
- **College:** 250301120351@centurionuniv.edu.in  

---

## 🧾 License
This project is completely open-source.

---

⭐ *If you found this project helpful, consider giving it a star on GitHub!*
