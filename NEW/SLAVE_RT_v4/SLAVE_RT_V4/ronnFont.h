
/* *******************************************************************************************************************
   FONT FROM LIBRARY MD_MAX72xx
 * *******************************************************************************************************************
   FONT INFO in first 5 (0 to 4) array char font --> default from library MD_MAX72xx
   in this case, font info use :
   0: double height (T:TRUE; F:FALSE) --> double height of font 10x16
   1: not use
   2: first char font
   3: last char font
   4: height font
   You can use "Font Builder.xlsm" create new font (check on "Tool" folder)
   ***this tool is modify from "Parola MD_MAX72xx Font Builder v2.xlsm" in MajicDesigns/MD_MAX72XX library :
      https://github.com/MajicDesigns/MD_MAX72XX/tree/main/Font%20Builder/Excel


   Exixting font:
   - font_DEFAULT --> default font (5x8) [DO NOT RENAME THIS FONT VARIABLE NAME]
   - B_7SEGMENT   --> Big font 7 segment (10x16) [number only]
   - N_7SEGMENT   --> Normal size 7 segment (5x8) [number only]
   - B_STD        --> Big font standart (10x16)
   - S_STD        --> Small font standart (3x5)
 * *******************************************************************************************************************
*/

const uint8_t font_DEFAULT[] PROGMEM = {
  'F', 0, 0, 255, 8, //-----------------------------------------> THIS IS FONT INFO
  0,    // 0 - 'Empty Cell'
  5, 62, 91, 79, 91, 62,    // 1 - 'Sad Smiley'
  5, 62, 107, 79, 107, 62,    // 2 - 'Happy Smiley'
  5, 28, 62, 124, 62, 28,   // 3 - 'Heart'
  5, 24, 60, 126, 60, 24,   // 4 - 'Diamond'
  5, 28, 87, 125, 87, 28,   // 5 - 'Clubs'
  5, 28, 94, 127, 94, 28,   // 6 - 'Spades'
  4, 0, 24, 60, 24,   // 7 - 'Bullet Point'
  5, 255, 231, 195, 231, 255,   // 8 - 'Rev Bullet Point'
  4, 0, 24, 36, 24,   // 9 - 'Hollow Bullet Point'
  5, 255, 231, 219, 231, 255,   // 10 - 'Rev Hollow BP'
  5, 48, 72, 58, 6, 14,   // 11 - 'Male'
  5, 38, 41, 121, 41, 38,   // 12 - 'Female'
  5, 64, 127, 5, 5, 7,    // 13 - 'Music Note 1'
  5, 64, 127, 5, 37, 63,    // 14 - 'Music Note 2'
  5, 90, 60, 231, 60, 90,   // 15 - 'Snowflake'
  5, 127, 62, 28, 28, 8,    // 16 - 'Right Pointer'
  5, 8, 28, 28, 62, 127,    // 17 - 'Left Pointer'
  5, 20, 34, 127, 34, 20,   // 18 - 'UpDown Arrows'
  5, 255, 255, 255, 255, 255,   // 19 - 'Full Block'
  5, 240, 240, 240, 240, 240,   // 20 - 'Half Block Bottom'
  3, 255, 255, 255,   // 21 - 'Half Block LHS'
  5, 0, 0, 0, 255, 255,   // 22 - 'Half Block RHS'
  5, 15, 15, 15, 15, 15,    // 23 - 'Half Block Top'
  5, 8, 4, 126, 4, 8,   // 24 - 'Up Arrow'
  5, 16, 32, 126, 32, 16,   // 25 - 'Down Arrow'
  5, 8, 8, 42, 28, 8,   // 26 - 'Right Arrow'
  5, 8, 28, 42, 8, 8,   // 27 - 'Left Arrow'
  5, 170, 0, 85, 0, 170,    // 28 - '30% shading'
  5, 170, 85, 170, 85, 170,   // 29 - '50% shading'
  5, 48, 56, 62, 56, 48,    // 30 - 'Up Pointer'
  5, 6, 14, 62, 14, 6,    // 31 - 'Down Pointer'
  2, 0, 0,    // 32 - 'Space'
  1, 95,    // 33 - '!'
  3, 7, 0, 7,   // 34 - '""'
  5, 20, 127, 20, 127, 20,    // 35 - '#'
  5, 68, 74, 255, 74, 50,   // 36 - '$'
  5, 99, 19, 8, 100, 99,    // 37 - '%'
  5, 54, 73, 73, 54, 72,    // 38 - '&'
  1, 7,   // 39 - '''
  3, 62, 65, 65,    // 40 - '('
  3, 65, 65, 62,    // 41 - ')'
  5, 8, 42, 28, 42, 8,    // 42 - '*'
  5, 8, 8, 62, 8, 8,    // 43 - '+'
  2, 96, 224,   // 44 - ','
  4, 8, 8, 8, 8,    // 45 - '-'
  2, 96, 96,    // 46 - '.'
  5, 96, 16, 8, 4, 3,   // 47 - '/'
  5, 62, 81, 73, 69, 62,    // 48 - '0'
  3, 66, 127, 64,   // 49 - '1'
  5, 113, 73, 73, 73, 70,   // 50 - '2'
  5, 65, 73, 73, 73, 54,    // 51 - '3'
  5, 15, 8, 8, 8, 127,    // 52 - '4'
  5, 79, 73, 73, 73, 49,    // 53 - '5'
  5, 62, 73, 73, 73, 48,    // 54 - '6'
  5, 3, 1, 1, 1, 127,   // 55 - '7'
  5, 54, 73, 73, 73, 54,    // 56 - '8'
  5, 6, 73, 73, 73, 62,   // 57 - '9'
  2, 108, 108,    // 58 - ':'
  2, 108, 236,    // 59 - ';'
  3, 8, 20, 34,   // 60 - '<'
  4, 20, 20, 20, 20,    // 61 - '='
  3, 34, 20, 8,   // 62 - '>'
  5, 1, 89, 9, 9, 6,    // 63 - '?'
  5, 62, 65, 93, 89, 78,    // 64 - '@'
  5, 126, 9, 9, 9, 126,   // 65 - 'A'
  5, 127, 73, 73, 73, 54,   // 66 - 'B'
  5, 62, 65, 65, 65, 65,    // 67 - 'C'
  5, 127, 65, 65, 65, 62,   // 68 - 'D'
  5, 127, 73, 73, 73, 65,   // 69 - 'E'
  5, 127, 9, 9, 9, 1,   // 70 - 'F'
  5, 62, 65, 65, 73, 121,   // 71 - 'G'
  5, 127, 8, 8, 8, 127,   // 72 - 'H'
  3, 65, 127, 65,   // 73 - 'I'
  5, 48, 65, 65, 65, 63,    // 74 - 'J'
  5, 127, 8, 20, 34, 65,    // 75 - 'K'
  5, 127, 64, 64, 64, 64,   // 76 - 'L'
  5, 127, 2, 12, 2, 127,    // 77 - 'M'
  5, 127, 4, 8, 16, 127,    // 78 - 'N'
  5, 62, 65, 65, 65, 62,    // 79 - 'O'
  5, 127, 9, 9, 9, 6,   // 80 - 'P'
  5, 62, 65, 65, 97, 126,   // 81 - 'Q'
  5, 127, 9, 25, 41, 70,    // 82 - 'R'
  5, 70, 73, 73, 73, 49,    // 83 - 'S'
  5, 1, 1, 127, 1, 1,   // 84 - 'T'
  5, 63, 64, 64, 64, 63,    // 85 - 'U'
  5, 31, 32, 64, 32, 31,    // 86 - 'V'
  5, 63, 64, 56, 64, 63,    // 87 - 'W'
  5, 99, 20, 8, 20, 99,   // 88 - 'X'
  5, 3, 4, 120, 4, 3,   // 89 - 'Y'
  5, 97, 81, 73, 69, 67,    // 90 - 'Z'
  3, 127, 65, 65,   // 91 - '['
  5, 3, 4, 8, 16, 96,   // 92 - '\'
  3, 65, 65, 127,   // 93 - ']'
  5, 4, 2, 1, 2, 4,   // 94 - '^'
  4, 128, 128, 128, 128,    // 95 - '_'
  3, 1, 2, 4,   // 96 - '`'
  4, 56, 68, 68, 124,   // 97 - 'a'
  4, 127, 68, 68, 56,   // 98 - 'b'
  4, 56, 68, 68, 68,    // 99 - 'c'
  4, 56, 68, 68, 127,   // 100 - 'd'
  4, 56, 84, 84, 88,    // 101 - 'e'
  4, 4, 126, 5, 1,    // 102 - 'f'
  4, 24, 164, 164, 124,   // 103 - 'g'
  4, 127, 4, 4, 120,    // 104 - 'h'
  1, 125,   // 105 - 'i'
  3, 132, 133, 124,   // 106 - 'j'
  4, 127, 16, 40, 68,   // 107 - 'k'
  1, 127,   // 108 - 'l'
  5, 124, 4, 120, 4, 120,   // 109 - 'm'
  4, 124, 4, 4, 120,    // 110 - 'n'
  4, 56, 68, 68, 56,    // 111 - 'o'
  4, 252, 36, 36, 24,   // 112 - 'p'
  4, 24, 36, 36, 252,   // 113 - 'q'
  4, 124, 4, 4, 8,    // 114 - 'r'
  4, 88, 84, 84, 52,    // 115 - 's'
  3, 4, 127, 4,   // 116 - 't'
  4, 60, 64, 64, 124,   // 117 - 'u'
  4, 28, 32, 64, 124,   // 118 - 'v'
  5, 60, 64, 48, 64, 60,    // 119 - 'w'
  4, 108, 16, 16, 108,    // 120 - 'x'
  4, 28, 160, 160, 124,   // 121 - 'y'
  4, 100, 84, 84, 76,   // 122 - 'z'
  4, 8, 54, 65, 65,   // 123 - '{'
  1, 127,   // 124 - '|'
  4, 65, 65, 54, 8,   // 125 - '}'
  4, 2, 1, 2, 1,    // 126 - '~'
  5, 127, 65, 65, 65, 127,    // 127 - 'Hollow Block'
  5, 62, 85, 85, 85, 65,    // 128 - 'Euro symbol'
  5, 56, 68, 68, 56, 68,    // 129 - 'Alpha'
  5, 124, 42, 42, 62, 20,   // 130 - 'Beta'
  5, 126, 2, 2, 6, 6,   // 131 - 'Gamma'
  5, 2, 126, 2, 126, 2,   // 132 - 'Pi'
  5, 99, 85, 73, 65, 99,    // 133 - 'Sigma'
  5, 56, 68, 68, 60, 4,   // 134 - 'Theta'
  5, 64, 126, 32, 30, 32,   // 135 - 'mu'
  5, 6, 2, 126, 2, 2,   // 136 - 'Tau'
  8, 99, 19, 8, 100, 99, 0, 96, 96,   // 137 - 'Percent 00'
  5, 42, 42, 42, 42, 42,    // 138 - '3 Bar Equals'
  3, 81, 74, 68,    // 139 - '>='
  3, 68, 74, 81,    // 140 - '<='
  5, 0, 0, 255, 1, 3,   // 141 - 'Top of Integral'
  3, 224, 128, 255,   // 142 - 'Bot of Integral'
  5, 54, 18, 54, 36, 54,    // 143 - 'Wavy ='
  3, 2, 5, 2,   // 144 - 'Degree'
  2, 24, 24,    // 145 - 'Math Product'
  2, 16, 16,    // 146 - 'Short Dash'
  5, 48, 64, 255, 1, 1,   // 147 - 'Square Root'
  4, 31, 1, 1, 30,    // 148 - 'Superscript n'
  0,    // 149
  0,    // 150
  0,    // 151
  0,    // 152
  9, 1, 1, 127, 1, 127, 2, 12, 2, 127,    // 153 - 'Trademark'
  0,    // 154
  0,    // 155
  0,    // 156
  0,    // 157
  0,    // 158
  0,    // 159
  1, 0,   // 160 - ' Non-breaking space'
  1, 125,   // 161 - '¡ Inverted Exclamation Mark'
  4, 24, 36, 126, 36,   // 162 - '¢ Cent sign'
  4, 68, 126, 69, 65,   // 163 - '£ Pound sign'
  5, 34, 28, 20, 28, 34,    // 164 - '¤ Currency sign'
  5, 1, 42, 124, 42, 1,   // 165 - '¥ Yen sign'
  1, 119,   // 166 - '¦ Broken bar'
  4, 78, 85, 85, 57,    // 167 - '§ Section sign'
  3, 2, 0, 2,   // 168 - '¨ Diaeresis (Umlaut)'
  7, 126, 129, 189, 165, 165, 129, 126,   // 169 - '© Copyright sign'
  3, 38, 41, 47,    // 170 - 'ª Feminine Ordinal Indicator'
  5, 8, 20, 42, 20, 34,   // 171 - '« Left-pointing double angle quotation mark'
  4, 8, 8, 8, 24,   // 172 - '¬ Not sign'
  3, 8, 8, 8,   // 173 - ' Soft hyphen'
  7, 126, 129, 189, 149, 169, 129, 126,   // 174 - '® Registered sign'
  5, 1, 1, 1, 1, 1,   // 175 - '¯ macron'
  3, 2, 5, 2,   // 176 - '° Degree symbol'
  3, 36, 46, 36,    // 177 - '± Plus-minus sign'
  3, 25, 21, 18,    // 178 - '² Superscript two'
  3, 21, 21, 10,    // 179 - '³ Superscript three'
  2, 2, 1,    // 180 - '´ Acute accent'
  4, 248, 32, 64, 120,    // 181 - 'µ Micro sign'
  5, 6, 9, 127, 1, 127,   // 182 - 'Pilcrow sign'
  2, 24, 24,    // 183 - '· Middle dot'
  4, 0, 128, 160, 192,    // 184 - '¸ Cedilla'
  3, 18, 31, 16,    // 185 - '¹ Superscript one'
  3, 38, 41, 38,    // 186 - 'º Masculine ordinal indicator'
  5, 34, 20, 42, 20, 8,   // 187 - '» Right-pointing double angle quotation mark'
  8, 64, 47, 16, 8, 4, 30, 17, 124,   // 188 - '¼ Vulgar fraction one quarter'
  8, 64, 47, 16, 8, 4, 98, 85, 76,    // 189 - '½ Vulgar fraction one half'
  9, 21, 85, 63, 16, 8, 4, 30, 17, 124,   // 190 - '¾ Vulgar fraction three quarters'
  5, 48, 72, 72, 77, 64,    // 191 - '¿ Inverted Question Mark'
  5, 120, 21, 22, 20, 120,    // 192 - 'À Latin Capital Letter A with grave'
  5, 120, 20, 22, 21, 120,    // 193 - 'Á Latin Capital letter A with acute'
  5, 122, 21, 20, 21, 122,    // 194 - 'Â Latin Capital letter A with circumflex'
  5, 120, 22, 21, 22, 121,    // 195 - 'Ã Latin Capital letter A with tilde'
  5, 120, 21, 20, 21, 120,    // 196 - 'Ä Latin Capital letter A with diaeresis'
  5, 120, 20, 21, 20, 120,    // 197 - 'Å Latin Capital letter A with ring above'
  7, 126, 9, 9, 127, 73, 73, 65,    // 198 - 'Æ Latin Capital letter Æ'
  5, 158, 161, 97, 33, 33,    // 199 - 'Ç Latin Capital letter C with cedilla'
  5, 124, 84, 85, 70, 68,   // 200 - 'È Latin Capital letter E with grave'
  5, 124, 84, 86, 69, 68,   // 201 - 'É Latin Capital letter E with acute'
  5, 126, 85, 84, 69, 70,   // 202 - 'Ê Latin Capital letter E with circumflex'
  5, 124, 85, 84, 69, 68,   // 203 - 'Ë Latin Capital letter E with diaeresis'
  3, 69, 126, 68,   // 204 - 'Ì Latin Capital letter I with grave'
  3, 68, 126, 69,   // 205 - 'Í Latin Capital letter I with acute'
  3, 70, 125, 70,   // 206 - 'Î Latin Capital letter I with circumflex'
  3, 69, 124, 69,   // 207 - 'Ï Latin Capital letter I with diaeresis'
  5, 8, 127, 73, 65, 62,    // 208 - 'Ð Latin Capital letter Eth'
  5, 124, 10, 17, 34, 125,    // 209 - 'Ñ Latin Capital letter N with tilde'
  5, 56, 68, 69, 70, 56,    // 210 - 'Ò Latin Capital letter O with grave'
  5, 56, 68, 70, 69, 56,    // 211 - 'Ó Latin Capital letter O with acute'
  5, 58, 69, 68, 69, 58,    // 212 - 'Ô Latin Capital letter O with circumflex'
  5, 56, 70, 69, 70, 57,    // 213 - 'Õ Latin Capital letter O with tilde'
  5, 56, 69, 68, 69, 56,    // 214 - 'Ö Latin Capital letter O with diaeresis'
  5, 34, 20, 8, 20, 34,   // 215 - '× Multiplication sign'
  5, 124, 98, 90, 70, 62,   // 216 - 'Ø Latin Capital letter O with stroke'
  5, 60, 64, 65, 66, 60,    // 217 - 'Ù Latin Capital letter U with grave'
  5, 60, 64, 66, 65, 60,    // 218 - 'Ú Latin Capital letter U with acute'
  5, 60, 66, 65, 66, 60,    // 219 - 'Û Latin Capital Letter U with circumflex'
  5, 60, 65, 64, 65, 60,    // 220 - 'Ü Latin Capital Letter U with diaeresis'
  5, 2, 4, 122, 5, 2,   // 221 - 'Ý Latin Capital Letter Y with acute'
  4, 63, 18, 18, 12,    // 222 - 'Þ Latin Capital Letter Thorn'
  5, 126, 73, 73, 78, 48,   // 223 - 'ß Latin Small Letter sharp S'
  4, 56, 69, 70, 124,   // 224 - 'à Latin Small Letter A with grave'
  4, 56, 68, 70, 125,   // 225 - 'á Latin Small Letter A with acute'
  4, 56, 70, 69, 126,   // 226 - 'â Latin Small Letter A with circumflex'
  4, 58, 69, 70, 125,   // 227 - 'ã Latin Small Letter A with tilde'
  4, 56, 69, 68, 125,   // 228 - 'ä Latin Small Letter A with diaeresis'
  4, 48, 74, 77, 122,   // 229 - 'å Latin Small Letter A with ring above'
  7, 32, 84, 84, 56, 84, 84, 88,    // 230 - 'æ Latin Small Letter Æ'
  4, 156, 162, 98, 34,    // 231 - 'ç Latin Small Letter C with cedilla'
  4, 56, 85, 86, 88,    // 232 - 'è Latin Small Letter E with grave'
  4, 56, 84, 86, 89,    // 233 - 'é Latin Small Letter E with acute'
  4, 56, 86, 85, 90,    // 234 - 'ê Latin Small Letter E with circumflex'
  4, 56, 85, 84, 89,    // 235 - 'ë Latin Small Letter E with diaeresis'
  2, 1, 122,    // 236 - 'ì Latin Small Letter I with grave'
  2, 122, 1,    // 237 - 'í Latin Small Letter I with acute'
  3, 2, 121, 2,   // 238 - 'î Latin Small Letter I with circumflex'
  3, 2, 120, 2,   // 239 - 'ï Latin Small Letter I with diaeresis'
  4, 48, 75, 75, 60,    // 240 - 'ð Latin Small Letter Eth'
  4, 122, 9, 10, 113,   // 241 - 'ñ Latin Small Letter N with tilde'
  4, 48, 73, 74, 48,    // 242 - 'ò Latin Small Letter O with grave'
  4, 48, 72, 74, 49,    // 243 - 'ó Latin Small Letter O with acute'
  4, 48, 74, 73, 50,    // 244 - 'ô Latin Small Letter O with circumflex'
  4, 50, 73, 74, 49,    // 245 - 'õ Latin Small Letter O with tilde'
  4, 57, 68, 68, 57,    // 246 - 'ö Latin Small Letter O with diaeresis'
  5, 8, 8, 42, 8, 8,    // 247 - '÷ Division sign'
  4, 56, 84, 76, 56,    // 248 - 'ø Latin Small Letter O with stroke'
  4, 56, 65, 66, 120,   // 249 - 'ù Latin Small Letter U with grave'
  4, 56, 64, 66, 121,   // 250 - 'ú Latin Small Letter U with acute'
  4, 56, 66, 65, 122,   // 251 - 'û Latin Small Letter U with circumflex'
  4, 58, 64, 64, 122,   // 252 - 'ü Latin Small Letter U with diaeresis'
  4, 24, 160, 162, 121,   // 253 - 'ý Latin Small Letter Y with acute'
  4, 252, 40, 40, 16,   // 254 - 'þ Latin Small Letter Thorn'
  4, 26, 160, 160, 122,   // 255 - 'ÿ Latin Small Letter Y with diaeresis'
};

