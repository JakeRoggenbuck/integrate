import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data/out.csv")

x = df["x"]
y = df["y"]
Y = df["Y"]

plt.plot(x, y, color='b', label='y')
plt.plot(x, Y, color='g', label='Y')
plt.show()

print(df)
