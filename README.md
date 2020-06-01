# bucket-comb-sort

Laboratory work in the discipline "Technology of resource management in programming supercomputers".

---

## Task

According to the assignment, there is an unsorted array of N random integers, where the number of array elements is much larger than the permissible memory capacity of one supercomputer computational node. It is necessary to organize parallel sorting of this array by the algorithm indicated in the table with the options, on K nodes of the supercomputer, provided that on each node the region M of RAM is allocated for this application less than the total number of elements in the array.

For direct sorting of a data block on a node, the comb sorting algorithm in the C ++ programming language should be applied.

Parallel sorting on a node should be carried out using OpenMP, and for sorting elements between blocks of different nodes, information should be transmitted using MPI.

Therefore, the compiler used should work in MPI / OpenMP hybrid mode.

Input data for N numbers can be generated or entered from a file prepared in advance.

Sort nodes to produce bucket sorting algorithm.

---

## Fulfillment requirements

1. Lab work should be performed using the current OpenMP specification (5.0) and the MPI API documentation (4.0.x). This assumes that the latest version of the MPI compiler and implementation is used [See](https://clang.llvm.org/docs/OpenMPSupport.html#openmp-implementation-details).<br/>

2. The code should contain a comment regarding the choice of pragmas.<br/>

3. The use of the new LLVM / Clang pragmas to perform loop transformations is welcome [See](https://lists.llvm.org/pipermail/cfe-dev/2018-May/058141.html).<br/>

---

## Dependencies

- GCC [8.x.x]
- CMake [3.2.x]
- GoogleTest
- OpenMP [5.0]
- MPI [4.0.x]

---

## Installation

The installation procedures in Linux Mint 19.* 64-bit are shown here as examples.

- Google Tests:

```sudo apt-get install gcc-8 g++-8 libomp-dev ```

Describing how to install all development dependencies and how to run an automated test-suite of some kind. Potentially do this for multiple platforms.

---

## [Tests](./test/TEST.md)

Google Tests used for Unit-testing.<br />

For installation it is necessary to run:<br />

```
sudo apt install libgtest-dev
cd /usr/src/gtest/
sudo cmake -DBUILD_SHARED_LIBS=ON
sudo make
sudo cp *.so /usr/lib
```

---

## Run


```
cd bucket-comb-sort
git checkout master
./scripts/build.sh
./scripts/run.sh
```

Or using Qt Creator:

**Projects->Run->.*


---

## [Release History](./HISTORY.md)

---
    
## Contributing

1. Clone it (<https://github.com/dleliuhin/bucket-comb-sort.git>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git add . & git commit -m "Feature. Add some fooBar."`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request to `develop`

---

## Support

Reach out to me at one of the following places!

- Telegram at <a href="http://https://telegram.org" target="_blank">`@DLeliuhin`</a>
- Email at dleliuhin@gmail.com.

---

## [FAQ](./doc/FAQ.md)

---
