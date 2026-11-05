# Pandas Data Analysis — Complete Learning Roadmap

**Level:** Beginner to Advanced
**Language:** Python (Pandas)
**Environment:** VS Code + Jupyter Notebook
**Practice Dataset:** Titanic / Global Food Delivery Dataset

---

## 🎯 Project Goal

এই Project-এর মূল উদ্দেশ্য হলো Pandas ব্যবহার করে একটি Real-World Dataset সম্পূর্ণভাবে বুঝতে, পরীক্ষা করতে, পরিষ্কার করতে এবং বিশ্লেষণ করতে শেখা।

একটি নতুন Dataset হাতে পাওয়ার পর নিজে নিজে যেন বুঝতে পারি:

- Dataset-এ কী কী Data রয়েছে?
- মোট কতটি Row ও Column আছে?
- প্রতিটি Column-এর কাজ কী?
- কোথায় Missing Value রয়েছে?
- কোথায় Duplicate Data রয়েছে?
- কোন Data Type ভুল?
- কোনো Invalid বা Inconsistent Data রয়েছে কি?
- কোন Data Outlier?
- কীভাবে Data Clean করতে হয়?
- কীভাবে Data Analysis করে Insights বের করতে হয়?

**মূলনীতি:**

`Load → Inspect → Investigate → Clean → Validate → Analyze → Visualize → Report`

---

# 📚 Complete Learning Roadmap

## PHASE 01 — Dataset Loading & Understanding

**Goal:** Dataset Load করা এবং Dataset সম্পর্কে প্রাথমিক ধারণা নেওয়া।

### 1.1 Dataset Loading

- [ ] Pandas Import — `import pandas as pd`
- [ ] CSV File Load — `pd.read_csv()`
- [ ] Excel File Load — `pd.read_excel()`
- [ ] JSON File Load — `pd.read_json()`
- [ ] File Path Management
- [ ] Encoding Issues
- [ ] Dataset Successfully Loaded কি না Check

### 1.2 Dataset Overview

- [ ] `df.shape` — Total Rows & Columns
- [ ] `df.size` — Total Elements
- [ ] `df.columns` — Column Names
- [ ] `df.index` — Row Index
- [ ] `df.ndim` — Number of Dimensions
- [ ] `df.empty` — Dataset Empty কি না

### 1.3 Data Inspection

- [ ] `df.head()` — First 5 Rows
- [ ] `df.tail()` — Last 5 Rows
- [ ] `df.sample()` — Random Rows
- [ ] `df.info()` — Dataset Information
- [ ] `df.dtypes` — Column Data Types
- [ ] `df.describe()` — Statistical Summary
- [ ] `df.describe(include="all")` — All Column Summary

### 1.4 Column Understanding

- [ ] প্রতিটি Column-এর Meaning বোঝা
- [ ] Numeric Columns শনাক্ত করা
- [ ] Categorical Columns শনাক্ত করা
- [ ] DateTime Columns শনাক্ত করা
- [ ] Identifier Columns শনাক্ত করা
- [ ] Target/Label Columns শনাক্ত করা

**Expected Result:** Dataset-এর সম্পূর্ণ Structure ও Column সম্পর্কে পরিষ্কার ধারণা তৈরি হবে।

---

## PHASE 02 — Data Quality Assessment

**Goal:** Dataset-এর কোথায় কী সমস্যা রয়েছে তা শনাক্ত করা।

### 2.1 Missing Value Analysis

- [ ] `df.isnull()`
- [ ] `df.isna()`
- [ ] `df.notna()`
- [ ] `df.isnull().sum()`
- [ ] Column-wise Missing Count
- [ ] Missing Percentage
- [ ] Missing Value Rows Display
- [ ] Missing Value Pattern Analysis

### 2.2 Duplicate Analysis

- [ ] `df.duplicated()`
- [ ] `df.duplicated().sum()`
- [ ] `df[df.duplicated(keep=False)]`
- [ ] Duplicate Rows Identification
- [ ] Duplicate Identifier Check
- [ ] Duplicate Records Analysis

### 2.3 Unique & Categorical Value Analysis

