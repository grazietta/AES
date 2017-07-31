/*void mixColumns(unsigned char* state)
{
	unsigned char temp[16];
	unsigned char pol = 0x11B;
	unsigned char mult = 0x00;
	unsigned char a, b;
	unsigned char stata[16] = 
	{
		0x87, 0xf2, 0x4d, 0x97,
		0x6e, 0x4c, 0x90, 0xec,
		0x46, 0xe7, 0x4a, 0xc3,
		0xa6, 0x8c, 0xd8, 0x95};

	
	for (int i = 0; i < 16; i++)
	{
		stata[i] = state[i];
	}
	

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int sum = 0;
			for (int k = 0; k < 4; k++)
			{
				if (cx[i * 4 + k] == 3)
				{
					sum = sum ^ mult3[int(stata[k * 4 + j])];
				}
				else if (cx[i * 4 + k] == 2)
				{
					sum = sum ^ mult2[int(stata[k * 4 + j])];
				}
				else
				{
					sum = sum ^ (stata[k * 4 + j]);
				}
			}

			temp[i * 4 + j] = sum;
		}

	}

	cout << int(mult2[int(0x01)])  << endl;

	for (int i = 0; i < 16; i++)
	{
		state[i] = temp[i];
	}

	
}*/