class Solution {
public:
    int clumsy(int N) {
        int iResult = 0;
        if (N >= 4) iResult = N * (N - 1) / (N - 2) + (N - 3);
        for (int i = 1; i < N / 4; i++)
            iResult -=  (N - 4 * i) * (N - 4 * i - 1) / (N - 4 * i - 2) - (N - 4 * i - 3);
        switch(N % 4) {
            case 0:
                break;
            case 1:
                iResult -= 1;
                break;
            case 2:
                iResult -= 2 * 1;
                break;
            case 3:
                iResult -= 3 * 2 / 1;
                break;
        }
        return N < 4 ? -iResult : iResult;
    }
};