- [ ] `df.unique()`
- [ ] `df.nunique()`
- [ ] `df.value_counts()`
- [ ] `df["column"].value_counts()`
- [ ] Category Frequency Analysis
- [ ] Inconsistent Category Detection

### 2.4 Numerical Data Analysis

- [ ] `mean()` — Average
- [ ] `median()` — Middle Value
- [ ] `mode()` — Most Frequent Value
- [ ] `min()` — Minimum
- [ ] `max()` — Maximum
- [ ] `std()` — Standard Deviation
- [ ] `var()` — Variance
- [ ] `quantile()` — Percentiles
- [ ] `skew()` — Skewness
- [ ] `kurt()` — Kurtosis

### 2.5 Outlier Detection

Outlier হলো এমন একটি Data Value, যা Dataset-এর অন্যান্য Values থেকে উল্লেখযোগ্যভাবে আলাদা।

#### A. IQR Method

- [ ] Q1 — First Quartile
- [ ] Q3 — Third Quartile
- [ ] IQR Calculation
- [ ] Lower Bound
- [ ] Upper Bound
- [ ] Outlier Identification
- [ ] Boxplot Analysis

Formula:

`IQR = Q3 - Q1`

`Lower Bound = Q1 - 1.5 × IQR`

`Upper Bound = Q3 + 1.5 × IQR`

#### B. Z-Score Method

- [ ] Mean Calculation
- [ ] Standard Deviation Calculation
- [ ] Z-Score Calculation
- [ ] Positive Z-Score
- [ ] Negative Z-Score
- [ ] Outlier Identification
- [ ] Z-Score Threshold Analysis

Formula:

`Z = (X - μ) / σ`

Where:

- X = Individual Data Value
- μ = Mean
- σ = Standard Deviation

সাধারণভাবে:

`|Z-Score| > 3` হলে Potential Outlier হিসেবে Flag করা হয়।

**Note:** Z-Score সাধারণত Approximately Normal Distribution-এর Numeric Data-তে বেশি কার্যকর। IQR Skewed Data-তে তুলনামূলকভাবে Robust। কোনো Outlier পেলেই তা Delete করা যাবে না।

### 2.6 Invalid & Inconsistent Data Detection

- [ ] Negative Values Check
- [ ] Impossible Values Check
- [ ] Wrong Date Check
- [ ] Incorrect Numeric Values
- [ ] Inconsistent Text Values
- [ ] Extra Spaces
- [ ] Unexpected Categories
- [ ] Domain Rule Validation

### 2.7 Data Visualization for Inspection

- [ ] Histogram
- [ ] Boxplot
- [ ] Bar Chart
- [ ] Distribution Plot
- [ ] Outlier Visualization

**Expected Result:** Dataset-এর সব গুরুত্বপূর্ণ সমস্যা শনাক্ত করে একটি Data Quality Report তৈরি করা।

---

## PHASE 03 — Data Cleaning

**Goal:** Phase 02-তে পাওয়া সমস্যাগুলো যাচাই করে সমাধান করা।

### 3.1 Missing Value Handling

- [ ] `dropna()`
- [ ] `fillna()`
- [ ] Mean Imputation
- [ ] Median Imputation
- [ ] Mode Imputation
- [ ] Forward Fill
- [ ] Backward Fill
- [ ] Interpolation

### 3.2 Duplicate Handling

- [ ] `drop_duplicates()`
- [ ] Duplicate Row Removal
- [ ] Duplicate ID Handling
- [ ] Keep First / Last Record

### 3.3 Data Type Conversion

- [ ] `astype()`
- [ ] `pd.to_numeric()`
- [ ] `pd.to_datetime()`
- [ ] String to Numeric
- [ ] Object to DateTime
- [ ] Correct Data Type Selection

### 3.4 Text Cleaning

- [ ] `str.strip()`
- [ ] `str.lower()`
- [ ] `str.upper()`
- [ ] `str.title()`
- [ ] `str.replace()`
- [ ] Text Standardization

### 3.5 Outlier Handling

- [ ] Outlier Verification
- [ ] Keep Valid Outliers
- [ ] Remove Confirmed Invalid Records
- [ ] Capping / Winsorization
- [ ] Transformation
- [ ] IQR-based Handling
- [ ] Z-Score-based Handling

