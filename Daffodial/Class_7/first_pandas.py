
import pandas as pd

data = {
    "Name": ["Dewan", "Rahim", "Karim", "Sakib"],
    "Age": [21, 22, 20, 23],
    "Marks": [85, 90, 78, 95]
}

df = pd.DataFrame(data)

print(df)

print("Average Marks:", df["Marks"].mean())
