class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        _iArrayRoom[0] = big;
        _iArrayRoom[1] = medium;
        _iArrayRoom[2] = small;
    }
    
    bool addCar(int carType) {
        return _iArrayRoom[carType - 1]-- > 0;
    }

private:
    int _iArrayRoom[3];
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */