# 💰 BudgetBuddy

**BudgetBuddy** is a desktop financial management application built using **C++**, **Qt Widgets**, and **SQLite**. It empowers users to track income and expenses, set monthly savings goals, and visualize financial data with interactive charts — all in one intuitive interface.

---

## 🚀 Features

### 🔐 User Authentication
- **Login** — Secure login using username and password.
- **Signup** — Register with validation for strong passwords.
- **Forgot Password** — Recover access via username-based reset.
- **Change Password** — Option to update password from profile.

### 🏠 Dashboard (Home Page)
- Central navigation hub:
  - Add / View Transactions
  - Set Monthly Goals
  - Analyze Reports
  - Profile & Logout

### 💼 Profile Management
- View and manage user profile
- Change password securely
- Logout from session

### 💸 Transactions Manager
- Add income or expense records:
  - Date, Category, Type (Income/Expense), Amount, Remarks
- View all transactions and goals together
- Filter entries by **type**, **category**, or **date range**

### 👁️ View Transactions
- Separate, streamlined view for browsing historical transactions
- Advanced filtering and sorting options

### 🎯 Monthly Goals
- Set monthly spending limits
- Tracked in the `monthly_goals` table
- Real-time progress checking during expense entry

### 📊 Financial Reports
- Analyze by selecting **month & year**:
  - Total Income / Expenses
  - Monthly Goal & Remaining Budget
  - Visual Pie Chart by Expense Category
  - Red alert if expenses exceed goal
- Built with **Qt Charts**

---

## 🛠️ Tech Stack

| Component    | Technology       |
|--------------|------------------|
| Language     | C++              |
| UI Framework | Qt 5 Widgets     |
| Database     | SQLite           |
| Charts       | Qt Charts Module |
| Build Tool   | CMake            |

---

## 🗃️ Database Schema

### `users`
| Field    | Type                |
|----------|---------------------|
| id       | INTEGER PRIMARY KEY |
| username | TEXT                |
| password | TEXT                |

### `transactions`
| Field    | Type                   |
|----------|------------------------|
| id       | INTEGER PRIMARY KEY    |
| user_id  | INTEGER                |
| date     | TEXT                   |
| category | TEXT                   |
| type     | TEXT (Income/Expense)  |
| amount   | REAL                   |
| remarks  | TEXT                   |

### `monthly_goals`
| Field    | Type                |
|----------|---------------------|
| id       | INTEGER PRIMARY KEY |
| user_id  | INTEGER             |
| month    | INTEGER             |
| year     | INTEGER             |
| amount   | REAL                |

---

## 📁 Project Structure

```
BudgetBuddy/
├── main.cpp
├── mainwindow.cpp/h/ui
├── login.cpp/h/ui
├── signup.cpp/h/ui
├── forgotpassword.cpp/h
├── changepassword.cpp/h
├── homepage.cpp/h/ui
├── transactions.cpp/h/ui
├── viewtransactions.cpp/h
├── monthlygoals.cpp/h/ui
├── analyzereport.cpp/h/ui
├── profilepage.cpp/h/ui
├── databasemanager.cpp/h
├── resources.qrc
├── *.ui                # Qt Designer UI files
├── blob.png            # UI Asset
└── BudgetBuddy.db      # SQLite Database
```

---

## 🏗️ How to Build

1. **Install Qt 5** (including QtCharts and Qt Creator).
2. Clone the repository:
   ```bash
   git clone https://github.com/aasishhumagain/BudgetBuddy_test
   cd BudgetBuddy_test
   ```
3. Build with Qt Creator **or** manually:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ./BudgetBuddy_test
   ```

---

## 📸 Screenshots

| Screen           | Description                           |
|------------------|---------------------------------------|
| Login            | Secure user authentication            |
| Signup           | Register with password validation     |
| Forgot Password  | Recover access with username          |
| Change Password  | Update credentials from profile       |
| Home Page        | Navigate across all modules           |
| Transactions     | Add/view with filters and goal view   |
| View Transactions| Search and filter past entries        |
| Monthly Goals    | Set spending targets per month        |
| Analyze Report   | Visual reports with pie charts        |
| Profile Page     | Manage personal profile & logout      |

---

# 🧑‍💻 Developed by the BudgetBuddy Team ❤️
