level 1 ques 1

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box* box) {
    float volume, surfaceArea;

    // Calculating volume
    volume = box->length * box->width * box->height;

    // Calculating total surface area
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box* ptrBox;

    // Assigning values to the structure members
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 4.0;

    // Assigning the address of myBox to the structure pointer
    ptrBox = &myBox;

    // Calling the function to calculate volume and surface area
    calculateVolumeAndSurfaceArea(ptrBox);

    return 0;
}
