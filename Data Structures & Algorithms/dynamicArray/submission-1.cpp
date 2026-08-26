class DynamicArray {
private:
    int* arr;
    int cap;
    int currIndex;
public:

    DynamicArray(int capacity) {
        arr = new int[capacity]();
        cap = capacity;
        currIndex = -1;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(currIndex + 1 == cap) resize();
        currIndex++;
        arr[currIndex] = n;
    }

    int popback() {
        int val = arr[currIndex];
        currIndex--;
        return val;
    }

    void resize() {
        int *copy = arr;
        cap *= 2;
        arr = new int[cap]();
        for(int i = 0; i <= currIndex; i++) {
            arr[i] = copy[i];
        }

        delete []copy;
    }

    int getSize() {
        return currIndex + 1;
    }

    int getCapacity() {
        return cap;
    }
};
