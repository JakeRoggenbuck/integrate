import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data/out.csv")

x = df["x"]
y = df["y"]
yprime = df["y'"]

plt.plot(x, y, color='b', label='y')
plt.plot(x, yprime, color='g', label='yprime')
plt.show()

print(df)