### 3.6 Row & Column Cleaning

- [ ] `drop()`
- [ ] `rename()`
- [ ] `replace()`
- [ ] `set_axis()`
- [ ] Unnecessary Column Removal
- [ ] Column Name Standardization

**Expected Result:** একটি Cleaned Dataset তৈরি হবে। Original Dataset অপরিবর্তিত থাকবে।

---

## PHASE 04 — Data Validation & Manipulation

**Goal:** Cleaning-এর পর Data সঠিক আছে কি না যাচাই এবং Data নিয়ে কাজ করা।

### 4.1 Data Validation

- [ ] Missing Value Recheck
- [ ] Duplicate Recheck
- [ ] Data Type Recheck
- [ ] Invalid Value Recheck
- [ ] Outlier Recheck
- [ ] Before vs After Comparison

### 4.2 Data Selection & Indexing

- [ ] Column Selection
- [ ] Multiple Column Selection
- [ ] `loc[]`
- [ ] `iloc[]`
- [ ] Row Selection
- [ ] Column Selection by Condition

### 4.3 Filtering & Sorting

- [ ] Conditional Filtering
- [ ] Multiple Conditions
- [ ] `query()`
- [ ] `isin()`
- [ ] `between()`
- [ ] `sort_values()`
- [ ] `sort_index()`

### 4.4 Creating & Modifying Columns

- [ ] New Column Creation
- [ ] Arithmetic Operations
- [ ] `map()`
- [ ] `apply()`
- [ ] Lambda Function
- [ ] `assign()`
- [ ] `where()`
- [ ] `mask()`

### 4.5 Grouping & Aggregation

- [ ] `groupby()`
- [ ] `sum()`
- [ ] `mean()`
- [ ] `median()`
- [ ] `count()`
- [ ] `nunique()`
- [ ] `agg()`
- [ ] `transform()`

### 4.6 Combining Data

- [ ] `merge()`
- [ ] `join()`
- [ ] `concat()`
- [ ] Inner Join
- [ ] Left Join
- [ ] Right Join
- [ ] Outer Join

### 4.7 Reshaping Data

- [ ] `pivot()`
- [ ] `pivot_table()`
- [ ] `melt()`
- [ ] `stack()`
- [ ] `unstack()`

**Expected Result:** Dataset থেকে প্রয়োজন অনুযায়ী যেকোনো Data Extract, Filter ও Transform করতে পারব।

---

## PHASE 05 — Exploratory Data Analysis (EDA)

**Goal:** Cleaned Dataset থেকে গুরুত্বপূর্ণ Information ও Insights বের করা।

### 5.1 Univariate Analysis

- [ ] Single Column Analysis
- [ ] Distribution Analysis
- [ ] Frequency Analysis
- [ ] Mean, Median, Mode
- [ ] Histogram
- [ ] Boxplot

### 5.2 Bivariate Analysis

- [ ] Two Column Relationship
- [ ] Numeric vs Numeric
- [ ] Numeric vs Categorical
- [ ] Categorical vs Categorical
- [ ] Scatter Plot
- [ ] Correlation

### 5.3 Multivariate Analysis

- [ ] Multiple Column Analysis
- [ ] Correlation Matrix
- [ ] Heatmap
- [ ] Pairplot
- [ ] Feature Relationships

### 5.4 Statistical Analysis

- [ ] Descriptive Statistics
- [ ] Correlation
- [ ] Covariance
- [ ] Distribution
- [ ] Trend Analysis

### 5.5 Data Visualization

- [ ] Matplotlib
- [ ] Seaborn
- [ ] Bar Chart
- [ ] Line Chart
- [ ] Histogram
- [ ] Boxplot
- [ ] Scatter Plot
- [ ] Heatmap
- [ ] Pie Chart

**Expected Result:** Dataset সম্পর্কে গুরুত্বপূর্ণ Patterns, Trends ও Business Insights বের করতে পারব।

---

## PHASE 06 — Final Project & Reporting

**Goal:** সম্পূর্ণ Data Analysis Project তৈরি করা।

