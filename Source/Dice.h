namespace game_framework {
    class Dice
    {
    public:
        Dice();
        void Initialize();				// 設定擦子為初始值
        void LoadBitmap();				// 載入圖形
        void OnShow();					// 將擦子圖形貼到畫面
        void OnShow(double size);
        void OnMove();
        void SetXY(int nx, int ny);		// 設定擦子左上角座標
        void OnLButtonDown();
        void RandomValue();
        int GetValue();
        bool GetState();
        int GetPlayerRun();
        void SetPlayerRun(int set);
		void SetValue(int value);
    protected:
        
        CMovingBitmap dicebmp[6];
        int x, y, value, state, count, stops;					// 擦子左上角座標
        int playerRun;
        //state 0 stop
        //state 1 run
        bool isStartRoll;			// 是否正開始骰
    };
}