const uint8_t font_12px[] PROGMEM = {
  'T', 1, 0, 255, 16,
  0,   // 0 - 'Empty Cell'
  5, 62, 91, 79, 91, 62,    // 1 - 'Sad Smiley'
  5, 62, 107, 79, 107, 62,    // 2 - 'Happy Smiley'
  5, 28, 62, 124, 62, 28,   // 3 - 'Heart'
  5, 24, 60, 126, 60, 24,   // 4 - 'Diamond'
  5, 28, 87, 125, 87, 28,   // 5 - 'Clubs'
  5, 28, 94, 127, 94, 28,   // 6 - 'Spades'
  5, 0, 24, 60, 24, 0,    // 7 - 'Bullet Point'
  5, 255, 231, 195, 231, 255,   // 8 - 'Rev Bullet Point'
  8, 0, 24, 36, 24, 0, 0, 0, 0,   // 9 - 'Hollow Bullet Point'
  5, 255, 231, 219, 231, 255,   // 10 - 'Rev Hollow BP'
  5, 48, 72, 58, 6, 14,   // 11 - 'Male'
  5, 38, 41, 121, 41, 38,   // 12 - 'Female'
  5, 64, 127, 5, 5, 7,    // 13 - 'Music Note 1'
  5, 64, 127, 5, 37, 63,    // 14 - 'Music Note 2'
  5, 90, 60, 231, 60, 90,   // 15 - 'Snowflake'
  5, 127, 62, 28, 28, 8,    // 16 - 'Right Pointer'
  5, 8, 28, 28, 62, 127,    // 17 - 'Left Pointer'
  5, 20, 34, 127, 34, 20,   // 18 - 'UpDown Arrows'
  5, 255, 255, 255, 255, 255,   // 19 - 'Full Block'
  5, 240, 240, 240, 240, 240,   // 20 - 'Half Block Bottom'
  3, 255, 255, 255,   // 21 - 'Half Block LHS'
  5, 0, 0, 0, 255, 255,   // 22 - 'Half Block RHS'
  5, 15, 15, 15, 15, 15,    // 23 - 'Half Block Top'
  5, 8, 4, 126, 4, 8,   // 24 - 'Up Arrow'
  9, 16, 32, 126, 32, 16, 0, 0, 0, 0,   // 25 - 'Down Arrow'
  5, 8, 8, 42, 28, 8,   // 26 - 'Right Arrow'
  5, 8, 28, 42, 8, 8,   // 27 - 'Left Arrow'
  5, 170, 0, 85, 0, 170,    // 28 - '30% shading'
  5, 170, 85, 170, 85, 170,   // 29 - '50% shading'
  5, 48, 56, 62, 56, 48,    // 30 - 'Up Pointer'
  5, 6, 14, 62, 14, 6,    // 31 - 'Down Pointer'
  2, 0, 0,    // 32 - 'Space'
  1, 95,    // 33 - '!'
  4, 7, 0, 7, 0,    // 34 - '""'
  5, 20, 127, 20, 127, 20,    // 35 - '#'
  5, 68, 74, 255, 74, 50,   // 36 - '$'
  5, 99, 19, 8, 100, 99,    // 37 - '%'
  5, 54, 73, 73, 54, 72,    // 38 - '&'
  4, 7, 0, 0, 0,    // 39
  3, 62, 65, 65,    // 40 - '('
  7, 65, 65, 62, 0, 0, 0, 0,    // 41 - ')'
  5, 8, 42, 28, 42, 8,    // 42 - '*'
  5, 8, 8, 62, 8, 8,    // 43 - '+'
  4, 96, 224, 0, 0,   // 44 - ','
  4, 8, 8, 8, 8,    // 45 - '-'
  7, 96, 96, 0, 0, 0, 0, 0,   // 46 - '.'
  5, 96, 16, 8, 4, 3,   // 47 - '/'
  5, 62, 81, 73, 69, 62,    // 48 - '0'
  3, 66, 127, 64,   // 49 - '1'
  5, 113, 73, 73, 73, 70,   // 50 - '2'
  5, 65, 73, 73, 73, 54,    // 51 - '3'
  5, 15, 8, 8, 8, 127,    // 52 - '4'
  5, 79, 73, 73, 73, 49,    // 53 - '5'
  5, 62, 73, 73, 73, 48,    // 54 - '6'
  5, 3, 1, 1, 1, 127,   // 55 - '7'
  5, 54, 73, 73, 73, 54,    // 56 - '8'
  5, 6, 73, 73, 73, 62,   // 57 - '9'
  3, 108, 108, 0,   // 58 - ':'
  5, 108, 236, 0, 0, 0,   // 59 - ';'
  8, 8, 20, 34, 0, 0, 0, 0, 0,    // 60 - '<'
  8, 20, 20, 20, 20, 0, 0, 0, 0,    // 61 - '='
  9, 34, 20, 8, 0, 0, 0, 0, 0, 0,   // 62 - '>'
  5, 1, 89, 9, 9, 6,    // 63 - '?'
  5, 62, 65, 93, 89, 78,    // 64 - '@'
  7, 15, 15, 0, 0, 0, 15, 15,   // 65 - 'A'
  6, 15, 15, 12, 12, 15, 7,   // 66 - 'B'
  6, 7, 15, 12, 12, 12, 12,   // 67 - 'C'
  7, 15, 15, 12, 12, 12, 15, 7,   // 68 - 'D'
  6, 15, 15, 12, 12, 12, 12,    // 69 - 'E'
  6, 15, 15, 0, 0, 0, 0,    // 70 - 'F'
  7, 7, 15, 12, 12, 12, 15, 7,    // 71 - 'G'
  6, 15, 15, 0, 0, 15, 15,    // 72 - 'H'
  4, 12, 15, 15, 12,    // 73 - 'I'
  6, 7, 15, 12, 12, 15, 7,    // 74 - 'J'
  6, 15, 15, 0, 1, 15, 14,    // 75 - 'K'
  6, 15, 15, 12, 12, 12, 12,    // 76 - 'L'
  9, 15, 15, 0, 0, 0, 0, 0, 15, 15,   // 77 - 'M'
  7, 15, 15, 0, 0, 3, 15, 15,   // 78 - 'N'
  6, 7, 15, 12, 12, 15, 7,    // 79 - 'O'
  6, 15, 15, 0, 0, 0, 0,    // 80 - 'P'
  6, 7, 15, 12, 15, 15, 15,   // 81 - 'Q'
  6, 15, 15, 0, 0, 15, 15,    // 82 - 'R'
  6, 6, 14, 12, 12, 15, 7,    // 83 - 'S'
  6, 0, 0, 15, 15, 0, 0,    // 84 - 'T'
  6, 7, 15, 12, 12, 15, 7,    // 85 - 'U'
  6, 3, 7, 14, 14, 7, 3,    // 86 - 'V'
  9, 3, 7, 14, 15, 3, 15, 14, 7, 3,   // 87 - 'W'
  8, 12, 15, 3, 0, 0, 3, 15, 12,    // 88 - 'X'
  8, 0, 0, 0, 15, 15, 0, 0, 0,    // 89 - 'Y'
  7, 15, 15, 12, 12, 12, 12, 12,    // 90 - 'Z'
  5, 255, 129, 129, 0, 0,   // 91 - '['
  8, 1, 2, 4, 8, 16, 32, 64, 128,   // 92 - '\'
  5, 129, 129, 255, 0, 0,   // 93 - ']'
  5, 12, 2, 1, 2, 12,   // 94 - '^'
  5, 128, 128, 128, 128, 128,   // 95 - '_'
  4, 1, 2, 4, 0,    // 96 - '`'
  4, 56, 68, 68, 124,   // 97 - 'a'
  4, 127, 68, 68, 56,   // 98 - 'b'
  4, 56, 68, 68, 68,    // 99 - 'c'
  4, 56, 68, 68, 127,   // 100 - 'd'
  4, 60, 74, 74, 76,    // 101 - 'e'
  7, 8, 254, 9, 1, 0, 0, 0,   // 102 - 'f'
  4, 24, 164, 164, 124,   // 103 - 'g'
  4, 127, 4, 4, 120,    // 104 - 'h'
  4, 125, 0, 0, 0,    // 105 - 'i'
  4, 132, 133, 124, 0,    // 106 - 'j'
  4, 127, 16, 40, 68,   // 107 - 'k'
  2, 127, 0,    // 108 - 'l'
  5, 124, 4, 120, 4, 120,   // 109 - 'm'
  4, 124, 4, 4, 120,    // 110 - 'n'
  4, 56, 68, 68, 56,    // 111 - 'o'
  4, 252, 36, 36, 24,   // 112 - 'p'
  4, 24, 36, 36, 252,   // 113 - 'q'
  4, 124, 4, 4, 8,    // 114 - 'r'
  4, 88, 84, 84, 52,    // 115 - 's'
  4, 4, 127, 4, 0,    // 116 - 't'
  4, 60, 64, 64, 124,   // 117 - 'u'
  4, 28, 32, 64, 124,   // 118 - 'v'
  5, 60, 64, 48, 64, 60,    // 119 - 'w'
  4, 108, 16, 16, 108,    // 120 - 'x'
  4, 28, 160, 160, 124,   // 121 - 'y'
  4, 100, 84, 84, 76,   // 122 - 'z'
  4, 8, 54, 65, 65,   // 123 - '{'
  4, 127, 0, 0, 0,    // 124 - '|'
  4, 65, 65, 54, 8,   // 125 - '}'
  4, 2, 1, 2, 1,    // 126 - '~'
  5, 127, 65, 65, 65, 127,    // 127 - 'Hollow Block'
  0,    // 128 - 'Euro symbol'
  5, 56, 68, 68, 56, 68,    // 129 - 'Alpha'
  5, 124, 42, 42, 62, 20,   // 130 - 'Beta'
  5, 126, 2, 2, 6, 6,   // 131 - 'Gamma'
  5, 2, 126, 2, 126, 2,   // 132 - 'Pi'
  5, 99, 85, 73, 65, 99,    // 133 - 'Sigma'
  5, 56, 68, 68, 60, 4,   // 134 - 'Theta'
  5, 64, 126, 32, 30, 32,   // 135 - 'mu'
  5, 6, 2, 126, 2, 2,   // 136 - 'Tau'
  8, 99, 19, 8, 100, 99, 0, 96, 96,   // 137 - 'Percent 00'
  5, 42, 42, 42, 42, 42,    // 138 - '3 Bar Equals'
  5, 81, 74, 68, 0, 0,    // 139 - '>='
  5, 68, 74, 81, 0, 0,    // 140 - '<='
  5, 0, 0, 255, 1, 3,   // 141 - 'Top of Integral'
  5, 224, 128, 255, 0, 0,   // 142 - 'Bot of Integral'
  5, 54, 18, 54, 36, 54,    // 143 - 'Wavy ='
  5, 2, 5, 2, 0, 0,   // 144 - 'Degree'
  5, 24, 24, 0, 0, 0,   // 145 - 'Math Product'
  5, 16, 16, 0, 0, 0,   // 146 - 'Short Dash'
  5, 48, 64, 255, 1, 1,   // 147 - 'Square Root'
  5, 31, 1, 1, 30, 0,   // 148 - 'Superscript n'
  3, 0, 0, 0,   // 149
  5, 0, 0, 0, 0, 0,   // 150
  5, 0, 0, 0, 0, 0,   // 151
  5, 0, 0, 0, 0, 0,   // 152
  9, 1, 1, 127, 1, 127, 2, 12, 2, 127,    // 153 - 'Trademark'
  5, 0, 0, 0, 0, 0,   // 154
  5, 0, 0, 0, 0, 0,   // 155
  5, 0, 0, 0, 0, 0,   // 156
  5, 0, 0, 0, 0, 0,   // 157
  5, 0, 0, 0, 0, 0,   // 158
  5, 0, 0, 0, 0, 0,   // 159
  2, 0, 0,    // 160 - ' Non-breaking space'
  1, 125,   // 161 - '¡ Inverted Exclamation Mark'
  4, 24, 36, 126, 36,   // 162 - '¢ Cent sign'
  5, 68, 126, 69, 65, 0,    // 163 - '£ Pound sign'
  5, 34, 28, 20, 28, 34,    // 164 - '¤ Currency sign'
  5, 1, 42, 124, 42, 1,   // 165 - '¥ Yen sign'
  5, 119, 0, 0, 0, 0,   // 166 - '¦ Broken bar'
  4, 78, 85, 85, 57,    // 167 - '§ Section sign'
  3, 2, 0, 2,   // 168 - '¨ Diaeresis (Umlaut)'
  7, 126, 129, 189, 165, 165, 129, 126,   // 169 - '© Copyright sign'
  5, 38, 41, 47, 0, 0,    // 170 - 'ª Feminine Ordinal Indicator'
  5, 8, 20, 42, 20, 34,   // 171 - '« Left-pointing double angle quotation mark'
  4, 8, 8, 8, 24,   // 172 - '¬ Not sign'
  4, 8, 8, 8, 0,    // 173 - ' Soft hyphen'
  7, 126, 129, 189, 149, 169, 129, 126,   // 174 - '® Registered sign'
  5, 1, 1, 1, 1, 1,   // 175 - '¯ macron'
  5, 2, 5, 2, 0, 0,   // 176 - '° Degree symbol'
  3, 36, 46, 36,    // 177 - '± Plus-minus sign'
  5, 25, 21, 18, 0, 0,    // 178 - '² Superscript two'
  5, 21, 21, 10, 0, 0,    // 179 - '³ Superscript three'
  5, 2, 1, 0, 0, 0,   // 180 - '´ Acute accent'
  5, 248, 32, 64, 120, 0,   // 181 - 'µ Micro sign'
  5, 6, 9, 127, 1, 127,   // 182 - 'Pilcrow sign'
  5, 24, 24, 0, 0, 0,   // 183 - '· Middle dot'
  5, 0, 128, 160, 192, 0,   // 184 - '¸ Cedilla'
  5, 18, 31, 16, 0, 0,    // 185 - '¹ Superscript one'
  3, 38, 41, 38,    // 186 - 'º Masculine ordinal indicator'
  5, 34, 20, 42, 20, 8,   // 187 - '» Right-pointing double angle quotation mark'
  8, 64, 47, 16, 8, 4, 30, 17, 124,   // 188 - '¼ Vulgar fraction one quarter'
  8, 64, 47, 16, 8, 4, 98, 85, 76,    // 189 - '½ Vulgar fraction one half'
  9, 21, 85, 63, 16, 8, 4, 30, 17, 124,   // 190 - '¾ Vulgar fraction three quarters'
  5, 48, 72, 72, 77, 64,    // 191 - '¿ Inverted Question Mark'
  5, 120, 21, 22, 20, 120,    // 192 - 'À Latin Capital Letter A with grave'
  7, 254, 255, 199, 199, 199, 255, 254,   // 193 - 'Á Latin Capital letter A with acute'
  6, 255, 255, 99, 99, 255, 158,    // 194 - 'Â Latin Capital letter A with circumflex'
  6, 254, 255, 3, 3, 3, 3,    // 195 - 'Ã Latin Capital letter A with tilde'
  7, 255, 255, 3, 3, 3, 255, 254,   // 196 - 'Ä Latin Capital letter A with diaeresis'
  6, 255, 255, 99, 99, 99, 99,    // 197 - 'Å Latin Capital letter A with ring above'
  6, 255, 255, 99, 99, 99, 3,   // 198 - 'Æ Latin Capital letter Æ'
  7, 254, 255, 3, 195, 195, 199, 199,   // 199 - 'Ç Latin Capital letter C with cedilla'
  6, 255, 255, 96, 96, 255, 255,    // 200 - 'È Latin Capital letter E with grave'
  4, 3, 255, 255, 3,    // 201 - 'É Latin Capital letter E with acute'
  6, 0, 0, 3, 3, 255, 255,    // 202 - 'Ê Latin Capital letter E with circumflex'
  6, 255, 255, 96, 248, 159, 7,   // 203 - 'Ë Latin Capital letter E with diaeresis'
  6, 255, 255, 0, 0, 0, 0,    // 204 - 'Ì Latin Capital letter I with grave'
  9, 255, 255, 6, 12, 28, 12, 6, 255, 255,    // 205 - 'Í Latin Capital letter I with acute'
  7, 255, 255, 60, 240, 192, 255, 255,    // 206 - 'Î Latin Capital letter I with circumflex'
  6, 254, 255, 3, 3, 255, 254,    // 207 - 'Ï Latin Capital letter I with diaeresis'
  6, 255, 255, 99, 99, 127, 62,   // 208 - 'Ð Latin Capital letter Eth'
  6, 254, 255, 3, 3, 255, 254,    // 209 - 'Ñ Latin Capital letter N with tilde'
  6, 255, 255, 99, 99, 255, 222,    // 210 - 'Ò Latin Capital letter O with grave'
  6, 62, 127, 99, 99, 231, 198,   // 211 - 'Ó Latin Capital letter O with acute'
  6, 3, 3, 255, 255, 3, 3,    // 212 - 'Ô Latin Capital letter O with circumflex'
  6, 255, 255, 0, 0, 255, 255,    // 213 - 'Õ Latin Capital letter O with tilde'
  6, 255, 255, 0, 0, 255, 255,    // 214 - 'Ö Latin Capital letter O with diaeresis'
  9, 255, 255, 0, 128, 192, 128, 0, 255, 255,   // 215 - '× Multiplication sign'
  8, 3, 15, 156, 240, 240, 156, 15, 3,    // 216 - 'Ø Latin Capital letter O with stroke'
  8, 3, 15, 60, 240, 240, 60, 15, 3,    // 217 - 'Ù Latin Capital letter U with grave'
  7, 3, 131, 195, 99, 51, 31, 15,   // 218 - 'Ú Latin Capital letter U with acute'
  5, 60, 66, 65, 66, 60,    // 219 - 'Û Latin Capital Letter U with circumflex'
  8, 60, 65, 64, 65, 60, 0, 0, 0,   // 220 - 'Ü Latin Capital Letter U with diaeresis'
  5, 2, 4, 122, 5, 2,   // 221 - 'Ý Latin Capital Letter Y with acute'
  5, 63, 18, 18, 12, 0,   // 222 - 'Þ Latin Capital Letter Thorn'
  5, 126, 73, 73, 78, 48,   // 223 - 'ß Latin Small Letter sharp S'
  4, 56, 69, 70, 124,   // 224 - 'à Latin Small Letter A with grave'
  4, 8, 4, 6, 61,   // 225 - 'á Latin Small Letter A with acute'
  4, 56, 70, 69, 126,   // 226 - 'â Latin Small Letter A with circumflex'
  4, 58, 69, 70, 125,   // 227 - 'ã Latin Small Letter A with tilde'
  4, 56, 69, 68, 125,   // 228 - 'ä Latin Small Letter A with diaeresis'
  4, 48, 74, 77, 122,   // 229 - 'å Latin Small Letter A with ring above'
  7, 32, 84, 84, 56, 84, 84, 88,    // 230 - 'æ Latin Small Letter Æ'
  4, 156, 162, 98, 34,    // 231 - 'ç Latin Small Letter C with cedilla'
  4, 56, 85, 86, 88,    // 232 - 'è Latin Small Letter E with grave'
  4, 56, 84, 86, 89,    // 233 - 'é Latin Small Letter E with acute'
  4, 56, 86, 85, 90,    // 234 - 'ê Latin Small Letter E with circumflex'
  4, 56, 85, 84, 89,    // 235 - 'ë Latin Small Letter E with diaeresis'
  2, 1, 122,    // 236 - 'ì Latin Small Letter I with grave'
  5, 122, 1, 0, 0, 0,   // 237 - 'í Latin Small Letter I with acute'
  4, 2, 121, 2, 0,    // 238 - 'î Latin Small Letter I with circumflex'
  4, 2, 120, 2, 0,    // 239 - 'ï Latin Small Letter I with diaeresis'
  4, 48, 75, 75, 60,    // 240 - 'ð Latin Small Letter Eth'
  4, 122, 9, 10, 113,   // 241 - 'ñ Latin Small Letter N with tilde'
  4, 48, 73, 74, 48,    // 242 - 'ò Latin Small Letter O with grave'
  4, 48, 72, 74, 49,    // 243 - 'ó Latin Small Letter O with acute'
  4, 48, 74, 73, 50,    // 244 - 'ô Latin Small Letter O with circumflex'
  4, 50, 73, 74, 49,    // 245 - 'õ Latin Small Letter O with tilde'
  4, 57, 68, 68, 57,    // 246 - 'ö Latin Small Letter O with diaeresis'
  5, 8, 8, 42, 8, 8,    // 247 - '÷ Division sign'
  4, 56, 84, 76, 56,    // 248 - 'ø Latin Small Letter O with stroke'
  4, 56, 65, 66, 120,   // 249 - 'ù Latin Small Letter U with grave'
  4, 56, 64, 66, 121,   // 250 - 'ú Latin Small Letter U with acute'
  4, 56, 66, 65, 122,   // 251 - 'û Latin Small Letter U with circumflex'
  4, 58, 64, 64, 122,   // 252 - 'ü Latin Small Letter U with diaeresis'
  4, 24, 160, 162, 121,   // 253 - 'ý Latin Small Letter Y with acute'
  4, 252, 40, 40, 16,   // 254 - 'þ Latin Small Letter Thorn'
  5, 26, 160, 160, 122, 0,    // 255 - 'ÿ Latin Small Letter Y with diaeresis'
};

