# 📒 Contact Book in C

A simple **Contact Book Application** built using **C language**.  
This project allows users to **add, view, search, edit, and delete** contacts.  
All contact information is stored **persistently** using file handling (`contacts.dat`).

---

## 🚀 Features

- 🧑‍🤝‍🧑 **Add New Contact** – Save name and phone number  
- 📋 **View All Contacts** – Display the list of saved contacts  
- 🔍 **Search Contact** – Find a contact by name  
- ✏️ **Edit Contact** – Update an existing contact’s name or phone number  
- ❌ **Delete Contact** – Remove a contact from the list  
- 💾 **Persistent Storage** – Data is saved in a binary file (`contacts.dat`)  

---

## 🧠 Concepts Used

- Structures (`struct`)
- File handling (`fopen`, `fread`, `fwrite`)
- Arrays
- String functions (`fgets`, `strcasecmp`, `strcspn`)
- Menu-driven programming

---
## 📸 Screenshots
----
- ![images alt] (https://github.com/PrakashMoharana104/Contact-Book/blob/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-Mainmenu.png)
- ![images alt] (https://github.com/PrakashMoharana104/Contact-Book/blob/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-ContactList.png)
- ![images alt] (https://github.com/PrakashMoharana104/Contact-Book/blob/530af1dfe0fe76036b3c9c61401f439522ff5e72/Screenshots/CONTACTBOOK-AddContact.png)

## 🛠️ How to Run

### **1️⃣ Compile the program**
```bash
gcc contact-book.c -o contact-book
```

### **2️⃣ Run the executable**
```bash
./contact-book
```

---

## 🗂️ File Information

| File Name | Description |
|------------|-------------|
| `contact-book.c` | Main source code |
| `contacts.dat` | Binary file used to store contact data |

---

## 📸 Example Output

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
📧 *Developed as a mini project using pure C language.*

---

## 🧾 License

This project is open-source .

---

⭐ *If you found this project helpful, consider giving it a star on GitHub!*  
