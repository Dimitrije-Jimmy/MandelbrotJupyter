# Mandelbrot Set Calculator

This project is a Python-based Mandelbrot Set Calculator developed within a Jupyter Notebook environment. The main objective was to calculate and visualize the Mandelbrot set with high detail without relying on any pre-built calculators. To achieve this, Python multithreading was utilized to enhance the performance and detail level beyond what could be achieved with simple matrix operations or NumPy alone.

## Features

- **Mandelbrot Set Calculation**: Computes the Mandelbrot set using custom Python code.
- **Multithreading**: Optimizes the computation by leveraging Python's multithreading capabilities, allowing for more detailed visualizations.
- **Jupyter Notebook**: The entire project, including code and visualizations, is contained within a single Jupyter Notebook, making it easy to modify and experiment with.

## Getting Started

### Prerequisites

- Python 3.x
- Jupyter Notebook
- NumPy
- Matplotlib

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Dimitrije-Jimmy/MandelbrotJupyter.git
   cd mandelbrot-set-calculator
2. Install the required libraries:
   ```bash
   pip install numpy matplotlib jupyter
3. Launch the Jupyter Notebook:
   ```bash
   jupyter notebook MandelbrotJupyter2.ipynb

### Usage

* Open the MandelbrotJupyter2.ipynb file in Jupyter Notebook.
* Run the cells sequentially to compute and visualize the Mandelbrot set.
* Modify the parameters to explore different levels of detail and performance using multithreading.

## Multithreading

To speed up the computation, I used Python’s multithreading to divide the workload across multiple threads. This allows for more detailed and faster calculations, especially for large matrices.
I also split up the set in multiple segments and stitched the results together

## Future Updates

Did the project with intent of learning to use Jupyter Notebooks for fun.
Will revisit and utilise C++ and better tools for faster computation and make it render real time while zooming in and out.

## License
This project is licensed under the MIT License - see the [LICENSE](https://opensource.org/license/mit) file for details.

## Acknowledgements
* Benoît B. Mandelbrot for the discovery of the Mandelbrot set.
* The Python community for the tools and libraries that made this project possible.