const uint8_t font_15px[] PROGMEM = {
  'T', 1, 0, 255, 16,
  0,   // 0 - 'Empty Cell'
  5, 62, 91, 79, 91, 62,    // 1 - 'Sad Smiley'
  5, 62, 107, 79, 107, 62,    // 2 - 'Happy Smiley'
  5, 28, 62, 124, 62, 28,   // 3 - 'Heart'
  5, 24, 60, 126, 60, 24,   // 4 - 'Diamond'
  5, 28, 87, 125, 87, 28,   // 5 - 'Clubs'
  5, 28, 94, 127, 94, 28,   // 6 - 'Spades'
  5, 0, 24, 60, 24, 0,    // 7 - 'Bullet Point'
  5, 255, 231, 195, 231, 255,   // 8 - 'Rev Bullet Point'
  8, 0, 24, 36, 24, 0, 0, 0, 0,   // 9 - 'Hollow Bullet Point'
  5, 255, 231, 219, 231, 255,   // 10 - 'Rev Hollow BP'
  5, 48, 72, 58, 6, 14,   // 11 - 'Male'
  5, 38, 41, 121, 41, 38,   // 12 - 'Female'
  5, 64, 127, 5, 5, 7,    // 13 - 'Music Note 1'
  5, 64, 127, 5, 37, 63,    // 14 - 'Music Note 2'
  5, 90, 60, 231, 60, 90,   // 15 - 'Snowflake'
  5, 127, 62, 28, 28, 8,    // 16 - 'Right Pointer'
  5, 8, 28, 28, 62, 127,    // 17 - 'Left Pointer'
  5, 20, 34, 127, 34, 20,   // 18 - 'UpDown Arrows'
  5, 255, 255, 255, 255, 255,   // 19 - 'Full Block'
  5, 240, 240, 240, 240, 240,   // 20 - 'Half Block Bottom'
  3, 255, 255, 255,   // 21 - 'Half Block LHS'
  5, 0, 0, 0, 255, 255,   // 22 - 'Half Block RHS'
  5, 15, 15, 15, 15, 15,    // 23 - 'Half Block Top'
  5, 8, 4, 126, 4, 8,   // 24 - 'Up Arrow'
  9, 16, 32, 126, 32, 16, 0, 0, 0, 0,   // 25 - 'Down Arrow'
  5, 8, 8, 42, 28, 8,   // 26 - 'Right Arrow'
  5, 8, 28, 42, 8, 8,   // 27 - 'Left Arrow'
  5, 170, 0, 85, 0, 170,    // 28 - '30% shading'
  5, 170, 85, 170, 85, 170,   // 29 - '50% shading'
  5, 48, 56, 62, 56, 48,    // 30 - 'Up Pointer'
  5, 6, 14, 62, 14, 6,    // 31 - 'Down Pointer'
  2, 0, 0,    // 32 - 'Space'
  1, 95,    // 33 - '!'
  4, 7, 0, 7, 0,    // 34 - '""'
  5, 20, 127, 20, 127, 20,    // 35 - '#'
  5, 68, 74, 255, 74, 50,   // 36 - '$'
  5, 99, 19, 8, 100, 99,    // 37 - '%'
  5, 54, 73, 73, 54, 72,    // 38 - '&'
  4, 7, 0, 0, 0,    // 39
  3, 62, 65, 65,    // 40 - '('
  7, 65, 65, 62, 0, 0, 0, 0,    // 41 - ')'
  5, 8, 42, 28, 42, 8,    // 42 - '*'
  5, 8, 8, 62, 8, 8,    // 43 - '+'
  4, 96, 224, 0, 0,   // 44 - ','
  4, 8, 8, 8, 8,    // 45 - '-'
  7, 96, 96, 0, 0, 0, 0, 0,   // 46 - '.'
  5, 96, 16, 8, 4, 3,   // 47 - '/'
  5, 62, 81, 73, 69, 62,    // 48 - '0'
  3, 66, 127, 64,   // 49 - '1'
  5, 113, 73, 73, 73, 70,   // 50 - '2'
  5, 65, 73, 73, 73, 54,    // 51 - '3'
  5, 15, 8, 8, 8, 127,    // 52 - '4'
  5, 79, 73, 73, 73, 49,    // 53 - '5'
  5, 62, 73, 73, 73, 48,    // 54 - '6'
  5, 3, 1, 1, 1, 127,   // 55 - '7'
  5, 54, 73, 73, 73, 54,    // 56 - '8'
  5, 6, 73, 73, 73, 62,   // 57 - '9'
  3, 108, 108, 0,   // 58 - ':'
  5, 108, 236, 0, 0, 0,   // 59 - ';'
  8, 8, 20, 34, 0, 0, 0, 0, 0,    // 60 - '<'
  8, 20, 20, 20, 20, 0, 0, 0, 0,    // 61 - '='
  9, 34, 20, 8, 0, 0, 0, 0, 0, 0,   // 62 - '>'
  5, 1, 89, 9, 9, 6,    // 63 - '?'
  5, 62, 65, 93, 89, 78,    // 64 - '@'
  8, 255, 255, 255, 7, 7, 255, 255, 255,    // 65 - 'A'
  8, 255, 255, 255, 225, 225, 255, 127, 62,   // 66 - 'B'
  8, 63, 127, 255, 224, 224, 224, 224, 224,   // 67 - 'C'
  8, 255, 255, 255, 224, 224, 255, 127, 63,   // 68 - 'D'
  8, 255, 255, 255, 225, 225, 225, 225, 225,    // 69 - 'E'
  8, 255, 255, 255, 1, 1, 1, 1, 0,    // 70 - 'F'
  8, 63, 127, 255, 240, 243, 255, 255, 255,   // 71 - 'G'
  8, 255, 255, 255, 1, 1, 255, 255, 255,    // 72 - 'H'
  5, 224, 255, 255, 255, 224,   // 73 - 'I'
  8, 60, 124, 252, 224, 224, 255, 127, 63,    // 74 - 'J'
  8, 255, 255, 255, 1, 3, 255, 255, 252,    // 75 - 'K'
  8, 255, 255, 255, 224, 224, 224, 224, 224,    // 76 - 'L'
  10, 255, 255, 255, 0, 0, 0, 0, 255, 255, 255,   // 77 - 'M'
  9, 255, 255, 255, 0, 1, 7, 255, 255, 255,   // 78 - 'N'
  8, 63, 127, 255, 224, 224, 255, 127, 63,    // 79 - 'O'
  8, 255, 255, 255, 1, 1, 1, 0, 0,    // 80 - 'P'
  8, 63, 127, 255, 224, 252, 255, 255, 255,   // 81 - 'Q'
  8, 255, 255, 255, 1, 1, 255, 255, 254,    // 82 - 'R'
  8, 48, 112, 241, 225, 225, 255, 127, 63,    // 83 - 'S'
  7, 0, 0, 255, 255, 255, 0, 0,   // 84 - 'T'
  8, 63, 127, 255, 224, 224, 255, 127, 63,    // 85 - 'U'
  8, 31, 63, 127, 248, 248, 127, 63, 31,    // 86 - 'V'
  10, 15, 63, 255, 248, 31, 31, 248, 255, 63, 15,   // 87 - 'W'
  10, 248, 254, 255, 7, 1, 1, 7, 255, 254, 248,   // 88 - 'X'
  9, 0, 0, 0, 255, 255, 255, 0, 0, 0,   // 89 - 'Y'
  10, 252, 254, 255, 239, 231, 227, 225, 224, 224, 224,   // 90 - 'Z'
  5, 255, 129, 129, 0, 0,   // 91 - '['
  8, 1, 2, 4, 8, 16, 32, 64, 128,   // 92 - '\'
  5, 129, 129, 255, 0, 0,   // 93 - ']'
  5, 12, 2, 1, 2, 12,   // 94 - '^'
  5, 128, 128, 128, 128, 128,   // 95 - '_'
  4, 1, 2, 4, 0,    // 96 - '`'
  4, 56, 68, 68, 124,   // 97 - 'a'
  4, 127, 68, 68, 56,   // 98 - 'b'
  4, 56, 68, 68, 68,    // 99 - 'c'
  4, 56, 68, 68, 127,   // 100 - 'd'
  4, 60, 74, 74, 76,    // 101 - 'e'
  7, 8, 254, 9, 1, 0, 0, 0,   // 102 - 'f'
  4, 24, 164, 164, 124,   // 103 - 'g'
  4, 127, 4, 4, 120,    // 104 - 'h'
  4, 125, 0, 0, 0,    // 105 - 'i'
  4, 132, 133, 124, 0,    // 106 - 'j'
  4, 127, 16, 40, 68,   // 107 - 'k'
  2, 127, 0,    // 108 - 'l'
  5, 124, 4, 120, 4, 120,   // 109 - 'm'
  4, 124, 4, 4, 120,    // 110 - 'n'
  4, 56, 68, 68, 56,    // 111 - 'o'
  4, 252, 36, 36, 24,   // 112 - 'p'
  4, 24, 36, 36, 252,   // 113 - 'q'
  4, 124, 4, 4, 8,    // 114 - 'r'
  4, 88, 84, 84, 52,    // 115 - 's'
  4, 4, 127, 4, 0,    // 116 - 't'
  4, 60, 64, 64, 124,   // 117 - 'u'
  4, 28, 32, 64, 124,   // 118 - 'v'
  5, 60, 64, 48, 64, 60,    // 119 - 'w'
  4, 108, 16, 16, 108,    // 120 - 'x'
  4, 28, 160, 160, 124,   // 121 - 'y'
  4, 100, 84, 84, 76,   // 122 - 'z'
  4, 8, 54, 65, 65,   // 123 - '{'
  4, 127, 0, 0, 0,    // 124 - '|'
  4, 65, 65, 54, 8,   // 125 - '}'
  4, 2, 1, 2, 1,    // 126 - '~'
  5, 127, 65, 65, 65, 127,    // 127 - 'Hollow Block'
  0,    // 128 - 'Euro symbol'
  5, 56, 68, 68, 56, 68,    // 129 - 'Alpha'
  5, 124, 42, 42, 62, 20,   // 130 - 'Beta'
  5, 126, 2, 2, 6, 6,   // 131 - 'Gamma'
  5, 2, 126, 2, 126, 2,   // 132 - 'Pi'
  5, 99, 85, 73, 65, 99,    // 133 - 'Sigma'
  5, 56, 68, 68, 60, 4,   // 134 - 'Theta'
  5, 64, 126, 32, 30, 32,   // 135 - 'mu'
  5, 6, 2, 126, 2, 2,   // 136 - 'Tau'
  8, 99, 19, 8, 100, 99, 0, 96, 96,   // 137 - 'Percent 00'
  5, 42, 42, 42, 42, 42,    // 138 - '3 Bar Equals'
  5, 81, 74, 68, 0, 0,    // 139 - '>='
  5, 68, 74, 81, 0, 0,    // 140 - '<='
  5, 0, 0, 255, 1, 3,   // 141 - 'Top of Integral'
  5, 224, 128, 255, 0, 0,   // 142 - 'Bot of Integral'
  5, 54, 18, 54, 36, 54,    // 143 - 'Wavy ='
  5, 2, 5, 2, 0, 0,   // 144 - 'Degree'
  5, 24, 24, 0, 0, 0,   // 145 - 'Math Product'
  5, 16, 16, 0, 0, 0,   // 146 - 'Short Dash'
  5, 48, 64, 255, 1, 1,   // 147 - 'Square Root'
  5, 31, 1, 1, 30, 0,   // 148 - 'Superscript n'
  3, 0, 0, 0,   // 149
  5, 0, 0, 0, 0, 0,   // 150
  5, 0, 0, 0, 0, 0,   // 151
  5, 0, 0, 0, 0, 0,   // 152
  9, 1, 1, 127, 1, 127, 2, 12, 2, 127,    // 153 - 'Trademark'
  5, 0, 0, 0, 0, 0,   // 154
  5, 0, 0, 0, 0, 0,   // 155
  5, 0, 0, 0, 0, 0,   // 156
  5, 0, 0, 0, 0, 0,   // 157
  5, 0, 0, 0, 0, 0,   // 158
  5, 0, 0, 0, 0, 0,   // 159
  2, 0, 0,    // 160 - ' Non-breaking space'
  1, 125,   // 161 - '¡ Inverted Exclamation Mark'
  4, 24, 36, 126, 36,   // 162 - '¢ Cent sign'
  5, 68, 126, 69, 65, 0,    // 163 - '£ Pound sign'
  5, 34, 28, 20, 28, 34,    // 164 - '¤ Currency sign'
  5, 1, 42, 124, 42, 1,   // 165 - '¥ Yen sign'
  5, 119, 0, 0, 0, 0,   // 166 - '¦ Broken bar'
  4, 78, 85, 85, 57,    // 167 - '§ Section sign'
  3, 2, 0, 2,   // 168 - '¨ Diaeresis (Umlaut)'
  7, 126, 129, 189, 165, 165, 129, 126,   // 169 - '© Copyright sign'
  5, 38, 41, 47, 0, 0,    // 170 - 'ª Feminine Ordinal Indicator'
  5, 8, 20, 42, 20, 34,   // 171 - '« Left-pointing double angle quotation mark'
  4, 8, 8, 8, 24,   // 172 - '¬ Not sign'
  4, 8, 8, 8, 0,    // 173 - ' Soft hyphen'
  7, 126, 129, 189, 149, 169, 129, 126,   // 174 - '® Registered sign'
  5, 1, 1, 1, 1, 1,   // 175 - '¯ macron'
  5, 2, 5, 2, 0, 0,   // 176 - '° Degree symbol'
  3, 36, 46, 36,    // 177 - '± Plus-minus sign'
  5, 25, 21, 18, 0, 0,    // 178 - '² Superscript two'
  5, 21, 21, 10, 0, 0,    // 179 - '³ Superscript three'
  5, 2, 1, 0, 0, 0,   // 180 - '´ Acute accent'
  5, 248, 32, 64, 120, 0,   // 181 - 'µ Micro sign'
  5, 6, 9, 127, 1, 127,   // 182 - 'Pilcrow sign'
  5, 24, 24, 0, 0, 0,   // 183 - '· Middle dot'
  5, 0, 128, 160, 192, 0,   // 184 - '¸ Cedilla'
  5, 18, 31, 16, 0, 0,    // 185 - '¹ Superscript one'
  3, 38, 41, 38,    // 186 - 'º Masculine ordinal indicator'
  5, 34, 20, 42, 20, 8,   // 187 - '» Right-pointing double angle quotation mark'
  8, 64, 47, 16, 8, 4, 30, 17, 124,   // 188 - '¼ Vulgar fraction one quarter'
  8, 64, 47, 16, 8, 4, 98, 85, 76,    // 189 - '½ Vulgar fraction one half'
  9, 21, 85, 63, 16, 8, 4, 30, 17, 124,   // 190 - '¾ Vulgar fraction three quarters'
  5, 48, 72, 72, 77, 64,    // 191 - '¿ Inverted Question Mark'
  5, 120, 21, 22, 20, 120,    // 192 - 'À Latin Capital Letter A with grave'
  8, 252, 254, 255, 7, 7, 255, 254, 252,    // 193 - 'Á Latin Capital letter A with acute'
  8, 255, 255, 255, 199, 199, 255, 126, 60,   // 194 - 'Â Latin Capital letter A with circumflex'
  8, 252, 254, 255, 7, 7, 7, 7, 7,    // 195 - 'Ã Latin Capital letter A with tilde'
  8, 255, 255, 255, 7, 7, 255, 254, 252,    // 196 - 'Ä Latin Capital letter A with diaeresis'
  8, 255, 255, 255, 199, 199, 199, 199, 199,    // 197 - 'Å Latin Capital letter A with ring above'
  8, 255, 255, 255, 199, 199, 199, 199, 7,    // 198 - 'Æ Latin Capital letter Æ'
  8, 252, 254, 255, 7, 135, 135, 135, 135,    // 199 - 'Ç Latin Capital letter C with cedilla'
  8, 255, 255, 255, 192, 192, 255, 255, 255,    // 200 - 'È Latin Capital letter E with grave'
  5, 7, 255, 255, 255, 7,   // 201 - 'É Latin Capital letter E with acute'
  8, 0, 7, 7, 7, 7, 255, 255, 255,    // 202 - 'Ê Latin Capital letter E with circumflex'
  8, 255, 255, 255, 192, 224, 255, 63, 31,    // 203 - 'Ë Latin Capital letter E with diaeresis'
  8, 255, 255, 255, 0, 0, 0, 0, 0,    // 204 - 'Ì Latin Capital letter I with grave'
  10, 255, 255, 254, 60, 248, 248, 60, 254, 255, 255,   // 205 - 'Í Latin Capital letter I with acute'
  9, 255, 255, 255, 254, 240, 192, 255, 255, 255,   // 206 - 'Î Latin Capital letter I with circumflex'
  8, 252, 254, 255, 7, 7, 255, 254, 252,    // 207 - 'Ï Latin Capital letter I with diaeresis'
  8, 255, 255, 255, 199, 199, 255, 254, 124,    // 208 - 'Ð Latin Capital letter Eth'
  8, 252, 254, 255, 7, 7, 255, 254, 252,    // 209 - 'Ñ Latin Capital letter N with tilde'
  8, 255, 255, 255, 199, 199, 255, 254, 124,    // 210 - 'Ò Latin Capital letter O with grave'
  8, 124, 254, 255, 199, 199, 207, 142, 12,   // 211 - 'Ó Latin Capital letter O with acute'
  7, 7, 7, 255, 255, 255, 7, 7,   // 212 - 'Ô Latin Capital letter O with circumflex'
  8, 255, 255, 255, 0, 0, 255, 255, 255,    // 213 - 'Õ Latin Capital letter O with tilde'
  8, 255, 255, 255, 0, 0, 255, 255, 255,    // 214 - 'Ö Latin Capital letter O with diaeresis'
  10, 255, 255, 255, 0, 224, 224, 0, 255, 255, 255,   // 215 - '× Multiplication sign'
  10, 15, 63, 127, 240, 192, 192, 240, 127, 63, 15,   // 216 - 'Ø Latin Capital letter O with stroke'
  9, 63, 127, 255, 224, 192, 224, 255, 127, 63,   // 217 - 'Ù Latin Capital letter U with grave'
  10, 7, 7, 7, 135, 199, 231, 247, 255, 127, 63,    // 218 - 'Ú Latin Capital letter U with acute'
  5, 60, 66, 65, 66, 60,    // 219 - 'Û Latin Capital Letter U with circumflex'
  8, 60, 65, 64, 65, 60, 0, 0, 0,   // 220 - 'Ü Latin Capital Letter U with diaeresis'
  5, 2, 4, 122, 5, 2,   // 221 - 'Ý Latin Capital Letter Y with acute'
  5, 63, 18, 18, 12, 0,   // 222 - 'Þ Latin Capital Letter Thorn'
  5, 126, 73, 73, 78, 48,   // 223 - 'ß Latin Small Letter sharp S'
  4, 56, 69, 70, 124,   // 224 - 'à Latin Small Letter A with grave'
  4, 8, 4, 6, 61,   // 225 - 'á Latin Small Letter A with acute'
  4, 56, 70, 69, 126,   // 226 - 'â Latin Small Letter A with circumflex'
  4, 58, 69, 70, 125,   // 227 - 'ã Latin Small Letter A with tilde'
  4, 56, 69, 68, 125,   // 228 - 'ä Latin Small Letter A with diaeresis'
  4, 48, 74, 77, 122,   // 229 - 'å Latin Small Letter A with ring above'
  7, 32, 84, 84, 56, 84, 84, 88,    // 230 - 'æ Latin Small Letter Æ'
  4, 156, 162, 98, 34,    // 231 - 'ç Latin Small Letter C with cedilla'
  4, 56, 85, 86, 88,    // 232 - 'è Latin Small Letter E with grave'
  4, 56, 84, 86, 89,    // 233 - 'é Latin Small Letter E with acute'
  4, 56, 86, 85, 90,    // 234 - 'ê Latin Small Letter E with circumflex'
  4, 56, 85, 84, 89,    // 235 - 'ë Latin Small Letter E with diaeresis'
  2, 1, 122,    // 236 - 'ì Latin Small Letter I with grave'
  5, 122, 1, 0, 0, 0,   // 237 - 'í Latin Small Letter I with acute'
  4, 2, 121, 2, 0,    // 238 - 'î Latin Small Letter I with circumflex'
  4, 2, 120, 2, 0,    // 239 - 'ï Latin Small Letter I with diaeresis'
  4, 48, 75, 75, 60,    // 240 - 'ð Latin Small Letter Eth'
  4, 122, 9, 10, 113,   // 241 - 'ñ Latin Small Letter N with tilde'
  4, 48, 73, 74, 48,    // 242 - 'ò Latin Small Letter O with grave'
  4, 48, 72, 74, 49,    // 243 - 'ó Latin Small Letter O with acute'
  4, 48, 74, 73, 50,    // 244 - 'ô Latin Small Letter O with circumflex'
  4, 50, 73, 74, 49,    // 245 - 'õ Latin Small Letter O with tilde'
  4, 57, 68, 68, 57,    // 246 - 'ö Latin Small Letter O with diaeresis'
  5, 8, 8, 42, 8, 8,    // 247 - '÷ Division sign'
  4, 56, 84, 76, 56,    // 248 - 'ø Latin Small Letter O with stroke'
  4, 56, 65, 66, 120,   // 249 - 'ù Latin Small Letter U with grave'
  4, 56, 64, 66, 121,   // 250 - 'ú Latin Small Letter U with acute'
  4, 56, 66, 65, 122,   // 251 - 'û Latin Small Letter U with circumflex'
  4, 58, 64, 64, 122,   // 252 - 'ü Latin Small Letter U with diaeresis'
  4, 24, 160, 162, 121,   // 253 - 'ý Latin Small Letter Y with acute'
  4, 252, 40, 40, 16,   // 254 - 'þ Latin Small Letter Thorn'
  5, 26, 160, 160, 122, 0,    // 255 - 'ÿ Latin Small Letter Y with diaeresis'
};

