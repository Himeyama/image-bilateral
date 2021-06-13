# image-bilateral
画像にバイラテラルフィルター(エッジ保存平滑化フィルター)を掛けるコマンド。

ImageMagick の最新版や GIMP の G'MIC でもバイラテラルフィルター掛けられるそうなので、
そっちがいいかも。

## インストール

### 依存

    $ sudo apt install libopencv-dev

### ビルド & インストール

    $ make
    $ sudo cp bilateral /usr/local/bin

## 使用法

    $ bilateral <入力ファイル> <出力ファイル> <ピクセル近傍領域の直径> <色空間におけるフィルターシグマ> <座標空間におけるフィルターシグマ>

### 例

    $ ./bilateral Parrots.jpg out.png 10 50 50

- 入力画像 [Parrots.jpg](Parrots.jpg)

    ![Parrots.jpg](Parrots.jpg)

- 出力画像 [out.png](out.png)

    ![out.png](out.png)

### 詳細
- https://docs.opencv.org/master/d4/d86/group__imgproc__filter.html#ga9d7064d478c95d60003cf839430737ed (英語)
- http://opencv.jp/opencv-2svn/cpp/imgproc_image_filtering.html (日本語)

