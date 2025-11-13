#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FILE_NAME "contacts.dat"

typedef struct {
    char name[100];
    char phone[15];
} Contact;

Contact contacts[MAX];
int count = 0;

// Load contacts from file
void loadContacts() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file != NULL) {
        fread(&count, sizeof(int), 1, file);
        fread(contacts, sizeof(Contact), count, file);
        fclose(file);
    }
}

// Save contacts to file
void saveContacts() {
    FILE *file = fopen(FILE_NAME, "wb");
    if (file == NULL) {
        printf("Error saving contacts.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(contacts, sizeof(Contact), count, file);
    fclose(file);
}

// Add new contact
void addContact() {
    if (count >= MAX) {
        printf("Contact book is full!\n");
        return;
    }
    printf("Enter name: ");
    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
    contacts[count].name[strcspn(contacts[count].name, "\n")] = 0;

    printf("Enter phone number: ");
    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = 0;

    count++;
    saveContacts();
    printf("Contact added successfully!\n");
}

// Display all contacts
void displayContacts() {
    if (count == 0) {
        printf("No contacts found.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Name: %s, Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

// Search contact by name
void searchContact() {
    char name[100];
    printf("Enter name to search: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(name, contacts[i].name) == 0) {
            printf("Found: Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}

// Edit a contact by name
void editContact() {
    char name[100];
    printf("Enter name of contact to edit: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(name, contacts[i].name) == 0) {
            printf("Editing contact %s\n", contacts[i].name);
            printf("Enter new name: ");
            fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
            contacts[i].name[strcspn(contacts[i].name, "\n")] = 0;

            printf("Enter new phone number: ");
            fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
            contacts[i].phone[strcspn(contacts[i].phone, "\n")] = 0;

            saveContacts();
            printf("Contact updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}

// Delete a contact by name
void deleteContact() {
    char name[100];
    printf("Enter name of contact to delete: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(name, contacts[i].name) == 0) {
            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            saveContacts();
            printf("Contact deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}

int main() {
    loadContacts();

    int choice;
    char buffer[10];
    do {
        printf("\nContact Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Edit Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        fgets(buffer, sizeof(buffer), stdin);
        choice = atoi(buffer);

        switch(choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: editContact(); break;
            case 5: deleteContact(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
    } while(choice != 6);

    return 0;
}