//Big Standart
const uint8_t B_STD[] PROGMEM = {
  'T', 1, 0, 255, 16,
  0,    // 0
  0,    // 1
  0,    // 2
  0,    // 3
  0,    // 4
  0,    // 5
  0,    // 6
  0,    // 7
  0,    // 8
  0,    // 9
  0,    // 10
  0,    // 11
  0,    // 12
  0,    // 13
  0,    // 14
  0,    // 15
  0,    // 16
  0,    // 17
  0,    // 18
  0,    // 19
  0,    // 20
  0,    // 21
  0,    // 22
  0,    // 23
  0,    // 24
  0,    // 25
  0,    // 26
  0,    // 27
  0,    // 28
  0,    // 29
  0,    // 30
  0,    // 31
  4, 0, 0, 0, 0,    // 32 - 'Space lower'
  2, 51, 51,    // 33 - '! lower'
  6, 0, 0, 0, 0, 0, 0,    // 34 - '"" lower'
  10, 3, 3, 63, 63, 3, 3, 63, 63, 3, 3,   // 35 - '# lower'
  10, 24, 56, 48, 48, 127, 127, 48, 57, 31, 15,   // 36 - '$ lower'
  8, 48, 60, 15, 3, 24, 36, 36, 24,   // 37 - '% lower'
  10, 15, 31, 57, 48, 48, 59, 31, 14, 63, 51,   // 38 - '& lower'
  2, 0, 0,    // 39 - ' lower'
  5, 3, 15, 28, 56, 48,   // 40 - '( lower'
  5, 48, 56, 28, 15, 3,   // 41 - ') lower'
  10, 6, 7, 7, 1, 31, 31, 1, 3, 7, 6,   // 42 - '* lower'
  10, 0, 0, 0, 0, 15, 15, 0, 0, 0, 0,   // 43 - '+ lower'
  2, 176, 112,    // 44 - ', lower'
  9, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 45 - '- lower'
  2, 48, 48,    // 46 - '. lower'
  8, 48, 60, 15, 3, 0, 0, 0, 0,   // 47 - '/ lower'
  10, 15, 31, 57, 48, 48, 48, 48, 56, 31, 15,   // 48 - '0 lower'
  5, 0, 48, 63, 63, 48,   // 49 - '1 lower'
  10, 63, 63, 49, 48, 48, 48, 48, 48, 48, 48,   // 50 - '2 lower'
  10, 12, 28, 56, 48, 48, 48, 48, 56, 31, 15,   // 51 - '3 lower'
  10, 3, 3, 3, 3, 3, 3, 3, 63, 63, 3,   // 52 - '4 lower'
  10, 12, 28, 56, 48, 48, 48, 48, 56, 31, 15,   // 53 - '5 lower'
  10, 15, 31, 56, 48, 48, 48, 48, 56, 31, 15,   // 54 - '6 lower'
  10, 0, 0, 0, 63, 63, 0, 0, 0, 0, 0,   // 55 - '7 lower'
  10, 15, 31, 57, 48, 48, 48, 48, 57, 31, 15,   // 56 - '8 lower'
  10, 0, 0, 0, 0, 0, 0, 0, 0, 63, 63,   // 57 - '9 lower'
  2, 24, 24,    // 58 - ': lower'
  2, 88, 56,    // 59 - '; lower'
  8, 0, 1, 3, 7, 14, 28, 56, 48,    // 60 - '< lower'
  9, 6, 6, 6, 6, 6, 6, 6, 6, 6,   // 61 - '= lower'
  8, 48, 56, 28, 14, 7, 3, 1, 0,    // 62 - '> lower'
  10, 0, 0, 0, 0, 55, 55, 1, 0, 0, 0,   // 63 - '? lower'
  10, 15, 31, 56, 51, 54, 54, 51, 54, 55, 19,   // 64 - '@ lower'
  10, 63, 63, 1, 1, 1, 1, 1, 1, 63, 63,   // 65 - 'A lower'
  10, 63, 63, 48, 48, 48, 48, 48, 57, 31, 15,   // 66 - 'B lower'
  10, 15, 31, 56, 48, 48, 48, 48, 56, 28, 12,   // 67 - 'C lower'
  10, 63, 63, 48, 48, 48, 48, 48, 56, 31, 15,   // 68 - 'D lower'
  9, 63, 63, 48, 48, 48, 48, 48, 48, 48,    // 69 - 'E lower'
  9, 63, 63, 0, 0, 0, 0, 0, 0, 0,   // 70 - 'F lower'
  10, 15, 31, 56, 48, 48, 48, 49, 57, 31, 15,   // 71 - 'G lower'
  10, 63, 63, 0, 0, 0, 0, 0, 0, 63, 63,   // 72 - 'H lower'
  4, 48, 63, 63, 48,    // 73 - 'I lower'
  8, 12, 28, 56, 48, 48, 56, 31, 15,    // 74 - 'J lower'
  9, 63, 63, 1, 3, 7, 14, 28, 56, 48,   // 75 - 'K lower'
  9, 63, 63, 48, 48, 48, 48, 48, 48, 48,    // 76 - 'L lower'
  10, 63, 63, 0, 0, 0, 0, 0, 0, 63, 63,   // 77 - 'M lower'
  10, 63, 63, 0, 0, 0, 0, 1, 3, 63, 63,   // 78 - 'N lower'
  10, 15, 31, 56, 48, 48, 48, 48, 56, 31, 15,   // 79 - 'O lower'
  10, 63, 63, 0, 0, 0, 0, 0, 0, 0, 0,   // 80 - 'P lower'
  10, 15, 31, 56, 48, 48, 54, 62, 28, 63, 55,   // 81 - 'Q lower'
  10, 63, 63, 0, 1, 3, 7, 14, 28, 56, 48,   // 82 - 'R lower'
  10, 24, 56, 48, 48, 48, 48, 48, 57, 31, 15,   // 83 - 'S lower'
  8, 0, 0, 0, 63, 63, 0, 0, 0,    // 84 - 'T lower'
  10, 15, 31, 56, 48, 48, 48, 48, 56, 31, 15,   // 85 - 'U lower'
  10, 3, 7, 14, 28, 56, 56, 28, 14, 7, 3,   // 86 - 'V lower'
  10, 15, 31, 56, 60, 31, 31, 60, 56, 31, 15,   // 87 - 'W lower'
  10, 60, 62, 7, 3, 1, 1, 3, 7, 62, 60,   // 88 - 'X lower'
  10, 0, 0, 0, 0, 63, 63, 0, 0, 0, 0,   // 89 - 'Y lower'
  10, 60, 62, 55, 51, 49, 48, 48, 48, 48, 48,   // 90 - 'Z lower'
  4, 63, 63, 48, 48,    // 91 - '[ lower'
  8, 0, 0, 0, 0, 3, 15, 60, 48,   // 92 - '\ lower'
  4, 48, 48, 63, 63,    // 93 - '] lower'
  8, 0, 0, 0, 0, 0, 0, 0, 0,    // 94 - '^ lower'
  10, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,   // 95 - '_ lower'
  3, 0, 0, 0,   // 96 - '` lower'
  10, 15, 31, 56, 48, 48, 48, 48, 48, 63, 63,   // 97 - 'a lower'
  10, 63, 63, 48, 48, 48, 48, 48, 56, 31, 15,   // 98 - 'b lower'
  9, 15, 31, 56, 48, 48, 48, 48, 48, 48,    // 99 - 'c lower'
  10, 15, 31, 56, 48, 48, 48, 48, 48, 63, 63,   // 100 - 'd lower'
  9, 15, 31, 59, 51, 51, 51, 51, 51, 51,    // 101 - 'e lower'
  7, 0, 63, 63, 0, 0, 0, 0,   // 102 - 'f lower'
  9, 195, 199, 206, 204, 204, 204, 236, 127, 63,    // 103 - 'g lower'
  9, 63, 63, 0, 0, 0, 0, 0, 63, 63,   // 104 - 'h lower'
  2, 63, 63,    // 105 - 'i lower'
  8, 96, 224, 192, 192, 192, 224, 127, 63,    // 106 - 'j lower'
  8, 63, 63, 3, 7, 15, 28, 56, 48,    // 107 - 'k lower'
  4, 0, 63, 63, 48,   // 108 - 'l lower'
  10, 63, 63, 0, 0, 63, 63, 0, 0, 63, 63,   // 109 - 'm lower'
  9, 63, 63, 0, 0, 0, 0, 0, 63, 63,   // 110 - 'n lower'
  9, 15, 31, 56, 48, 48, 48, 56, 31, 15,    // 111 - 'o lower'
  9, 255, 255, 12, 12, 12, 12, 14, 7, 3,    // 112 - 'p lower'
  9, 3, 7, 14, 12, 12, 12, 12, 255, 255,    // 113 - 'q lower'
  9, 63, 63, 0, 0, 0, 0, 0, 0, 0,   // 114 - 'r lower'
  9, 48, 49, 51, 51, 51, 51, 51, 30, 12,    // 115 - 's lower'
  6, 0, 31, 63, 48, 48, 16,   // 116 - 't lower'
  9, 15, 31, 56, 48, 48, 48, 48, 63, 63,    // 117 - 'u lower'
  9, 7, 15, 28, 56, 48, 56, 28, 15, 7,    // 118 - 'v lower'
  10, 15, 31, 56, 56, 31, 31, 56, 56, 31, 15,   // 119 - 'w lower'
  10, 48, 56, 28, 15, 7, 7, 15, 28, 56, 48,   // 120 - 'x lower'
  9, 193, 195, 199, 198, 198, 198, 230, 127, 63,    // 121 - 'y lower'
  10, 48, 56, 60, 62, 55, 51, 49, 48, 48, 48,   // 122 - 'z lower'
  6, 0, 1, 15, 31, 56, 48,    // 123 - '{ lower'
  2, 255, 255,    // 124 - '| lower'
  6, 48, 56, 31, 15, 1, 0,    // 125 - '} lower'
  0,    // 126
  0,    // 127
  0,    // 128
  0,    // 129
  0,    // 130
  0,    // 131
  0,    // 132
  0,    // 133
  0,    // 134
  0,    // 135
  0,    // 136
  0,    // 137
  0,    // 138
  0,    // 139
  0,    // 140
  0,    // 141
  0,    // 142
  0,    // 143
  0,    // 144
  0,    // 145
  0,    // 146
  0,    // 147
  0,    // 148
  0,    // 149
  0,    // 150
  0,    // 151
  0,    // 152
  0,    // 153
  0,    // 154
  0,    // 155
  0,    // 156
  0,    // 157
  0,    // 158
  0,    // 159
  4, 0, 0, 0, 0,    // 160 - 'Space upper'
  2, 255, 255,    // 161 - '! upper'
  6, 15, 15, 0, 0, 15, 15,    // 162 - '"" upper'
  10, 48, 48, 255, 255, 48, 48, 255, 255, 48, 48,   // 163 - '# upper'
  10, 56, 124, 238, 198, 255, 255, 198, 198, 142, 12,   // 164 - '$ upper'
  8, 6, 9, 9, 198, 240, 60, 15, 3,    // 165 - '% upper'
  10, 0, 128, 204, 254, 243, 243, 158, 12, 0, 0,    // 166 - '& upper'
  2, 15, 15,    // 167 - '' upper'
  5, 240, 252, 14, 7, 3,    // 168 - '( upper'
  5, 3, 7, 14, 252, 240,    // 169 - ') upper'
  10, 48, 112, 224, 192, 252, 252, 192, 224, 112, 48,   // 170 - '* upper'
  10, 192, 192, 192, 192, 252, 252, 192, 192, 192, 192,   // 171 - '+ upper'
  2, 0, 0,    // 172 - ', upper'
  9, 192, 192, 192, 192, 192, 192, 192, 192, 192,   // 173 - '- upper'
  2, 0, 0,    // 174 - '. upper'
  8, 0, 0, 0, 192, 240, 60, 15, 3,    // 175 - '/ upper'
  10, 252, 254, 135, 195, 99, 51, 27, 15, 254, 252,   // 176 - '0 upper'
  5, 4, 6, 255, 255, 0,   // 177 - '1 upper'
  10, 12, 142, 199, 195, 195, 195, 195, 231, 126, 60,   // 178 - '2 upper'
  10, 12, 14, 7, 3, 3, 195, 195, 199, 254, 60,    // 179 - '3 upper'
  10, 128, 192, 224, 112, 56, 28, 14, 255, 255, 0,    // 180 - '4 upper'
  10, 63, 63, 51, 51, 51, 51, 51, 115, 227, 195,    // 181 - '5 upper'
  10, 252, 254, 231, 99, 99, 99, 99, 231, 198, 132,   // 182 - '6 upper'
  10, 3, 3, 3, 131, 195, 227, 115, 59, 31, 15,    // 183 - '7 upper'
  10, 28, 190, 247, 227, 195, 195, 227, 247, 190, 28,   // 184 - '8 upper'
  10, 60, 126, 231, 195, 195, 195, 195, 231, 255, 254,    // 185 - '9 upper'
  2, 48, 48,    // 186 - ': upper'
  2, 48, 48,    // 187 - '; upper'
  8, 192, 224, 240, 56, 28, 14, 7, 3,   // 188 - '< upper'
  9, 96, 96, 96, 96, 96, 96, 96, 96, 96,    // 189 - '= upper'
  8, 3, 7, 14, 28, 56, 240, 224, 192,   // 190 - '> upper'
  10, 12, 14, 7, 3, 3, 131, 195, 231, 126, 60,    // 191 - '? upper'
  10, 252, 254, 7, 243, 27, 27, 243, 7, 254, 252,   // 192 - '@ upper'
  10, 248, 254, 134, 131, 131, 131, 131, 134, 254, 248,   // 193 - 'A upper'
  10, 255, 255, 195, 195, 195, 195, 195, 231, 254, 60,    // 194 - 'B upper'
  10, 252, 254, 7, 3, 3, 3, 3, 7, 14, 12,   // 195 - 'C upper'
  10, 255, 255, 3, 3, 3, 3, 3, 7, 254, 252,   // 196 - 'D upper'
  9, 255, 255, 195, 195, 195, 195, 195, 3, 3,   // 197 - 'E upper'
  9, 255, 255, 195, 195, 195, 195, 195, 3, 3,   // 198 - 'F upper'
  10, 252, 254, 7, 3, 3, 3, 131, 135, 142, 140,   // 199 - 'G upper'
  10, 255, 255, 192, 192, 192, 192, 192, 192, 255, 255,   // 200 - 'H upper'
  4, 3, 255, 255, 3,    // 201 - 'I upper'
  8, 3, 3, 3, 3, 3, 3, 255, 255,    // 202 - 'J upper'
  9, 255, 255, 224, 240, 56, 28, 14, 7, 3,    // 203 - 'K upper'
  9, 255, 255, 0, 0, 0, 0, 0, 0, 0,   // 204 - 'L upper'
  10, 255, 255, 14, 28, 120, 120, 28, 14, 255, 255,   // 205 - 'M upper'
  10, 255, 255, 28, 56, 112, 224, 192, 128, 255, 255,   // 206 - 'N upper'
  10, 252, 254, 7, 3, 3, 3, 3, 7, 254, 252,   // 207 - 'O upper'
  10, 255, 255, 195, 195, 195, 195, 195, 231, 126, 60,    // 208 - 'P upper'
  10, 252, 254, 7, 3, 3, 3, 3, 7, 254, 252,   // 209 - 'Q upper'
  10, 255, 255, 195, 195, 195, 195, 195, 231, 126, 60,    // 210 - 'R upper'
  10, 60, 126, 231, 195, 195, 195, 195, 195, 135, 6,    // 211 - 'S upper'
  8, 3, 3, 3, 255, 255, 3, 3, 3,    // 212 - 'T upper'
  10, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255,   // 213 - 'U upper'
  10, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255,   // 214 - 'V upper'
  10, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255,   // 215 - 'W upper'
  10, 15, 31, 56, 240, 224, 224, 240, 56, 31, 15,   // 216 - 'X upper'
  10, 15, 31, 56, 112, 224, 224, 112, 56, 31, 15,   // 217 - 'Y upper'
  10, 3, 3, 3, 131, 195, 227, 115, 59, 31, 15,    // 218 - 'Z upper'
  4, 255, 255, 3, 3,    // 219 - '[ upper'
  8, 3, 15, 60, 240, 192, 0, 0, 0,    // 220 - '\ upper'
  4, 3, 3, 255, 255,    // 221 - '] upper'
  8, 24, 12, 6, 3, 3, 6, 12, 24,    // 222 - '^ upper'
  10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 223 - '_ upper'
  3, 3, 15, 12,   // 224 - '` upper'
  10, 192, 224, 112, 48, 48, 48, 48, 48, 240, 240,    // 225 - 'a upper'
  10, 255, 255, 48, 48, 48, 48, 48, 112, 224, 192,    // 226 - 'b upper'
  9, 192, 224, 112, 48, 48, 48, 48, 48, 48,   // 227 - 'c upper'
  10, 192, 224, 112, 48, 48, 48, 48, 48, 255, 255,    // 228 - 'd upper'
  9, 192, 224, 112, 48, 48, 48, 112, 224, 192,    // 229 - 'e upper'
  7, 192, 252, 254, 199, 195, 195, 3,   // 230 - 'f upper'
  9, 192, 224, 112, 48, 48, 48, 48, 240, 240,   // 231 - 'g upper'
  9, 255, 255, 48, 48, 48, 48, 112, 224, 192,   // 232 - 'h upper'
  2, 246, 246,    // 233 - 'i upper'
  8, 0, 0, 0, 0, 0, 0, 246, 246,    // 234 - 'j upper'
  8, 254, 254, 0, 128, 192, 224, 112, 48,   // 235 - 'k upper'
  4, 3, 255, 255, 0,    // 236 - 'l upper'
  10, 240, 240, 48, 48, 240, 240, 48, 48, 240, 224,   // 237 - 'm upper'
  9, 240, 240, 48, 48, 48, 48, 112, 224, 192,   // 238 - 'n upper'
  9, 192, 224, 112, 48, 48, 48, 112, 224, 192,    // 239 - 'o upper'
  9, 240, 240, 48, 48, 48, 48, 112, 224, 192,   // 240 - 'p upper'
  9, 192, 224, 112, 48, 48, 48, 48, 240, 240,   // 241 - 'q upper'
  9, 240, 240, 48, 48, 48, 48, 112, 224, 192,   // 242 - 'r upper'
  9, 192, 224, 48, 48, 48, 48, 48, 48, 48,    // 243 - 's upper'
  6, 96, 252, 252, 96, 96, 0,   // 244 - 't upper'
  9, 240, 240, 0, 0, 0, 0, 0, 240, 240,   // 245 - 'u upper'
  9, 240, 240, 0, 0, 0, 0, 0, 240, 240,   // 246 - 'v upper'
  10, 240, 240, 0, 0, 0, 0, 0, 0, 240, 240,   // 247 - 'w upper'
  10, 48, 112, 224, 192, 128, 128, 192, 224, 112, 48,   // 248 - 'x upper'
  9, 240, 240, 0, 0, 0, 0, 0, 240, 240,   // 249 - 'y upper'
  10, 48, 48, 48, 48, 48, 176, 240, 240, 112, 48,   // 250 - 'z upper'
  6, 192, 224, 252, 62, 7, 3,   // 251 - '{ upper'
  2, 255, 255,    // 252 - '| upper'
  6, 3, 7, 62, 252, 224, 192,   // 253 - '} upper'
  0,    // 254
  0,    // 255
};


