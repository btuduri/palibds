//Background converted using Mollusk's PAGfx Converter
//This Background uses mario_world_Pal

const int mario_world_Info[3] = {4, 1024, 256}; // BgMode, Width, Height

const unsigned short mario_world_Map[4096] __attribute__ ((aligned (4))) = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 3, 4, 3, 4, 
1028, 1027, 1028, 1027, 1028, 1027, 1026, 1025, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 
3, 4, 3, 4, 3, 4, 1028, 1027, 1028, 1027, 1028, 1027, 1029, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 1, 6, 7, 8, 9, 8, 9, 8, 9, 
9, 1032, 9, 1032, 9, 1032, 1031, 1030, 1025, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 
8, 9, 8, 9, 8, 9, 9, 1032, 9, 1032, 9, 1032, 1034, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 1, 11, 12, 13, 14, 13, 14, 13, 14, 13, 
1037, 1038, 1037, 1038, 1037, 1038, 1037, 1036, 1035, 1025, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 
14, 13, 14, 13, 14, 13, 1037, 1038, 1037, 1038, 1037, 1038, 1039, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 1, 16, 17, 8, 9, 8, 9, 8, 9, 8, 9, 
9, 1032, 9, 1032, 9, 1032, 9, 1032, 1041, 1040, 1025, 0, 0, 0, 0, 0, 
0, 18, 19, 1043, 1042, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 
8, 9, 8, 9, 8, 9, 9, 1032, 9, 1032, 9, 1032, 1034, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 
0, 0, 0, 0, 5, 3, 4, 3, 4, 3, 4, 3, 4, 1029, 0, 0, 
0, 0, 0, 5, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 
1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1030, 1025, 0, 0, 0, 0, 
0, 20, 21, 1045, 1044, 0, 0, 0, 0, 0, 0, 5, 3, 4, 3, 4, 
3, 4, 3, 4, 3, 4, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 
1028, 1027, 1029, 0, 0, 0, 0, 0, 5, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 
1027, 1029, 0, 0, 0, 0, 0, 0, 0, 0, 5, 3, 4, 3, 4, 3, 
4, 3, 4, 1029, 0, 0, 0, 0, 0, 5, 3, 4, 3, 4, 3, 4, 
0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 8, 9, 1034, 0, 0, 
0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 
9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 1036, 1030, 1025, 0, 0, 0, 
0, 22, 23, 1047, 1046, 0, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 
8, 9, 8, 9, 8, 9, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 
9, 1032, 1034, 0, 0, 0, 0, 0, 10, 9, 1032, 9, 1032, 9, 1032, 9, 
1032, 1034, 0, 0, 0, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 
9, 8, 9, 1034, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 
0, 0, 0, 0, 15, 14, 13, 14, 13, 14, 13, 14, 13, 1039, 0, 0, 
0, 0, 0, 15, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 
1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1032, 1036, 1035, 1025, 0, 0, 
0, 22, 23, 1047, 1046, 0, 0, 0, 0, 0, 0, 15, 14, 13, 14, 13, 
14, 13, 14, 13, 14, 13, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 
1037, 1038, 1039, 0, 0, 0, 0, 0, 15, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 
1038, 1039, 0, 0, 0, 0, 0, 0, 0, 0, 15, 14, 13, 14, 13, 14, 
13, 14, 13, 1039, 0, 0, 0, 0, 0, 15, 14, 13, 14, 13, 14, 13, 
0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 8, 9, 1034, 0, 0, 
0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 
9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 1041, 1040, 1025, 0, 
0, 22, 23, 1047, 1046, 0, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 
8, 9, 8, 9, 8, 9, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 
9, 1032, 1034, 0, 0, 0, 0, 0, 10, 9, 1032, 9, 1032, 9, 1032, 9, 
1032, 1034, 0, 0, 0, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 
9, 8, 9, 1034, 0, 0, 0, 0, 0, 10, 8, 9, 8, 9, 8, 9, 
4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 
4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 
1027, 1028, 1027, 3, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1027, 1028, 1027, 1029, 0, 
0, 2068, 2069, 3093, 3092, 0, 0, 5, 3, 4, 3, 3, 4, 3, 4, 3, 
4, 3, 1027, 3, 4, 3, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 
1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 1027, 1028, 
1027, 1028, 1027, 1028, 1027, 1028, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 
4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 
9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 
9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 
1032, 9, 1032, 8, 1032, 9, 1032, 9, 1032, 9, 1032, 1032, 9, 1032, 1034, 0, 
0, 2066, 2067, 3091, 3090, 0, 0, 10, 8, 9, 8, 8, 9, 8, 9, 8, 
9, 8, 1032, 8, 9, 8, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 
1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 1032, 9, 
1032, 9, 1032, 9, 1032, 9, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 
9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 
13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 
13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 
1038, 1037, 1038, 14, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1038, 1037, 1038, 1039, 1027, 
3, 1027, 1028, 4, 3, 1027, 3, 15, 14, 13, 14, 14, 13, 14, 13, 14, 
13, 14, 1038, 14, 13, 14, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 
1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 
1038, 1037, 1038, 1037, 1038, 1037, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 
13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 
14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 
14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 
1037, 1038, 1037, 13, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1032, 9, 1032, 1034, 1032, 
8, 1032, 9, 9, 8, 1032, 8, 10, 8, 9, 8, 13, 14, 13, 14, 13, 
14, 13, 1037, 13, 14, 13, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 
1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 1037, 1038, 
1037, 1038, 1037, 1038, 1037, 1038, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 
14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

