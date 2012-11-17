class CSpeedLimitor {
	CNotification * const g_Notify;
	DWORD                 m_Speed, m_BaseSpeed, m_Frames, m_LastTime;
	double                m_Ratio;

	void FixSpeedRatio     ( void );
	
public:
	     CSpeedLimitor     ( CNotification * const g_Notify );
	    ~CSpeedLimitor     ( void );
	void SetHertz          ( const DWORD Hertz );
	bool Timer_Process     ( DWORD * const FrameRate );
	void IncreaeSpeed      ( int Percent );
	void DecreaeSpeed      ( int Percent );

};