/* *******************************************************************************************************************
   BIG FONT
 * *******************************************************************************************************************
   Default font from library HUB08 + Buffer
   16*16 pixel font
   first byte in array is character width
   run function printBigText(string,X) to use this font
 * *******************************************************************************************************************
*/
const PROGMEM  uint8_t font_BIG[] = {
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 32
    0x03, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 33: !
    0x08, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 34: "
    0x0c, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0, 0xff, 0xf0, 0xff, 0xf0, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0, 0xff, 0xf0, 0xff, 0xf0, 0x39, 0xc0, 0x39, 0xc0, 0x39, 0xc0,   // char 35: #
    0x0b, 0x0e, 0x00, 0x0e, 0x00, 0x7f, 0xc0, 0xff, 0xe0, 0xee, 0xe0, 0xee, 0x00, 0xee, 0x00, 0xff, 0xc0, 0x7f, 0xe0, 0x0e, 0xe0, 0x0e, 0xe0, 0xee, 0xe0, 0xff, 0xe0, 0x7f, 0xc0, 0x0e, 0x00, 0x0e, 0x00,   // char 36: $
    0x0c, 0x70, 0xe0, 0xf8, 0xe0, 0xd9, 0xc0, 0xf9, 0xc0, 0x73, 0x80, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x1c, 0xe0, 0x39, 0xf0, 0x39, 0xb0, 0x71, 0xf0, 0x70, 0xe0,   // char 37: %
    0x0c, 0x1e, 0x00, 0x3f, 0x00, 0x73, 0x80, 0x73, 0x80, 0x73, 0x80, 0x73, 0x80, 0x33, 0x80, 0x3f, 0x00, 0x7e, 0x00, 0xee, 0x30, 0xe7, 0x70, 0xe3, 0xe0, 0xe1, 0xc0, 0xe3, 0xe0, 0xff, 0x70, 0x7e, 0x30,   // char 38: &
    0x03, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 39: '
    0x05, 0x38, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xf0, 0x00, 0x78, 0x00, 0x38, 0x00,   // char 40: (
    0x05, 0xe0, 0x00, 0xf0, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xe0, 0x00,   // char 41: )
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x77, 0x00, 0x3e, 0x00, 0x1c, 0x00, 0xff, 0x80, 0xff, 0x80, 0x1c, 0x00, 0x3e, 0x00, 0x77, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 42: *
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0xff, 0x80, 0xff, 0x80, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 43: +
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x60, 0x00, 0xe0, 0x00,   // char 44: ,
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 45: -
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 46: .
    0x05, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 47: /
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 48: 0
    0x09, 0x1c, 0x00, 0x3c, 0x00, 0x7c, 0x00, 0xfc, 0x00, 0xdc, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0xff, 0x80, 0xff, 0x80,   // char 49: 1
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0x00, 0xf0, 0x01, 0xe0, 0x03, 0xc0, 0x07, 0x80, 0x0f, 0x00, 0x1e, 0x00, 0x3c, 0x00, 0x78, 0x00, 0xf0, 0x70, 0xff, 0xf0, 0xff, 0xf0,   // char 50: 2
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0x00, 0xe0, 0x01, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 51: 3
    0x0c, 0x03, 0x80, 0x07, 0x80, 0x07, 0x80, 0x0f, 0x80, 0x1f, 0x80, 0x3b, 0x80, 0x3b, 0x80, 0x73, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xff, 0xf0, 0xff, 0xf0, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80,   // char 52: 4
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xc0, 0xff, 0xe0, 0x00, 0xf0, 0x00, 0x70, 0x00, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 53: 5
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xc0, 0xff, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 54: 6
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x01, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00,   // char 55: 7
    0x0c, 0x1f, 0x80, 0x3f, 0xc0, 0x79, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x39, 0xc0, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 56: 8
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xf0, 0x3f, 0xf0, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 57: 9
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00,   // char 58: :
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x60, 0x00, 0xe0, 0x00,   // char 59: ;
    0x08, 0x00, 0x00, 0x03, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x70, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x0e, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00,   // char 60: <
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 61: =
    0x08, 0x00, 0x00, 0xc0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x0e, 0x00, 0x07, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x70, 0x00, 0xe0, 0x00, 0xc0, 0x00, 0x00, 0x00,   // char 62: >
    0x0b, 0x3f, 0x80, 0x7f, 0xc0, 0xf1, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x01, 0xe0, 0x03, 0xc0, 0x07, 0x80, 0x0f, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00,   // char 63: ?
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe5, 0x70, 0xef, 0x70, 0xeb, 0x70, 0xeb, 0x70, 0xef, 0xf0, 0xef, 0xe0, 0xe7, 0x80, 0xe0, 0x00, 0xf0, 0x70, 0x7f, 0xe0, 0x3f, 0xc0,   // char 64: @
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70,   // char 65: A
    0x0c, 0xff, 0x80, 0xff, 0xc0, 0x71, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x71, 0xc0, 0x7f, 0xc0, 0x7f, 0xc0, 0x70, 0xe0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0xf0, 0xff, 0xe0, 0xff, 0xc0,   // char 66: B
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 67: C
    0x0c, 0xff, 0xc0, 0xff, 0xe0, 0x70, 0xf0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0xf0, 0xff, 0xe0, 0xff, 0xc0,   // char 68: D
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0x70, 0x70, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x70, 0xff, 0xf0, 0xff, 0xf0,   // char 69: E
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0x70, 0x70, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00,   // char 70: F
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe7, 0xf0, 0xe7, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 71: G
    0x0c, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70,   // char 72: H
    0x07, 0xfe, 0x00, 0xfe, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0xfe, 0x00, 0xfe, 0x00,   // char 73: I
    0x0c, 0x07, 0xf0, 0x07, 0xf0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 74: J
    0x0c, 0xf0, 0x70, 0xf0, 0x70, 0x70, 0x70, 0x70, 0xe0, 0x71, 0xc0, 0x73, 0x80, 0x77, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x77, 0x00, 0x73, 0x80, 0x71, 0xc0, 0x70, 0xe0, 0x70, 0x70, 0xf0, 0x70, 0xf0, 0x70,   // char 75: K
    0x0a, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe1, 0xc0, 0xff, 0xc0, 0xff, 0xc0,   // char 76: L
    0x0b, 0xe0, 0xe0, 0xe0, 0xe0, 0xf1, 0xe0, 0xf1, 0xe0, 0xfb, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xe4, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,   // char 77: M
    0x0b, 0xe0, 0xe0, 0xe0, 0xe0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf8, 0xe0, 0xf8, 0xe0, 0xec, 0xe0, 0xec, 0xe0, 0xe6, 0xe0, 0xe6, 0xe0, 0xe3, 0xe0, 0xe3, 0xe0, 0xe1, 0xe0, 0xe1, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,   // char 78: N
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 79: O
    0x0c, 0xff, 0xc0, 0xff, 0xe0, 0x70, 0xf0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0xf0, 0x7f, 0xe0, 0x7f, 0xc0, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00,   // char 80: P
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe6, 0x70, 0xe7, 0x70, 0xe3, 0xf0, 0xe1, 0xe0, 0xf3, 0xe0, 0x7f, 0xf0, 0x3f, 0xb0,   // char 81: Q
    0x0c, 0xff, 0xc0, 0xff, 0xe0, 0x70, 0xf0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0xf0, 0x7f, 0xe0, 0x7f, 0xc0, 0x7f, 0x00, 0x77, 0x80, 0x73, 0xc0, 0x71, 0xe0, 0x70, 0xf0, 0x70, 0x70, 0x70, 0x70,   // char 82: R
    0x0c, 0x3f, 0xc0, 0x7f, 0xe0, 0xf0, 0xf0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x00, 0xf0, 0x00, 0x7f, 0xc0, 0x3f, 0xe0, 0x00, 0xf0, 0x00, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 83: S
    0x0b, 0xff, 0xe0, 0xff, 0xe0, 0xee, 0xe0, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00,   // char 84: T
    0x0c, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xf0, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0,   // char 85: U
    0x0c, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0x70, 0xe0, 0x70, 0xe0, 0x39, 0xc0, 0x39, 0xc0, 0x1f, 0x80, 0x1f, 0x80, 0x0f, 0x00, 0x0f, 0x00, 0x06, 0x00,   // char 86: V
    0x0c, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe6, 0x70, 0xe6, 0x70, 0xef, 0x70, 0x6f, 0x60, 0x7f, 0xe0, 0x7f, 0xe0, 0x79, 0xe0, 0x30, 0xc0, 0x30, 0xc0,   // char 87: W
    0x0c, 0xf9, 0xf0, 0xf9, 0xf0, 0x70, 0xe0, 0x70, 0xe0, 0x39, 0xc0, 0x39, 0xc0, 0x1f, 0x80, 0x0f, 0x00, 0x0f, 0x00, 0x1f, 0x80, 0x39, 0xc0, 0x39, 0xc0, 0x70, 0xe0, 0x70, 0xe0, 0xf9, 0xf0, 0xf9, 0xf0,   // char 88: X
    0x0b, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x71, 0xc0, 0x3b, 0x80, 0x1f, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00,   // char 89: Y
    0x0c, 0xff, 0xf0, 0xff, 0xf0, 0xe0, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x01, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x70, 0x00, 0xe0, 0x00, 0xe0, 0x70, 0xff, 0xf0, 0xff, 0xf0,   // char 90: Z
    0x06, 0xfc, 0x00, 0xfc, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xfc, 0x00, 0xfc, 0x00,   // char 91: [
    0x05, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 92: backslash
    0x06, 0xfc, 0x00, 0xfc, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0xfc, 0x00, 0xfc, 0x00,   // char 93: ]
    0x09, 0x1c, 0x00, 0x3e, 0x00, 0x77, 0x00, 0xe3, 0x80, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 94: ^
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80,   // char 95: _
    0x06, 0xe0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 96: `
    0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x7f, 0xc0, 0x03, 0xc0, 0x01, 0xc0, 0x3f, 0xc0, 0x7f, 0xc0, 0xf1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0xe0, 0x3e, 0xe0,   // char 97: a
    0x0a, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xef, 0x00, 0xff, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0xff, 0x80, 0xef, 0x00,   // char 98: b
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 99: c
    0x0a, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x3d, 0xc0, 0x7f, 0xc0, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0xc0, 0x3d, 0xc0,   // char 100: d
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xe0, 0x00, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 101: e
    0x08, 0x0f, 0x00, 0x1f, 0x00, 0x3c, 0x00, 0x38, 0x00, 0xff, 0x00, 0xff, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00,   // char 102: f
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xc0, 0x7f, 0xc0, 0xf3, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0xc0, 0x3d, 0xc0, 0x01, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 103: g
    0x0a, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xef, 0x00, 0xff, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0,   // char 104: h
    0x05, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xf8, 0x00, 0xf8, 0x00,   // char 105: i
    0x07, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0xee, 0x00, 0xfe, 0x00, 0x7c, 0x00, 0x38, 0x00,   // char 106: j
    0x0a, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe1, 0xc0, 0xe3, 0xc0, 0xe7, 0x80, 0xef, 0x00, 0xfe, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfe, 0x00, 0xef, 0x00, 0xe7, 0x80, 0xe3, 0xc0, 0xe1, 0xc0,   // char 107: k
    0x04, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x70, 0x00,   // char 108: l
    0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0, 0xee, 0xe0,   // char 109: m
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0xff, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0,   // char 110: n
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 111: o
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0xff, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0xff, 0x80, 0xef, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 112: p
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xc0, 0x7f, 0xc0, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0xc0, 0x3d, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0,   // char 113: q
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x00, 0xfe, 0x00, 0xf0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 114: r
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xf0, 0x00, 0x7f, 0x00, 0x3f, 0x80, 0x03, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00,   // char 115: s
    0x07, 0x08, 0x00, 0x18, 0x00, 0x38, 0x00, 0x38, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x1e, 0x00, 0x0e, 0x00,   // char 116: t
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0xc0, 0x3d, 0xc0,   // char 117: u
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0, 0x73, 0x80, 0x73, 0x80, 0x33, 0x00, 0x3f, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x0c, 0x00, 0x0c, 0x00,   // char 118: v
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe6, 0x70, 0xe6, 0x70, 0xef, 0x70, 0xff, 0xf0, 0x7f, 0xe0, 0x79, 0xe0, 0x79, 0xe0, 0x30, 0xc0, 0x30, 0xc0,   // char 119: w
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc0, 0xe1, 0xc0, 0xf3, 0xc0, 0x7f, 0x80, 0x3f, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0xf3, 0xc0, 0xe1, 0xc0, 0xe1, 0xc0,   // char 120: x
    0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0x71, 0xc0, 0x71, 0xc0, 0x3b, 0x80, 0x3b, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x0e, 0x00, 0x1e, 0x00, 0xfc, 0x00, 0x78, 0x00,   // char 121: y
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xc1, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x70, 0x00, 0xe1, 0xc0, 0xff, 0xc0, 0xff, 0xc0,   // char 122: z
    0x08, 0x0f, 0x00, 0x1f, 0x00, 0x3c, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x3c, 0x00, 0x1f, 0x00, 0x0f, 0x00,   // char 123: {
    0x03, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00,   // char 124: |
    0x08, 0xf0, 0x00, 0xf8, 0x00, 0x3c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x3c, 0x00, 0xf8, 0x00, 0xf0, 0x00,   // char 125: }
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x70, 0x7e, 0xf0, 0xf7, 0xe0, 0xe3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // char 126: ~
    0x09, 0xff, 0x80, 0xff, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xe3, 0x80, 0xff, 0x80, 0xff, 0x80,   // char 127
};


byte logoReka[400] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFE, 0x00, 0x3E, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xF0, 0x00, 0x7F, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xE0, 0x00, 0x3E, 0x7F, 0x00, 0x3F, 0xFC, 0x1F, 0xFF, 0x1F, 0x07, 0xE0, 0x3F, 0x00,
  0x0F, 0xFF, 0xC7, 0xFC, 0x00, 0xFF, 0x80, 0x7F, 0xFF, 0x1F, 0xFF, 0x1F, 0x1F, 0xC0, 0x7F, 0x80,
  0x1F, 0xFF, 0x8F, 0xF0, 0x1F, 0xFF, 0xC0, 0x7E, 0x3F, 0x1F, 0x00, 0x1F, 0x3F, 0x80, 0x7F, 0x80,
  0x3F, 0xFF, 0x9F, 0xC3, 0x9F, 0xFF, 0xC0, 0x7E, 0x1F, 0x1F, 0x00, 0x1F, 0xFE, 0x00, 0xFF, 0xC0,
  0x3F, 0xFF, 0x9F, 0x0F, 0xCF, 0xFF, 0xE0, 0x7F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFE, 0x00, 0xF3, 0xC0,
  0x3F, 0xFF, 0x9C, 0x3F, 0x8F, 0xFF, 0xC0, 0x7F, 0xFC, 0x1F, 0xFF, 0x1F, 0xFF, 0x01, 0xF3, 0xE0,
  0x1F, 0xFF, 0xC0, 0x7F, 0x0F, 0xFF, 0xC0, 0x7E, 0xFC, 0x1F, 0x00, 0x1F, 0xFF, 0x81, 0xFF, 0xF0,
  0x0F, 0xFF, 0xC1, 0xFE, 0x1F, 0xFF, 0x80, 0x7E, 0x7E, 0x1F, 0x00, 0x1F, 0x8F, 0xC3, 0xFF, 0xF0,
  0x07, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x7E, 0x3F, 0x1F, 0xFF, 0x1F, 0x0F, 0xC3, 0xFF, 0xF8,
  0x01, 0xFE, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x7E, 0x1F, 0x9F, 0xFF, 0x9F, 0x07, 0xE7, 0xC0, 0xF8,
  0x00, 0x78, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x3C, 0x0F, 0x9F, 0xFF, 0x0F, 0x03, 0xF7, 0x80, 0x78,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
