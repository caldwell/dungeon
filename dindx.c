// Copyright © 2022 David Caldwell <david@porkrind.org>

// In the fortran code all this was just a string of integers in a file called dindx.dat.
// Ian Lance Taylor combined it with dtext.dat to make things easier.
// David Caldwell split it out into structures so it could be somewhat readable. These structures get copied
// into the original parallel arrays during init time.

const int data_vers_maj = 2;
const int data_vers_min = 7;
const int data_vers_edit = 'A';

const int data_mxscor = 585;
const int data_strbit = 191;
const int data_egmxsc = 100;

const int data_rooms_count = 190;
const struct {
    int rdesc1, rdesc2, rexit, ractio, rval, rflag;
} data_rooms[] = {
#define E REND
#define N RNWALL
#define H RHOUSE
#define B RBUCK
#define M RMUNG
#define F RFILL
#define S RSACRD
#define A RAIR
#define W RWATER
#define L RLAND
#define l RLIGHT
#define s RSEEN

 { .rdesc1 =  -9590, .rdesc2 =  -9605, .rexit =      1, .ractio =      0, .rval =      5, .rflag = L         }, //   1 East-West Passage
 { .rdesc1 =  -9608, .rdesc2 =  -9618, .rexit =      5, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, //   2 West of House
 { .rdesc1 =  -9620, .rdesc2 =  -9633, .rexit =     10, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, //   3 North of House
 { .rdesc1 =  -9635, .rdesc2 =  -9648, .rexit =     15, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, //   4 South of House
 { .rdesc1 =      0, .rdesc2 =  -9650, .rexit =     20, .ractio =      1, .rval =      0, .rflag = l|L|S|N   }, //   5 Behind House
 { .rdesc1 =      0, .rdesc2 =  -9652, .rexit =     29, .ractio =      2, .rval =     10, .rflag = l|L|S|H   }, //   6 Kitchen
 { .rdesc1 =  -9653, .rdesc2 =  -9661, .rexit =     39, .ractio =      0, .rval =      0, .rflag = L|H       }, //   7 Attic
 { .rdesc1 =      0, .rdesc2 =  -9662, .rexit =     40, .ractio =      3, .rval =      0, .rflag = l|L|S|H   }, //   8 Living Room
 { .rdesc1 =      0, .rdesc2 =  -9664, .rexit =     47, .ractio =      4, .rval =     25, .rflag = L         }, //   9 Cellar
 { .rdesc1 =  -9665, .rdesc2 =  -9682, .rexit =     54, .ractio =      0, .rval =      0, .rflag = L         }, //  10 Troll Room
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     64, .ractio =      0, .rval =      0, .rflag = L         }, //  11 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     68, .ractio =      0, .rval =      0, .rflag = L         }, //  12 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     71, .ractio =      0, .rval =      0, .rflag = L         }, //  13 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     74, .ractio =      0, .rval =      0, .rflag = L         }, //  14 Maze
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =     77, .ractio =      0, .rval =      0, .rflag = L         }, //  15 Dead End
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     78, .ractio =      0, .rval =      0, .rflag = L         }, //  16 Maze
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =     81, .ractio =      0, .rval =      0, .rflag = L         }, //  17 Dead End
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     82, .ractio =      0, .rval =      0, .rflag = L         }, //  18 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     86, .ractio =      0, .rval =      0, .rflag = L         }, //  19 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     91, .ractio =      0, .rval =      0, .rflag = L         }, //  20 Maze
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =     94, .ractio =      0, .rval =      0, .rflag = L         }, //  21 Dead End
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =     95, .ractio =      0, .rval =      0, .rflag = L         }, //  22 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    101, .ractio =      0, .rval =      0, .rflag = L         }, //  23 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    104, .ractio =      0, .rval =      0, .rflag = L         }, //  24 Maze
 { .rdesc1 =      0, .rdesc2 =  -9696, .rexit =    108, .ractio =      5, .rval =      0, .rflag = L         }, //  25 Grating room
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    112, .ractio =      0, .rval =      0, .rflag = L         }, //  26 Maze
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =    117, .ractio =      0, .rval =      0, .rflag = L         }, //  27 Dead End
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    118, .ractio =      0, .rval =      0, .rflag = L         }, //  28 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    122, .ractio =      0, .rval =      0, .rflag = L         }, //  29 Maze
 { .rdesc1 =  -9684, .rdesc2 =  -9691, .rexit =    126, .ractio =      0, .rval =      0, .rflag = L         }, //  30 Maze
 { .rdesc1 =  -9698, .rdesc2 =  -9706, .rexit =    129, .ractio =     11, .rval =      0, .rflag = l|L|S|N   }, //  31 Forest
 { .rdesc1 =  -9707, .rdesc2 =  -9706, .rexit =    135, .ractio =     11, .rval =      0, .rflag = l|L|S|N   }, //  32 Forest
 { .rdesc1 =  -9720, .rdesc2 =  -9706, .rexit =    141, .ractio =     11, .rval =      0, .rflag = l|L|S|N   }, //  33 Forest
 { .rdesc1 =  -9736, .rdesc2 =  -9706, .rexit =    146, .ractio =     11, .rval =      0, .rflag = l|L|S|N   }, //  34 Forest
 { .rdesc1 =  -9698, .rdesc2 =  -9706, .rexit =    152, .ractio =     11, .rval =      0, .rflag = l|L|S|N   }, //  35 Forest
 { .rdesc1 =      0, .rdesc2 =  -9751, .rexit =    158, .ractio =      6, .rval =      0, .rflag = l|L|S|N   }, //  36 Clearing
 { .rdesc1 =  -9753, .rdesc2 =  -9772, .rexit =    167, .ractio =      0, .rval =      0, .rflag = L         }, //  37 Deep Ravine
 { .rdesc1 =  -9774, .rdesc2 =  -9801, .rexit =    171, .ractio =      0, .rval =      0, .rflag = L         }, //  38 Rocky Crawl
 { .rdesc1 =      0, .rdesc2 =  -9803, .rexit =    174, .ractio =      7, .rval =      0, .rflag = L|F       }, //  39 Reservoir South
 { .rdesc1 =      0, .rdesc2 =  -9805, .rexit =    188, .ractio =      8, .rval =      0, .rflag = W|N       }, //  40 Reservoir
 { .rdesc1 =      0, .rdesc2 =  -9807, .rexit =    195, .ractio =      9, .rval =      0, .rflag = L|F       }, //  41 Reservoir North
 { .rdesc1 =  -9809, .rdesc2 =  -9822, .rexit =    203, .ractio =      0, .rval =      0, .rflag = L|F       }, //  42 Stream View
 { .rdesc1 =  -9824, .rdesc2 =  -9847, .rexit =    206, .ractio =      0, .rval =      0, .rflag = W|N       }, //  43 Stream
 { .rdesc1 =  -9848, .rdesc2 =  -9865, .rexit =    210, .ractio =      0, .rval =      0, .rflag = L         }, //  44 Egyptian Room
 { .rdesc1 =      0, .rdesc2 =  -9867, .rexit =    215, .ractio =     10, .rval =      0, .rflag = L         }, //  45 Glacier Room
 { .rdesc1 =  -9869, .rdesc2 =  -9884, .rexit =    220, .ractio =      0, .rval =      0, .rflag = L         }, //  46 Ruby Room
 { .rdesc1 =  -9886, .rdesc2 =  -9899, .rexit =    222, .ractio =      0, .rval =      0, .rflag = L         }, //  47 Atlantis Room
 { .rdesc1 =  -9901, .rdesc2 =  -9920, .rexit =    224, .ractio =      0, .rval =      0, .rflag = L         }, //  48 Deep Canyon
 { .rdesc1 =  -9922, .rdesc2 =  -9953, .rexit =    227, .ractio =      0, .rval =      0, .rflag = L         }, //  49 Loud Room
 { .rdesc1 =      0, .rdesc2 =  -9955, .rexit =    230, .ractio =     12, .rval =      0, .rflag = L         }, //  50 Mirror Room
 { .rdesc1 =      0, .rdesc2 =  -9955, .rexit =    233, .ractio =     12, .rval =      0, .rflag = l|L       }, //  51 Mirror Room
 { .rdesc1 =  -9957, .rdesc2 =  -9968, .rexit =    236, .ractio =      0, .rval =      0, .rflag = L         }, //  52 Cave
 { .rdesc1 =  -9969, .rdesc2 =  -9968, .rexit =    238, .ractio =     13, .rval =      0, .rflag = L         }, //  53 Cave
 { .rdesc1 =  -9982, .rdesc2 =  -9994, .rexit =    241, .ractio =      0, .rval =      0, .rflag = L         }, //  54 Steep Crawlway
 { .rdesc1 =  -9996, .rdesc2 = -10013, .rexit =    243, .ractio =      0, .rval =      0, .rflag = L         }, //  55 Narrow Crawlway
 { .rdesc1 = -10015, .rdesc2 = -10028, .rexit =    246, .ractio =      0, .rval =      0, .rflag = L         }, //  56 Cold Passage
 { .rdesc1 = -10030, .rdesc2 = -10051, .rexit =    249, .ractio =      0, .rval =      0, .rflag = L         }, //  57 Winding Passage
 { .rdesc1 = -10053, .rdesc2 = -10099, .rexit =    252, .ractio =      0, .rval =      0, .rflag = L         }, //  58 Slide Room
 { .rdesc1 = -10101, .rdesc2 = -10125, .rexit =    255, .ractio =      0, .rval =      0, .rflag = L         }, //  59 Mine Entrance
 { .rdesc1 = -10127, .rdesc2 = -10145, .rexit =    258, .ractio =      0, .rval =      0, .rflag = L         }, //  60 Squeaky Room
 { .rdesc1 = -10147, .rdesc2 = -10181, .rexit =    260, .ractio =      0, .rval =      0, .rflag = L         }, //  61 Shaft Room
 { .rdesc1 = -10183, .rdesc2 = -10205, .rexit =    264, .ractio =      0, .rval =      0, .rflag = L         }, //  62 Wooden Tunnel
 { .rdesc1 = -10207, .rdesc2 = -10227, .rexit =    267, .ractio =      0, .rval =      0, .rflag = L         }, //  63 Smelly Room
 { .rdesc1 = -10229, .rdesc2 = -10237, .rexit =    269, .ractio =     14, .rval =      0, .rflag = L|S       }, //  64 Gas Room
 { .rdesc1 = -10239, .rdesc2 = -10260, .rexit =    270, .ractio =      0, .rval =      0, .rflag = L         }, //  65 Ladder Top
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    272, .ractio =      0, .rval =      0, .rflag = L         }, //  66 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    275, .ractio =      0, .rval =      0, .rflag = L         }, //  67 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    279, .ractio =      0, .rval =      0, .rflag = L         }, //  68 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    282, .ractio =      0, .rval =      0, .rflag = L         }, //  69 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    286, .ractio =      0, .rval =      0, .rflag = L         }, //  70 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    292, .ractio =      0, .rval =      0, .rflag = L         }, //  71 Coal Mine
 { .rdesc1 = -10262, .rdesc2 = -10268, .rexit =    295, .ractio =      0, .rval =      0, .rflag = L         }, //  72 Coal Mine
 { .rdesc1 = -10270, .rdesc2 = -10289, .rexit =    299, .ractio =      0, .rval =      0, .rflag = L         }, //  73 Ladder Bottom
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =    302, .ractio =      0, .rval =      0, .rflag = L         }, //  74 Dead End
 { .rdesc1 = -10291, .rdesc2 = -10315, .rexit =    303, .ractio =     15, .rval =      0, .rflag = L|S       }, //  75 Timber Room
 { .rdesc1 = -10317, .rdesc2 = -10341, .rexit =    307, .ractio =     15, .rval =      0, .rflag = L|S       }, //  76 Lower Shaft
 { .rdesc1 =      0, .rdesc2 = -10343, .rexit =    316, .ractio =     16, .rval =      0, .rflag = L         }, //  77 Machine Room
 { .rdesc1 =      0, .rdesc2 = -10345, .rexit =    317, .ractio =     17, .rval =      0, .rflag = L|S       }, //  78 Bat Room
 { .rdesc1 =      0, .rdesc2 = -10347, .rexit =    318, .ractio =     18, .rval =      0, .rflag = L         }, //  79 Dome Room
 { .rdesc1 =      0, .rdesc2 = -10349, .rexit =    322, .ractio =     19, .rval =      0, .rflag = L         }, //  80 Torch Room
 { .rdesc1 = -10351, .rdesc2 = -10369, .rexit =    326, .ractio =      0, .rval =      0, .rflag = L         }, //  81 North-South Crawlway
 { .rdesc1 = -10372, .rdesc2 = -10398, .rexit =    331, .ractio =      0, .rval =      0, .rflag = L         }, //  82 West of Chasm
 { .rdesc1 =      0, .rdesc2 = -10400, .rexit =    336, .ractio =     20, .rval =      0, .rflag = L         }, //  83 Round Room
 { .rdesc1 = -10402, .rdesc2 = -10411, .rexit =    363, .ractio =      0, .rval =      0, .rflag = L         }, //  84 North-South Passage
 { .rdesc1 = -10414, .rdesc2 = -10428, .rexit =    366, .ractio =      0, .rval =      0, .rflag = L         }, //  85 Chasm
 { .rdesc1 = -10429, .rdesc2 = -10448, .rexit =    370, .ractio =      0, .rval =      0, .rflag = L         }, //  86 Damp Cave
 { .rdesc1 = -10450, .rdesc2 = -10465, .rexit =    374, .ractio =      0, .rval =      0, .rflag = L         }, //  87 Ancient Chasm
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =    378, .ractio =      0, .rval =      0, .rflag = L         }, //  88 Dead End
 { .rdesc1 =  -9692, .rdesc2 =  -9694, .rexit =    379, .ractio =      0, .rval =      0, .rflag = L         }, //  89 Dead End
 { .rdesc1 = -10467, .rdesc2 = -10476, .rexit =    380, .ractio =      0, .rval =      0, .rflag = L         }, //  90 Engravings Cave
 { .rdesc1 = -10478, .rdesc2 = -10517, .rexit =    382, .ractio =      0, .rval =      0, .rflag = L         }, //  91 Riddle Room
 { .rdesc1 = -10519, .rdesc2 = -10528, .rexit =    386, .ractio =      0, .rval =      0, .rflag = L         }, //  92 Pearl Room
 { .rdesc1 =      0, .rdesc2 = -10530, .rexit =    388, .ractio =     21, .rval =      0, .rflag = l|L       }, //  93 Entrance to Hades
 { .rdesc1 =      0, .rdesc2 = -10533, .rexit =    395, .ractio =     22, .rval =     30, .rflag = l|L       }, //  94 Land of the Living Dead
 { .rdesc1 = -10536, .rdesc2 = -10552, .rexit =    398, .ractio =      0, .rval =      0, .rflag = L         }, //  95 Grail Room
 { .rdesc1 = -10554, .rdesc2 = -10585, .rexit =    401, .ractio =      0, .rval =      0, .rflag = l|L|S     }, //  96 Temple
 { .rdesc1 = -10586, .rdesc2 = -10598, .rexit =    403, .ractio =      0, .rval =      0, .rflag = l|L|S     }, //  97 Altar
 { .rdesc1 =      0, .rdesc2 = -10599, .rexit =    404, .ractio =     23, .rval =      0, .rflag = l|L|F     }, //  98 Dam
 { .rdesc1 = -10600, .rdesc2 = -10624, .rexit =    408, .ractio =      0, .rval =      0, .rflag = l|L       }, //  99 Dam Lobby
 { .rdesc1 = -10626, .rdesc2 = -10682, .rexit =    411, .ractio =      0, .rval =      0, .rflag = L         }, // 100 Maintenance Room
 { .rdesc1 =      0, .rdesc2 = -10685, .rexit =    413, .ractio =     25, .rval =      0, .rflag = L         }, // 101 Cyclops Room
 { .rdesc1 = -10687, .rdesc2 = -10706, .rexit =    420, .ractio =      0, .rval =     10, .rflag = L         }, // 102 Strange Passage
 { .rdesc1 = -10708, .rdesc2 = -10737, .rexit =    422, .ractio =     27, .rval =     25, .rflag = L         }, // 103 Treasure Room
 { .rdesc1 = -10739, .rdesc2 = -10793, .rexit =    424, .ractio =      0, .rval =      0, .rflag = L         }, // 104 Studio
 { .rdesc1 = -10794, .rdesc2 = -10817, .rexit =    429, .ractio =      0, .rval =      0, .rflag = l|L       }, // 105 Gallery
 { .rdesc1 = -10818, .rdesc2 = -10855, .rexit =    432, .ractio =      0, .rval =      0, .rflag = l|L|S|F|N }, // 106 Dam Base
 { .rdesc1 = -10857, .rdesc2 = -10873, .rexit =    435, .ractio =      0, .rval =      0, .rflag = W|S|F|N   }, // 107 Frigid River
 { .rdesc1 = -10875, .rdesc2 = -10873, .rexit =    442, .ractio =      0, .rval =      0, .rflag = W|S|F|N   }, // 108 Frigid River
 { .rdesc1 = -10895, .rdesc2 = -10873, .rexit =    447, .ractio =      0, .rval =      0, .rflag = W|S|F|N   }, // 109 Frigid River
 { .rdesc1 = -10921, .rdesc2 = -10940, .rexit =    454, .ractio =     28, .rval =      0, .rflag = L|S|F     }, // 110 White Cliffs Beach
 { .rdesc1 = -10943, .rdesc2 = -10940, .rexit =    458, .ractio =     28, .rval =      0, .rflag = L|S|F     }, // 111 White Cliffs Beach
 { .rdesc1 = -10957, .rdesc2 = -10873, .rexit =    462, .ractio =     29, .rval =      0, .rflag = W|S|F|N   }, // 112 Frigid River
 { .rdesc1 = -10981, .rdesc2 = -10873, .rexit =    469, .ractio =      0, .rval =      0, .rflag = W|S|F|N   }, // 113 Frigid River
 { .rdesc1 =      0, .rdesc2 = -10994, .rexit =      0, .ractio =     30, .rval =      0, .rflag = L         }, // 114 Moby Lossage
 { .rdesc1 = -10996, .rdesc2 = -11018, .rexit =    474, .ractio =      0, .rval =      0, .rflag = L|S|F     }, // 115 Shore
 { .rdesc1 = -11019, .rdesc2 = -11036, .rexit =    477, .ractio =     31, .rval =      0, .rflag = L|S|F     }, // 116 Sandy Beach
 { .rdesc1 = -11038, .rdesc2 = -11053, .rexit =    479, .ractio =      0, .rval =      0, .rflag = L|S|F     }, // 117 Rocky Shore
 { .rdesc1 = -11055, .rdesc2 = -11064, .rexit =    481, .ractio =     32, .rval =      0, .rflag = L         }, // 118 Small Cave
 { .rdesc1 = -11066, .rdesc2 = -11079, .rexit =    483, .ractio =      0, .rval =      0, .rflag = L|N       }, // 119 Barrel
 { .rdesc1 =      0, .rdesc2 = -11080, .rexit =    484, .ractio =     33, .rval =      0, .rflag = L|S|F     }, // 120 Aragain Falls
 { .rdesc1 = -11082, .rdesc2 = -11102, .rexit =    493, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, // 121 Rainbow room
 { .rdesc1 = -11104, .rdesc2 = -11142, .rexit =    495, .ractio =      0, .rval =      0, .rflag = l|L|F|N   }, // 122 End of rainbow
 { .rdesc1 = -11144, .rdesc2 = -11169, .rexit =    505, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, // 123 Canyon Bottom
 { .rdesc1 = -11171, .rdesc2 = -11205, .rexit =    507, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, // 124 Rocky Ledge
 { .rdesc1 = -11207, .rdesc2 = -11282, .rexit =    509, .ractio =      0, .rval =      0, .rflag = l|L|S|N   }, // 125 Canyon View
 { .rdesc1 = -11284, .rdesc2 = -11304, .rexit =    512, .ractio =      0, .rval =      0, .rflag = L         }, // 126 Volcano Bottom
 { .rdesc1 = -11306, .rdesc2 = -11321, .rexit =      0, .ractio =      0, .rval =      0, .rflag = A|S|N     }, // 127 Volcano Core
 { .rdesc1 = -11323, .rdesc2 = -11341, .rexit =    513, .ractio =      0, .rval =      0, .rflag = A|S|N     }, // 128 Volcano near small ledge
 { .rdesc1 = -11345, .rdesc2 = -11370, .rexit =      0, .ractio =      0, .rval =      0, .rflag = A|S|N     }, // 129 Volcano near viewing ledge
 { .rdesc1 = -11374, .rdesc2 = -11391, .rexit =    515, .ractio =      0, .rval =      0, .rflag = A|S|N     }, // 130 Volcano near wide ledge
 { .rdesc1 = -11394, .rdesc2 = -11420, .rexit =    517, .ractio =      0, .rval =      0, .rflag = L         }, // 131 Narrow Ledge
 { .rdesc1 = -11422, .rdesc2 = -11463, .rexit =    524, .ractio =      0, .rval =      0, .rflag = L         }, // 132 Volcano View
 { .rdesc1 =      0, .rdesc2 = -11465, .rexit =    529, .ractio =     34, .rval =      0, .rflag = L         }, // 133 Wide ledge
 { .rdesc1 = -11467, .rdesc2 = -11491, .rexit =    536, .ractio =      0, .rval =      0, .rflag = L         }, // 134 Library
 { .rdesc1 =      0, .rdesc2 = -11492, .rexit =    538, .ractio =     35, .rval =      0, .rflag = l|L       }, // 135 Dusty Room
 { .rdesc1 = -11494, .rdesc2 = -11509, .rexit =    539, .ractio =      0, .rval =      0, .rflag = L         }, // 136 Lava Room
 { .rdesc1 =      0, .rdesc2 = -11511, .rexit =    541, .ractio =     58, .rval =      0, .rflag = L         }, // 137 Tomb of the Unknown Implementer
 { .rdesc1 =      0, .rdesc2 = -11515, .rexit =    548, .ractio =     36, .rval =      0, .rflag = L         }, // 138 Low Room
 { .rdesc1 = -11517, .rdesc2 = -10343, .rexit =    575, .ractio =      0, .rval =      0, .rflag = L         }, // 139 Machine Room
 { .rdesc1 = -11574, .rdesc2 = -11597, .rexit =    577, .ractio =      0, .rval =      0, .rflag = L         }, // 140 Dingy Closet
 { .rdesc1 = -11599, .rdesc2 = -11604, .rexit =      0, .ractio =     37, .rval =      0, .rflag = L|N       }, // 141 Cage
 { .rdesc1 = -11605, .rdesc2 = -11630, .rexit =    578, .ractio =      0, .rval =     10, .rflag = L|B       }, // 142 Top of Well
 { .rdesc1 = -11632, .rdesc2 = -11658, .rexit =    581, .ractio =      0, .rval =      0, .rflag = L|B       }, // 143 Bottom of Well
 { .rdesc1 = -11660, .rdesc2 = -11702, .rexit =    584, .ractio =      0, .rval =      0, .rflag = L         }, // 144 Tea Room
 { .rdesc1 = -11704, .rdesc2 = -11743, .rexit =    588, .ractio =      0, .rval =      0, .rflag = L         }, // 145 Posts Room
 { .rdesc1 = -11745, .rdesc2 = -11769, .rexit =    595, .ractio =      0, .rval =      0, .rflag = L         }, // 146 Pool Room
 { .rdesc1 =      0, .rdesc2 = -11771, .rexit =    597, .ractio =     24, .rval =      0, .rflag = l|L|N     }, // 147 Up a Tree
 { .rdesc1 = -11773, .rdesc2 = -11846, .rexit =    600, .ractio =      0, .rval =      0, .rflag = L         }, // 148 Bank Entrance
 { .rdesc1 = -11848, .rdesc2 = -11885, .rexit =    603, .ractio =      0, .rval =      0, .rflag = L         }, // 149 West Teller's Room
 { .rdesc1 = -11888, .rdesc2 = -11925, .rexit =    606, .ractio =      0, .rval =      0, .rflag = L         }, // 150 East Teller's Room
 { .rdesc1 = -11928, .rdesc2 = -11983, .rexit =    609, .ractio =      0, .rval =      0, .rflag = L         }, // 151 Viewing Room
 { .rdesc1 = -11928, .rdesc2 = -11983, .rexit =    610, .ractio =      0, .rval =      0, .rflag = L         }, // 152 Viewing Room
 { .rdesc1 = -11985, .rdesc2 = -11998, .rexit =      0, .ractio =      0, .rval =      0, .rflag = L         }, // 153 Small Room
 { .rdesc1 = -12000, .rdesc2 = -12009, .rexit =      0, .ractio =      0, .rval =      0, .rflag = L         }, // 154 Vault
 { .rdesc1 = -12010, .rdesc2 = -12065, .rexit =    611, .ractio =     26, .rval =      0, .rflag = l|L       }, // 155 Safety Depository
 { .rdesc1 = -12068, .rdesc2 = -12088, .rexit =    620, .ractio =      0, .rval =      0, .rflag = L         }, // 156 Chairman's Office
 { .rdesc1 =      0, .rdesc2 = -12091, .rexit =    621, .ractio =     48, .rval =      5, .rflag = L|E       }, // 157 Crypt
 { .rdesc1 = -12092, .rdesc2 = -12116, .rexit =    627, .ractio =      0, .rval =     10, .rflag = l|L|E     }, // 158 Top of Stairs
 { .rdesc1 = -12118, .rdesc2 = -12145, .rexit =    631, .ractio =      0, .rval =      0, .rflag = l|L|E     }, // 159 Stone Room
 { .rdesc1 =      0, .rdesc2 = -11998, .rexit =    634, .ractio =     47, .rval =      0, .rflag = l|L|E     }, // 160 Small Room
 { .rdesc1 =      0, .rdesc2 = -12147, .rexit =    644, .ractio =     42, .rval =      0, .rflag = l|L|E     }, // 161 Hallway
 { .rdesc1 =      0, .rdesc2 = -12147, .rexit =    657, .ractio =     41, .rval =      0, .rflag = l|L|E     }, // 162 Hallway
 { .rdesc1 =      0, .rdesc2 = -12147, .rexit =    678, .ractio =     40, .rval =      0, .rflag = l|L|E     }, // 163 Hallway
 { .rdesc1 =      0, .rdesc2 = -12147, .rexit =    699, .ractio =     39, .rval =      0, .rflag = l|L|E     }, // 164 Hallway
 { .rdesc1 =      0, .rdesc2 = -12147, .rexit =    701, .ractio =     38, .rval =      0, .rflag = l|L|E     }, // 165 Hallway
 { .rdesc1 =      0, .rdesc2 = -12148, .rexit =    713, .ractio =     51, .rval =     15, .rflag = l|L|E     }, // 166 Dungeon Entrance
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    728, .ractio =     45, .rval =      0, .rflag = l|L|E     }, // 167 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    736, .ractio =     45, .rval =      0, .rflag = l|L|E     }, // 168 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    744, .ractio =     44, .rval =      0, .rflag = l|L|E     }, // 169 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    752, .ractio =     44, .rval =      0, .rflag = l|L|E     }, // 170 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    760, .ractio =     43, .rval =      0, .rflag = l|L|E     }, // 171 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =    768, .ractio =     43, .rval =      0, .rflag = l|L|E     }, // 172 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =      0, .ractio =     39, .rval =      0, .rflag = l|L|E     }, // 173 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =      0, .ractio =     39, .rval =      0, .rflag = l|L|E     }, // 174 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =      0, .ractio =     39, .rval =      0, .rflag = l|L|E     }, // 175 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12151, .rexit =      0, .ractio =     39, .rval =      0, .rflag = l|L|E     }, // 176 Narrow Room
 { .rdesc1 =      0, .rdesc2 = -12153, .rexit =    776, .ractio =     46, .rval =     15, .rflag = l|L|E     }, // 177 Inside Mirror
 { .rdesc1 =      0, .rdesc2 = -12155, .rexit =    803, .ractio =     50, .rval =     20, .rflag = l|L|E     }, // 178 Narrow Corridor
 { .rdesc1 =      0, .rdesc2 = -12157, .rexit =    807, .ractio =     49, .rval =      0, .rflag = l|L|E     }, // 179 South Corridor
 { .rdesc1 = -12159, .rdesc2 = -12177, .rexit =    813, .ractio =      0, .rval =      0, .rflag = l|L|E     }, // 180 West Corridor
 { .rdesc1 = -12179, .rdesc2 = -12197, .rexit =    815, .ractio =      0, .rval =      0, .rflag = l|L|E     }, // 181 East Corridor
 { .rdesc1 =      0, .rdesc2 = -12199, .rexit =    817, .ractio =     52, .rval =      0, .rflag = l|L|E     }, // 182 North Corridor
 { .rdesc1 =      0, .rdesc2 = -12201, .rexit =    826, .ractio =     53, .rval =      0, .rflag = l|L|E     }, // 183 Parapet
 { .rdesc1 =      0, .rdesc2 = -12202, .rexit =    831, .ractio =     54, .rval =      0, .rflag = l|L|E     }, // 184 Prison Cell
 { .rdesc1 =      0, .rdesc2 = -12202, .rexit =    840, .ractio =     55, .rval =      0, .rflag = l|L|E     }, // 185 Prison Cell
 { .rdesc1 =      0, .rdesc2 = -12202, .rexit =    842, .ractio =     56, .rval =      0, .rflag = l|L|E     }, // 186 Prison Cell
 { .rdesc1 = -12204, .rdesc2 = -12325, .rexit =      0, .ractio =     57, .rval =     35, .rflag = l|L|E     }, // 187 Nirvana
 { .rdesc1 = -12326, .rdesc2 = -12356, .rexit =    850, .ractio =      0, .rval =      0, .rflag = l|L       }, // 188 Small Square Room
 { .rdesc1 =      0, .rdesc2 = -12359, .rexit =    855, .ractio =     59, .rval =      0, .rflag = l|L       }, // 189 Side Room
 { .rdesc1 =      0, .rdesc2 = -12361, .rexit =    859, .ractio =     60, .rval =      0, .rflag = l|L       }, // 190 Room in a Puzzle
#undef E
#undef N
#undef H
#undef B
#undef M
#undef F
#undef S
#undef A
#undef W
#undef L
#undef l
#undef s
};

const int data_exits_count = 886;
enum { xtype1 = 0, xtype2 = 1, xtype3 = 2, xtype4 = 3 };
enum {
    unkn_0= 0,
    dir_n = 1,
    dir_ne= 2,
    dir_e = 3,
    dir_se= 4,
    dir_s = 5,
    dir_sw= 6,
    dir_w = 7,
    dir_nw= 8,
    dir_u = 9,
    dir_d = 10,
    launch= 11,
    land  = 12,
    enter = 13,
    d_exit= 14,
    unkn_f= 15,
};
enum { last = 0x8000 };
const int data_exits[] = {
  (dir_e <<10) | (xtype1<<8) |  83       , //   1:0c53 East-West Passage E -> Round Room
  (dir_w <<10) | (xtype1<<8) |  10       , //   2:1c0a East-West Passage W -> Troll Room
  (dir_d <<10) | (xtype1<<8) |  37       , //   3:2825 East-West Passage D -> Deep Ravine
  (dir_n <<10) | (xtype1<<8) |  37 | last, //   4:8425 East-West Passage N -> Deep Ravine
  (dir_n <<10) | (xtype1<<8) |   3       , //   5:0403 West of House N -> North of House
  (dir_s <<10) | (xtype1<<8) |   4       , //   6:1404 West of House S -> South of House
  (dir_w <<10) | (xtype1<<8) |  31       , //   7:1c1f West of House W -> Forest
  (dir_e <<10) | (xtype2<<8) |   0 | last, //   8:8d00 West of House E -> [deny]
                                           /*   9:c471*/  -15247, // The door is locked, and there is evidently no key.
  (dir_w <<10) | (xtype1<<8) |   2       , //  10:1c02 North of House W -> West of House
  (dir_e <<10) | (xtype1<<8) |   5       , //  11:0c05 North of House E -> Behind House
  (dir_n <<10) | (xtype1<<8) |  33       , //  12:0421 North of House N -> Forest
  (dir_s <<10) | (xtype2<<8) |   0 | last, //  13:9500 North of House S -> [deny]
                                           /*  14:c46a*/  -15254, // The windows are all barred.
  (dir_w <<10) | (xtype1<<8) |   2       , //  15:1c02 South of House W -> West of House
  (dir_e <<10) | (xtype1<<8) |   5       , //  16:0c05 South of House E -> Behind House
  (dir_s <<10) | (xtype1<<8) |  32       , //  17:1420 South of House S -> Forest
  (dir_n <<10) | (xtype2<<8) |   0 | last, //  18:8500 South of House N -> [deny]
                                           /*  19:c46a*/  -15254, // The windows are all barred.
  (dir_n <<10) | (xtype1<<8) |   3       , //  20:0403 Behind House N -> North of House
  (dir_s <<10) | (xtype1<<8) |   4       , //  21:1404 Behind House S -> South of House
  (dir_e <<10) | (xtype1<<8) |  36       , //  22:0c24 Behind House E -> Clearing
  (dir_w <<10) | (xtype4<<8) |   6       , //  23:1f06 Behind House W -> Kitchen
                                           /*  24:0000*/       0,
                                           /*  25:003f*/  0 << 8 | 63, // [object/action]
  (enter <<10) | (xtype4<<8) |   6 | last, //  26:b706 Behind House enter -> Kitchen
                                           /*  27:0000*/       0,
                                           /*  28:003f*/  0 << 8 | 63, // [object/action]
  (dir_w <<10) | (xtype1<<8) |   8       , //  29:1c08 Kitchen W -> Living Room
  (dir_u <<10) | (xtype1<<8) |   7       , //  30:2407 Kitchen U -> Attic
  (dir_d <<10) | (xtype2<<8) |   0       , //  31:2900 Kitchen D -> [deny]
                                           /*  32:c466*/  -15258, // Only Santa Claus climbs down chimneys.
  (dir_e <<10) | (xtype4<<8) |   5       , //  33:0f05 Kitchen E -> Behind House
                                           /*  34:0000*/       0,
                                           /*  35:003f*/  0 << 8 | 63, // [object/action]
  (d_exit<<10) | (xtype4<<8) |   5 | last, //  36:bb05 Kitchen exit -> Behind House
                                           /*  37:0000*/       0,
                                           /*  38:003f*/  0 << 8 | 63, // [object/action]
  (dir_d <<10) | (xtype1<<8) |   6 | last, //  39:a806 Attic D -> Kitchen
  (dir_e <<10) | (xtype1<<8) |   6       , //  40:0c06 Living Room E -> Kitchen
  (dir_w <<10) | (xtype3<<8) | 102       , //  41:1e66 Living Room W -> Strange Passage
                                           /*  42:c461*/  -15263, // The door is nailed shut.
                                           /*  43:000d*/  0 << 8 | 13, // [action]
  (dir_d <<10) | (xtype4<<8) |   9 | last, //  44:ab09 Living Room D -> Cellar
                                           /*  45:0000*/       0,
                                           /*  46:0042*/  0 << 8 | 66, // [object/action]
  (dir_e <<10) | (xtype1<<8) |  10       , //  47:0c0a Cellar E -> Troll Room
  (dir_s <<10) | (xtype1<<8) |  82       , //  48:1452 Cellar S -> West of Chasm
  (dir_w <<10) | (xtype2<<8) |   0       , //  49:1d00 Cellar W -> [deny]
                                           /*  50:c45d*/  -15267, // You try to ascend the ramp, but it is impossible, and you slide back down.
  (dir_u <<10) | (xtype4<<8) |   8 | last, //  51:a708 Cellar U -> Living Room
                                           /*  52:0000*/       0,
                                           /*  53:0042*/  0 << 8 | 66, // [object/action]
  (dir_w <<10) | (xtype1<<8) |   9       , //  54:1c09 Troll Room W -> Cellar
  (dir_e <<10) | (xtype3<<8) |  81       , //  55:0e51 Troll Room E -> North-South Crawlway
                                           /*  56:c453*/  -15277, // The troll fends you off with a menacing gesture.
                                           /*  57:0001*/  0 << 8 | 1, // [action]
  (dir_n <<10) | (xtype3<<8) |   1       , //  58:0601 Troll Room N -> East-West Passage
                                           /*  59:c453*/  -15277, // The troll fends you off with a menacing gesture.
                                           /*  60:0001*/  0 << 8 | 1, // [action]
  (dir_s <<10) | (xtype3<<8) |  11 | last, //  61:960b Troll Room S -> Maze
                                           /*  62:c453*/  -15277, // The troll fends you off with a menacing gesture.
                                           /*  63:0001*/  0 << 8 | 1, // [action]
  (dir_w <<10) | (xtype1<<8) |  10       , //  64:1c0a Maze W -> Troll Room
  (dir_n <<10) | (xtype1<<8) |  11       , //  65:040b Maze N -> Maze
  (dir_s <<10) | (xtype1<<8) |  12       , //  66:140c Maze S -> Maze
  (dir_e <<10) | (xtype1<<8) |  14 | last, //  67:8c0e Maze E -> Maze
  (dir_s <<10) | (xtype1<<8) |  11       , //  68:140b Maze S -> Maze
  (dir_n <<10) | (xtype1<<8) |  14       , //  69:040e Maze N -> Maze
  (dir_e <<10) | (xtype1<<8) |  13 | last, //  70:8c0d Maze E -> Maze
  (dir_w <<10) | (xtype1<<8) |  12       , //  71:1c0c Maze W -> Maze
  (dir_n <<10) | (xtype1<<8) |  14       , //  72:040e Maze N -> Maze
  (dir_u <<10) | (xtype1<<8) |  16 | last, //  73:a410 Maze U -> Maze
  (dir_w <<10) | (xtype1<<8) |  13       , //  74:1c0d Maze W -> Maze
  (dir_n <<10) | (xtype1<<8) |  11       , //  75:040b Maze N -> Maze
  (dir_e <<10) | (xtype1<<8) |  15 | last, //  76:8c0f Maze E -> Dead End
  (dir_s <<10) | (xtype1<<8) |  14 | last, //  77:940e Dead End S -> Maze
  (dir_e <<10) | (xtype1<<8) |  17       , //  78:0c11 Maze E -> Dead End
  (dir_n <<10) | (xtype1<<8) |  13       , //  79:040d Maze N -> Maze
  (dir_sw<<10) | (xtype1<<8) |  18 | last, //  80:9812 Maze SW -> Maze
  (dir_w <<10) | (xtype1<<8) |  16 | last, //  81:9c10 Dead End W -> Maze
  (dir_d <<10) | (xtype1<<8) |  16       , //  82:2810 Maze D -> Maze
  (dir_e <<10) | (xtype1<<8) |  19       , //  83:0c13 Maze E -> Maze
  (dir_w <<10) | (xtype1<<8) |  18       , //  84:1c12 Maze W -> Maze
  (dir_u <<10) | (xtype1<<8) |  22 | last, //  85:a416 Maze U -> Maze
  (dir_u <<10) | (xtype1<<8) |  29       , //  86:241d Maze U -> Maze
  (dir_w <<10) | (xtype1<<8) |  18       , //  87:1c12 Maze W -> Maze
  (dir_ne<<10) | (xtype1<<8) |  15       , //  88:080f Maze NE -> Dead End
  (dir_e <<10) | (xtype1<<8) |  20       , //  89:0c14 Maze E -> Maze
  (dir_s <<10) | (xtype1<<8) |  30 | last, //  90:941e Maze S -> Maze
  (dir_ne<<10) | (xtype1<<8) |  19       , //  91:0813 Maze NE -> Maze
  (dir_w <<10) | (xtype1<<8) |  20       , //  92:1c14 Maze W -> Maze
  (dir_se<<10) | (xtype1<<8) |  21 | last, //  93:9015 Maze SE -> Dead End
  (dir_n <<10) | (xtype1<<8) |  20 | last, //  94:8414 Dead End N -> Maze
  (dir_n <<10) | (xtype1<<8) |  18       , //  95:0412 Maze N -> Maze
  (dir_e <<10) | (xtype1<<8) |  24       , //  96:0c18 Maze E -> Maze
  (dir_d <<10) | (xtype1<<8) |  23       , //  97:2817 Maze D -> Maze
  (dir_s <<10) | (xtype1<<8) |  28       , //  98:141c Maze S -> Maze
  (dir_w <<10) | (xtype1<<8) |  26       , //  99:1c1a Maze W -> Maze
  (dir_nw<<10) | (xtype1<<8) |  22 | last, // 100:a016 Maze NW -> Maze
  (dir_e <<10) | (xtype1<<8) |  22       , // 101:0c16 Maze E -> Maze
  (dir_w <<10) | (xtype1<<8) |  28       , // 102:1c1c Maze W -> Maze
  (dir_u <<10) | (xtype1<<8) |  24 | last, // 103:a418 Maze U -> Maze
  (dir_ne<<10) | (xtype1<<8) |  25       , // 104:0819 Maze NE -> Grating room
  (dir_d <<10) | (xtype1<<8) |  23       , // 105:2817 Maze D -> Maze
  (dir_nw<<10) | (xtype1<<8) |  28       , // 106:201c Maze NW -> Maze
  (dir_sw<<10) | (xtype1<<8) |  26 | last, // 107:981a Maze SW -> Maze
  (dir_u <<10) | (xtype4<<8) |  36       , // 108:2724 Grating room U -> Clearing
                                           /* 109:f3f5*/   -3083, // The grating is locked.
                                           /* 110:0041*/  0 << 8 | 65, // [object/action]
  (dir_sw<<10) | (xtype1<<8) |  24 | last, // 111:9818 Grating room SW -> Maze
  (dir_w <<10) | (xtype1<<8) |  16       , // 112:1c10 Maze W -> Maze
  (dir_sw<<10) | (xtype1<<8) |  24       , // 113:1818 Maze SW -> Maze
  (dir_e <<10) | (xtype1<<8) |  28       , // 114:0c1c Maze E -> Maze
  (dir_u <<10) | (xtype1<<8) |  22       , // 115:2416 Maze U -> Maze
  (dir_n <<10) | (xtype1<<8) |  27 | last, // 116:841b Maze N -> Dead End
  (dir_s <<10) | (xtype1<<8) |  26 | last, // 117:941a Dead End S -> Maze
  (dir_e <<10) | (xtype1<<8) |  22       , // 118:0c16 Maze E -> Maze
  (dir_d <<10) | (xtype1<<8) |  26       , // 119:281a Maze D -> Maze
  (dir_s <<10) | (xtype1<<8) |  23       , // 120:1417 Maze S -> Maze
  (dir_w <<10) | (xtype1<<8) |  24 | last, // 121:9c18 Maze W -> Maze
  (dir_w <<10) | (xtype1<<8) |  30       , // 122:1c1e Maze W -> Maze
  (dir_nw<<10) | (xtype1<<8) |  29       , // 123:201d Maze NW -> Maze
  (dir_ne<<10) | (xtype1<<8) |  19       , // 124:0813 Maze NE -> Maze
  (dir_s <<10) | (xtype1<<8) |  19 | last, // 125:9413 Maze S -> Maze
  (dir_w <<10) | (xtype1<<8) |  29       , // 126:1c1d Maze W -> Maze
  (dir_s <<10) | (xtype1<<8) |  19       , // 127:1413 Maze S -> Maze
  (dir_ne<<10) | (xtype1<<8) | 101 | last, // 128:8865 Maze NE -> Cyclops Room
  (dir_n <<10) | (xtype1<<8) |  31       , // 129:041f Forest N -> Forest
  (dir_e <<10) | (xtype1<<8) |  33       , // 130:0c21 Forest E -> Forest
  (dir_s <<10) | (xtype1<<8) |  32       , // 131:1420 Forest S -> Forest
  (dir_w <<10) | (xtype1<<8) |  31       , // 132:1c1f Forest W -> Forest
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 133:a500 Forest U -> [deny]
                                           /* 134:c44c*/  -15284, // There is no tree here suitable for climbing.
  (dir_n <<10) | (xtype1<<8) |   4       , // 135:0404 Forest N -> South of House
  (dir_e <<10) | (xtype1<<8) |  36       , // 136:0c24 Forest E -> Clearing
  (dir_s <<10) | (xtype1<<8) |  34       , // 137:1422 Forest S -> Forest
  (dir_w <<10) | (xtype1<<8) |  31       , // 138:1c1f Forest W -> Forest
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 139:a500 Forest U -> [deny]
                                           /* 140:c44c*/  -15284, // There is no tree here suitable for climbing.
  (dir_n <<10) | (xtype1<<8) |  32       , // 141:0420 Forest N -> Forest
  (dir_e <<10) | (xtype1<<8) |  36       , // 142:0c24 Forest E -> Clearing
  (dir_s <<10) | (xtype1<<8) |  36       , // 143:1424 Forest S -> Clearing
  (dir_w <<10) | (xtype1<<8) |   3       , // 144:1c03 Forest W -> North of House
  (dir_u <<10) | (xtype1<<8) | 147 | last, // 145:a493 Forest U -> Up a Tree
  (dir_e <<10) | (xtype1<<8) | 125       , // 146:0c7d Forest E -> Canyon View
  (dir_n <<10) | (xtype1<<8) |  35       , // 147:0423 Forest N -> Forest
  (dir_s <<10) | (xtype1<<8) |  34       , // 148:1422 Forest S -> Forest
  (dir_w <<10) | (xtype1<<8) |  32       , // 149:1c20 Forest W -> Forest
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 150:a500 Forest U -> [deny]
                                           /* 151:c44c*/  -15284, // There is no tree here suitable for climbing.
  (dir_n <<10) | (xtype1<<8) |  35       , // 152:0423 Forest N -> Forest
  (dir_se<<10) | (xtype1<<8) | 125       , // 153:107d Forest SE -> Canyon View
  (dir_s <<10) | (xtype1<<8) |  34       , // 154:1422 Forest S -> Forest
  (dir_w <<10) | (xtype1<<8) |  32       , // 155:1c20 Forest W -> Forest
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 156:a500 Forest U -> [deny]
                                           /* 157:c44c*/  -15284, // There is no tree here suitable for climbing.
  (dir_d <<10) | (xtype4<<8) |  25       , // 158:2b19 Clearing D -> Grating room
                                           /* 159:f3f5*/   -3083, // The grating is locked.
                                           /* 160:0041*/  0 << 8 | 65, // [object/action]
  (dir_sw<<10) | (xtype1<<8) |   5       , // 161:1805 Clearing SW -> Behind House
  (dir_se<<10) | (xtype1<<8) |  35       , // 162:1023 Clearing SE -> Forest
  (dir_n <<10) | (xtype1<<8) |  36       , // 163:0424 Clearing N -> Clearing
  (dir_e <<10) | (xtype1<<8) |  36       , // 164:0c24 Clearing E -> Clearing
  (dir_w <<10) | (xtype1<<8) |  33       , // 165:1c21 Clearing W -> Forest
  (dir_s <<10) | (xtype1<<8) |  32 | last, // 166:9420 Clearing S -> Forest
  (dir_s <<10) | (xtype1<<8) |   1       , // 167:1401 Deep Ravine S -> East-West Passage
  (dir_d <<10) | (xtype1<<8) |  39       , // 168:2827 Deep Ravine D -> Reservoir South
  (dir_e <<10) | (xtype1<<8) |  85       , // 169:0c55 Deep Ravine E -> Chasm
  (dir_w <<10) | (xtype1<<8) |  38 | last, // 170:9c26 Deep Ravine W -> Rocky Crawl
  (dir_w <<10) | (xtype1<<8) |  37       , // 171:1c25 Rocky Crawl W -> Deep Ravine
  (dir_e <<10) | (xtype1<<8) |  79       , // 172:0c4f Rocky Crawl E -> Dome Room
  (dir_nw<<10) | (xtype1<<8) |  44 | last, // 173:a02c Rocky Crawl NW -> Egyptian Room
  (launch<<10) | (xtype1<<8) |  40       , // 174:2c28 Reservoir South launch -> Reservoir
  (dir_w <<10) | (xtype1<<8) |  42       , // 175:1c2a Reservoir South W -> Stream View
  (dir_s <<10) | (xtype3<<8) |  37       , // 176:1625 Reservoir South S -> Deep Ravine
                                           /* 177:c446*/  -15290, // The coffin will not fit through this passage.
                                           /* 178:0113*/  1 << 8 | 19, // [action]
  (dir_u <<10) | (xtype3<<8) |  48       , // 179:2630 Reservoir South U -> Deep Canyon
                                           /* 180:c440*/  -15296, // The stairs are too steep for carrying the coffin.
                                           /* 181:0113*/  1 << 8 | 19, // [action]
  (unkn_f<<10) | (xtype3<<8) |  40       , // 182:3e28 Reservoir South ??? -> Reservoir
                                           /* 183:c439*/  -15303, // You are not equipped for swimming.
                                           /* 184:0006*/  0 << 8 | 6, // [action]
  (dir_n <<10) | (xtype3<<8) |  40 | last, // 185:8628 Reservoir South N -> Reservoir
                                           /* 186:c439*/  -15303, // You are not equipped for swimming.
                                           /* 187:0006*/  0 << 8 | 6, // [action]
  (dir_n <<10) | (xtype1<<8) |  41       , // 188:0429 Reservoir N -> Reservoir North
  (dir_s <<10) | (xtype1<<8) |  39       , // 189:1427 Reservoir S -> Reservoir South
  (dir_u <<10) | (xtype1<<8) |  43       , // 190:242b Reservoir U -> Stream
  (dir_d <<10) | (xtype2<<8) |   0       , // 191:2900 Reservoir D -> [deny]
                                           /* 192:c434*/  -15308, // The dam blocks your way.
  (land  <<10) | (xtype2<<8) |   0 | last, // 193:b100 Reservoir land -> [deny]
                                           /* 194:c430*/  -15312, // You must specify which direction here.
  (dir_n <<10) | (xtype1<<8) |  47       , // 195:042f Reservoir North N -> Atlantis Room
  (launch<<10) | (xtype1<<8) |  40       , // 196:2c28 Reservoir North launch -> Reservoir
  (unkn_f<<10) | (xtype3<<8) |  40       , // 197:3e28 Reservoir North ??? -> Reservoir
                                           /* 198:c439*/  -15303, // You are not equipped for swimming.
                                           /* 199:0006*/  0 << 8 | 6, // [action]
  (dir_s <<10) | (xtype3<<8) |  40 | last, // 200:9628 Reservoir North S -> Reservoir
                                           /* 201:c439*/  -15303, // You are not equipped for swimming.
                                           /* 202:0006*/  0 << 8 | 6, // [action]
  (launch<<10) | (xtype1<<8) |  43       , // 203:2c2b Stream View launch -> Stream
  (dir_e <<10) | (xtype1<<8) |  39       , // 204:0c27 Stream View E -> Reservoir South
  (dir_n <<10) | (xtype1<<8) |  45 | last, // 205:842d Stream View N -> Glacier Room
  (land  <<10) | (xtype1<<8) |  42       , // 206:302a Stream land -> Stream View
  (dir_d <<10) | (xtype1<<8) |  40       , // 207:2828 Stream D -> Reservoir
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 208:a500 Stream U -> [deny]
                                           /* 209:c42b*/  -15317, // The way is too narrow.
  (dir_u <<10) | (xtype1<<8) |  45       , // 210:242d Egyptian Room U -> Glacier Room
  (dir_s <<10) | (xtype1<<8) | 132       , // 211:1484 Egyptian Room S -> Volcano View
  (dir_e <<10) | (xtype3<<8) |  38 | last, // 212:8e26 Egyptian Room E -> Rocky Crawl
                                           /* 213:c428*/  -15320, // The passage is too narrow to accomodate coffins.
                                           /* 214:0113*/  1 << 8 | 19, // [action]
  (dir_n <<10) | (xtype1<<8) |  42       , // 215:042a Glacier Room N -> Stream View
  (dir_e <<10) | (xtype1<<8) |  44       , // 216:0c2c Glacier Room E -> Egyptian Room
  (dir_w <<10) | (xtype3<<8) |  46 | last, // 217:9e2e Glacier Room W -> Ruby Room
                                           /* 218:0000*/       0,
                                           /* 219:0008*/  0 << 8 | 8, // [action]
  (dir_w <<10) | (xtype1<<8) | 136       , // 220:1c88 Ruby Room W -> Lava Room
  (dir_s <<10) | (xtype1<<8) |  45 | last, // 221:942d Ruby Room S -> Glacier Room
  (dir_se<<10) | (xtype1<<8) |  41       , // 222:1029 Atlantis Room SE -> Reservoir North
  (dir_u <<10) | (xtype1<<8) |  52 | last, // 223:a434 Atlantis Room U -> Cave
  (dir_nw<<10) | (xtype1<<8) |  39       , // 224:2027 Deep Canyon NW -> Reservoir South
  (dir_e <<10) | (xtype1<<8) |  98       , // 225:0c62 Deep Canyon E -> Dam
  (dir_s <<10) | (xtype1<<8) |  83 | last, // 226:9453 Deep Canyon S -> Round Room
  (dir_e <<10) | (xtype1<<8) |  87       , // 227:0c57 Loud Room E -> Ancient Chasm
  (dir_w <<10) | (xtype1<<8) |  84       , // 228:1c54 Loud Room W -> North-South Passage
  (dir_u <<10) | (xtype1<<8) |  86 | last, // 229:a456 Loud Room U -> Damp Cave
  (dir_w <<10) | (xtype1<<8) |  56       , // 230:1c38 Mirror Room W -> Cold Passage
  (dir_n <<10) | (xtype1<<8) |  54       , // 231:0436 Mirror Room N -> Steep Crawlway
  (dir_e <<10) | (xtype1<<8) |  52 | last, // 232:8c34 Mirror Room E -> Cave
  (dir_w <<10) | (xtype1<<8) |  57       , // 233:1c39 Mirror Room W -> Winding Passage
  (dir_n <<10) | (xtype1<<8) |  55       , // 234:0437 Mirror Room N -> Narrow Crawlway
  (dir_e <<10) | (xtype1<<8) |  53 | last, // 235:8c35 Mirror Room E -> Cave
  (dir_n <<10) | (xtype1<<8) |  50       , // 236:0432 Cave N -> Mirror Room
  (dir_d <<10) | (xtype1<<8) |  47 | last, // 237:a82f Cave D -> Atlantis Room
  (dir_n <<10) | (xtype1<<8) |  55       , // 238:0437 Cave N -> Narrow Crawlway
  (dir_w <<10) | (xtype1<<8) |  51       , // 239:1c33 Cave W -> Mirror Room
  (dir_d <<10) | (xtype1<<8) |  93 | last, // 240:a85d Cave D -> Entrance to Hades
  (dir_s <<10) | (xtype1<<8) |  50       , // 241:1432 Steep Crawlway S -> Mirror Room
  (dir_sw<<10) | (xtype1<<8) |  56 | last, // 242:9838 Steep Crawlway SW -> Cold Passage
  (dir_s <<10) | (xtype1<<8) |  53       , // 243:1435 Narrow Crawlway S -> Cave
  (dir_sw<<10) | (xtype1<<8) |  51       , // 244:1833 Narrow Crawlway SW -> Mirror Room
  (dir_n <<10) | (xtype1<<8) |  95 | last, // 245:845f Narrow Crawlway N -> Grail Room
  (dir_e <<10) | (xtype1<<8) |  50       , // 246:0c32 Cold Passage E -> Mirror Room
  (dir_w <<10) | (xtype1<<8) |  58       , // 247:1c3a Cold Passage W -> Slide Room
  (dir_n <<10) | (xtype1<<8) |  54 | last, // 248:8436 Cold Passage N -> Steep Crawlway
  (dir_e <<10) | (xtype1<<8) |  51       , // 249:0c33 Winding Passage E -> Mirror Room
  (dir_n <<10) | (xtype2<<8) |   0 | last, // 250:8500 Winding Passage N -> [deny]
                                           /* 251:c421*/  -15327, // You hear the whir from the round room but can find no entrance.
  (dir_e <<10) | (xtype1<<8) |  56       , // 252:0c38 Slide Room E -> Cold Passage
  (dir_d <<10) | (xtype1<<8) |   9       , // 253:2809 Slide Room D -> Cellar
  (dir_n <<10) | (xtype1<<8) |  59 | last, // 254:843b Slide Room N -> Mine Entrance
  (dir_s <<10) | (xtype1<<8) |  58       , // 255:143a Mine Entrance S -> Slide Room
  (dir_nw<<10) | (xtype1<<8) |  60       , // 256:203c Mine Entrance NW -> Squeaky Room
  (dir_ne<<10) | (xtype1<<8) |  61 | last, // 257:883d Mine Entrance NE -> Shaft Room
  (dir_w <<10) | (xtype1<<8) |  78       , // 258:1c4e Squeaky Room W -> Bat Room
  (dir_s <<10) | (xtype1<<8) |  59 | last, // 259:943b Squeaky Room S -> Mine Entrance
  (dir_w <<10) | (xtype1<<8) |  59       , // 260:1c3b Shaft Room W -> Mine Entrance
  (dir_n <<10) | (xtype1<<8) |  62       , // 261:043e Shaft Room N -> Wooden Tunnel
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 262:a900 Shaft Room D -> [deny]
                                           /* 263:c419*/  -15335, // You wouldn't fit and would die if you could.
  (dir_s <<10) | (xtype1<<8) |  61       , // 264:143d Wooden Tunnel S -> Shaft Room
  (dir_w <<10) | (xtype1<<8) |  63       , // 265:1c3f Wooden Tunnel W -> Smelly Room
  (dir_ne<<10) | (xtype1<<8) |  66 | last, // 266:8842 Wooden Tunnel NE -> Coal Mine
  (dir_d <<10) | (xtype1<<8) |  64       , // 267:2840 Smelly Room D -> Gas Room
  (dir_e <<10) | (xtype1<<8) |  62 | last, // 268:8c3e Smelly Room E -> Wooden Tunnel
  (dir_u <<10) | (xtype1<<8) |  63 | last, // 269:a43f Gas Room U -> Smelly Room
  (dir_d <<10) | (xtype1<<8) |  73       , // 270:2849 Ladder Top D -> Ladder Bottom
  (dir_u <<10) | (xtype1<<8) |  72 | last, // 271:a448 Ladder Top U -> Coal Mine
  (dir_n <<10) | (xtype1<<8) |  69       , // 272:0445 Coal Mine N -> Coal Mine
  (dir_sw<<10) | (xtype1<<8) |  67       , // 273:1843 Coal Mine SW -> Coal Mine
  (dir_e <<10) | (xtype1<<8) |  62 | last, // 274:8c3e Coal Mine E -> Wooden Tunnel
  (dir_s <<10) | (xtype1<<8) |  66       , // 275:1442 Coal Mine S -> Coal Mine
  (dir_w <<10) | (xtype1<<8) |  70       , // 276:1c46 Coal Mine W -> Coal Mine
  (dir_u <<10) | (xtype1<<8) |  68       , // 277:2444 Coal Mine U -> Coal Mine
  (dir_ne<<10) | (xtype1<<8) |  69 | last, // 278:8845 Coal Mine NE -> Coal Mine
  (dir_w <<10) | (xtype1<<8) |  67       , // 279:1c43 Coal Mine W -> Coal Mine
  (dir_ne<<10) | (xtype1<<8) |  70       , // 280:0846 Coal Mine NE -> Coal Mine
  (dir_e <<10) | (xtype1<<8) |  70 | last, // 281:8c46 Coal Mine E -> Coal Mine
  (dir_u <<10) | (xtype1<<8) |  70       , // 282:2446 Coal Mine U -> Coal Mine
  (dir_ne<<10) | (xtype1<<8) |  71       , // 283:0847 Coal Mine NE -> Coal Mine
  (dir_s <<10) | (xtype1<<8) |  66       , // 284:1442 Coal Mine S -> Coal Mine
  (dir_w <<10) | (xtype1<<8) |  67 | last, // 285:9c43 Coal Mine W -> Coal Mine
  (dir_d <<10) | (xtype1<<8) |  71       , // 286:2847 Coal Mine D -> Coal Mine
  (dir_n <<10) | (xtype1<<8) |  72       , // 287:0448 Coal Mine N -> Coal Mine
  (dir_w <<10) | (xtype1<<8) |  67       , // 288:1c43 Coal Mine W -> Coal Mine
  (dir_s <<10) | (xtype1<<8) |  68       , // 289:1444 Coal Mine S -> Coal Mine
  (dir_u <<10) | (xtype1<<8) |  68       , // 290:2444 Coal Mine U -> Coal Mine
  (dir_e <<10) | (xtype1<<8) |  69 | last, // 291:8c45 Coal Mine E -> Coal Mine
  (dir_se<<10) | (xtype1<<8) |  69       , // 292:1045 Coal Mine SE -> Coal Mine
  (dir_u <<10) | (xtype1<<8) |  70       , // 293:2446 Coal Mine U -> Coal Mine
  (dir_nw<<10) | (xtype1<<8) |  72 | last, // 294:a048 Coal Mine NW -> Coal Mine
  (dir_e <<10) | (xtype1<<8) |  66       , // 295:0c42 Coal Mine E -> Coal Mine
  (dir_w <<10) | (xtype1<<8) |  70       , // 296:1c46 Coal Mine W -> Coal Mine
  (dir_d <<10) | (xtype1<<8) |  65       , // 297:2841 Coal Mine D -> Ladder Top
  (dir_s <<10) | (xtype1<<8) |  71 | last, // 298:9447 Coal Mine S -> Coal Mine
  (dir_ne<<10) | (xtype1<<8) |  74       , // 299:084a Ladder Bottom NE -> Dead End
  (dir_s <<10) | (xtype1<<8) |  75       , // 300:144b Ladder Bottom S -> Timber Room
  (dir_u <<10) | (xtype1<<8) |  65 | last, // 301:a441 Ladder Bottom U -> Ladder Top
  (dir_s <<10) | (xtype1<<8) |  73 | last, // 302:9449 Dead End S -> Ladder Bottom
  (dir_n <<10) | (xtype1<<8) |  73       , // 303:0449 Timber Room N -> Ladder Bottom
  (dir_sw<<10) | (xtype3<<8) |  76 | last, // 304:9a4c Timber Room SW -> Lower Shaft
                                           /* 305:c413*/  -15341, // You cannot fit through this passage with that load.
                                           /* 306:001d*/  0 << 8 | 29, // [action]
  (dir_e <<10) | (xtype1<<8) |  77       , // 307:0c4d Lower Shaft E -> Machine Room
  (dir_u <<10) | (xtype2<<8) |   0       , // 308:2500 Lower Shaft U -> [deny]
                                           /* 309:c40c*/  -15348, // Not a chance.
  (d_exit<<10) | (xtype3<<8) |  75       , // 310:3a4b Lower Shaft exit -> Timber Room
                                           /* 311:c413*/  -15341, // You cannot fit through this passage with that load.
                                           /* 312:001d*/  0 << 8 | 29, // [action]
  (dir_ne<<10) | (xtype3<<8) |  75 | last, // 313:8a4b Lower Shaft NE -> Timber Room
                                           /* 314:c413*/  -15341, // You cannot fit through this passage with that load.
                                           /* 315:001d*/  0 << 8 | 29, // [action]
  (dir_nw<<10) | (xtype1<<8) |  76 | last, // 316:a04c Machine Room NW -> Lower Shaft
  (dir_e <<10) | (xtype1<<8) |  60 | last, // 317:8c3c Bat Room E -> Squeaky Room
  (dir_e <<10) | (xtype1<<8) |  38       , // 318:0c26 Dome Room E -> Rocky Crawl
  (dir_d <<10) | (xtype3<<8) |  80 | last, // 319:aa50 Dome Room D -> Torch Room
                                           /* 320:c40a*/  -15350, // You cannot go down without fracturing many bones.
                                           /* 321:0007*/  0 << 8 | 7, // [action]
  (dir_w <<10) | (xtype1<<8) |  80       , // 322:1c50 Torch Room W -> Torch Room
  (dir_d <<10) | (xtype1<<8) |  81       , // 323:2851 Torch Room D -> North-South Crawlway
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 324:a500 Torch Room U -> [deny]
                                           /* 325:c403*/  -15357, // You cannot reach the rope.
  (dir_n <<10) | (xtype1<<8) |  82       , // 326:0452 North-South Crawlway N -> West of Chasm
  (dir_s <<10) | (xtype1<<8) | 104       , // 327:1468 North-South Crawlway S -> Studio
  (dir_e <<10) | (xtype1<<8) |  10       , // 328:0c0a North-South Crawlway E -> Troll Room
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 329:a500 North-South Crawlway U -> [deny]
                                           /* 330:c3ff*/  -15361, // Not even a human fly could get up it.
  (dir_w <<10) | (xtype1<<8) |   9       , // 331:1c09 West of Chasm W -> Cellar
  (dir_n <<10) | (xtype1<<8) |  81       , // 332:0451 West of Chasm N -> North-South Crawlway
  (dir_s <<10) | (xtype1<<8) | 105       , // 333:1469 West of Chasm S -> Gallery
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 334:a900 West of Chasm D -> [deny]
                                           /* 335:c3fa*/  -15366, // The chasm probably leads directly to the infernal regions.
  (dir_n <<10) | (xtype3<<8) |  90       , // 336:065a Round Room N -> Engravings Cave
                                           /* 337:0000*/       0,
                                           /* 338:0204*/  2 << 8 | 4, // [action]
  (dir_s <<10) | (xtype3<<8) |  90       , // 339:165a Round Room S -> Engravings Cave
                                           /* 340:0000*/       0,
                                           /* 341:0204*/  2 << 8 | 4, // [action]
  (dir_e <<10) | (xtype3<<8) |  95       , // 342:0e5f Round Room E -> Grail Room
                                           /* 343:0000*/       0,
                                           /* 344:0204*/  2 << 8 | 4, // [action]
  (dir_w <<10) | (xtype3<<8) |   1       , // 345:1e01 Round Room W -> East-West Passage
                                           /* 346:0000*/       0,
                                           /* 347:0204*/  2 << 8 | 4, // [action]
  (dir_nw<<10) | (xtype3<<8) |  48       , // 348:2230 Round Room NW -> Deep Canyon
                                           /* 349:0000*/       0,
                                           /* 350:0204*/  2 << 8 | 4, // [action]
  (dir_ne<<10) | (xtype3<<8) |  84       , // 351:0a54 Round Room NE -> North-South Passage
                                           /* 352:0000*/       0,
                                           /* 353:0204*/  2 << 8 | 4, // [action]
  (dir_se<<10) | (xtype3<<8) |  57       , // 354:1239 Round Room SE -> Winding Passage
                                           /* 355:0000*/       0,
                                           /* 356:0204*/  2 << 8 | 4, // [action]
  (dir_sw<<10) | (xtype3<<8) |  11       , // 357:1a0b Round Room SW -> Maze
                                           /* 358:0000*/       0,
                                           /* 359:0204*/  2 << 8 | 4, // [action]
  (d_exit<<10) | (xtype3<<8) |  56 | last, // 360:ba38 Round Room exit -> Cold Passage
                                           /* 361:0000*/       0,
                                           /* 362:0504*/  5 << 8 | 4, // [action]
  (dir_n <<10) | (xtype1<<8) |  85       , // 363:0455 North-South Passage N -> Chasm
  (dir_ne<<10) | (xtype1<<8) |  49       , // 364:0831 North-South Passage NE -> Loud Room
  (dir_s <<10) | (xtype1<<8) |  83 | last, // 365:9453 North-South Passage S -> Round Room
  (dir_s <<10) | (xtype1<<8) |  37       , // 366:1425 Chasm S -> Deep Ravine
  (dir_e <<10) | (xtype1<<8) |  84       , // 367:0c54 Chasm E -> North-South Passage
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 368:a900 Chasm D -> [deny]
                                           /* 369:c3f2*/  -15374, // Are you out of your mind?
  (dir_s <<10) | (xtype1<<8) |  49       , // 370:1431 Damp Cave S -> Loud Room
  (dir_e <<10) | (xtype1<<8) |  98       , // 371:0c62 Damp Cave E -> Dam
  (dir_w <<10) | (xtype2<<8) |   0 | last, // 372:9d00 Damp Cave W -> [deny]
                                           /* 373:c3ee*/  -15378, // It is too narrow even for most insects.
  (dir_s <<10) | (xtype1<<8) |  49       , // 374:1431 Ancient Chasm S -> Loud Room
  (dir_e <<10) | (xtype1<<8) | 118       , // 375:0c76 Ancient Chasm E -> Small Cave
  (dir_n <<10) | (xtype1<<8) |  88       , // 376:0458 Ancient Chasm N -> Dead End
  (dir_w <<10) | (xtype1<<8) |  89 | last, // 377:9c59 Ancient Chasm W -> Dead End
  (dir_sw<<10) | (xtype1<<8) |  87 | last, // 378:9857 Dead End SW -> Ancient Chasm
  (dir_e <<10) | (xtype1<<8) |  87 | last, // 379:8c57 Dead End E -> Ancient Chasm
  (dir_n <<10) | (xtype1<<8) |  83       , // 380:0453 Engravings Cave N -> Round Room
  (dir_se<<10) | (xtype1<<8) |  91 | last, // 381:905b Engravings Cave SE -> Riddle Room
  (dir_d <<10) | (xtype1<<8) |  90       , // 382:285a Riddle Room D -> Engravings Cave
  (dir_e <<10) | (xtype3<<8) |  92 | last, // 383:8e5c Riddle Room E -> Pearl Room
                                           /* 384:c3e9*/  -15383, // Your way is blocked by an invisible force.
                                           /* 385:000a*/  0 << 8 | 10, // [action]
  (dir_e <<10) | (xtype1<<8) | 143       , // 386:0c8f Pearl Room E -> Bottom of Well
  (dir_w <<10) | (xtype1<<8) |  91 | last, // 387:9c5b Pearl Room W -> Riddle Room
  (dir_u <<10) | (xtype1<<8) |  53       , // 388:2435 Entrance to Hades U -> Cave
  (dir_e <<10) | (xtype3<<8) |  94       , // 389:0e5e Entrance to Hades E -> Land of the Living Dead
                                           /* 390:c3e3*/  -15389, // Some invisible force prevents you from passing through the gate.
                                           /* 391:000b*/  0 << 8 | 11, // [action]
  (enter <<10) | (xtype3<<8) |  94 | last, // 392:b65e Entrance to Hades enter -> Land of the Living Dead
                                           /* 393:c3e3*/  -15389, // Some invisible force prevents you from passing through the gate.
                                           /* 394:000b*/  0 << 8 | 11, // [action]
  (dir_e <<10) | (xtype1<<8) | 137       , // 395:0c89 Land of the Living Dead E -> Tomb of the Unknown Implementer
  (d_exit<<10) | (xtype1<<8) |  93       , // 396:385d Land of the Living Dead exit -> Entrance to Hades
  (dir_w <<10) | (xtype1<<8) |  93 | last, // 397:9c5d Land of the Living Dead W -> Entrance to Hades
  (dir_w <<10) | (xtype1<<8) |  83       , // 398:1c53 Grail Room W -> Round Room
  (dir_e <<10) | (xtype1<<8) |  55       , // 399:0c37 Grail Room E -> Narrow Crawlway
  (dir_u <<10) | (xtype1<<8) |  96 | last, // 400:a460 Grail Room U -> Temple
  (dir_w <<10) | (xtype1<<8) |  95       , // 401:1c5f Temple W -> Grail Room
  (dir_e <<10) | (xtype1<<8) |  97 | last, // 402:8c61 Temple E -> Altar
  (dir_w <<10) | (xtype1<<8) |  96 | last, // 403:9c60 Altar W -> Temple
  (dir_s <<10) | (xtype1<<8) |  48       , // 404:1430 Dam S -> Deep Canyon
  (dir_d <<10) | (xtype1<<8) | 106       , // 405:286a Dam D -> Dam Base
  (dir_e <<10) | (xtype1<<8) |  86       , // 406:0c56 Dam E -> Damp Cave
  (dir_n <<10) | (xtype1<<8) |  99 | last, // 407:8463 Dam N -> Dam Lobby
  (dir_s <<10) | (xtype1<<8) |  98       , // 408:1462 Dam Lobby S -> Dam
  (dir_n <<10) | (xtype1<<8) | 100       , // 409:0464 Dam Lobby N -> Maintenance Room
  (dir_e <<10) | (xtype1<<8) | 100 | last, // 410:8c64 Dam Lobby E -> Maintenance Room
  (dir_s <<10) | (xtype1<<8) |  99       , // 411:1463 Maintenance Room S -> Dam Lobby
  (dir_w <<10) | (xtype1<<8) |  99 | last, // 412:9c63 Maintenance Room W -> Dam Lobby
  (dir_w <<10) | (xtype1<<8) |  30       , // 413:1c1e Cyclops Room W -> Maze
  (dir_n <<10) | (xtype3<<8) | 102       , // 414:0666 Cyclops Room N -> Strange Passage
                                           /* 415:c3da*/  -15398, // The north wall is solid rock.
                                           /* 416:000d*/  0 << 8 | 13, // [action]
  (dir_u <<10) | (xtype3<<8) | 103 | last, // 417:a667 Cyclops Room U -> Treasure Room
                                           /* 418:c3d6*/  -15402, // The cyclops doesn't look like he'll let you pass.
                                           /* 419:000c*/  0 << 8 | 12, // [action]
  (dir_s <<10) | (xtype1<<8) | 101       , // 420:1465 Strange Passage S -> Cyclops Room
  (dir_e <<10) | (xtype1<<8) |   8 | last, // 421:8c08 Strange Passage E -> Living Room
  (dir_d <<10) | (xtype1<<8) | 101       , // 422:2865 Treasure Room D -> Cyclops Room
  (dir_e <<10) | (xtype1<<8) | 188 | last, // 423:8cbc Treasure Room E -> Small Square Room
  (dir_n <<10) | (xtype1<<8) |  81       , // 424:0451 Studio N -> North-South Crawlway
  (dir_nw<<10) | (xtype1<<8) | 105       , // 425:2069 Studio NW -> Gallery
  (dir_u <<10) | (xtype3<<8) |   6 | last, // 426:a606 Studio U -> Kitchen
                                           /* 427:c3cf*/  -15409, // The chimney is too narrow for you and all of your baggage.
                                           /* 428:030e*/  3 << 8 | 14, // [action]
  (dir_n <<10) | (xtype1<<8) |  82       , // 429:0452 Gallery N -> West of Chasm
  (dir_s <<10) | (xtype1<<8) | 104       , // 430:1468 Gallery S -> Studio
  (dir_w <<10) | (xtype1<<8) | 148 | last, // 431:9c94 Gallery W -> Bank Entrance
  (dir_n <<10) | (xtype1<<8) |  98       , // 432:0462 Dam Base N -> Dam
  (dir_u <<10) | (xtype1<<8) |  98       , // 433:2462 Dam Base U -> Dam
  (launch<<10) | (xtype1<<8) | 107 | last, // 434:ac6b Dam Base launch -> Frigid River
  (dir_w <<10) | (xtype1<<8) | 106       , // 435:1c6a Frigid River W -> Dam Base
  (land  <<10) | (xtype1<<8) | 106       , // 436:306a Frigid River land -> Dam Base
  (dir_d <<10) | (xtype1<<8) | 108       , // 437:286c Frigid River D -> Frigid River
  (dir_u <<10) | (xtype2<<8) |   0       , // 438:2500 Frigid River U -> [deny]
                                           /* 439:c3c7*/  -15417, // You cannot go upstream due to the strong current.
  (dir_e <<10) | (xtype2<<8) |   0 | last, // 440:8d00 Frigid River E -> [deny]
                                           /* 441:c3c0*/  -15424, // The white cliffs prevent you from landing here.
  (dir_d <<10) | (xtype1<<8) | 109       , // 442:286d Frigid River D -> Frigid River
  (dir_u <<10) | (xtype2<<8) |   0       , // 443:2500 Frigid River U -> [deny]
                                           /* 444:c3c7*/  -15417, // You cannot go upstream due to the strong current.
  (dir_e <<10) | (xtype2<<8) |   0 | last, // 445:8d00 Frigid River E -> [deny]
                                           /* 446:c3c0*/  -15424, // The white cliffs prevent you from landing here.
  (dir_d <<10) | (xtype1<<8) | 112       , // 447:2870 Frigid River D -> Frigid River
  (dir_e <<10) | (xtype1<<8) | 110       , // 448:0c6e Frigid River E -> White Cliffs Beach
  (dir_w <<10) | (xtype1<<8) | 117       , // 449:1c75 Frigid River W -> Rocky Shore
  (dir_u <<10) | (xtype2<<8) |   0       , // 450:2500 Frigid River U -> [deny]
                                           /* 451:c3c7*/  -15417, // You cannot go upstream due to the strong current.
  (land  <<10) | (xtype2<<8) |   0 | last, // 452:b100 Frigid River land -> [deny]
                                           /* 453:c430*/  -15312, // You must specify which direction here.
  (launch<<10) | (xtype1<<8) | 109       , // 454:2c6d White Cliffs Beach launch -> Frigid River
  (dir_s <<10) | (xtype3<<8) | 111 | last, // 455:966f White Cliffs Beach S -> White Cliffs Beach
                                           /* 456:c3ba*/  -15430, // The path is too narrow.
                                           /* 457:001e*/  0 << 8 | 30, // [action]
  (launch<<10) | (xtype1<<8) | 112       , // 458:2c70 White Cliffs Beach launch -> Frigid River
  (dir_n <<10) | (xtype3<<8) | 110 | last, // 459:866e White Cliffs Beach N -> White Cliffs Beach
                                           /* 460:c3ba*/  -15430, // The path is too narrow.
                                           /* 461:001e*/  0 << 8 | 30, // [action]
  (dir_d <<10) | (xtype1<<8) | 113       , // 462:2871 Frigid River D -> Frigid River
  (dir_e <<10) | (xtype1<<8) | 111       , // 463:0c6f Frigid River E -> White Cliffs Beach
  (dir_w <<10) | (xtype1<<8) | 116       , // 464:1c74 Frigid River W -> Sandy Beach
  (land  <<10) | (xtype2<<8) |   0       , // 465:3100 Frigid River land -> [deny]
                                           /* 466:c430*/  -15312, // You must specify which direction here.
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 467:a500 Frigid River U -> [deny]
                                           /* 468:c3c7*/  -15417, // You cannot go upstream due to the strong current.
  (dir_d <<10) | (xtype1<<8) | 114       , // 469:2872 Frigid River D -> Moby Lossage
  (dir_w <<10) | (xtype1<<8) | 115       , // 470:1c73 Frigid River W -> Shore
  (land  <<10) | (xtype1<<8) | 115       , // 471:3073 Frigid River land -> Shore
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 472:a500 Frigid River U -> [deny]
                                           /* 473:c3c7*/  -15417, // You cannot go upstream due to the strong current.
  (launch<<10) | (xtype1<<8) | 113       , // 474:2c71 Shore launch -> Frigid River
  (dir_n <<10) | (xtype1<<8) | 116       , // 475:0474 Shore N -> Sandy Beach
  (dir_s <<10) | (xtype1<<8) | 120 | last, // 476:9478 Shore S -> Aragain Falls
  (launch<<10) | (xtype1<<8) | 112       , // 477:2c70 Sandy Beach launch -> Frigid River
  (dir_s <<10) | (xtype1<<8) | 115 | last, // 478:9473 Sandy Beach S -> Shore
  (launch<<10) | (xtype1<<8) | 109       , // 479:2c6d Rocky Shore launch -> Frigid River
  (dir_nw<<10) | (xtype1<<8) | 118 | last, // 480:a076 Rocky Shore NW -> Small Cave
  (dir_s <<10) | (xtype1<<8) | 117       , // 481:1475 Small Cave S -> Rocky Shore
  (dir_nw<<10) | (xtype1<<8) |  87 | last, // 482:a057 Small Cave NW -> Ancient Chasm
  (d_exit<<10) | (xtype1<<8) | 120 | last, // 483:b878 Barrel exit -> Aragain Falls
  (dir_d <<10) | (xtype1<<8) | 114       , // 484:2872 Aragain Falls D -> Moby Lossage
  (dir_n <<10) | (xtype1<<8) | 115       , // 485:0473 Aragain Falls N -> Shore
  (enter <<10) | (xtype1<<8) | 119       , // 486:3477 Aragain Falls enter -> Barrel
  (dir_e <<10) | (xtype3<<8) | 121       , // 487:0e79 Aragain Falls E -> Rainbow room
                                           /* 488:0000*/       0,
                                           /* 489:001b*/  0 << 8 | 27, // [action]
  (dir_u <<10) | (xtype3<<8) | 121 | last, // 490:a679 Aragain Falls U -> Rainbow room
                                           /* 491:0000*/       0,
                                           /* 492:001b*/  0 << 8 | 27, // [action]
  (dir_e <<10) | (xtype1<<8) | 122       , // 493:0c7a Rainbow room E -> End of rainbow
  (dir_w <<10) | (xtype1<<8) | 120 | last, // 494:9c78 Rainbow room W -> Aragain Falls
  (dir_se<<10) | (xtype1<<8) | 123       , // 495:107b End of rainbow SE -> Canyon Bottom
  (dir_u <<10) | (xtype3<<8) | 121       , // 496:2679 End of rainbow U -> Rainbow room
                                           /* 497:0000*/       0,
                                           /* 498:001b*/  0 << 8 | 27, // [action]
  (dir_nw<<10) | (xtype3<<8) | 121       , // 499:2279 End of rainbow NW -> Rainbow room
                                           /* 500:0000*/       0,
                                           /* 501:001b*/  0 << 8 | 27, // [action]
  (dir_w <<10) | (xtype3<<8) | 121 | last, // 502:9e79 End of rainbow W -> Rainbow room
                                           /* 503:0000*/       0,
                                           /* 504:001b*/  0 << 8 | 27, // [action]
  (dir_n <<10) | (xtype1<<8) | 122       , // 505:047a Canyon Bottom N -> End of rainbow
  (dir_u <<10) | (xtype1<<8) | 124 | last, // 506:a47c Canyon Bottom U -> Rocky Ledge
  (dir_u <<10) | (xtype1<<8) | 125       , // 507:247d Rocky Ledge U -> Canyon View
  (dir_d <<10) | (xtype1<<8) | 123 | last, // 508:a87b Rocky Ledge D -> Canyon Bottom
  (dir_d <<10) | (xtype1<<8) | 124       , // 509:287c Canyon View D -> Rocky Ledge
  (dir_s <<10) | (xtype1<<8) |  34       , // 510:1422 Canyon View S -> Forest
  (dir_w <<10) | (xtype1<<8) |  35 | last, // 511:9c23 Canyon View W -> Forest
  (dir_n <<10) | (xtype1<<8) | 136 | last, // 512:8488 Volcano Bottom N -> Lava Room
  (dir_w <<10) | (xtype1<<8) | 131       , // 513:1c83 Volcano near small ledge W -> Narrow Ledge
  (land  <<10) | (xtype1<<8) | 131 | last, // 514:b083 Volcano near small ledge land -> Narrow Ledge
  (land  <<10) | (xtype1<<8) | 133       , // 515:3085 Volcano near wide ledge land -> Wide ledge
  (dir_w <<10) | (xtype1<<8) | 133 | last, // 516:9c85 Volcano near wide ledge W -> Wide ledge
  (launch<<10) | (xtype1<<8) | 128       , // 517:2c80 Narrow Ledge launch -> Volcano near small ledge
  (dir_s <<10) | (xtype1<<8) | 134       , // 518:1486 Narrow Ledge S -> Library
  (dir_d <<10) | (xtype2<<8) |   0       , // 519:2900 Narrow Ledge D -> [deny]
                                           /* 520:c3b7*/  -15433, // I wouldn't jump from here.
  (dir_w <<10) | (xtype3<<8) | 126 | last, // 521:9e7e Narrow Ledge W -> Volcano Bottom
                                           /* 522:0000*/       0,
                                           /* 523:0011*/  0 << 8 | 17, // [action]
  (dir_e <<10) | (xtype1<<8) |  44       , // 524:0c2c Volcano View E -> Egyptian Room
  (dir_d <<10) | (xtype2<<8) |   0       , // 525:2900 Volcano View D -> [deny]
                                           /* 526:c3b3*/  -15437, // I wouldn't try that.
  (unkn_f<<10) | (xtype2<<8) |   0 | last, // 527:bd00 Volcano View ??? -> [deny]
                                           /* 528:c3b0*/  -15440, // It is impossible to cross this distance.
  (launch<<10) | (xtype1<<8) | 130       , // 529:2c82 Wide ledge launch -> Volcano near wide ledge
  (dir_s <<10) | (xtype1<<8) | 135       , // 530:1487 Wide ledge S -> Dusty Room
  (dir_d <<10) | (xtype2<<8) |   0       , // 531:2900 Wide ledge D -> [deny]
                                           /* 532:c3aa*/  -15446, // It's a long way down.
  (dir_w <<10) | (xtype3<<8) | 126 | last, // 533:9e7e Wide ledge W -> Volcano Bottom
                                           /* 534:0000*/       0,
                                           /* 535:0011*/  0 << 8 | 17, // [action]
  (dir_n <<10) | (xtype1<<8) | 131       , // 536:0483 Library N -> Narrow Ledge
  (d_exit<<10) | (xtype1<<8) | 131 | last, // 537:b883 Library exit -> Narrow Ledge
  (dir_n <<10) | (xtype1<<8) | 133 | last, // 538:8485 Dusty Room N -> Wide ledge
  (dir_s <<10) | (xtype1<<8) | 126       , // 539:147e Lava Room S -> Volcano Bottom
  (dir_w <<10) | (xtype1<<8) |  46 | last, // 540:9c2e Lava Room W -> Ruby Room
  (dir_w <<10) | (xtype1<<8) |  94       , // 541:1c5e Tomb of the Unknown Implementer W -> Land of the Living Dead
  (dir_n <<10) | (xtype4<<8) | 157       , // 542:079d Tomb of the Unknown Implementer N -> Crypt
                                           /* 543:0000*/       0,
                                           /* 544:0077*/  0 << 8 | 119, // [object/action]
  (enter <<10) | (xtype4<<8) | 157 | last, // 545:b79d Tomb of the Unknown Implementer enter -> Crypt
                                           /* 546:0000*/       0,
                                           /* 547:0077*/  0 << 8 | 119, // [object/action]
  (dir_n <<10) | (xtype3<<8) | 139       , // 548:068b Low Room N -> Machine Room
                                           /* 549:0000*/       0,
                                           /* 550:0420*/  4 << 8 | 32, // [action]
  (dir_s <<10) | (xtype3<<8) | 139       , // 551:168b Low Room S -> Machine Room
                                           /* 552:0000*/       0,
                                           /* 553:0420*/  4 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 139       , // 554:0e8b Low Room E -> Machine Room
                                           /* 555:0000*/       0,
                                           /* 556:0620*/  6 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 139       , // 557:1e8b Low Room W -> Machine Room
                                           /* 558:0000*/       0,
                                           /* 559:0420*/  4 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 144       , // 560:0a90 Low Room NE -> Tea Room
                                           /* 561:0000*/       0,
                                           /* 562:0420*/  4 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 144       , // 563:1290 Low Room SE -> Tea Room
                                           /* 564:0000*/       0,
                                           /* 565:0620*/  6 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 144       , // 566:1a90 Low Room SW -> Tea Room
                                           /* 567:0000*/       0,
                                           /* 568:0420*/  4 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 144       , // 569:2290 Low Room NW -> Tea Room
                                           /* 570:0000*/       0,
                                           /* 571:0420*/  4 << 8 | 32, // [action]
  (d_exit<<10) | (xtype3<<8) | 144 | last, // 572:ba90 Low Room exit -> Tea Room
                                           /* 573:0000*/       0,
                                           /* 574:0620*/  6 << 8 | 32, // [action]
  (dir_w <<10) | (xtype1<<8) | 138       , // 575:1c8a Machine Room W -> Low Room
  (dir_s <<10) | (xtype1<<8) | 140 | last, // 576:948c Machine Room S -> Dingy Closet
  (dir_n <<10) | (xtype1<<8) | 139 | last, // 577:848b Dingy Closet N -> Machine Room
  (dir_e <<10) | (xtype1<<8) | 144       , // 578:0c90 Top of Well E -> Tea Room
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 579:a900 Top of Well D -> [deny]
                                           /* 580:c3aa*/  -15446, // It's a long way down.
  (dir_w <<10) | (xtype1<<8) |  92       , // 581:1c5c Bottom of Well W -> Pearl Room
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 582:a500 Bottom of Well U -> [deny]
                                           /* 583:c3a7*/  -15449, // The walls cannot be climbed.
  (dir_w <<10) | (xtype1<<8) | 142       , // 584:1c8e Tea Room W -> Top of Well
  (dir_nw<<10) | (xtype1<<8) | 138       , // 585:208a Tea Room NW -> Low Room
  (dir_e <<10) | (xtype2<<8) |   0 | last, // 586:8d00 Tea Room E -> [deny]
                                           /* 587:c3a3*/  -15453, // Only a mouse could get in there.
  (dir_e <<10) | (xtype1<<8) | 146       , // 588:0c92 Posts Room E -> Pool Room
  (dir_nw<<10) | (xtype2<<8) |   0       , // 589:2100 Posts Room NW -> [deny]
                                           /* 590:c39e*/  -15458, // There is a chasm too wide to jump across.
  (dir_w <<10) | (xtype2<<8) |   0       , // 591:1d00 Posts Room W -> [deny]
                                           /* 592:c39e*/  -15458, // There is a chasm too wide to jump across.
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 593:a900 Posts Room D -> [deny]
                                           /* 594:c39e*/  -15458, // There is a chasm too wide to jump across.
  (d_exit<<10) | (xtype1<<8) | 145       , // 595:3891 Pool Room exit -> Posts Room
  (dir_w <<10) | (xtype1<<8) | 145 | last, // 596:9c91 Pool Room W -> Posts Room
  (dir_d <<10) | (xtype1<<8) |  33       , // 597:2821 Up a Tree D -> Forest
  (dir_u <<10) | (xtype2<<8) |   0 | last, // 598:a500 Up a Tree U -> [deny]
                                           /* 599:c398*/  -15464, // You cannot climb any higher.
  (dir_nw<<10) | (xtype1<<8) | 149       , // 600:2095 Bank Entrance NW -> West Teller's Room
  (dir_ne<<10) | (xtype1<<8) | 150       , // 601:0896 Bank Entrance NE -> East Teller's Room
  (dir_s <<10) | (xtype1<<8) | 105 | last, // 602:9469 Bank Entrance S -> Gallery
  (dir_n <<10) | (xtype1<<8) | 151       , // 603:0497 West Teller's Room N -> Viewing Room
  (dir_s <<10) | (xtype1<<8) | 148       , // 604:1494 West Teller's Room S -> Bank Entrance
  (dir_w <<10) | (xtype1<<8) | 155 | last, // 605:9c9b West Teller's Room W -> Safety Depository
  (dir_n <<10) | (xtype1<<8) | 152       , // 606:0498 East Teller's Room N -> Viewing Room
  (dir_s <<10) | (xtype1<<8) | 148       , // 607:1494 East Teller's Room S -> Bank Entrance
  (dir_e <<10) | (xtype1<<8) | 155 | last, // 608:8c9b East Teller's Room E -> Safety Depository
  (dir_s <<10) | (xtype1<<8) | 148 | last, // 609:9494 Viewing Room S -> Bank Entrance
  (dir_s <<10) | (xtype1<<8) | 148 | last, // 610:9494 Viewing Room S -> Bank Entrance
  (dir_n <<10) | (xtype2<<8) |   0       , // 611:0500 Safety Depository N -> [deny]
                                           /* 612:c394*/  -15468, // There is a curtain of light there.
  (dir_w <<10) | (xtype3<<8) | 149       , // 613:1e95 Safety Depository W -> West Teller's Room
                                           /* 614:c38f*/  -15473, // An alarm rings briefly, and an invisible force prevents you from leaving.
                                           /* 615:0720*/  7 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 150       , // 616:0e96 Safety Depository E -> East Teller's Room
                                           /* 617:c38f*/  -15473, // An alarm rings briefly, and an invisible force prevents you from leaving.
                                           /* 618:0720*/  7 << 8 | 32, // [action]
  (dir_s <<10) | (xtype1<<8) | 156 | last, // 619:949c Safety Depository S -> Chairman's Office
  (dir_n <<10) | (xtype1<<8) | 155 | last, // 620:849b Chairman's Office N -> Safety Depository
  (d_exit<<10) | (xtype4<<8) | 137       , // 621:3b89 Crypt exit -> Tomb of the Unknown Implementer
                                           /* 622:0000*/       0,
                                           /* 623:0077*/  0 << 8 | 119, // [object/action]
  (dir_s <<10) | (xtype4<<8) | 137 | last, // 624:9789 Crypt S -> Tomb of the Unknown Implementer
                                           /* 625:0000*/       0,
                                           /* 626:0077*/  0 << 8 | 119, // [object/action]
  (dir_n <<10) | (xtype1<<8) | 159       , // 627:049f Top of Stairs N -> Stone Room
  (dir_d <<10) | (xtype1<<8) | 159       , // 628:289f Top of Stairs D -> Stone Room
  (dir_s <<10) | (xtype2<<8) |   0 | last, // 629:9500 Top of Stairs S -> [deny]
                                           /* 630:c385*/  -15483, // The wall is solid rock.
  (dir_s <<10) | (xtype1<<8) | 158       , // 631:149e Stone Room S -> Top of Stairs
  (dir_u <<10) | (xtype1<<8) | 158       , // 632:249e Stone Room U -> Top of Stairs
  (dir_n <<10) | (xtype1<<8) | 160 | last, // 633:84a0 Stone Room N -> Small Room
  (dir_n <<10) | (xtype3<<8) | 161       , // 634:06a1 Small Room N -> Hallway
                                           /* 635:0000*/       0,
                                           /* 636:0820*/  8 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 161       , // 637:0aa1 Small Room NE -> Hallway
                                           /* 638:0000*/       0,
                                           /* 639:0820*/  8 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 161       , // 640:22a1 Small Room NW -> Hallway
                                           /* 641:0000*/       0,
                                           /* 642:0820*/  8 << 8 | 32, // [action]
  (dir_s <<10) | (xtype1<<8) | 159 | last, // 643:949f Small Room S -> Stone Room
  (dir_n <<10) | (xtype3<<8) | 162       , // 644:06a2 Hallway N -> Hallway
                                           /* 645:0000*/       0,
                                           /* 646:0820*/  8 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 162       , // 647:0aa2 Hallway NE -> Hallway
                                           /* 648:0000*/       0,
                                           /* 649:0820*/  8 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 162       , // 650:22a2 Hallway NW -> Hallway
                                           /* 651:0000*/       0,
                                           /* 652:0820*/  8 << 8 | 32, // [action]
  (dir_s <<10) | (xtype1<<8) | 160       , // 653:14a0 Hallway S -> Small Room
  (enter <<10) | (xtype3<<8) | 177 | last, // 654:b6b1 Hallway enter -> Inside Mirror
                                           /* 655:c382*/  -15486, // The panel is closed.
                                           /* 656:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype3<<8) | 163       , // 657:06a3 Hallway N -> Hallway
                                           /* 658:0000*/       0,
                                           /* 659:0820*/  8 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 163       , // 660:0aa3 Hallway NE -> Hallway
                                           /* 661:0000*/       0,
                                           /* 662:0820*/  8 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 163       , // 663:22a3 Hallway NW -> Hallway
                                           /* 664:0000*/       0,
                                           /* 665:0820*/  8 << 8 | 32, // [action]
  (dir_s <<10) | (xtype3<<8) | 161       , // 666:16a1 Hallway S -> Hallway
                                           /* 667:0000*/       0,
                                           /* 668:0820*/  8 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 161       , // 669:12a1 Hallway SE -> Hallway
                                           /* 670:0000*/       0,
                                           /* 671:0820*/  8 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 161       , // 672:1aa1 Hallway SW -> Hallway
                                           /* 673:0000*/       0,
                                           /* 674:0820*/  8 << 8 | 32, // [action]
  (enter <<10) | (xtype3<<8) | 177 | last, // 675:b6b1 Hallway enter -> Inside Mirror
                                           /* 676:c382*/  -15486, // The panel is closed.
                                           /* 677:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype3<<8) | 164       , // 678:06a4 Hallway N -> Hallway
                                           /* 679:0000*/       0,
                                           /* 680:0820*/  8 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 164       , // 681:0aa4 Hallway NE -> Hallway
                                           /* 682:0000*/       0,
                                           /* 683:0820*/  8 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 164       , // 684:22a4 Hallway NW -> Hallway
                                           /* 685:0000*/       0,
                                           /* 686:0820*/  8 << 8 | 32, // [action]
  (dir_s <<10) | (xtype3<<8) | 162       , // 687:16a2 Hallway S -> Hallway
                                           /* 688:0000*/       0,
                                           /* 689:0820*/  8 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 162       , // 690:12a2 Hallway SE -> Hallway
                                           /* 691:0000*/       0,
                                           /* 692:0820*/  8 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 162       , // 693:1aa2 Hallway SW -> Hallway
                                           /* 694:0000*/       0,
                                           /* 695:0820*/  8 << 8 | 32, // [action]
  (enter <<10) | (xtype3<<8) | 177 | last, // 696:b6b1 Hallway enter -> Inside Mirror
                                           /* 697:c382*/  -15486, // The panel is closed.
                                           /* 698:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 165       , // 699:04a5 Hallway N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 163 | last, // 700:94a3 Hallway S -> Hallway
  (dir_n <<10) | (xtype1<<8) | 166       , // 701:04a6 Hallway N -> Dungeon Entrance
  (dir_ne<<10) | (xtype1<<8) | 166       , // 702:08a6 Hallway NE -> Dungeon Entrance
  (dir_nw<<10) | (xtype1<<8) | 166       , // 703:20a6 Hallway NW -> Dungeon Entrance
  (dir_s <<10) | (xtype3<<8) | 164       , // 704:16a4 Hallway S -> Hallway
                                           /* 705:0000*/       0,
                                           /* 706:0820*/  8 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 164       , // 707:12a4 Hallway SE -> Hallway
                                           /* 708:0000*/       0,
                                           /* 709:0820*/  8 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 164 | last, // 710:9aa4 Hallway SW -> Hallway
                                           /* 711:0000*/       0,
                                           /* 712:0820*/  8 << 8 | 32, // [action]
  (dir_n <<10) | (xtype4<<8) | 178       , // 713:07b2 Dungeon Entrance N -> Narrow Corridor
                                           /* 714:0000*/       0,
                                           /* 715:00ad*/  0 << 8 | 173, // [object/action]
  (enter <<10) | (xtype4<<8) | 178       , // 716:37b2 Dungeon Entrance enter -> Narrow Corridor
                                           /* 717:0000*/       0,
                                           /* 718:00ad*/  0 << 8 | 173, // [object/action]
  (dir_s <<10) | (xtype3<<8) | 165       , // 719:16a5 Dungeon Entrance S -> Hallway
                                           /* 720:0000*/       0,
                                           /* 721:0820*/  8 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 165       , // 722:12a5 Dungeon Entrance SE -> Hallway
                                           /* 723:0000*/       0,
                                           /* 724:0820*/  8 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 165 | last, // 725:9aa5 Dungeon Entrance SW -> Hallway
                                           /* 726:0000*/       0,
                                           /* 727:0820*/  8 << 8 | 32, // [action]
  (enter <<10) | (xtype3<<8) | 177       , // 728:36b1 Narrow Room enter -> Inside Mirror
                                           /* 729:c382*/  -15486, // The panel is closed.
                                           /* 730:0920*/  9 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 177       , // 731:1eb1 Narrow Room W -> Inside Mirror
                                           /* 732:c382*/  -15486, // The panel is closed.
                                           /* 733:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 162       , // 734:04a2 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 160 | last, // 735:94a0 Narrow Room S -> Small Room
  (enter <<10) | (xtype3<<8) | 177       , // 736:36b1 Narrow Room enter -> Inside Mirror
                                           /* 737:c382*/  -15486, // The panel is closed.
                                           /* 738:0920*/  9 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 177       , // 739:0eb1 Narrow Room E -> Inside Mirror
                                           /* 740:c382*/  -15486, // The panel is closed.
                                           /* 741:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 162       , // 742:04a2 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 160 | last, // 743:94a0 Narrow Room S -> Small Room
  (enter <<10) | (xtype3<<8) | 177       , // 744:36b1 Narrow Room enter -> Inside Mirror
                                           /* 745:c382*/  -15486, // The panel is closed.
                                           /* 746:0920*/  9 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 177       , // 747:1eb1 Narrow Room W -> Inside Mirror
                                           /* 748:c382*/  -15486, // The panel is closed.
                                           /* 749:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 163       , // 750:04a3 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 161 | last, // 751:94a1 Narrow Room S -> Hallway
  (enter <<10) | (xtype3<<8) | 177       , // 752:36b1 Narrow Room enter -> Inside Mirror
                                           /* 753:c382*/  -15486, // The panel is closed.
                                           /* 754:0920*/  9 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 177       , // 755:0eb1 Narrow Room E -> Inside Mirror
                                           /* 756:c382*/  -15486, // The panel is closed.
                                           /* 757:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 163       , // 758:04a3 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 161 | last, // 759:94a1 Narrow Room S -> Hallway
  (enter <<10) | (xtype3<<8) | 177       , // 760:36b1 Narrow Room enter -> Inside Mirror
                                           /* 761:c382*/  -15486, // The panel is closed.
                                           /* 762:0920*/  9 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 177       , // 763:1eb1 Narrow Room W -> Inside Mirror
                                           /* 764:c382*/  -15486, // The panel is closed.
                                           /* 765:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 164       , // 766:04a4 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 162 | last, // 767:94a2 Narrow Room S -> Hallway
  (enter <<10) | (xtype3<<8) | 177       , // 768:36b1 Narrow Room enter -> Inside Mirror
                                           /* 769:c382*/  -15486, // The panel is closed.
                                           /* 770:0920*/  9 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 177       , // 771:0eb1 Narrow Room E -> Inside Mirror
                                           /* 772:c382*/  -15486, // The panel is closed.
                                           /* 773:0920*/  9 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 164       , // 774:04a4 Narrow Room N -> Hallway
  (dir_s <<10) | (xtype1<<8) | 162 | last, // 775:94a2 Narrow Room S -> Hallway
  (dir_n <<10) | (xtype3<<8) | 161       , // 776:06a1 Inside Mirror N -> Hallway
                                           /* 777:0000*/       0,
                                           /* 778:0a20*/  10 << 8 | 32, // [action]
  (dir_s <<10) | (xtype3<<8) | 161       , // 779:16a1 Inside Mirror S -> Hallway
                                           /* 780:0000*/       0,
                                           /* 781:0a20*/  10 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 161       , // 782:0ea1 Inside Mirror E -> Hallway
                                           /* 783:0000*/       0,
                                           /* 784:0a20*/  10 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 161       , // 785:1ea1 Inside Mirror W -> Hallway
                                           /* 786:0000*/       0,
                                           /* 787:0a20*/  10 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 161       , // 788:0aa1 Inside Mirror NE -> Hallway
                                           /* 789:0000*/       0,
                                           /* 790:0a20*/  10 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 161       , // 791:22a1 Inside Mirror NW -> Hallway
                                           /* 792:0000*/       0,
                                           /* 793:0a20*/  10 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 161       , // 794:12a1 Inside Mirror SE -> Hallway
                                           /* 795:0000*/       0,
                                           /* 796:0a20*/  10 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 161       , // 797:1aa1 Inside Mirror SW -> Hallway
                                           /* 798:0000*/       0,
                                           /* 799:0a20*/  10 << 8 | 32, // [action]
  (d_exit<<10) | (xtype3<<8) | 161 | last, // 800:baa1 Inside Mirror exit -> Hallway
                                           /* 801:0000*/       0,
                                           /* 802:0a20*/  10 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 179       , // 803:04b3 Narrow Corridor N -> South Corridor
  (dir_s <<10) | (xtype4<<8) | 166 | last, // 804:97a6 Narrow Corridor S -> Dungeon Entrance
                                           /* 805:0000*/       0,
                                           /* 806:00ad*/  0 << 8 | 173, // [object/action]
  (dir_w <<10) | (xtype1<<8) | 180       , // 807:1cb4 South Corridor W -> West Corridor
  (dir_e <<10) | (xtype1<<8) | 181       , // 808:0cb5 South Corridor E -> East Corridor
  (dir_n <<10) | (xtype4<<8) | 184       , // 809:07b8 South Corridor N -> Prison Cell
                                           /* 810:0000*/       0,
                                           /* 811:0bac*/  11 << 8 | 172, // [object/action]
  (dir_s <<10) | (xtype1<<8) | 178 | last, // 812:94b2 South Corridor S -> Narrow Corridor
  (dir_s <<10) | (xtype1<<8) | 179       , // 813:14b3 West Corridor S -> South Corridor
  (dir_n <<10) | (xtype1<<8) | 182 | last, // 814:84b6 West Corridor N -> North Corridor
  (dir_n <<10) | (xtype1<<8) | 182       , // 815:04b6 East Corridor N -> North Corridor
  (dir_s <<10) | (xtype1<<8) | 179 | last, // 816:94b3 East Corridor S -> South Corridor
  (dir_e <<10) | (xtype1<<8) | 181       , // 817:0cb5 North Corridor E -> East Corridor
  (dir_w <<10) | (xtype1<<8) | 180       , // 818:1cb4 North Corridor W -> West Corridor
  (dir_n <<10) | (xtype1<<8) | 183       , // 819:04b7 North Corridor N -> Parapet
  (dir_s <<10) | (xtype4<<8) | 184       , // 820:17b8 North Corridor S -> Prison Cell
                                           /* 821:0000*/       0,
                                           /* 822:00af*/  0 << 8 | 175, // [object/action]
  (enter <<10) | (xtype4<<8) | 184 | last, // 823:b7b8 North Corridor enter -> Prison Cell
                                           /* 824:0000*/       0,
                                           /* 825:00af*/  0 << 8 | 175, // [object/action]
  (dir_s <<10) | (xtype1<<8) | 182       , // 826:14b6 Parapet S -> North Corridor
  (dir_n <<10) | (xtype2<<8) |   0       , // 827:0500 Parapet N -> [deny]
                                           /* 828:c37f*/  -15489, // You would be burned to a crisp in no time.
  (dir_d <<10) | (xtype2<<8) |   0 | last, // 829:a900 Parapet D -> [deny]
                                           /* 830:c37f*/  -15489, // You would be burned to a crisp in no time.
  (d_exit<<10) | (xtype4<<8) | 182       , // 831:3bb6 Prison Cell exit -> North Corridor
                                           /* 832:0000*/       0,
                                           /* 833:00af*/  0 << 8 | 175, // [object/action]
  (dir_n <<10) | (xtype4<<8) | 182       , // 834:07b6 Prison Cell N -> North Corridor
                                           /* 835:0000*/       0,
                                           /* 836:00af*/  0 << 8 | 175, // [object/action]
  (dir_s <<10) | (xtype4<<8) | 179 | last, // 837:97b3 Prison Cell S -> South Corridor
                                           /* 838:c379*/  -15495, // The bronze door is closed.
                                           /* 839:0bac*/  11 << 8 | 172, // [object/action]
  (d_exit<<10) | (xtype2<<8) |   0 | last, // 840:b900 Prison Cell exit -> [deny]
                                           /* 841:e1d7*/   -7721, // The door is securely fastened.
  (dir_n <<10) | (xtype2<<8) |   0       , // 842:0500 Prison Cell N -> [deny]
                                           /* 843:e1d7*/   -7721, // The door is securely fastened.
  (dir_s <<10) | (xtype4<<8) | 187       , // 844:17bb Prison Cell S -> Nirvana
                                           /* 845:0000*/       0,
                                           /* 846:00ac*/  0 << 8 | 172, // [object/action]
  (d_exit<<10) | (xtype4<<8) | 187 | last, // 847:bbbb Prison Cell exit -> Nirvana
                                           /* 848:0000*/       0,
                                           /* 849:00ac*/  0 << 8 | 172, // [object/action]
  (dir_s <<10) | (xtype1<<8) | 189       , // 850:14bd Small Square Room S -> Side Room
  (dir_w <<10) | (xtype1<<8) | 103       , // 851:1c67 Small Square Room W -> Treasure Room
  (dir_d <<10) | (xtype3<<8) | 190 | last, // 852:aabe Small Square Room D -> Room in a Puzzle
                                           /* 853:0000*/       0,
                                           /* 854:0c20*/  12 << 8 | 32, // [action]
  (dir_n <<10) | (xtype1<<8) | 188       , // 855:04bc Side Room N -> Small Square Room
  (dir_e <<10) | (xtype3<<8) | 190 | last, // 856:8ebe Side Room E -> Room in a Puzzle
                                           /* 857:c375*/  -15499, // The door is closed.
                                           /* 858:0d2d*/  13 << 8 | 45, // [action]
  (dir_n <<10) | (xtype3<<8) | 190       , // 859:06be Room in a Puzzle N -> Room in a Puzzle
                                           /* 860:0000*/       0,
                                           /* 861:0e20*/  14 << 8 | 32, // [action]
  (dir_ne<<10) | (xtype3<<8) | 190       , // 862:0abe Room in a Puzzle NE -> Room in a Puzzle
                                           /* 863:0000*/       0,
                                           /* 864:0e20*/  14 << 8 | 32, // [action]
  (dir_e <<10) | (xtype3<<8) | 190       , // 865:0ebe Room in a Puzzle E -> Room in a Puzzle
                                           /* 866:0000*/       0,
                                           /* 867:0e20*/  14 << 8 | 32, // [action]
  (dir_se<<10) | (xtype3<<8) | 190       , // 868:12be Room in a Puzzle SE -> Room in a Puzzle
                                           /* 869:0000*/       0,
                                           /* 870:0e20*/  14 << 8 | 32, // [action]
  (dir_s <<10) | (xtype3<<8) | 190       , // 871:16be Room in a Puzzle S -> Room in a Puzzle
                                           /* 872:0000*/       0,
                                           /* 873:0e20*/  14 << 8 | 32, // [action]
  (dir_sw<<10) | (xtype3<<8) | 190       , // 874:1abe Room in a Puzzle SW -> Room in a Puzzle
                                           /* 875:0000*/       0,
                                           /* 876:0e20*/  14 << 8 | 32, // [action]
  (dir_w <<10) | (xtype3<<8) | 189       , // 877:1ebd Room in a Puzzle W -> Side Room
                                           /* 878:0000*/       0,
                                           /* 879:0e20*/  14 << 8 | 32, // [action]
  (dir_nw<<10) | (xtype3<<8) | 190       , // 880:22be Room in a Puzzle NW -> Room in a Puzzle
                                           /* 881:0000*/       0,
                                           /* 882:0e20*/  14 << 8 | 32, // [action]
  (dir_u <<10) | (xtype3<<8) | 188 | last, // 883:a6bc Room in a Puzzle U -> Small Square Room
                                           /* 884:0000*/       0,
                                           /* 885:0e20*/  14 << 8 | 32, // [action]
  (unkn_0<<10) | (xtype1<<8) |   0       , // 886:0000 Room in a Puzzle ??? -> [deny]
};

const int data_objcts_count = 216;
const struct {
    int odesc1, odesc2, odesco, oactio, oflag1, oflag2, ofval, otval, osize, ocapac, oroom, oadv, ocan, oread;
} data_objcts[] = {
//  odesc1, odesc2, odesco, oactio, oflag1, oflag2,  ofval,  otval,  osize, ocapac,  oroom, oadv, ocan,  oread
  { -12364, -12367, -12369,      0, -24432,      0,      0,      0,      3,     15,      6,    0,    0,      0 }, //   1 brown sack
  { -12378, -12383,      0,      0, -23552,      0,      0,      0,      5,      0,      0,    0,    1,      0 }, //   2 clove of garlic
  { -12385, -12389,      0,      0, -23552,      0,      0,      0,      5,      0,      0,    0,    1,      0 }, //   3 lunch
  { -12390, -12396,      0,      1, -24576,     32,      0,      0,     10,      0,      0,    0,    0,      0 }, //   4 piece of vitreous slag
  { -12399, -12404,      0,      0, -24560,      0,      0,      0,     20,      0,     74,    0,    0,      0 }, //   5 small pile of coal
  { -12407, -12413,      0,      0, -24576,      0,      5,      5,     10,      0,     78,    0,    0,      0 }, //   6 jade figurine
  {      0, -12415,      0,    100, -32640,      0,      0,      0,  10000,     50,     77,    0,    0,      0 }, //   7 machine
  { -12416, -12423,      0,      0, -24576,      0,     10,      6,      5,      0,      0,    0,    0,      0 }, //   8 huge diamond
  { -12425, -12429,      0,      2, -30592,      0,      0,      0,  10000,  10000,      8,    0,    0,      0 }, //   9 trophy case
  { -12431, -12435,      0,      3, -22400,      0,      0,      0,      5,      4,      6,    0,    0,      0 }, //  10 glass bottle
  { -12437, -12441, -12444,    101, -24320,     32,      0,      0,      4,      0,      0,    0,   10,      0 }, //  11 quantity of water
  { -12449, -12454, -12455,      4, -24576,   4096,      0,      0,     10,      0,      7,    0,    0,      0 }, //  12 rope
  { -12461, -12467, -12468,      0, -24576,    512,      0,      0,      5,      0,      7,    0,    0,      0 }, //  13 knife
  { -12473, -12477, -12478,      5, -24576,    512,      0,      0,     30,      0,      8,    0,    0,      0 }, //  14 sword
  { -12488, -12495, -12496,      6, -24512,      0,      0,      0,     15,      0,      8,    0,    0,      0 }, //  15 lamp
  { -12503, -12508,      0,      0, -24576,      0,      0,      0,      5,      0,      0,    0,    0,      0 }, //  16 broken lamp
  {      0, -12510,      0,      7, -32256,     32,      0,      0,  10000,      0,      8,    0,    0,      0 }, //  17 carpet
  { -12511, -12517,      0,    102, -24560,      0,      0,      0,     25,      0,     36,    0,    0,      0 }, //  18 pile of leaves
  {  -4502, -12519,      0,    103, -32736,    128,      0,      0,  10000,      2,     10,    0,    0,      0 }, //  19 troll
  { -12520, -12524,      0,      0, -32768,    512,      0,      0,     25,      0,      0,    0,   19,      0 }, //  20 bloody axe
  { -12526, -12530, -12532,    104, -24576,    512,      0,      0,     20,      0,     16,    0,    0,      0 }, //  21 rusty knife
  { -12537, -12542, -12545,      0, -24576,      0,      0,      0,     20,      0,     16,    0,    0,      0 }, //  22 burned-out lantern
  { -12552, -12557,      0,      0, -24572,      0,      0,      0,     10,      0,     16,    0,    0,      0 }, //  23 set of skeleton keys
  { -12560, -12569,      0,      8, -32768,     32,      0,      0,  10000,      0,     16,    0,    0,      0 }, //  24 skeleton
  { -12571, -12578,      0,      0, -24576,      0,     10,      5,     15,      0,     16,    0,    0,      0 }, //  25 bag of coins
  { -12580, -12585,      0,      0, -24576,   8192,     12,     10,     20,      0,     49,    0,    0,      0 }, //  26 platinum bar
  { -12587, -12595,      0,      0, -24576,      0,      9,      5,     10,      0,     92,    0,    0,      0 }, //  27 pearl necklace
  {      0, -12597,      0,      9, -32224,     32,      0,      0,  10000,      0,     50,    0,    0,      0 }, //  28 mirror
  {      0, -12597,      0,      9, -32224,     32,      0,      0,  10000,      0,     51,    0,    0,      0 }, //  29 mirror
  { -12598, -12605,      0,    105, -32736,      0,      0,      0,  10000,      0,     45,    0,    0,      0 }, //  30 glacier
  { -12606, -12611, -12612,      0, -24576,      0,     15,      8,      5,      0,     46,    0,    0,      0 }, //  31 ruby
  { -12616, -12621, -12623,      0, -24576,      0,      4,     11,     20,      0,     47,    0,    0,      0 }, //  32 crystal trident
  { -12630, -12639,      0,      0, -24448,   8192,      3,      7,     55,     35,     44,    0,    0,      0 }, //  33 gold coffin
  { -12641, -12645, -12646,      0, -24499,      0,     14,      6,     20,      0,     80,    0,    0,      0 }, //  34 torch
  { -12654, -12659,      0,     10, -30720,     40,      0,      0,  10000,     50,     61,    0,    0,      0 }, //  35 basket
  {      0,      0,      0,     10, -32256,      0,      0,      0,  10000,      0,     76,    0,    0,      0 }, //  36 ??
  { -12660, -12666,      0,      0, -24576,      0,      5,      3,     10,      0,     64,    0,    0,      0 }, //  37 sapphire bracelet
  { -12669, -12674,      0,      0, -24576,      0,      0,      0,     50,      0,     75,    0,    0,      0 }, //  38 pile of timbers
  { -12676, -12681,      0,      0,   8320,      0,      0,      0,     40,     20,     83,    0,    0,      0 }, //  39 steel box
  { -12683, -12687,      0,      0, -24576,      0,     10,     10,     10,      0,      0,    0,   39,      0 }, //  40 fancy violin
  { -12689, -12695,      0,      0, -16384,   8192,      0,      0,      5,      0,     90,    0,    0, -12698 }, //  41 wall with engravings
  {      0,      0,      0,     11, -32224,      0,      0,      0,  10000,      0,     93,    0,    0,      0 }, //  42 ??
  { -12750, -12758,      0,      0, -24448,      0,      2,      5,     10,      5,     95,    0,    0,      0 }, //  43 grail
  {      0, -12759,      0,      0, -15872,   8192,      0,      0,      5,      0,     96,    0,    0, -12760 }, //  44 prayer
  { -12812, -12820, -12823,      0,   8192,      0,     15,      8,     35,      0,     40,    0,    0,      0 }, //  45 trunk with jewels
  { -12832, -12837, -12838,      0, -24576,      0,      0,      0,      5,      0,     96,    0,    0,      0 }, //  46 bell
  { -12845, -12850, -12851,    106,  -8048,      0,      0,      0,      5,      0,     97,    0,    0, -12858 }, //  47 book
  { -12915, -12919, -12921,    107, -24503,      0,      0,      0,     10,      0,     97,    0,    0,      0 }, //  48 pair of candles
  { -12928, -12932, -12934,      0,  -8176,      0,      0,      0,      5,      0,     99,    0,    0, -12943 }, //  49 tour guidebook
  { -13105, -13114,      0,      0,  -8176,      0,      0,      0,      2,      0,      8,    0,    0, -13116 }, //  50 newspaper
  { -13207, -13216,      0,    108,  -8192,      0,      0,      0,      2,      0,     99,    0,    0, -13218 }, //  51 matchbook
  { -13302, -13306,      0,      0,  -8176,      0,      0,      0,      2,      0,      0,    0,   53, -13307 }, //  52 leaflet
  { -13446, -13450,      0,      0, -32640,      0,      0,      0,  10000,     10,      2,    0,    0,      0 }, //  53 mailbox
  { -13451, -13459,      0,     12,  -8064,      0,      0,      0,     10,      7,    100,    0,    0, -13460 }, //  54 tube
  { -13468, -13472,      0,      0, -24572,      0,      0,      0,      6,      0,      0,    0,   54,      0 }, //  55 viscous material
  { -13475, -13478,      0,      0, -24572,      0,      0,      0,     10,      0,    100,    0,    0,      0 }, //  56 wrench
  { -13479, -13483,      0,      0, -24572,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  57 screwdriver
  {      0, -13485,      0,    109, -32736,    128,      0,      0,  10000,  10000,    101,    0,    0,      0 }, //  58 cyclops
  { -13486, -13493,      0,     13, -24448,      0,     10,     10,     10,      5,    103,    0,    0,      0 }, //  59 chalice
  { -13494, -13500, -13502,     14, -24560,      0,      4,      7,     15,      0,    105,    0,    0,      0 }, //  60 painting
  {  -4878, -13517,      0,    110, -32736,    128,      0,      0,  10000,      5,    190,    0,    0,      0 }, //  61 thief
  { -13518, -13524,      0,      0, -32768,    512,      0,      0,     10,      0,      0,    0,   61,      0 }, //  62 stilletto
  {      0, -13526,      0,    111, -28160,      0,      0,      0,      5,      0,      5,    0,    0,      0 }, //  63 window
  {      0, -13527,      0,     15, -32254,      0,      0,      0,      5,      0,     98,    0,    0,      0 }, //  64 bolt
  {      0, -13528,      0,     16, -28160,      0,      0,      0,      5,      0,     25,    0,    0,      0 }, //  65 grating
  {      0, -13529,      0,     17,   4608,      0,      0,      0,      5,      0,      8,    0,    0,      0 }, //  66 door
  {      0, -13529,      0,     18, -11776,      0,      0,      0,      5,      0,      8,    0,    0, -13530 }, //  67 door
  {      0, -13529,      0,     18, -28160,      0,      0,      0,      5,      0,      2,    0,    0,      0 }, //  68 door
  {      0, -13529,      0,     18, -28160,      0,      0,      0,      5,      0,     91,    0,    0,      0 }, //  69 door
  {      0, -13539,      0,     19, -32254,      0,      0,      0,      5,      0,     77,    0,    0,      0 }, //  70 switch
  {      0, -13540,      0,      0, -32768,      0,      0,      0,      5,      0,      0,    0,    0,      0 }, //  71 head on a pole
  {      0, -13542,      0,      0, -32768,      0,      0,      0,      5,      0,     93,    0,    0,      0 }, //  72 pile of corpses
  {      0, -13544,      0,    112, -32256,     32,      0,      0,      5,      0,     94,    0,    0,      0 }, //  73 pile of bodies
  {      0, -13546,      0,      0, -32256,      0,      0,      0,      5,      0,     98,    0,    0,      0 }, //  74 dam
  {      0, -13547,      0,      0, -32256,      0,      0,      0,      5,      0,     79,    0,    0,      0 }, //  75 railing
  {      0, -13548,      0,      0, -32256,      0,      0,      0,      5,      0,     93,    0,    0,      0 }, //  76 gate
  {      0, -13549,      0,      0, -32256,      0,      0,      0,      5,      0,     98,    0,    0,      0 }, //  77 bubble
  {      0, -13550,      0,     20, -32256,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  78 leak
  {      0, -13551,      0,     21, -32256,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  79 button
  {      0, -13551,      0,     21, -32256,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  80 button
  {      0, -13551,      0,     21, -32256,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  81 button
  {      0, -13551,      0,     21, -32256,      0,      0,      0,      5,      0,    100,    0,    0,      0 }, //  82 button
  {      0, -13552,      0,    113, -32256,     32,      0,      0,      5,      0,     78,    0,    0,      0 }, //  83 bat
  {      0, -13553,      0,      0, -32256,   2048,      0,      0,      5,      0,    120,    0,    0,      0 }, //  84 rainbow
  { -13554, -13558, -13560,      0,   8192,      0,     10,     10,     15,      0,    122,    0,    0,      0 }, //  85 pot of gold
  { -13566, -13571,      0,      0,   8192,      0,     10,     13,      8,      0,    116,    0,    0,      0 }, //  86 statue
  { -13572, -13582,      0,     22, -24560,      0,      0,      0,     20,      0,    106,    0,    0,      0 }, //  87 plastic inflatable boat
  { -13585, -13593,      0,     23, -24560,      0,      0,      0,     20,      0,      0,    0,    0,      0 }, //  88 holed plastic boat
  { -13596, -13600,      0,      0, -24572,      0,      0,      0,      5,      0,     41,    0,    0,      0 }, //  89 hand-held air pump
  { -13603, -13607,      0,     24, -24560,     10,      0,      0,     20,    100,      0,    0,    0,      0 }, //  90 magic boat
  { -13609, -13613,      0,      0,  -8176,      0,      0,      0,      2,      0,      0,    0,   90, -13615 }, //  91 tan label
  { -13673, -13678, -13681,    114, -24576,      0,      0,      0,      3,      0,    106,    0,    0,      0 }, //  92 sharp broken stick
  {      0, -13690,      0,      0, -32768,      0,      0,      0,      5,      0,    120,    0,    0,      0 }, //  93 barrel
  { -13691, -13697,      0,      0, -24448, -32768,      0,      0,     10,     20,    112,    0,    0,      0 }, //  94 red buoy
  { -13699, -13703,      0,      0, -24576,      0,      5,     10,      5,      0,      0,    0,   94,      0 }, //  95 large emerald
  { -13705, -13709,      0,      0, -24572,      0,      0,      0,     15,      0,    118,    0,    0,      0 }, //  96 shovel
  { -13710, -13715,      0,      0, -24576,      0,      0,      0,     20,      0,    118,    0,    0,      0 }, //  97 hunk of bat guano
  { -13718, -12659,      0,    115, -32768,     10,      0,      0,     70,    100,    126,    0,    0,      0 }, //  98 basket
  {      0, -13742,      0,      0, -32640,      1,      0,      0,  10000,      6,      0,    0,   98,      0 }, //  99 receptacle
  {      0, -13744,      0,      0, -32768,      0,      0,      0,  10000,      0,      0,    0,   98,      0 }, // 100 cloth bag
  {      0, -13746,      0,     25, -32768,   4096,      0,      0,  10000,      0,      0,    0,   98,      0 }, // 101 braided wire
  { -13748, -13755,      0,      0, -32768,      0,      0,      0,  10000,      0,    131,    0,    0,      0 }, // 102 hook
  { -13748, -13755,      0,      0, -32768,      0,      0,      0,  10000,      0,    133,    0,    0,      0 }, // 103 hook
  { -13756, -13761, -13763,      0,  -8192,      0,     10,     12,     10,      0,    131,    0,    0, -13772 }, // 104 gold zorkmid
  {      0, -13877,      0,     26, -32640,      0,      0,      0,  10000,     15,    135,    0,    0,      0 }, // 105 box
  { -13878, -13884,      0,      0,  -8176,      0,      0,      0,      1,      0,      0,    0,  105, -13885 }, // 106 card
  {      0, -13909,      0,      0, -32768,      8,      0,      0,  10000,     10,    135,    0,    0,      0 }, // 107 hole
  { -13910, -13914, -13915,      0, -24576,      0,     15,     10,     10,      0,      0,    0,  105,      0 }, // 108 crown
  { -13923, -13930,      0,    123, -24576,      9,      0,      0,      9,      2,      7,    0,    0,      0 }, // 109 brick
  { -13931, -13937,      0,     27, -24560,      0,      0,      0,      1,      0,     42,    0,    0,      0 }, // 110 wire coil
  { -13939, -13944,      0,     28, -32736,      0,      0,      0,  10000,      0,      0,    0,    0,      0 }, // 111 Volcano Gnome
  { -13946, -13950,      0,      0,  -8176,      0,      0,      0,      1,      0,      0,    0,    0, -13952 }, // 112 blue label
  { -13987, -13993,      0,      0, -24576,      0,      0,      0,     40,      0,      0,    0,    0,      0 }, // 113 broken balloon
  { -13995, -13999,      0,      0,  -8048,      0,      0,      0,     10,      2,    134,    0,    0, -14001 }, // 114 blue book
  { -14009, -14013,      0,      0,  -8048,      0,      0,      0,     10,      2,    134,    0,    0, -14001 }, // 115 green book
  { -14015, -14019,      0,      0,  -8048,      0,      0,      0,     10,      2,    134,    0,    0, -14001 }, // 116 purple book
  { -14021, -14025,      0,      0,  -8048,      0,      0,      0,     10,      2,    134,    0,    0, -14001 }, // 117 white book
  { -14027, -14033,      0,      0,  -8176,      0,      4,     10,      1,      0,      0,    0,  116, -14034 }, // 118 stamp
  {      0, -14131,      0,    130, -11776,     32,      0,      0,      5,      0,    137,    0,    0, -14132 }, // 119 tomb
  { -14147, -14154,      0,    116, -32768,   8224,      0,      0,      5,      0,    137,    0,    0,      0 }, // 120 set of poled heads
  { -14157, -14165, -14168,     29, -24576,      0,      0,      0,     15,      0,    137,    0,    0,      0 }, // 121 bunch of Coke bottles
  { -14185, -14199, -14202,      0,  -8176,      0,      0,      0,     70,      0,    137,    0,    0, -14221 }, // 122 stack of listings
  { -14238, -14248,      0,      0, -30720,      0,      0,      0,  10000,  10000,      0,    0,    0,      0 }, // 123 large case
  { -14250, -14254,      0,      0, -24576,      0,      0,      0,     60,      0,      0,    0,    0,      0 }, // 124 mangled cage
  { -14256, -14263,      0,      0, -32256,      0,      0,      0,      0,      0,    141,    0,    0,      0 }, // 125 steel cage
  { -14265, -14271,      0,    117, -32768,   8224,      6,      6,     10,      0,    140,    0,    0,      0 }, // 126 crystal sphere
  {      0, -13551,      0,    118, -32256,      0,      0,      0,      5,      0,    139,    0,    0,      0 }, // 127 button
  {      0, -13551,      0,    118, -32256,      0,      0,      0,      5,      0,    139,    0,    0,      0 }, // 128 button
  {      0, -13551,      0,    118, -32256,      0,      0,      0,      5,      0,    139,    0,    0,      0 }, // 129 button
  {      0, -14273,      0,      0, -15872, -32768,      0,      0,      5,      0,    143,    0,    0, -14276 }, // 130 wall with etchings
  {      0, -14273,      0,      0, -15872, -32768,      0,      0,      5,      0,    142,    0,    0, -14282 }, // 131 wall with etchings
  { -14298, -14312,      0,    119, -22528,      0,      0,      0,     10,      5,    146,    0,    0,      0 }, // 132 glass flask
  { -14314, -14322,      0,      0, -32736,      0,      0,      0,      0,      0,    146,    0,    0,      0 }, // 133 pool of sewage
  { -14324, -14329,      0,      0,   8192,      0,      5,      5,      8,      0,    146,    0,    0,      0 }, // 134 tin of spices
  {      0, -14331,      0,      0, -32768,      0,      0,      0,  10000,      0,    144,    0,    0,      0 }, // 135 large oblong table
  {      0, -14334,      0,      0, -32768,      0,      0,      0,  10000,      0,    145,    0,    0,      0 }, // 136 group of wooden posts
  { -14337, -14347,      0,    120, -32768,     10,      0,      0,    100,    100,    143,    0,    0,      0 }, // 137 wooden bucket
  { -14349, -14357,      0,    121, -23552,      0,      0,      0,     10,      0,    144,    0,    0,      0 }, // 138 piece of "EAT ME" cake
  { -14360, -14367,      0,    122,  -7168,      0,      0,      0,      4,      0,    144,    0,    0,      0 }, // 139 piece of cake with orange icing
  { -14371, -14377,      0,    122,  -7168,      0,      0,      0,      4,      0,    144,    0,    0,      0 }, // 140 piece of cake with red icing
  { -14381, -14388,      0,    122,  -7168,      0,      0,      0,      4,      0,    144,    0,    0,      0 }, // 141 piece of cake with blue icing
  { -14392, -14395,      0,     30, -32736,   9216,      0,      0,      0,      0,    138,    0,    0,      0 }, // 142 robot
  { -14396, -14401,      0,      0,  -8176,      0,      0,      0,      3,      0,    138,    0,    0, -14404 }, // 143 green piece of paper
  {      0, -14452,      0,      0, -32256,   2048,      0,      0,      5,      0,    147,    0,    0,      0 }, // 144 large tree
  {      0, -14452,      0,      0, -32256,   2048,      0,      0,      5,      0,     33,    0,    0,      0 }, // 145 large tree
  {      0, -14454,      0,      0, -32256,   2048,      0,      0,      5,      0,    123,    0,    0,      0 }, // 146 cliff
  {      0, -14455,      0,     37, -32256,   2048,      0,      0,      5,      0,    110,    0,    0,      0 }, // 147 white cliff
  { -14457, -14463, -14466,     32,  -8176,   8192,     10,     15,     10,      0,    154,    0,    0, -14473 }, // 148 stack of zorkmid bills
  { -14614, -14620, -14625,      0,  -8176,   8192,     10,      5,     25,      0,    156,    0,    0, -14632 }, // 149 portrait of J. Pierpont Flathead
  {      0, -14728,      0,      0, -15872,      0,      0,      0,      5,      0,    155,    0,    0, -14731 }, // 150 large stone cube
  {      0, -14745,      0,     33, -32256,      0,      0,      0,      5,      0,    155,    0,    0,      0 }, // 151 shimmering curtain of light
  { -14749, -14754,      0,     34, -32736,    128,      0,      0,      5,      0,      0,    0,    0,      0 }, // 152 gnome of Zurich
  { -14756, -14761, -14763,      0, -24560,      8,      0,      0,     20,     20,    147,    0,    0,      0 }, // 153 birds nest
  { -14768, -14773, -14776,     35, -24448,      0,      5,      5,      6,      6,      0,    0,  153,      0 }, // 154 jewel-encrusted egg
  { -14819, -14824,      0,      0, -24448,      8,      0,      0,      6,      6,      0,    0,    0,      0 }, // 155 broken jewel-encrusted egg
  { -14828, -14833,      0,      0, -24576,      0,      1,      1,      5,      0,      0,    0,    0,      0 }, // 156 beautiful brass bauble
  { -14836, -14842, -14845,     36, -24576,      0,      6,      2,      5,      0,      0,    0,  154,      0 }, // 157 clockwork canary
  { -14872, -14877, -14880,     36, -24576,      0,      0,      0,      5,      0,      0,    0,  155,      0 }, // 158 broken clockwork canary
  {      0, -14927,      0,    125, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 159 yellow panel
  {      0, -14929,      0,    125, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 160 white panel
  {      0, -14931,      0,    125, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 161 red panel
  {      0, -14933,      0,    125, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 162 black panel
  {      0, -14935,      0,    126, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 163 mahogany wall
  {      0, -14937,      0,    126, -28160,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 164 pine wall
  {      0, -14939,      0,      0, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 165 wooden bar
  {      0, -14941,      0,      0, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 166 long pole
  {      0, -14943,      0,     41, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 167 short pole
  {      0, -14945,      0,      0, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 168 T-bar
  {      0, -14946,      0,      0, -32256,      0,      0,      0,      5,      0,    177,    0,    0,      0 }, // 169 compass arrow
  {      0, -14948,      0,     42, -32256,      0,      0,      0,      5,      0,    159,    0,    0,      0 }, // 170 red button
  {      0, -14950,      0,     43, -32256,      8,      0,      0,      5,   1000,    160,    0,    0,      0 }, // 171 red beam of light
  {      0, -14953,      0,     44,   8704,      0,      0,      0,      5,      0,    179,    0,    0,      0 }, // 172 bronze door
  {      0, -14955,      0,     45, -28160,      0,      0,      0,      5,      0,    166,    0,    0,      0 }, // 173 wooden door
  {      0, -14957,      0,     46, -28160,      0,      0,      0,      5,      0,    185,    0,    0,      0 }, // 174 locked door
  {      0, -14959,      0,     47, -28160,      0,      0,      0,      5,      0,    182,    0,    0,      0 }, // 175 cell door
  {      0, -14961,      0,     48, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 176 large button
  {      0, -14963,      0,     49, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 177 sundial
  {      0, -14964,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 178 numeral 1
  {      0, -14966,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 179 numeral 2
  {      0, -14968,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 180 numeral 3
  {      0, -14970,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 181 numeral 4
  {      0, -14972,      0,    129, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 182 numeral 5
  {      0, -14974,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 183 numeral 6
  {      0, -14976,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 184 numeral 7
  {      0, -14978,      0,      0, -32256,      0,      0,      0,      5,      0,    183,    0,    0,      0 }, // 185 numeral 8
  { -14980, -14986,      0,      0,  -8176,      0,      0,      0,      4,      0,    188,    0,    0, -14989 }, // 186 note from the Thief
  {      0, -15045,      0,     52, -32256,      8,      0,      0,      5,      4,  26000,    0,    0,      0 }, // 187 small slit
  { -15047, -15053, -15055,      0,  -8192,      0,     15,     10,      4,      0,  18500,    0,    0, -15062 }, // 188 gold card
  {      0, -15200,      0,      0, -32256,      0,      0,      0,      5,      0,  26000,    0,    0,      0 }, // 189 steel door
  {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 190 ??
  {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 191 ??
  {      0,      0,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 192 ??
  {      0, -15202,      0,    124, -32256,    128,      0,      0,      0,      0,      0,    0,    0,      0 }, // 193 cretin
  {      0, -15203,      0,      0, -24064,     16,      0,      0,      0,      0,      0,    0,    0,      0 }, // 194 everything
  {      0, -15205,      0,      0, -24064,     16,      0,      0,      0,      0,      0,    0,    0,      0 }, // 195 valuables
  {      0, -15207,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 196 sailor
  {      0, -15208,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 197 set of teeth
  {      0, -15210,      0,     38, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 198 wall
  {      0, -15211,      0,     31, -32768,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 199 lurking grue
  {      0, -15213,      0,      0, -32252,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 200 pair of hands
  {      0, -15215,      0,      0, -32252,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 201 breath
  {      0, -15216,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 202 flyer
  {      0, -15217,      0,     39, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 203 bird
  {      0, -15218,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 204 tree
  {      0, -15219,      0,     40, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 205 northern wall
  {      0, -15221,      0,     40, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 206 southern wall
  {      0, -15223,      0,     40, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 207 eastern wall
  {      0, -15225,      0,     40, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 208 western wall
  {      0, -15227,      0,    101, -30720,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 209 water
  {      0, -15228,      0,    127, -32224,    128,      0,      0,      0,      0,      0,    0,    0,      0 }, // 210 Guardian of Zork
  {      0, -15231,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 211 compass rose
  {      0, -12597,      0,     50, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 212 mirror
  {      0, -15233,      0,     51, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 213 panel
  {      0, -15234,      0,      0, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 214 stone channel
  { -15236, -15244,      0,    128, -32736,   9216,      0,      0,      0,      0,    178,    0,    0,      0 }, // 215 dungeon master
  {      0, -15246,      0,    131, -32256,      0,      0,      0,      0,      0,      0,    0,    0,      0 }, // 216 ladder
};

const int data_oroom2_count = 15;
const struct {
    int oroom2, rroom2;
} data_oroom2[] = {
  { .oroom2 =  63, .rroom2 =   6 }, //   1
  { .oroom2 =  65, .rroom2 =  36 }, //   2
  { .oroom2 =  66, .rroom2 =   9 }, //   3
  { .oroom2 =  84, .rroom2 = 122 }, //   4
  { .oroom2 = 119, .rroom2 = 157 }, //   5
  { .oroom2 = 146, .rroom2 = 124 }, //   6
  { .oroom2 = 146, .rroom2 = 125 }, //   7
  { .oroom2 = 147, .rroom2 = 111 }, //   8
  { .oroom2 = 172, .rroom2 = 184 }, //   9
  { .oroom2 = 172, .rroom2 = 186 }, //  10
  { .oroom2 = 172, .rroom2 = 187 }, //  11
  { .oroom2 = 173, .rroom2 = 181 }, //  12
  { .oroom2 = 174, .rroom2 = 186 }, //  13
  { .oroom2 = 175, .rroom2 = 184 }, //  14
  { .oroom2 = 189, .rroom2 = 189 }, //  15
};

const int data_cevent_count = 24;
const struct {
    int ctick, cactio, cflag;
} data_cevent[] = {
  { .ctick =   0, .cactio =   1, .cflag =   0 }, //   1
  { .ctick =   0, .cactio =   2, .cflag =   1 }, //   2
  { .ctick = 350, .cactio =   3, .cflag =   0 }, //   3
  { .ctick =   0, .cactio =   4, .cflag =   1 }, //   4
  { .ctick =   0, .cactio =   5, .cflag =   1 }, //   5
  { .ctick =   0, .cactio =   6, .cflag =   1 }, //   6
  { .ctick =   0, .cactio =   7, .cflag =   1 }, //   7
  { .ctick =   0, .cactio =   8, .cflag =   1 }, //   8
  { .ctick =   0, .cactio =   9, .cflag =   1 }, //   9
  { .ctick =   0, .cactio =  10, .cflag =   1 }, //  10
  { .ctick =   0, .cactio =  11, .cflag =   1 }, //  11
  { .ctick =   0, .cactio =  12, .cflag =   1 }, //  12
  { .ctick =   0, .cactio =  13, .cflag =   1 }, //  13
  { .ctick =   0, .cactio =  14, .cflag =   1 }, //  14
  { .ctick =   0, .cactio =  15, .cflag =   0 }, //  15
  { .ctick =  -1, .cactio =  16, .cflag =   0 }, //  16
  { .ctick =   0, .cactio =  17, .cflag =   1 }, //  17
  { .ctick =   5, .cactio =  18, .cflag =   0 }, //  18
  { .ctick =  12, .cactio =  19, .cflag =   0 }, //  19
  { .ctick =   0, .cactio =  20, .cflag =   1 }, //  20
  { .ctick =   0, .cactio =  21, .cflag =   0 }, //  21
  { .ctick =   0, .cactio =  22, .cflag =   1 }, //  22
  { .ctick =   0, .cactio =  23, .cflag =   1 }, //  23
  { .ctick =   0, .cactio =  24, .cflag =   0 }, //  24
};

const int data_vill_count = 3;
const struct {
    int villns, vprob, vopps, vbest, vmelee;
} data_vill[] = {
  { .villns =     19, .vprob =      0, .vopps =      0, .vbest =     14, .vmelee =      4 }, //   1 troll
  { .villns =     61, .vprob =      0, .vopps =      0, .vbest =     13, .vmelee =      5 }, //   2 thief
  { .villns =     58, .vprob =      0, .vopps =      0, .vbest =      0, .vmelee =      3 }, //   3 cyclops
};

const int data_advs_count = 3;
const struct {
    int aroom, ascore, avehic, aobj, aactio, astren, aflag;
} data_advs[] = {
 { .aroom =   2, .ascore = 0, .avehic = 0, .aobj = 193, .aactio = 0, .astren = 0, .aflag = 0 }, //   1 cretin in West of House
 { .aroom = 138, .ascore = 0, .avehic = 0, .aobj = 142, .aactio = 1, .astren = 3, .aflag = 0 }, //   2 robot in Low Room
 { .aroom = 178, .ascore = 0, .avehic = 0, .aobj = 215, .aactio = 2, .astren = 3, .aflag = 0 }, //   3 dungeon master in Narrow Corridor
};

const int data_mbase = 885;

const int data_rmsg_count = 1022;
const int data_rmsg[] = {
      -1, //    1 Welcome to Dungeon.			This ve
      -8, //    2 Done.
      -9, //    3 Revision history: 11-MAR-91	C
     -64, //    4 Useful commands:     The 'BRI
    -606, //    5 Welcome to Dungeon!     You a
    -832, //    6 Please answer the question.
    -836, //    7 You clearly are a suicidal ma
    -865, //    8 What?  You don't trust me?  W
    -882, //    9 Now let me see... Well, we we
    -895, //   10 Do you wish me to try to patc
    -900, //   11 You are behind the white hous
    -912, //   12 open
    -913, //   13 slightly ajar
    -915, //   14 You are in the kitchen of the
    -945, //   15 You are in the living room.  
    -964, //   16 You are in the living room.  
    -985, //   17 In the center of the room is 
    -992, //   18 In the center of the room is 
    -999, //   19 In the center of the room is 
   -1005, //   20 There is a rug lying next to 
   -1011, //   21 You are in a dark and damp ce
   -1033, //   22 The door crashes shut, and yo
   -1040, //   23 You are in a small room near 
   -1052, //   24 Above you is a grating locked
   -1060, //   25 Above you is an open grating 
   -1067, //   26 Above you is a grating.
   -1070, //   27 You are in a clearing, with a
   -1080, //   28 There is a grating securely f
   -1087, //   29 There is an open grating desc
   -1094, //   30 A grating appears on the grou
   -1099, //   31 You are in a long room on the
   -1107, //   32 You are in a long room, to th
   -1130, //   33 There is a western exit, a pa
   -1143, //   34 You are on the reservoir.  Be
   -1166, //   35 You are on what used to be a 
   -1182, //   36 You are in a large cavernous 
   -1190, //   37 You are in a large cavernous 
   -1215, //   38 There is a tunnel leaving the
   -1222, //   39 You are in a large room with 
   -1238, //   40 Part of the glacier has been 
   -1243, //   41 There is a large passageway l
   -1249, //   42 You are in a large square roo
   -1273, //   43 Unfortunately, you have manag
   -1282, //   44 		BOOOOOOOOOM
   -1284, //   45 You are in large room which s
   -1343, //   46 closed
   -1344, //   47 The cave is very windy at the
   -1353, //   48 You are in a small room that 
   -1361, //   49 In the corner of the room on 
   -1375, //   50 A deranged vampire bat (a rej
   -1388, //   51 You are at the periphery of a
   -1410, //   52 Hanging down from the railing
   -1421, //   53 I'm afraid that the leap you 
   -1428, //   54 You are in a large room with 
   -1469, //   55 A large piece of rope descend
   -1481, //   56 You are in a circular room wi
   -1490, //   57 Your compass needle spins wil
   -1499, //   58 According to Prof. TAA of MIT
   -1525, //   59 You are outside a large gatew
   -1559, //   60 The way through the gate is b
   -1570, //   61 There is a clap of thunder, a
   -1594, //   62 You are not equipped for an e
   -1599, //   63 There is a clap of thunder, a
   -1620, //   64 You have entered the land of 
   -1666, //   65 Amid the desolation, you spot
   -1680, //   66 You are standing on the top o
   -1701, //   67 The sluice gates on the dam a
   -1719, //   68 It appears that the dam has b
   -1740, //   69 There is a control panel here
   -1756, //   70 The green bubble is glowing.
   -1760, //   71 The water level is now up to 
   -1766, //   72 The water level is now up to 
   -1772, //   73 The water level is now up to 
   -1778, //   74 The water level is now up to 
   -1783, //   75 The water level is now up to 
   -1789, //   76 The water level is now up to 
   -1795, //   77 The water level is now up to 
   -1800, //   78 The water level is now over y
   -1805, //   79 The water level is now high i
   -1811, //   80 The room is full of water and
   -1818, //   81 I'm afraid you have done drow
   -1824, //   82 You hear a scream of anguish 
   -1840, //   83 The thief gestures mysterious
   -1850, //   84 Something seems funny about t
   -1857, //   85 Oh dear, you seem to have gon
   -1869, //   86 You seem to be digging a hole
   -1874, //   87 The hole is getting deeper, b
   -1881, //   88 You are surrounded by a wall 
   -1888, //   89 You can see a small statue in
   -1893, //   90 The wall collapses, smotherin
   -1898, //   91 There is nothing to dig into 
   -1903, //   92 You are digging into a pile o
   -1909, //   93 You seem to be getting knee d
   -1915, //   94 You are covered with bat turd
   -1920, //   95 This is getting you nowhere.
   -1924, //   96 You are at the top of Aragain
   -1948, //   97 A beautiful rainbow can be se
   -1956, //   98 A solid rainbow spans the fal
   -1961, //   99 According to Prof. TAA of MIT
   -1993, //  100 You are on a wide ledge high 
   -2012, //  101 The way to the south is block
   -2018, //  102 There is a small door to the 
   -2012, //  103 The way to the south is block
   -2023, //  104 You are in a dusty old room w
   -2036, //  105 Imbedded in the far wall is a
   -2056, //  106 On the far wall is a rusty bo
   -2064, //  107 You are in a room with a low 
   -2078, //  108 As you enter, your compass st
   -2085, //  109 The ledge has collapsed and c
   -2092, //  110 The ledge collapses, giving y
   -2099, //  111 The force of the explosion ha
   -2108, //  112 The ledge collapses, leaving 
   -2115, //  113 The ledge collapses, probably
   -2135, //  114 The way is blocked by debris 
   -2141, //  115 You may recall your recent ex
   -2161, //  116 The room trembles and 50,000 
   -2172, //  117 The house shakes, and the cei
   -2184, //  118 A volcano gnome seems to walk
   -2217, //  119 Suddenly a sinister, wraithli
   -2275, //  120 Please forward problem report
   -2293, //  121 Unfortunately, it is impossib
   -2301, //  122 The slag turns out to be rath
   -2317, //  123 The lid opens.
   -2319, //  124 The lid closes.
   -2321, //  125 Look around.
   -2323, //  126 You think it isn't?
   -2326, //  127 I think you've already done t
   -2331, //  128 The trophy case is securely f
   -2344, //  129 The bottle hits the far wall 
   -2350, //  130 The basket is at the other en
   -2356, //  131 A brilliant maneuver destroys
   -2362, //  132 The water splashes on the wal
   -2370, //  133 The water spills to the floor
   -2378, //  134 It is not tied to anything.
   -2382, //  135 There is nothing it can be ti
   -2387, //  136 The rope is already attached.
   -2391, //  137 The rope drops over the side 
   -2400, //  138 I see no objects here.
   -2403, //  139 Although you tied it incorrec
   -2411, //  140 The rope drops gently to the 
   -2417, //  141 The rope is tied to the raili
   -2422, //  142 The lamp has smashed into the
   -2431, //  143 The rug is too heavy to lift,
   -2443, //  144 The rug is extremely heavy an
   -2450, //  145 With a great effort, the rug 
   -2467, //  146 Having moved the carpet previ
   -2477, //  147 You are stopped by a cloud of
   -2483, //  148 Time passes... and you die fr
   -2490, //  149 The gnome glances at his watc
   -2506, //  150 Now you've done it.  It seems
   -2522, //  151 There is an explosion nearby.
   -2526, //  152 The wire rapidly burns into n
   -2531, //  153 The match has gone out.
   -2534, //  154 The lamp appears to be gettin
   -2539, //  155 The lamp is dying.
   -2542, //  156 The candles grow short.
   -2545, //  157 The candles are very short.
   -2549, //  158 The leaves burn, and the neig
   -2556, //  159 The sight of someone carrying
   -2571, //  160 As you pick up the rusty knif
   -2582, //  161 As the knife approaches its v
   -2611, //  162 A ghost appears in the room a
   -2642, //  163 There is a rumble from deep w
   -2651, //  164 There is an ugly person stari
   -2656, //  165 The mirror is broken into man
   -2661, //  166 Nobody but a greedy surgeon w
   -2670, //  167 You have broken the mirror.  
   -2682, //  168 Haven't you done enough alrea
   -2687, //  169 The torch hits the glacier an
   -2717, //  170 The melting glacier seems to 
   -2728, //  171 The glacier is unmoved by you
   -2735, //  172 Part of the glacier melts, dr
   -2744, //  173 burned out ivory torch
   -2747, //  174 There is a burned out ivory t
   -2752, //  175 The basket is raised to the t
   -2758, //  176 The basket is lowered to the 
   -2765, //  177 The cage is securely fastened
   -2772, //  178 You seem unable to affect the
   -2778, //  179 How can you attack a spirit w
   -2785, //  180 The book is open to page 569.
   -2789, //  181 As hard as you try, the book 
   -2795, //  182 A booming voice says, "Wrong,
   -2808, //  183 I'm afraid that you have run 
   -2814, //  184 One of the matches starts to 
   -2819, //  185 The match is out.
   -2822, //  186 The tube refuses to accept an
   -2827, //  187 The cyclops yawns and stares 
   -2835, //  188 The cyclops, tired of all you
   -2851, //  189 The cyclops says, "Mmm mmm!  
   -2877, //  190 The cyclops looks tired and q
   -2890, //  191 The cyclops is apparently not
   -2901, //  192 The cyclops may be hungry, bu
   -2908, //  193 The cyclops is not so stupid 
   -2914, //  194 The cyclops seems somewhat ag
   -2919, //  195 The cyclops appears to be get
   -2926, //  196 The cyclops is moving about t
   -2934, //  197 The cyclops was looking for s
   -2948, //  198 The cyclops is moving toward 
   -2956, //  199 You have two choices:  1. Lea
   -2963, //  200 Your actions don't appear to 
   -2979, //  201 The cyclops ignores all injur
   -2987, //  202 The cyclops is rather heavy a
   -2996, //  203 You cannot tie the cyclops, a
   -3004, //  204 Realizing just in time that y
   -3019, //  205 Congratulations!  Unlike the 
   -3033, //  206 worthless piece of canvas
   -3037, //  207 There is a worthless piece of
   -3043, //  208 With great effort, you open t
   -3052, //  209 The window closes (more easil
   -3058, //  210 The bolt won't turn with your
   -3064, //  211 The sluice gates open, and wa
   -3071, //  212 The sluice gates close, and w
   -3080, //  213 You can't do that!
   -3083, //  214 The grating is locked.
   -3086, //  215 The grating opens to reveal t
   -3092, //  216 The grating opens.
   -3095, //  217 The grating is unlocked.
   -3099, //  218 The door reluctantly opens to
   -3110, //  219 The door swings shut and clos
   -3115, //  220 The door is locked from above
   -3119, //  221 The door cannot be opened.
   -3123, //  222 You cannot burn this door.
   -3127, //  223 The door is invulnerable.
   -3131, //  224 You cannot damage this door.
   -3135, //  225 The door is still under warra
   -3140, //  226 The machine comes to life (fi
   -3159, //  227 The machine doesn't seem to w
   -3166, //  228 A force keeps you from taking
   -3172, //  229 The voice of the guardian of 
   -3190, //  230 The lights within the room sh
   -3195, //  231 The lights within the room co
   -3200, //  232 Click.
   -3201, //  233 There is a rumbling sound, an
   -3219, //  234 The blue button appears to be
   -3224, //  235 The boat must be on the groun
   -3230, //  236 The boat inflates and appears
   -3236, //  237 You don't have enough lung po
   -3242, //  238 This boat will not inflate si
   -3250, //  239 Well done.  The boat is repai
   -3255, //  240 There is a hissing sound and 
   -3261, //  241 The boat deflates.
   -3264, //  242 You can't deflate the boat wh
   -3270, //  243 The boat must be on the groun
   -3276, //  244 Very good.
   -3278, //  245 The rainbow seems to have bec
   -3286, //  246 Suddenly, the rainbow appears
   -3302, //  247 The structural integrity of t
   -3320, //  248 The ballon is fastened to the
   -3325, //  249 The balloon is not tied to an
   -3330, //  250 The wire falls off the hook.
   -3334, //  251 The box is imbedded in the wa
   -3339, //  252 What do you expect, BOOM?
   -3343, //  253 The box has no door!
   -3346, //  254 The box is rusted and will no
   -3351, //  255 The box is not open, chomper!
   -3355, //  256 The wire starts to burn.
   -3359, //  257 "Thank you very much," he say
   -3392, //  258 "That wasn't quite what I had
   -3404, //  259 The gnome appears increasingl
   -3409, //  260 Although the implementers are
   -3427, //  261 Unfortunately, we've run out 
   -3446, //  262 Congratulations!  You've mana
   -3464, //  263 As you reach for the sphere, 
   -3483, //  264 As the robot reaches for sphe
   -3515, //  265 There is a giant spark, and y
   -3522, //  266 Nothing seems to happen.
   -3526, //  267 The whirring increases in int
   -3532, //  268 The whirring decreases in int
   -3538, //  269 A dull thump is heard in the 
   -3543, //  270 The flask breaks into pieces.
   -3547, //  271 Here noxious vapors prevent y
   -3552, //  272 Just before you pass out, you
   -3564, //  273 Suddenly, the room appears to
   -3571, //  274 The only writing visible is a
   -3582, //  275 You can't see through that!
   -3586, //  276 The letters appear larger but
   -3594, //  277 The icing, now visible, says 
   -3599, //  278 The icing, now visible, says 
   -3605, //  279 The icing, now visible, says 
   -3610, //  280 The pool of water evaporates,
   -3618, //  281 The door to the room seems to
   -3637, //  282 You have been blasted to smit
   -3645, //  283 The room around you seems to 
   -3652, //  284 The room seems to have become
   -3671, //  285 The robot is injured (being o
   -3688, //  286 How romantic!
   -3690, //  287 If you must... Poof, you're d
   -3695, //  288 The grue is a sinister, lurki
   -3730, //  289 There is no grue here, but I'
   -3748, //  290 The bucket rises and comes to
   -3753, //  291 The bucket descends and comes
   -3759, //  292 You notice that the # has bur
   -3770, //  293 I hope you have more light th
   -3776, //  294 I didn't realize that adventu
   -3795, //  295 Oh, dear.  It appears that th
   -3812, //  296 There is now a puddle in the 
   -3818, //  297 The water leaks out of the # 
   -3826, //  298 You won't melt it with a #.
   -3830, //  299 The bolt can't be turned with
   -3835, //  300 It seems that a # won't do.
   -3839, //  301 With a #?
   -3841, //  302 The robot gladly takes the # 
   -3850, //  303 A #?  Surely you jest.
   -3853, //  304 He who puts his hand to the p
   -3869, //  305 You'll have to speak up if yo
   -3876, //  306 I don't know how to do that. 
   -3883, //  307 At your service!
   -3886, //  308 The Frobozz Company, Ltd., cr
   -3895, //  309 Well, FOO, BAR, and BLETCH to
   -3900, //  310 It could very well be too lat
   -3904, //  311 The dungeon is ALWAYS open (a
   -3911, //  312 Naturally!
   -3913, //  313 AAAARRRRRRGGGGGGGGHHHHHHHHHH!
   -3917, //  314 Very good.  Now you can go to
   -3923, //  315 Have you tried hopping around
   -3929, //  316 Are you enjoying yourself?
   -3933, //  317 Wheeeeee!
   -3935, //  318 Do you expect me to applaud?
   -3939, //  319 Such language in a high-class
   -3946, //  320 You ought to be ashamed of yo
   -3951, //  321 It's not so bad.  You could h
   -3958, //  322 Tough shit, asshole.
   -3961, //  323 Oh, dear.  Such language from
   -3969, //  324 That word is henceforth repla
   -3975, //  325 I think you are taking this t
   -3981, //  326 Brief descriptions.
   -3984, //  327 Maximum verbosity.
   -3987, //  328 No long descriptions.
   -3990, //  329 You can see:  A #.
   -3993, //  330 Swimming is not allowed in th
   -3999, //  331 I don't really see how.
   -4002, //  332 I think that swimming is best
   -4009, //  333 Perhaps it is your head that 
   -4015, //  334 Wasn't he an Indian?
   -4018, //  335 I didn't think you would real
   -4043, //  336 Wasn't he a sailor?
   -4046, //  337 The cyclops, hearing the name
   -4062, //  338 There is a clap of thunder an
   -4069, //  339 Well what?
   -4071, //  340 If you pray enough, your pray
   -4078, //  341 Nothing happens.
   -4081, //  342 I don't really know how to do
   -4086, //  343 Do you wish to leave the game
   -4090, //  344 Underneath the pile of leaves
   -4096, //  345 Underneath the rug is a close
   -4102, //  346 Hello.
   -4103, //  347 Good day.
   -4105, //  348 Nice weather we've been havin
   -4110, //  349 Goodbye.
   -4112, //  350 Here, nothing happens.
   -4115, //  351 Nothing happens here.
   -4118, //  352 I think that phrase is gettin
   -4124, //  353 You seem to be repeating your
   -4129, //  354 The # bows his head to you in
   -4134, //  355 I think that only schizophren
   -4141, //  356 It is impossible to read in t
   -4146, //  357 How does one look through a #
   -4150, //  358 How can I read a #?
   -4153, //  359 How, exactly, do I ring that?
   -4157, //  360 Ding, dong.
   -4159, //  361 I'm not sure that a # can be 
   -4164, //  362 If you wish, but I can't unde
   -4170, //  363 Dental hygiene is highly reco
   -4182, //  364 A nice idea, but with a #?
   -4186, //  365 Well, you seem to have been b
   -4208, //  366 Unfortunately, the troll can'
   -4214, //  367 Inflating it further would pr
   -4220, //  368 How can you inflate that?
   -4224, //  369 Come on, now!
   -4226, //  370 The # isn't sleeping.
   -4229, //  371 This has no effect.
   -4232, //  372 does not seem to do anything 
   -4237, //  373 is not notably useful
   -4240, //  374 isn't very interesting
   -4243, //  375 doesn't appear worthwhile
   -4247, //  376 has no effect
   -4249, //  377 doesn't do anything
   -4252, //  378 Kicking a # #.
   -4254, //  379 Waving a # #.
   -4256, //  380 Playing in this way with a # 
   -4260, //  381 Fiddling with a # #.
   -4263, //  382 Pushing the # #.
   -4266, //  383 I don't think so.
   -4269, //  384 This cannot be tied, so it ca
   -4275, //  385 How can you tie that to anyth
   -4280, //  386 You can't tie the # to that.
   -4284, //  387 You could certainly never tie
   -4290, //  388 The # struggles and you canno
   -4296, //  389 Why would you tie up a #?
   -4300, //  390 You can't turn that.
   -4303, //  391 You certainly can't turn it w
   -4308, //  392 Digging with the # is slow an
   -4313, //  393 Digging with a # is silly.
   -4317, //  394 I don't think that anybody is
   -4322, //  395 Why knock on a #?
   -4325, //  396 It sounds like there is somet
   -4331, //  397 The contents of the # spill o
   -4336, //  398 I can't get to that to move i
   -4340, //  399 You can't move the #.
   -4343, //  400 You can't turn that on.
   -4346, //  401 It is already on.
   -4349, //  402 You can't turn that off.
   -4353, //  403 It is already off.
   -4356, //  404 The # is now on.
   -4359, //  405 The # is now off.
   -4362, //  406 It is now pitch black.
   -4365, //  407 You must tell me how to do th
   -4370, //  408 The # cannot be opened.
   -4373, //  409 Opened.
   -4374, //  410 Opening the # reveals:
   -4377, //  411 The # cannot be closed.
   -4380, //  412 It is already open.
   -4383, //  413 It is already closed.
   -4386, //  414 Closed.
   -4387, //  415 There is a # here.
   -4390, //  416 You are carrying a #.
   -4393, //  417 It is in the #, which is in t
   -4398, //  418 It is in the #, which you are
   -4403, //  419 Time passes...
   -4405, //  420 The # must be on the ground t
   -4411, //  421 I suppose you have a theory o
   -4417, //  422 You are already in the #, cre
   -4422, //  423 You are now in the #.
   -4425, //  424 You aren't in that!
   -4428, //  425 You realize, just in time, th
   -4438, //  426 You are on your own feet agai
   -4442, //  427 You can't go there without a 
   -4447, //  428 You can't go there in a #.
   -4451, //  429 I see nothing special about t
   -4456, //  430 It is pitch dark.  You are li
   -4464, //  431 You are in the #.
   -4467, //  432 The # has died.
   -4469, //  433 The troll, disarmed, cowers i
   -4482, //  434 The troll, now worried about 
   -4491, //  435 An unconscious troll is spraw
   -4502, //  436 A nasty-looking troll, brandi
   -4513, //  437 The troll stirs, quickly resu
   -4520, //  438 The troll spits in your face,
   -4528, //  439 The troll laughs at your puny
   -4533, //  440 The troll, who is remarkably 
   -4540, //  441 The troll, who is not overly 
   -4548, //  442 and not having the most discr
   -4557, //  443 and being for the moment sate
   -4576, //  444 Sadly, a # can't be put in a 
   -4580, //  445 You can't take the #.
   -4583, //  446 Aren't you forgetting somethi
   -4588, //  447 That would be a good trick.
   -4592, //  448 The # is too big to jump over
   -4596, //  449 You should have looked before
   -4602, //  450 I'm afraid that leap was a bi
   -4610, //  451 In the movies, your life woul
   -4619, //  452 Geronimo...
   -4621, //  453 I don't think that the # woul
   -4627, //  454 I think you should get that f
   -4632, //  455 Thank you very much.  It real
   -4638, //  456 How can I drink that?
   -4641, //  457 I'd like to, but I can't get 
   -4646, //  458 Thank you very much.  I was r
   -4656, //  459 The # catches fire.
   -4659, //  460 Unfortunately, you were holdi
   -4665, //  461 You don't have that.
   -4668, //  462 The # catches fire and is con
   -4673, //  463 I don't think you can burn a 
   -4677, //  464 It doesn't seem to work.
   -4681, //  465 Can you unlock a grating with
   -4686, //  466 Munging a # #.
   -4688, //  467 Trying to kill a # #.
   -4691, //  468 Trying to attack a # #.
   -4694, //  469 There is nothing here to atta
   -4699, //  470 I've known strange people, bu
   -4705, //  471 with your bare hands is suici
   -4710, //  472 with that is very self-destru
   -4715, //  473 You are in perfect health.
   -4719, //  474 You have a light wound.
   -4722, //  475 You have a serious wound.
   -4726, //  476 You have several wounds.
   -4730, //  477 You have serious wounds.
   -4734, //  478 You are at death's door.
   -4738, //  479 You can be killed by one more
   -4744, //  480 You can be killed by a seriou
   -4749, //  481 You can survive one serious w
   -4754, //  482 You are strong enough to take
   -4760, //  483 You have been killed once.
   -4764, //  484 You have been killed twice.
   -4768, //  485 This gives you the rank of Ch
   -4773, //  486 This gives you the rank of Wi
   -4778, //  487 This gives you the rank of Ma
   -4783, //  488 This gives you the rank of Wi
   -4788, //  489 This gives you the rank of Ha
   -4793, //  490 This gives you the rank of Ad
   -4798, //  491 This gives you the rank of Ju
   -4804, //  492 This gives you the rank of No
   -4810, //  493 This gives you the rank of Am
   -4816, //  494 This gives you the rank of Be
   -4821, //  495 Your sword is no longer glowi
   -4826, //  496 Your sword is glowing with a 
   -4832, //  497 You sword has begun to glow v
   -4838, //  498 Annoyed to be left unarmed in
   -4852, //  499 The robber, somewhat surprise
   -4863, //  500 His booty remains.
   -4866, //  501 As the thief dies, the power 
   -4877, //  502   A #.
   -4878, //  503 There is a suspicious-looking
   -4895, //  504 There is a suspicious-looking
   -4910, //  505 The robber revives, briefly f
   -4925, //  506 Once you got him, what would 
   -4931, //  507 You missed.  The thief makes 
   -4952, //  508 You evidently frightened the 
   -4962, //  509 You evidently frightened the 
   -4977, //  510 Your proposed victim suddenly
   -4984, //  511 The thief seems rather offend
   -4995, //  512 The thief places the # in his
   -5003, //  513 The candles are not lit.
   -5007, //  514 The flame is extinguished.
   -5011, //  515 Alas, there's not much left o
   -5021, //  516 With what?
   -5023, //  517 The candles are lit.
   -5026, //  518 The candles are already lit.
   -5030, //  519 You have to light them with s
   -5038, //  520 You realize just in time that
   -5046, //  521 The heat from the torch is so
   -5055, //  522 Oh, no!  You walked into the 
   -5063, //  523 Oh, no!  A fearsome grue slit
   -5072, //  524 You can't go that way.
   -5075, //  525 The # is closed.
   -5078, //  526 I can't reach that.
   -5081, //  527 You aren't carrying that.
   -5085, //  528 Dropped.
   -5087, //  529 Thrown.
   -5088, //  530 You watch as the balloon slow
   -5093, //  531 The balloon has landed.
   -5096, //  532 You have landed, but the ball
   -5103, //  533 You watch as the balloon slow
   -5109, //  534 The balloon descends.
   -5112, //  535 You hear a boom and notice th
   -5121, //  536 Your balloon has hit the rim 
   -5138, //  537 You watch as the balloon slow
   -5144, //  538 The balloon ascends.
   -5147, //  539 You watch as the balloon slow
   -5159, //  540 The balloon leaves the ledge.
   -5163, //  541 You watch as the balloon slow
   -5169, //  542 The balloon slowly rises from
   -5175, //  543 The cloth bag is draped over 
   -5180, //  544 The balloon is inflated, and 
   -5189, //  545 The balloon is tied to the ho
   -5194, //  546 I'm afraid you can't control 
   -5201, //  547 You are tied to the ledge.
   -5205, //  548 You don't really want to hold
   -5211, //  549 The receptacle is already occ
   -5216, //  550 The # burns inside the recept
   -5221, //  551 The balloon inflates as it fi
   -5227, //  552 Not likely.
   -5229, //  553 An interesting idea, but...
   -5233, //  554 A valiant attempt.
   -5236, //  555 You can't be serious.
   -5239, //  556 Not a prayer.
   -5241, //  557 You already have it.
   -5244, //  558 Your load is too heavy.  You 
   -5253, //  559 Taken.
   -5254, //  560 Nice try.
   -5256, //  561 I can't do that.
   -5259, //  562 I can't reach inside.
   -5262, //  563 How can you do that?
   -5265, //  564 The # is already in the #.
   -5269, //  565 It won't fit.
   -5271, //  566 I can't reach the #.
   -5274, //  567 The cage shakes and is hurled
   -5280, //  568 "I am sorry but that action i
   -5289, //  569 "My vision is not that good w
   -5295, //  570 "I am only a stupid robot and
   -5303, //  571 ECHO The acoustics of the roo
   -5309, //  572 Almost as soon as the # breat
   -5327, //  573 The # contains:
   -5329, //  574 Your collection of treasures 
   -5335, //  575 You are carrying:
   -5338, //  576 The # is carrying:
   -5341, //  577 By some miracle of elven tech
   -5352, //  578 You are empty handed.
   -5355, //  579 It is too dark in here to see
   -5359, //  580 #:
   -5360, //  581 I could't find anything.
   -5364, //  582 I couldn't find any valuables
   -5368, //  583 Someone carrying a large bag 
   -5391, //  584 Your opponent, determining di
   -5416, //  585 The holder of the large bag j
   -5427, //  586 A 'lean and hungry' gentleman
   -5440, //  587 A seedy-looking individual wi
   -5468, //  588 The other occupant (he of the
   -5479, //  589 The other occupant just left 
   -5493, //  590 Off in the distance you hear 
   -5505, //  591 You are still recovering from
   -5515, //  592 Attacking a dead # is pointle
   -5520, //  593 Well, you really did it that 
   -5528, //  594 The # slowly regains his feet
   -5532, //  595 The unconscious # cannot defe
   -5539, //  596 It appears that the last blow
   -5550, //  597 Saved.
   -5551, //  598 I can't access the save file.
   -5555, //  599 Restored.
   -5557, //  600 Your save file is obsolete an
   -5564, //  601 I don't understand that.
   -5568, //  602 You cannot talk to that!
   -5572, //  603 You cannot talk through anoth
   -5577, //  604 Please input the entire comma
   -5582, //  605 Fortunately, you still have a
   -5587, //  606 You are in a room with an exi
   -5597, //  607 A cyclops, who looks prepared
   -5625, //  608 The cyclops is standing in th
   -5644, //  609 The cyclops, having eaten the
   -5660, //  610 The cyclops, perhaps affected
   -5674, //  611 On the north of the room is a
   -5688, //  612 The bottle is closed.
   -5691, //  613 The bottle is already full.
   -5695, //  614 The bottle is now full of wat
   -5700, //  615 The water slips through your 
   -5705, //  616 Too many prepositions.
   -5708, //  617 Too many objects.
   -5711, //  618 I can't see one here.
   -5714, //  619 Which one do you mean?
   -5717, //  620 I can't reach that from insid
   -5722, //  621 What should I do with the #?
   -5726, //  622 Huh?
   -5727, //  623 You must supply a direct obje
   -5732, //  624 You must supply an indirect o
   -5737, //  625 Normally, I would offer to pa
   -5760, //  626 The thief, being temporarily 
   -5774, //  627 The thief is taken aback by y
   -5788, //  628 The # is open, but I can't te
   -5795, //  629 The # is empty.
   -5797, //  630 I don't know how to look insi
   -5802, //  631 There is nothing interesting 
   -3999, //  632 I don't really see how.
   -5807, //  633 The implementers are dead;  t
   -5815, //  634 You can't wind a #.
   -5818, //  635 You hear in the distance the 
   -5825, //  636 A metallic voice says, "Hello
   -5858, //  637 An epicene Gnome of Zurich, w
   -5907, //  638 The gnome looks impatient:  "
   -5929, //  639 Talk about eating rich foods!
   -5933, //  640 Nothing like having money to 
   -5938, //  641 "I wouldn't put THAT in a saf
   -5958, //  642 The gnome carefully places th
   -5990, //  643 The gnome says, "Well, I neve
   -6002, //  644 The gnome appears increasingl
   -6008, //  645 There is an unpleasant grindi
   -6016, //  646 The canary chirps blithely, i
   -6025, //  647 The canary chirps, slightly o
   -6072, //  648 The cliff is too steep for cl
   -6077, //  649 The egg is already open.
   -6081, //  650 There is no obvious way to op
   -6087, //  651 I doubt you could do that wit
   -6093, //  652 The egg is now open, but the 
   -6106, //  653 The concept of using a # is c
   -6112, //  654 Not to say that using a # isn
   -6119, //  655 You rather indelicate handlin
   -6131, //  656 Climbing the walls is of no a
   -6136, //  657 Bizarre!
   -6138, //  658 The egg falls to the ground a
   -6145, //  659 The # falls to the ground.
   -6149, //  660 You are about ten feet above 
   -6165, //  661 On the ground below you can s
   -6170, //  662 I can't see any wall here.
   -6174, //  663 That cannot be turned.
   -6177, //  664 You would be lost without me.
   -6181, //  665 You don't have the #.
   -6184, //  666 The song bird is not here, bu
   -6191, //  667 I can't see any song bird her
   -6195, //  668 You feel somewhat disoriented
   -6202, //  669 You hit your head against the
   -6210, //  670 You can't go more than part w
   -6217, //  671 That would involve quite a co
   -6222, //  672 You are in it, turkey!
   -6225, //  673 As you try, your hand seems t
   -6231, //  674 The # goes through it.
   -6234, //  675 The # passes through the wall
   -6240, //  676 The curtain dims slightly as 
   -6247, //  677 I can't do that with everythi
   -6253, //  678 There is a wall there.
   -6256, //  679 There is no way up.
   -6259, //  680 There is no way down.
   -6262, //  681 You are in part of the long h
   -6292, //  682 Somewhat to the south, identi
   -6330, //  683 Somewhat to the north, identi
   -6368, //  684 A passage enters from the sou
   -6373, //  685 The Guardians awake and, in p
   -6389, //  686 To the north and south are la
   -6395, //  687 To the north is a large hallw
   -6400, //  688 You are inside a rectangular 
   -6563, //  689 foot above the bar, and ends 
   -6574, //  690 foot above the bar, and ends 
   -6588, //  691 foot above the bar, and ends 
   -6612, //  692 foot above the bar, and ends 
   -6627, //  693 foot above the bar, and ends 
   -6641, //  694    The long pole at the cente
   -6677, //  695 north
   -6678, //  696 northeast
   -6680, //  697 east
   -6681, //  698 southeast
   -6683, //  699 south
   -6684, //  700 southwest
   -6686, //  701 west
   -6687, //  702 northwest
   -6689, //  703 You are in a small room, with
   -6710, //  704 You are in a small room, with
   -6740, //  705 Though large and esthetically
   -6779, //  706 You are in an east-west corri
   -6803, //  707 In the center of the north wa
   -6813, //  708 You are in a narrow north-sou
   -6830, //  709 You are in a north-south hall
   -6839, //  710 The wooden door has a barred 
   -6852, //  711 You are in a large east-west 
   -6891, //  712 You are standing behind a sto
   -6976, //  713 one
   -6977, //  714 two
   -6978, //  715 three
   -6979, //  716 four
   -6980, //  717 five
   -6981, //  718 six
   -6982, //  719 seven
   -6983, //  720 eight
   -6984, //  721 You are in a featureless pris
   -7003, //  722 You are in a featureless pris
   -7018, //  723 Behind you is a bronze door w
   -7025, //  724 You are in a featureless pris
   -7044, //  725 You are in a featureless pris
   -7072, //  726    As you gleefully examine y
   -7155, //  727 Suddenly, as you wait in the 
   -7227, //  728 The button pops back to its o
   -7233, //  729 The mirror quietly swings shu
   -7237, //  730 The pine wall closes quietly.
   -7241, //  731 The structure shakes slightly
   -7247, //  732 The short pole prevents the s
   -7254, //  733 The movement of the structure
   -7261, //  734 The arrow on the compass rose
   -7267, //  735 The structure rocks back and 
   -7275, //  736 The pine wall swings open.
   -7279, //  737 The pine door opens into the 
   -7287, //  738 The structure has reached the
   -7296, //  739 The structure slides # and st
   -7304, //  740 The structure wobbles # and s
   -7312, //  741 The structure wobbles as it m
   -7320, //  742 The Guardian notices a wooden
   -7331, //  743 Suddenly, the Guardians reali
   -7359, //  744 A Guardian notices the open s
   -7370, //  745 Attacking the Guardians is ab
   -7393, //  746 The statues are impassive.
   -7397, //  747 The dungeon master is taken m
   -7427, //  748 "I'm willing to accompany you
   -7435, //  749 The pole is now slightly abov
   -7441, //  750 The pole cannot be raised fur
   -7446, //  751 The pole cannot be lowered fu
   -7451, //  752 The pole is lowered into the 
   -7456, //  753 The pole is lowered into the 
   -7462, //  754 The pole is already resting o
   -7468, //  755 The pole now rests on the sto
   -7473, //  756 The button becomes depressed.
   -7477, //  757 The button pops back out.
   -7481, //  758 The button is already depress
   -7486, //  759 No doubt you have a bottle of
   -7493, //  760 The beam is now interrupted b
   -7500, //  761 You can't break the beam with
   -7505, //  762 The # already breaks the beam
   -7509, //  763 I see no bronze door here.
   -7513, //  764 The bronze door opens.
   -7516, //  765 The bronze door closes.
   -7519, //  766 On the other side of the door
   -7530, //  767 The door won't budge.
   -7533, //  768 The knock reverberates along 
   -7650, //  769 The booming voice asks:
   -7653, //  770 "From which room can one ente
   -7665, //  771 "Beside the Temple, to which 
   -7674, //  772 "What is the absolute minimum
   -7685, //  773 "What object is of use in det
   -7694, //  774 "What can be done to the mirr
   -7701, //  775 "The taking of which object o
   -7708, //  776 "What object in the dungeon i
   -7714, //  777 "In which room is the phrase 
   -7721, //  778 The door is securely fastened
   -7725, //  779 The wooden door opens.
   -7728, //  780 The wooden door closes.
   -7731, //  781 The dungeon master says, "I w
   -7736, //  782 The dungeon master says, "I w
   -7742, //  783 There is no reply.
   -7745, //  784 "I prefer to stay where I am,
   -7751, //  785 "I am not permitted to enter 
   -7757, //  786 "I cannot perform that action
   -7762, //  787 This gives you the rank of Du
   -7768, //  788 This gives you the rank of Su
   -7774, //  789 This gives you the rank of Ma
   -7780, //  790 This gives you the rank of Ad
   -4768, //  791 This gives you the rank of Ch
   -7786, //  792 You are in the Tomb of the Un
   -7829, //  793 The door of the crypt is extr
   -7837, //  794 The crypt is already open.
   -7841, //  795 The crypt is already closed.
   -7845, //  796 The crypt is closed.
   -7848, //  797 The dial spins and comes to a
   -7855, //  798 There is no answer.
   -7858, //  799 No one seems to be listening.
   -7862, //  800 The dungeon master says, "Exc
   -7867, //  801 The dungeon master says, "You
   -7876, //  802 The dungeon master says, "You
   -7885, //  803 The dungeon master says, "You
   -7894, //  804 The dungeon master says, "You
   -7903, //  805 The mirror is closed.
   -7906, //  806 You must specify what to set 
   -7912, //  807 The dial face contains only n
   -7917, //  808 The dial now points to "#".
   -7921, //  809 The button depresses with a s
   -7928, //  810 The cell door is now closed.
   -7932, //  811 You notice that the dungeon m
   -7939, //  812 The dungeon master catches up
   -7944, //  813 The dungeon master follows yo
   -7948, //  814 There is a wooden wall blocki
   -7954, //  815 There is a large mirror block
   -7960, //  816 There is a large broken mirro
   -7967, //  817 The structure blocks your way
   -7971, //  818 As you leave, the door swings
   -7976, //  819 You are in a narrow room whos
   -7984, //  820 You are in a narrow room whos
   -7992, //  821 You are in a narrow room whos
   -8004, //  822 You are in a narrow room whos
   -8016, //  823 The mirror is mounted on a pa
   -8024, //  824 The panel has been opened out
   -8029, //  825 The opposite wall is solid ro
   -8034, //  826 The dungeon master says, "You
   -8062, //  827 The dungeon master, obviously
   -8087, //  828 Saves are not permitted durin
   -8093, //  829 Restores are not permitted du
   -8099, //  830 The structure rotates clockwi
   -8104, //  831 The structure rotates counter
   -8109, //  832 I can't see a mirror here.
   -8113, //  833 I don't see any way to open t
   -8119, //  834 The mirror breaks, revealing 
   -8125, //  835 The mirror has already been b
   -8130, //  836 The mirror is mounted on a wo
   -8148, //  837 The mirror is unyielding but 
   -8155, //  838 I can't see a panel here.
   -8159, //  839 I don't see any way to open t
   -8165, //  840 To break the panel you would 
   -8173, //  841 The panel is not that easily 
   -8178, //  842 The wooden panel moves slight
   -8189, //  843 The panel is unyielding.
   -8193, //  844 A disheveled adventurer stare
   -8199, //  845 The mirror is broken into lit
   -8205, //  846 Shards of a broken mirror are
   -8212, //  847 The # side of the room is div
   -8220, //  848 hallways to the #east and #we
   -8225, //  849 A large mirror fills the # si
   -8231, //  850 A large panel fills the # sid
   -8237, //  851 The shattered pieces of a mir
   -8244, //  852 The corridor continues north.
   -8248, //  853 The corridor continues south.
   -8252, //  854 The corridor continues north 
   -8257, //  855 Incantations are useless once
   -8264, //  856 That incantation seems to hav
   -8270, //  857 Sorry, only one incantation t
   -8276, //  858 That spell has no obvious eff
   -8281, //  859 As the last syllable of your 
   -8296, //  860 The structure won't budge.
   -8300, //  861 You are in a room with an exi
   -8310, //  862 You are in a room with an exi
   -8319, //  863 The card slides easily into t
   -8348, //  864 The item vanishes into the sl
   -8368, //  865 I can't see any ladder here.
   -8372, //  866 Come, come!
   -8374, //  867 You hit your head on the ceil
   -8382, //  868 You are in a small square roo
   -8398, //  869 It appears the thief was corr
   -8403, //  870 In the ceiling above you is a
   -8410, //  871 The center of the floor is no
   -8417, //  872 The west wall here has a larg
   -8430, //  873 The west wall here has a larg
   -8443, //  874 There is a ladder here, firml
   -8451, //  875 There is a ladder here, firml
   -8459, //  876 There is only a passage in th
   -8465, //  877 The wall does not budge.
   -8469, //  878 The wall slides forward and y
   -8523, //  879 The wall slides forward and y
   -8532, //  880 Your position is as follows:
   -8536, //  881 The exit is too far above you
   -8541, //  882 With the help of the ladder, 
   -8548, //  883 Don't be lazy, type the comma
   -8554, //  884 In the MDL sources, NOOBJ is 
   -8568, //  885 The grating closes.
   -8571, //  886 Your swing misses the # by an
   -8576, //  887 A mightly blow, but it misses
   -8582, //  888 You charge, but the # jumps n
   -8588, //  889 Clang!  Crash!  The # parries
   -8592, //  890 A good stroke, but it's too s
   -8598, //  891 Your sword crashes down, knoc
   -8605, //  892 The # is battered into uncons
   -8610, //  893 A furious exchange, and the #
   -8616, //  894 It's curtains for the # as yo
   -8623, //  895 The fatal blow strikes the # 
   -8631, //  896 The # takes a final blow and 
   -8638, //  897 The # is struck on the arm, b
   -8646, //  898 Your sword pinks the # on the
   -8654, //  899 Your stroke lands, but it was
   -8662, //  900 The blow lands, making a shal
   -8669, //  901 The # receives a deep gash in
   -8674, //  902 A savage blow on the thigh!  
   -8683, //  903 Slash!  Your blow lands!  Tha
   -8692, //  904 The # is staggered and drops 
   -8698, //  905 The # is momentarily disorien
   -8705, //  906 The force of your blow knocks
   -8712, //  907 The #'s weapon is knocked to 
   -8720, //  908 Your stab misses the # by an 
   -8725, //  909 A good slash, but it misses t
   -8582, //  910 You charge, but the # jumps n
   -8731, //  911 A quick stroke, but the # is 
   -8592, //  912 A good stroke, but it's too s
   -8736, //  913 The haft of your blade knocks
   -8742, //  914 The # drops to his knees, unc
   -8747, //  915 The # is knocked out!
   -8750, //  916 It's the end for the # as you
   -8758, //  917 The fatal thrust strikes the 
   -8631, //  918 The # takes a final blow and 
   -8765, //  919 The # is slashed on the arm, 
   -8773, //  920 Your knife point pinks the # 
   -8654, //  921 Your stroke lands, but it was
   -8662, //  922 The blow lands, making a shal
   -8669, //  923 The # receives a deep gash in
   -8782, //  924 A savage cut on the leg stuns
   -8790, //  925 Slash!  Your stroke connects!
   -8799, //  926 The # drops to his knees, sta
   -8804, //  927 The # is confused and can't f
   -8809, //  928 The quickness of your thrust 
   -8817, //  929 The # is disarmed by a subtle
   -8824, //  930 The cyclops misses, but the b
   -8832, //  931 The cyclops rushes you but ru
   -8838, //  932 The cyclops trips over his fe
   -8845, //  933 The cyclops unleashes a round
   -8854, //  934 The cyclops knocks you uncons
   -8859, //  935 The cyclops sends you crashin
   -8867, //  936 The cyclops raises his arms a
   -8874, //  937 The cyclops has just essentia
   -8881, //  938 The cyclops decks you.  In fa
   -8887, //  939 The cyclops breaks your neck 
   -8894, //  940 A quick punch, but it was onl
   -8900, //  941 The cyclops grabs but you twi
   -8909, //  942 A glancing blow from the cycl
   -8914, //  943 The cyclops chops at you with
   -8925, //  944 The cyclops gets a good grip 
   -8932, //  945 The cyclops knocks the wind o
   -8940, //  946 The cyclops smashes his huge 
   -8950, //  947 A flying drop kick breaks you
   -8955, //  948 The cyclops breaks your leg w
   -8962, //  949 The cyclops knocks you silly,
   -8969, //  950 The cyclops grabs you and alm
   -8980, //  951 Heedless of your weapons, the
   -8991, //  952 The cyclops lands a punch tha
   -8999, //  953 The cyclops grabs you by the 
   -9006, //  954 The cyclops kicks your # out 
   -9012, //  955 The monster grabs you on the 
   -9022, //  956 The cyclops grabs your #, tas
   -9032, //  957 The cyclops is so excited by 
   -9041, //  958 The cyclops, momentarily over
   -9049, //  959 The cyclops seems unable to d
   -9058, //  960 The cyclops, no sportsman, di
   -9066, //  961 The troll swings his axe, but
   -9072, //  962 The troll's axe barely misses
   -9077, //  963 The axe sweeps past you as yo
   -9083, //  964 The axe crashes against the r
   -9090, //  965 The flat of the troll's axe h
   -9100, //  966 The troll lands a killing blo
   -9106, //  967 The troll neatly removes your
   -9111, //  968 The troll's axe cleaves you f
   -9118, //  969 The troll's axe bashes in you
   -9123, //  970 The axe gets you right in the
   -9129, //  971 The flat of the troll's axe s
   -9136, //  972 The troll's swing almost knoc
   -9145, //  973 The troll swings his axe, and
   -9153, //  974 The troll charges, and his ax
   -9161, //  975 The troll's axe swings down, 
   -9168, //  976 An axe stroke makes a deep wo
   -9174, //  977 The troll sees a hole in your
   -9187, //  978 The troll hits you with a gla
   -9197, //  979 The troll swings.  The blade 
   -9208, //  980 You stagger back under a hail
   -9214, //  981 The troll's mighty blow drops
   -9221, //  982 The axe hits your # and sends
   -9227, //  983 The troll swings.  You parry,
   -9236, //  984 The axe knocks your # out of 
   -9244, //  985 You parry the blow, but your 
   -9252, //  986 The troll strikes at your unc
   -9261, //  987 The troll hesitates, fingerin
   -9266, //  988 The troll scratches his head 
   -9278, //  989 The troll seems afraid to app
   -9285, //  990 Conquering his fears, the tro
   -9292, //  991 The thief stabs nonchalantly 
   -9300, //  992 You dodge as the thief comes 
   -9305, //  993 You parry a lightning thrust,
   -9315, //  994 The thief tries to sneak past
   -9323, //  995 Shifting in the midst of a th
   -9336, //  996 The thief knocks you out.
   -9340, //  997 Finishing you off, a lightnin
   -9348, //  998 The stilletto severs your jug
   -9356, //  999 The thief comes in from the s
   -9367, // 1000 The thief bows formally, rais
   -9380, // 1001 A quick thrust pinks your lef
   -9389, // 1002 Raking his stilletto across y
   -9397, // 1003 The stilletto flashes faster 
   -9408, // 1004 The thief slowly approaches, 
   -9418, // 1005 The thief strikes like a snak
   -9427, // 1006 The thief stabs a deep cut in
   -9433, // 1007 The stilletto touches your fo
   -9444, // 1008 The thief strikes at your wri
   -9454, // 1009 The butt of his stilletto cra
   -9464, // 1010 You are forced back and trip 
   -9474, // 1011 The thief rams the haft of hi
   -9485, // 1012 The thief attacks, and you fa
   -9492, // 1013 A long theatrical slash.  You
   -9506, // 1014 The thief neatly flips your #
   -9516, // 1015 You parry a low thrust, and y
   -9524, // 1016 Avoiding the thief's stillett
   -9534, // 1017 The thief, a man of good bree
   -9544, // 1018 The thief amuses himself by s
   -9551, // 1019 The thief entertains himself 
   -9558, // 1020 The thief, noticing you begin
   -9568, // 1021 The thief, forgetting his ess
   -9578, // 1022 The thief, who is essentially
};

const int data_mrloc = 9000;