- [ ] Dataset Description
- [ ] Data Quality Report
- [ ] Missing Value Report
- [ ] Duplicate Report
- [ ] Outlier Report
- [ ] Data Cleaning Summary
- [ ] Before vs After Comparison
- [ ] Exploratory Data Analysis
- [ ] Visualization Dashboard
- [ ] Important Findings
- [ ] Business Recommendations
- [ ] Cleaned CSV Export
- [ ] Final Analysis Report

---

# 🔍 IQR vs Z-Score — Quick Reference

| বিষয়                | IQR              | Z-Score                         |
| ------------------- | ---------------- | ------------------------------- |
| ভিত্তি              | Quartiles        | Mean & Standard Deviation       |
| Normal Distribution | প্রয়োজন নেই      | Approximately Normal হলে ভালো   |
| Skewed Data         | ভালো             | সতর্কতা প্রয়োজন                 |
| Outlier Threshold   | 1.5 × IQR        | সাধারণত Absolute Z > 3          |
| Sensitivity         | তুলনামূলক Robust | Extreme Values-এ বেশি Sensitive |

**কোন Column-এ ব্যবহার করব?**

- Continuous Numeric Column: Age, Fare, Price, Delivery Time ইত্যাদি।
- Identifier: Passenger ID, Order ID — সাধারণত নয়।
- Binary/Categorical Column: Survived, Gender, Payment Method — নয়।

---

# ⚠️ Important Rules

1. Original Dataset কখনো সরাসরি Modify করব না।
2. Cleaning-এর আগে সব Data Inspect করব।
3. Missing Value মানেই ভুল Data নয়।
4. Duplicate Row ও Duplicate ID এক জিনিস নয়।
5. Outlier মানেই ভুল Data নয়।
6. IQR ও Z-Score সব Column-এ ব্যবহার করা যাবে না।
7. Cleaning করার পর আবার Data Validation করব।
8. প্রতিটি Cleaning Decision-এর কারণ লিখে রাখব।
9. Analysis-এর আগে Dataset-এর Column Meaning বুঝব।
10. প্রতিটি Operation নিজে Code লিখে Practice করব।

---

# 📁 Recommended Project Structure

```text
Pandas-Data-Analysis/
│
├── datasets/
│   ├── raw/
│   │   └── original_dataset.csv
│   │
│   └── processed/
│       └── cleaned_dataset.csv
│
├── notebooks/
│   └── pandas_learning.ipynb
│
├── reports/
│   ├── data_quality_report.csv
│   └── analysis_report.md
│
├── README.md
└── requirements.txt
```

---

# 🎓 Learning Method

প্রতিটি Topic নিচের পদ্ধতিতে শিখব:

1. **Definition:** বিষয়টি কী?
2. **Purpose:** কেন ব্যবহার করা হয়?
3. **Syntax:** Code কীভাবে লিখতে হয়?
4. **Parameter:** প্রতিটি Parameter-এর কাজ কী?
5. **Example:** ছোট Dataset দিয়ে বোঝা।
6. **Practical:** আমাদের Real Dataset-এ ব্যবহার।
7. **Output Analysis:** Output-এর অর্থ বোঝা।
8. **Problem Solving:** নিজে Practice করা।
9. **Validation:** কাজটি সঠিক হয়েছে কি না পরীক্ষা।

## Final Goal

Pandas শেষ করার পর যেন আমি:

- যেকোনো CSV বা Excel Dataset Load করতে পারি।
- নতুন Dataset-এর প্রতিটি Column বুঝতে পারি।
- Data Quality Problems খুঁজে বের করতে পারি।
- Missing, Duplicate ও Invalid Data Handle করতে পারি।
- IQR ও Z-Score ব্যবহার করে Outlier Detect করতে পারি।
- Dataset Clean ও Validate করতে পারি।
- Advanced Pandas Operations ব্যবহার করতে পারি।
- EDA করে Meaningful Insights বের করতে পারি।
- একটি সম্পূর্ণ Data Analysis Project তৈরি করতে পারি।

**আমাদের Learning Principle:**

`Understand First → Inspect Everything → Identify Problems → Clean Carefully → Validate Again → Analyze → Report`

**এটাই হবে আমাদের Pandas Data Analysis Learning Roadmap।**
