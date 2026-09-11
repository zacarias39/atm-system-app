# 🏧 ATM System

A command-line **ATM and banking system built in C**.

This project was created to practice fundamental programming concepts by simulating some of the core operations performed by a real ATM system.

Instead of building isolated exercises, I wanted to challenge myself to create a larger program where different features work together as part of a complete system.

---

## 💡 Why This Project Exists

When learning C, it's easy to practice concepts through small programs.

But I wanted to go further.

I wanted to build something that required me to think about:

- How different parts of a program communicate
- How to organize a larger C project
- How to manage user information
- How to store and retrieve data
- How to separate functionality into different source files
- How real-world systems handle operations such as deposits and withdrawals

The result was this **ATM System**.

The project simulates a basic banking environment where users can interact with their accounts and perform common ATM operations.

---

## ✨ Features

The application includes functionality for:

- 👤 User registration
- 🏦 Account management
- 💰 Checking account balances
- 📥 Depositing money
- 📤 Withdrawing money
- 📄 Viewing account information
- ⚙️ Accessing banking services

---

## 🧠 What I Learned

Building this project helped me practice and better understand:

- 🟦 **C Programming**
- 🧠 **Problem Solving**
- 📁 **File Handling**
- 💾 **Data Storage**
- 🧩 **Functions**
- 🔗 **Pointers**
- 🏗️ **Program Structure**
- 📦 **Header Files**
- 🔄 **Control Flow**
- 🐛 **Debugging**
- 🧹 **Code Organization**

One of the biggest challenges was learning how to organize a project into multiple files instead of writing everything inside a single `main.c`.

---

## 📂 Project Structure

```text
atm-system-app/
│
├── includes/
│   └── Header files
│
├── srcs/
│   ├── main.c
│   ├── atm.c
│   ├── register.c
│   ├── account_info.c
│   ├── balance.c
│   ├── deposit.c
│   ├── withdrawal.c
│   ├── services.c
│   ├── function.c
│   └── color.c
│
├── users/
│   └── User data
│
├── id/
│   └── Account or identification data
│
└── phones/
    └── Phone-related data
```

The project is organized by functionality, with different source files handling different responsibilities.

---

## 🛠️ Technologies

- **C**
- **GCC**
- **Linux**
- **File I/O**

---

## 🚀 Getting Started

### Clone the repository

```bash
git clone https://github.com/zacarias39/atm-system-app.git
```

### Navigate into the project

```bash
cd atm-system-app
```

### Compile the project

Depending on your environment and project configuration, compile the source files using GCC:

```bash
gcc srcs/*.c -o atm
```

### Run the application

```bash
./atm
```

---

## 🎯 Project Goal

The main goal of this project was not to create a real banking application.

It was to use a realistic problem to practice fundamental programming concepts.

Building the ATM System allowed me to move beyond small exercises and start thinking about:

> **How do you structure a program when it starts becoming bigger?**

That question became one of the most valuable lessons from this project.

---

## ⚠️ Disclaimer

This is an educational project and **not a real banking system**.

It should not be used to manage real financial information or money.

---

## 🔮 Possible Improvements

Future versions could include:

- 🔐 Password encryption
- 👥 User authentication
- 🗄️ Database integration
- 📊 Transaction history
- 💸 Money transfer between accounts
- 🧾 Transaction receipts
- 🖥️ A graphical user interface
- 🌐 A web-based version

---

## 👨‍💻 Author

**Zacarias Casimiro**
---

> **Small projects teach syntax.**
>
> **Building systems teaches programming.** 🚀
