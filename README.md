# Dog Years Calculator 🐶

A simple C++ command-line application that converts a dog's age in human years into equivalent "dog years" based on standard canine growth stages.

## 📌 How It Works

The age calculation follows standard rules for dog growth:
- **First 2 years:** Each year counts as **10.5** human years.
- **After 2 years:** Each additional year counts as **4** human years.

### Formula
- **$\le$ 2 years:** $\text{Human Years} = \text{Dog Age} \times 10.5$
- **> 2 years:** $\text{Human Years} = 21 + (\text{Dog Age} - 2) \times 4$

---

## 🛠️ Requirements

- A C++ compiler (such as `g++`, `clang`, or MSVC)
- C++11 or higher

---

## 🚀 Quick Start

### 1. Clone the Repository
```bash
git clone [https://github.com/YousifHajar/dog-years-project.git](https://github.com/YousifHajar/dog-years-project.git)
cd dog-years-project
