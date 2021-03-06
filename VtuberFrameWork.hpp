/**
  Created by Weng Y on 2020/05/25.
  Copyright © 2020 Weng Y. Under GNU General Public License v2.0.
*/
#pragma once

class VtuberFrameWork {
public:
	static void InitVtuber(int id);

	static void ReanderVtuber(int targetid, char *data, int bufferWidth,
				  int bufferheight);

	static void UinitVtuber(int id);

	static void UpData(int id,double _x, double _y, int width, int height,
			   double scale,double delayTime, bool randomMotion, const char *ModelName);

	static const char **GetModelFileName();

	static int ModelNum();

	static int GetWidth(int id);

	static int GetHeight(int id);

	static double GetScale(int id);

	static double GetX(int id);

	static double GetY(int id);
};


