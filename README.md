# 💰 BudgetBuddy

**BudgetBuddy** is a desktop financial management application built using **C++**, **Qt Widgets**, and **SQLite**. The app helps users manage their finances by tracking transactions, setting monthly budgeting goals, and visualizing spending using charts.

---

## 🚀 Features

### 🔐 User Authentication
- **Login Page** – User can log in using username and password.
- **Signup Page** – New users can register with just a username and password.
- **Forgot Password** – Users can reset their password by entering their username and a new password.

### 🏠 Home Page
- Main dashboard with navigation buttons to:
  - Add/View Transactions
  - Set Monthly Goals
  - Analyze Report
  - Logout

### 💸 Transactions Page
- Add income or expense entries with:
  - Date
  - Category
  - Amount
- View list of all transactions **combined with monthly goals**.
- Filter by **month** to view specific entries.

### 🎯 Monthly Goals Page
- Set monthly spending targets per category.
- Stored in the `monthly_goals` table.

### 📊 Analyze Report Page
- View a **pie chart** comparing total income and expenses.
- Filter by **month** and **year**.
- Uses **QtCharts** for rendering the chart.

---

## 🛠 Tech Stack

| Component     | Technology     |
|---------------|----------------|
| Programming   | C++            |
| UI Framework  | Qt 5 (Widgets) |
| Database      | SQLite         |
| Charts        | Qt Charts      |
| Build System  | CMake          |

---

## 🗃️ Database Schema

### `users`
| Field     | Type              |
|-----------|-------------------|
| id        | INTEGER PRIMARY KEY |
| username  | TEXT              |
| password  | TEXT              |

### `transactions`
| Field     | Type              |
|-----------|-------------------|
| id        | INTEGER PRIMARY KEY |
| user_id   | INTEGER           |
| date      | TEXT              |
| category  | TEXT              |
| type      | TEXT (Income/Expense) |
| amount    | REAL              |

### `monthly_goals`
| Field     | Type              |
|-----------|-------------------|
| id        | INTEGER PRIMARY KEY |
| user_id   | INTEGER           |
| month     | INTEGER           |
| year      | INTEGER           |
| category  | TEXT              |
| amount    | REAL              |

---

## 📁 Project Structure

```
BudgetBuddy/
├── main.cpp
├── login.cpp/h
├── signup.cpp/h
├── homepage.cpp/h
├── transactions.cpp/h
├── monthlygoals.cpp/h
├── analyzereport.cpp/h
├── forgotpassword.cpp/h
├── DatabaseManager.cpp/h
├── *.ui (All Qt UI form files)
└── BudgetBuddy.db
```

---

## 🏗️ How to Build

1. **Install Qt 5 (with Qt Creator and QtCharts module)**
2. Clone this repository:
   ```bash
   git clone https://github.com/aasishhumagain/BudgetBuddy_test
   cd BudgetBuddy_test
   ```
3. Open with Qt Creator or build manually with:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ./BudgetBuddy_test
   ```

---

## 📸 UI Screens (Implemented)

| Screen          | Description                        |
|-----------------|------------------------------------|
| Login           | Username + password login          |
| Signup          | New user registration              |
| Forgot Password | Password reset using username      |
| Home Page       | Dashboard with navigation buttons  |
| Transactions    | Add/view entries, view goals too   |
| Monthly Goals   | Set and save monthly targets       |
| Analyze Report  | Pie chart with filters             |

---

## ⚠️ Known Issues

- Analyze Report may crash if data is not available or DB query fails.
- Passwords are stored in plaintext – not secure for production.
- Basic input validation only.

---

## 🌱 Future Plans

- Encrypt stored passwords.
- Add export to PDF for reports.
- Implement category-based chart filtering.
- Improve error dialogs and validation.
