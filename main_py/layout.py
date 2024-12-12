import pyswarms as ps
import numpy as np
import matplotlib.pyplot as plt

import sys
from PyQt6.QtWidgets import QApplication, QWidget, QPushButton

def objectiveFunction(x):
    return np.sum(x**2, axis = 1)
def optimization():
    options = {"c1": 0.5,
           "c2": 0.3,
           "w": 0.9}
    optimizer = ps.single.GlobalBestPSO(n_particles = 50, dimensions = 20, options = options)

    bestCost, bestPos = optimizer.optimize(objectiveFunction, iters = 100)

    costHistory = optimizer.cost_history

    plt.plot(costHistory)

    plt.xlabel("Iteration")

    plt.ylabel("Cost")

    plt.title("PSO Convergence for Minimizing Sum of Squares")

    plt.grid(True)

    plt.show()

def main():
    app = QApplication(sys.argv)

    window = QWidget()
    window.setWindowTitle("PyQt6入门")
    window.setGeometry(100, 100, 300, 200)

    button = QPushButton("点击我", window)
    button.setGeometry(100, 70, 100, 30)
    button.clicked.connect(optimization)

    window.show()

    sys.exit(app.exec())

if __name__ == "__main__":
    main()