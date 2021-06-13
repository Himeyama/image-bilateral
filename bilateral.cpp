#include <opencv2/opencv.hpp>

bool bilateral(char* src_file, char* dst_file, int d, double sigmaColor, double sigmaSpace){
    cv::Mat src = cv::imread(src_file);
    cv::Mat dst = src.clone();
    cv::bilateralFilter(src, dst, d, sigmaColor, sigmaSpace);
    cv::imwrite(dst_file, dst);
    return true;
}

int main(int argc, char *argv[]){
    if(argc == 6){
        int d = std::stoi(argv[3]);
        int sigmaColor = std::stod(argv[4]);
        int sigmaSpace = std::stod(argv[5]);
        bilateral(argv[1], argv[2], d, sigmaColor, sigmaSpace);
    }else if(argc == 1)
        std::cout << "使用法: " << argv[0] << " <入力ファイル> <出力ファイル> <ピクセル近傍領域の直径> <色空間におけるフィルターシグマ> <座標空間におけるフィルターシグマ>" << std::endl;
    else{
        std::cerr << "エラー: 問題が発生しました" << std::endl;   
        exit(EXIT_FAILURE);
    }
    
    return 0;
}
