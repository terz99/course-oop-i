#include <iostream>
#include "Box.h"
using namespace std;

int main(){

    // the number of boxes that will be entered
    int num_boxes;
    cin >> num_boxes;

    // an array of boxes with size num_boxes
    Box *boxes = new Box[num_boxes];

    // insert the dimensions of the boxes
    for(int i = 0; i < num_boxes; i++){
        // temporary/helper double variables
        cout << "Enter the dimensions of the boxes (length, width, height):\n";
        double tmp_l, tmp_w, tmp_h;
        cin >> tmp_l >> tmp_w >> tmp_h;
        boxes[i].setLength(tmp_l);
        boxes[i].setWidth(tmp_w);
        boxes[i].setHeight(tmp_h);
    }

    // print the volumes for every box and calculate the sum of the volumes
    double sum_vols = 0;
    for(int i = 0; i < num_boxes; i++){
        double curr_vol = boxes[i].getVolume();
        sum_vols += curr_vol;
        cout << "The volume of box " << i << " is: " << curr_vol << endl;
    }

    cout << "The sum of the volumes of all the boxes is: " << sum_vols << endl;

    // free all allocated memory
    delete [] boxes;

    return 0;
}
