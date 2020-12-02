# CodingChallangeUlak

* This project was held in visual studio 2017.

## Getting Started

* First of all, we need to download the project and run it on our computer.
* After running it, We need to enter the command line arguments correctly.
#### 1. First argument; 
```sh
cli –index path_to_library
```
* After entering this argument, The program accesses all .txt files in the library file you have supplied. It takes all the words in the .txt files it accesses and maps it by      applying inverted index. It then saves all the words in the map by creating a database named result.txt. Each word in the Result.txt is recorded how many times it is used in  which   file.

<br>

#### 2. Second argument; 
```sh
cli –search some_word
```
* After entering this argument, the program goes to the database it created previously, maps all the information found there and then searches for the entered word. Returns each result with the file paths and the number of times it was used in the .txt file.

#### Note
* 

## Test

* GoogleTest was used in testing this program. 
* I wrote five different tests.

## Sample Screenshot

![Screenshot1](https://user-images.githubusercontent.com/39926184/100775378-3fd75900-3414-11eb-93df-a4af3758b241.png)

<hr>

![ScreenShot2](https://user-images.githubusercontent.com/39926184/100775723-b4aa9300-3414-11eb-9b28-9a5c436f0a03.png)

<hr>

![ScreenShot3](https://user-images.githubusercontent.com/39926184/100775752-becc9180-3414-11eb-8b00-b8603d56b3b9.png)

<hr>

![test](https://user-images.githubusercontent.com/39926184/100798697-0cf18d00-3435-11eb-9fb7-ee3144795796.png)
