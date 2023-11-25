#ifndef SNOWCANNON_H
#define SNOWCANNON_H

class SnowCannon {

    private:
    int ID;
    bool State;
    float Capacity;
    float Consumption;
    float Water;

    public:
    SnowCannon();

    void SetID(int x);
    void SetState(bool state);
    void SetCapacity(float capacity);
    void SetConsumption(float consumption);
    void SetWater(float water);

    int GetID();
    bool GetState();
    float GetCapacity();
    float GetConsumption();
    float GetWater();

    void Make(float x);
    void Start(void);
    void Reload(float water);
    void Stop(void);

    void Presentation(void);
};

#endif