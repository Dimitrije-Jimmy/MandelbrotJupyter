#include <iostream>
//#include <fstream>
#include <opencv2/opencv.hpp>

//using namespace std;

int main() {
    int max_iteration = 1000;
    int dimension;
    dimension = 100;

    // Create a matrix (example data)
    cv::Mat matrix = cv::Mat::zeros(dimension, dimension, CV_8UC1); // Assuming grayscale image

    
    float x_min = -2.00;
    float x_max =  0.47;
    float y_min = -1.12;
    float y_max =  1.12;
    
    int splits = 4;
    float x_step = (x_max - x_min) / splits;
    float y_step = (y_max - y_min) / splits;

    // Add some data to the matrix (for demonstration)
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.cols; ++j) {

            int value;
            value = worker();

            matrix.at<uchar>(i, j) = value % 256; // Some arbitrary grayscale values
        }
    }

    printingMatrix(matrix);

    // Apply colormap
    cv::Mat colored_matrix;
    cv::applyColorMap(matrix, colored_matrix, cv::COLORMAP_JET); // You can use different colormaps
    
    // Display the image
    cv::imshow("Colored Matrix", colored_matrix);
    cv::waitKey(0);
    cv::destroyAllWindows();


    return 0;
}

int worker(int Px, int Py, int max_iteration) {
    float x, y = 0;
    int iteration = 0;

    while (((x*x + y*y) <= 4) && (iteration < max_iteration)) {
        float xtemp;
        xtemp = x*x - y*y + Px;
        y = 2*x*y + Py;
        x = xtemp; 
        iteration++;
    };

    return iteration;
}

void printingMatrix(int arr) {
    int i,j;
	
	std::cout << "Printing a 2D Array:" << std::endl;

	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			std::cout<<"\t" << arr[i][j];
		}
		std::cout << std::endl;
	}
}

/*

fstream myfile;

myfile.open("example.txt",fstream::out);

for (int j=0; j< 3;j++)// Prints row of x
{        
    myfile << x[j]<< "\t";  
}

myfile<< std::endl;

for (int i=0; i< 3;i++) //This variable is for each row below the x 
{        
    myfile << y[i]<< "\t";

    for (int j=0; j<3;j++)
    {                      
        myfile << z[i][j] << "\t";
    }
    myfile<<std::endl;
}
myfile.close();
*/


// g++ "Mandelbrot.cpp" -o "Mandelbrot.exe"