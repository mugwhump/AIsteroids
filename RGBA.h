#pragma once


struct RGBA {
public:
	RGBA(void);
	explicit RGBA(float white);
	RGBA(float _R, float _G, float _B);
	RGBA(float _R, float _G, float _B, float _A);
	~RGBA(void);

	void setDrawColorTo();
	void changeBrightness(float deltaBrightness);
	void setAlpha(float newAlpha);

	// all values go from 0.0 to 1.0
	float R;
	float G;
	float B;
	float A;
};