const unsigned char mario_world_Tiles[1536] __attribute__ ((aligned (4))) = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 5, 
0, 0, 0, 0, 0, 3, 5, 2, 0, 0, 0, 0, 3, 5, 2, 2, 
0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 2, 2, 2, 2, 
0, 3, 4, 2, 2, 2, 2, 2, 3, 5, 2, 2, 2, 2, 6, 6, 
5, 2, 2, 4, 7, 6, 1, 1, 2, 2, 2, 8, 9, 1, 10, 10, 
2, 2, 11, 12, 13, 14, 10, 10, 2, 2, 15, 16, 17, 10, 18, 19, 
1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 6, 6, 6, 2, 2, 2, 6, 6, 
1, 1, 1, 6, 6, 6, 1, 1, 10, 10, 10, 1, 1, 1, 10, 10, 
10, 10, 10, 10, 10, 10, 10, 10, 19, 19, 19, 10, 10, 10, 19, 19, 
1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 2, 2, 
1, 6, 6, 2, 2, 2, 6, 6, 10, 1, 1, 6, 6, 6, 1, 1, 
10, 10, 10, 1, 1, 1, 10, 10, 19, 10, 10, 10, 10, 10, 10, 19, 
0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 2, 2, 2, 2, 
0, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 6, 6, 
1, 2, 6, 6, 6, 6, 1, 1, 1, 6, 1, 1, 1, 1, 10, 10, 
1, 1, 10, 10, 10, 10, 10, 10, 1, 20, 10, 10, 10, 10, 19, 19, 
0, 0, 0, 3, 5, 2, 2, 2, 0, 0, 3, 5, 2, 15, 27, 8, 
0, 3, 5, 2, 4, 22, 33, 34, 3, 5, 2, 2, 11, 38, 39, 40, 
5, 2, 2, 2, 8, 41, 36, 10, 2, 2, 2, 11, 12, 13, 14, 42, 
2, 2, 2, 15, 16, 17, 10, 44, 2, 21, 15, 22, 23, 24, 25, 32, 
21, 15, 22, 23, 24, 25, 26, 19, 28, 29, 23, 30, 31, 32, 19, 19, 
13, 35, 36, 31, 37, 19, 19, 19, 40, 10, 10, 37, 20, 19, 19, 19, 
42, 43, 32, 20, 20, 19, 19, 19, 18, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 19, 
19, 19, 19, 19, 19, 20, 20, 19, 19, 19, 19, 19, 19, 20, 20, 19, 
19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 20, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 20, 20, 19, 19, 19, 19, 19, 19, 20, 20, 19, 19, 19, 
19, 19, 19, 20, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
1, 20, 19, 19, 19, 19, 19, 19, 1, 20, 19, 19, 19, 19, 19, 19, 
1, 20, 19, 20, 20, 19, 19, 19, 1, 20, 19, 20, 20, 19, 19, 19, 
1, 20, 19, 20, 20, 19, 19, 19, 1, 20, 19, 19, 19, 19, 19, 19, 
1, 20, 19, 19, 19, 19, 19, 19, 1, 20, 19, 19, 19, 19, 19, 19, 
0, 0, 0, 3, 5, 2, 15, 27, 0, 0, 3, 5, 2, 15, 22, 33, 
0, 3, 5, 2, 2, 8, 33, 39, 3, 5, 2, 2, 2, 8, 46, 40, 
5, 2, 15, 11, 8, 28, 13, 47, 2, 15, 22, 38, 41, 13, 35, 10, 
11, 22, 33, 39, 36, 14, 10, 10, 2, 50, 39, 40, 10, 51, 10, 45, 
8, 28, 29, 23, 30, 31, 45, 19, 34, 13, 35, 36, 31, 32, 19, 19, 
40, 40, 10, 10, 32, 19, 19, 19, 10, 42, 43, 32, 19, 19, 19, 19, 
42, 18, 48, 19, 19, 19, 19, 19, 32, 49, 19, 19, 19, 20, 19, 19, 
45, 19, 19, 19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 19, 
19, 19, 19, 19, 19, 20, 20, 19, 19, 19, 19, 19, 19, 20, 20, 19, 
19, 19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 20, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 20, 19, 19, 19, 19, 19, 
19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 19, 19, 
19, 19, 19, 19, 19, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
1, 20, 19, 19, 19, 19, 19, 19, 1, 20, 19, 19, 19, 20, 20, 19, 
1, 20, 19, 19, 19, 20, 20, 19, 1, 20, 19, 19, 19, 20, 20, 19, 
1, 20, 19, 20, 19, 19, 19, 19, 1, 20, 19, 20, 19, 19, 19, 19, 
1, 20, 19, 19, 19, 19, 19, 19, 1, 20, 19, 19, 19, 19, 19, 19, 
0, 0, 0, 3, 5, 2, 2, 2, 0, 0, 3, 5, 2, 2, 2, 2, 
0, 3, 5, 2, 2, 2, 2, 15, 3, 5, 2, 11, 2, 8, 59, 22, 
5, 2, 15, 61, 62, 28, 63, 64, 2, 15, 22, 33, 39, 65, 35, 25, 
2, 66, 33, 39, 40, 25, 10, 10, 2, 8, 67, 40, 10, 42, 44, 68, 
8, 28, 52, 10, 42, 18, 49, 19, 53, 13, 35, 42, 18, 19, 19, 19, 
22, 56, 10, 49, 57, 19, 19, 19, 23, 30, 25, 60, 20, 19, 19, 19, 
30, 31, 45, 20, 20, 19, 19, 19, 31, 32, 19, 19, 19, 19, 19, 19, 
32, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 54, 55, 55, 55, 54, 55, 
1, 58, 2, 55, 54, 54, 2, 54, 1, 58, 2, 55, 54, 54, 2, 54, 
1, 58, 2, 55, 54, 54, 2, 54, 1, 58, 2, 55, 54, 54, 2, 54, 
1, 58, 2, 55, 54, 54, 2, 54, 1, 58, 2, 55, 54, 54, 2, 54, 
1, 1, 1, 1, 1, 1, 1, 0, 54, 54, 54, 2, 54, 2, 2, 1, 
2, 2, 2, 58, 2, 58, 58, 1, 2, 2, 2, 58, 2, 58, 58, 1, 
2, 2, 2, 58, 2, 58, 58, 1, 2, 2, 2, 58, 2, 58, 58, 1, 
2, 2, 2, 58, 2, 58, 58, 1, 2, 2, 2, 58, 2, 58, 58, 1, 
1, 1, 58, 54, 2, 2, 58, 2, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
58, 58, 58, 1, 58, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
0, 1, 58, 2, 55, 54, 2, 54, 0, 1, 58, 2, 55, 54, 2, 54, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0, 
2, 2, 58, 2, 58, 58, 1, 0, 2, 2, 58, 2, 58, 58, 1, 0
};

