#include "aglfn.h"
#define GlyphOrder otfcc_pkgGlyphOrder

// This table contains standard AGLFN 1.7 glyph names, mapped to Unicode.
void aglfn_setupNames(otfcc_GlyphOrder *map) {
	GlyphOrder.setByGID(map, 0x0041, sdsnew("A"));
	GlyphOrder.setByGID(map, 0x00C6, sdsnew("AE"));
	GlyphOrder.setByGID(map, 0x01FC, sdsnew("AEacute"));
	GlyphOrder.setByGID(map, 0x00C1, sdsnew("Aacute"));
	GlyphOrder.setByGID(map, 0x0102, sdsnew("Abreve"));
	GlyphOrder.setByGID(map, 0x00C2, sdsnew("Acircumflex"));
	GlyphOrder.setByGID(map, 0x00C4, sdsnew("Adieresis"));
	GlyphOrder.setByGID(map, 0x00C0, sdsnew("Agrave"));
	GlyphOrder.setByGID(map, 0x0391, sdsnew("Alpha"));
	GlyphOrder.setByGID(map, 0x0386, sdsnew("Alphatonos"));
	GlyphOrder.setByGID(map, 0x0100, sdsnew("Amacron"));
	GlyphOrder.setByGID(map, 0x0104, sdsnew("Aogonek"));
	GlyphOrder.setByGID(map, 0x00C5, sdsnew("Aring"));
	GlyphOrder.setByGID(map, 0x01FA, sdsnew("Aringacute"));
	GlyphOrder.setByGID(map, 0x00C3, sdsnew("Atilde"));
	GlyphOrder.setByGID(map, 0x0042, sdsnew("B"));
	GlyphOrder.setByGID(map, 0x0392, sdsnew("Beta"));
	GlyphOrder.setByGID(map, 0x0043, sdsnew("C"));
	GlyphOrder.setByGID(map, 0x0106, sdsnew("Cacute"));
	GlyphOrder.setByGID(map, 0x010C, sdsnew("Ccaron"));
	GlyphOrder.setByGID(map, 0x00C7, sdsnew("Ccedilla"));
	GlyphOrder.setByGID(map, 0x0108, sdsnew("Ccircumflex"));
	GlyphOrder.setByGID(map, 0x010A, sdsnew("Cdotaccent"));
	GlyphOrder.setByGID(map, 0x03A7, sdsnew("Chi"));
	GlyphOrder.setByGID(map, 0x0044, sdsnew("D"));
	GlyphOrder.setByGID(map, 0x010E, sdsnew("Dcaron"));
	GlyphOrder.setByGID(map, 0x0110, sdsnew("Dcroat"));
	GlyphOrder.setByGID(map, 0x2206, sdsnew("Delta"));
	GlyphOrder.setByGID(map, 0x0045, sdsnew("E"));
	GlyphOrder.setByGID(map, 0x00C9, sdsnew("Eacute"));
	GlyphOrder.setByGID(map, 0x0114, sdsnew("Ebreve"));
	GlyphOrder.setByGID(map, 0x011A, sdsnew("Ecaron"));
	GlyphOrder.setByGID(map, 0x00CA, sdsnew("Ecircumflex"));
	GlyphOrder.setByGID(map, 0x00CB, sdsnew("Edieresis"));
	GlyphOrder.setByGID(map, 0x0116, sdsnew("Edotaccent"));
	GlyphOrder.setByGID(map, 0x00C8, sdsnew("Egrave"));
	GlyphOrder.setByGID(map, 0x0112, sdsnew("Emacron"));
	GlyphOrder.setByGID(map, 0x014A, sdsnew("Eng"));
	GlyphOrder.setByGID(map, 0x0118, sdsnew("Eogonek"));
	GlyphOrder.setByGID(map, 0x0395, sdsnew("Epsilon"));
	GlyphOrder.setByGID(map, 0x0388, sdsnew("Epsilontonos"));
	GlyphOrder.setByGID(map, 0x0397, sdsnew("Eta"));
	GlyphOrder.setByGID(map, 0x0389, sdsnew("Etatonos"));
	GlyphOrder.setByGID(map, 0x00D0, sdsnew("Eth"));
	GlyphOrder.setByGID(map, 0x20AC, sdsnew("Euro"));
	GlyphOrder.setByGID(map, 0x0046, sdsnew("F"));
	GlyphOrder.setByGID(map, 0x0047, sdsnew("G"));
	GlyphOrder.setByGID(map, 0x0393, sdsnew("Gamma"));
	GlyphOrder.setByGID(map, 0x011E, sdsnew("Gbreve"));
	GlyphOrder.setByGID(map, 0x01E6, sdsnew("Gcaron"));
	GlyphOrder.setByGID(map, 0x011C, sdsnew("Gcircumflex"));
	GlyphOrder.setByGID(map, 0x0120, sdsnew("Gdotaccent"));
	GlyphOrder.setByGID(map, 0x0048, sdsnew("H"));
	GlyphOrder.setByGID(map, 0x25CF, sdsnew("H18533"));
	GlyphOrder.setByGID(map, 0x25AA, sdsnew("H18543"));
	GlyphOrder.setByGID(map, 0x25AB, sdsnew("H18551"));
	GlyphOrder.setByGID(map, 0x25A1, sdsnew("H22073"));
	GlyphOrder.setByGID(map, 0x0126, sdsnew("Hbar"));
	GlyphOrder.setByGID(map, 0x0124, sdsnew("Hcircumflex"));
	GlyphOrder.setByGID(map, 0x0049, sdsnew("I"));
	GlyphOrder.setByGID(map, 0x0132, sdsnew("IJ"));
	GlyphOrder.setByGID(map, 0x00CD, sdsnew("Iacute"));
	GlyphOrder.setByGID(map, 0x012C, sdsnew("Ibreve"));
	GlyphOrder.setByGID(map, 0x00CE, sdsnew("Icircumflex"));
	GlyphOrder.setByGID(map, 0x00CF, sdsnew("Idieresis"));
	GlyphOrder.setByGID(map, 0x0130, sdsnew("Idotaccent"));
	GlyphOrder.setByGID(map, 0x2111, sdsnew("Ifraktur"));
	GlyphOrder.setByGID(map, 0x00CC, sdsnew("Igrave"));
	GlyphOrder.setByGID(map, 0x012A, sdsnew("Imacron"));
	GlyphOrder.setByGID(map, 0x012E, sdsnew("Iogonek"));
	GlyphOrder.setByGID(map, 0x0399, sdsnew("Iota"));
	GlyphOrder.setByGID(map, 0x03AA, sdsnew("Iotadieresis"));
	GlyphOrder.setByGID(map, 0x038A, sdsnew("Iotatonos"));
	GlyphOrder.setByGID(map, 0x0128, sdsnew("Itilde"));
	GlyphOrder.setByGID(map, 0x004A, sdsnew("J"));
	GlyphOrder.setByGID(map, 0x0134, sdsnew("Jcircumflex"));
	GlyphOrder.setByGID(map, 0x004B, sdsnew("K"));
	GlyphOrder.setByGID(map, 0x039A, sdsnew("Kappa"));
	GlyphOrder.setByGID(map, 0x004C, sdsnew("L"));
	GlyphOrder.setByGID(map, 0x0139, sdsnew("Lacute"));
	GlyphOrder.setByGID(map, 0x039B, sdsnew("Lambda"));
	GlyphOrder.setByGID(map, 0x013D, sdsnew("Lcaron"));
	GlyphOrder.setByGID(map, 0x013F, sdsnew("Ldot"));
	GlyphOrder.setByGID(map, 0x0141, sdsnew("Lslash"));
	GlyphOrder.setByGID(map, 0x004D, sdsnew("M"));
	GlyphOrder.setByGID(map, 0x039C, sdsnew("Mu"));
	GlyphOrder.setByGID(map, 0x004E, sdsnew("N"));
	GlyphOrder.setByGID(map, 0x0143, sdsnew("Nacute"));
	GlyphOrder.setByGID(map, 0x0147, sdsnew("Ncaron"));
	GlyphOrder.setByGID(map, 0x00D1, sdsnew("Ntilde"));
	GlyphOrder.setByGID(map, 0x039D, sdsnew("Nu"));
	GlyphOrder.setByGID(map, 0x004F, sdsnew("O"));
	GlyphOrder.setByGID(map, 0x0152, sdsnew("OE"));
	GlyphOrder.setByGID(map, 0x00D3, sdsnew("Oacute"));
	GlyphOrder.setByGID(map, 0x014E, sdsnew("Obreve"));
	GlyphOrder.setByGID(map, 0x00D4, sdsnew("Ocircumflex"));
	GlyphOrder.setByGID(map, 0x00D6, sdsnew("Odieresis"));
	GlyphOrder.setByGID(map, 0x00D2, sdsnew("Ograve"));
	GlyphOrder.setByGID(map, 0x01A0, sdsnew("Ohorn"));
	GlyphOrder.setByGID(map, 0x0150, sdsnew("Ohungarumlaut"));
	GlyphOrder.setByGID(map, 0x014C, sdsnew("Omacron"));
	GlyphOrder.setByGID(map, 0x2126, sdsnew("Omega"));
	GlyphOrder.setByGID(map, 0x038F, sdsnew("Omegatonos"));
	GlyphOrder.setByGID(map, 0x039F, sdsnew("Omicron"));
	GlyphOrder.setByGID(map, 0x038C, sdsnew("Omicrontonos"));
	GlyphOrder.setByGID(map, 0x00D8, sdsnew("Oslash"));
	GlyphOrder.setByGID(map, 0x01FE, sdsnew("Oslashacute"));
	GlyphOrder.setByGID(map, 0x00D5, sdsnew("Otilde"));
	GlyphOrder.setByGID(map, 0x0050, sdsnew("P"));
	GlyphOrder.setByGID(map, 0x03A6, sdsnew("Phi"));
	GlyphOrder.setByGID(map, 0x03A0, sdsnew("Pi"));
	GlyphOrder.setByGID(map, 0x03A8, sdsnew("Psi"));
	GlyphOrder.setByGID(map, 0x0051, sdsnew("Q"));
	GlyphOrder.setByGID(map, 0x0052, sdsnew("R"));
	GlyphOrder.setByGID(map, 0x0154, sdsnew("Racute"));
	GlyphOrder.setByGID(map, 0x0158, sdsnew("Rcaron"));
	GlyphOrder.setByGID(map, 0x211C, sdsnew("Rfraktur"));
	GlyphOrder.setByGID(map, 0x03A1, sdsnew("Rho"));
	GlyphOrder.setByGID(map, 0x0053, sdsnew("S"));
	GlyphOrder.setByGID(map, 0x250C, sdsnew("SF010000"));
	GlyphOrder.setByGID(map, 0x2514, sdsnew("SF020000"));
	GlyphOrder.setByGID(map, 0x2510, sdsnew("SF030000"));
	GlyphOrder.setByGID(map, 0x2518, sdsnew("SF040000"));
	GlyphOrder.setByGID(map, 0x253C, sdsnew("SF050000"));
	GlyphOrder.setByGID(map, 0x252C, sdsnew("SF060000"));
	GlyphOrder.setByGID(map, 0x2534, sdsnew("SF070000"));
	GlyphOrder.setByGID(map, 0x251C, sdsnew("SF080000"));
	GlyphOrder.setByGID(map, 0x2524, sdsnew("SF090000"));
	GlyphOrder.setByGID(map, 0x2500, sdsnew("SF100000"));
	GlyphOrder.setByGID(map, 0x2502, sdsnew("SF110000"));
	GlyphOrder.setByGID(map, 0x2561, sdsnew("SF190000"));
	GlyphOrder.setByGID(map, 0x2562, sdsnew("SF200000"));
	GlyphOrder.setByGID(map, 0x2556, sdsnew("SF210000"));
	GlyphOrder.setByGID(map, 0x2555, sdsnew("SF220000"));
	GlyphOrder.setByGID(map, 0x2563, sdsnew("SF230000"));
	GlyphOrder.setByGID(map, 0x2551, sdsnew("SF240000"));
	GlyphOrder.setByGID(map, 0x2557, sdsnew("SF250000"));
	GlyphOrder.setByGID(map, 0x255D, sdsnew("SF260000"));
	GlyphOrder.setByGID(map, 0x255C, sdsnew("SF270000"));
	GlyphOrder.setByGID(map, 0x255B, sdsnew("SF280000"));
	GlyphOrder.setByGID(map, 0x255E, sdsnew("SF360000"));
	GlyphOrder.setByGID(map, 0x255F, sdsnew("SF370000"));
	GlyphOrder.setByGID(map, 0x255A, sdsnew("SF380000"));
	GlyphOrder.setByGID(map, 0x2554, sdsnew("SF390000"));
	GlyphOrder.setByGID(map, 0x2569, sdsnew("SF400000"));
	GlyphOrder.setByGID(map, 0x2566, sdsnew("SF410000"));
	GlyphOrder.setByGID(map, 0x2560, sdsnew("SF420000"));
	GlyphOrder.setByGID(map, 0x2550, sdsnew("SF430000"));
	GlyphOrder.setByGID(map, 0x256C, sdsnew("SF440000"));
	GlyphOrder.setByGID(map, 0x2567, sdsnew("SF450000"));
	GlyphOrder.setByGID(map, 0x2568, sdsnew("SF460000"));
	GlyphOrder.setByGID(map, 0x2564, sdsnew("SF470000"));
	GlyphOrder.setByGID(map, 0x2565, sdsnew("SF480000"));
	GlyphOrder.setByGID(map, 0x2559, sdsnew("SF490000"));
	GlyphOrder.setByGID(map, 0x2558, sdsnew("SF500000"));
	GlyphOrder.setByGID(map, 0x2552, sdsnew("SF510000"));
	GlyphOrder.setByGID(map, 0x2553, sdsnew("SF520000"));
	GlyphOrder.setByGID(map, 0x256B, sdsnew("SF530000"));
	GlyphOrder.setByGID(map, 0x256A, sdsnew("SF540000"));
	GlyphOrder.setByGID(map, 0x015A, sdsnew("Sacute"));
	GlyphOrder.setByGID(map, 0x0160, sdsnew("Scaron"));
	GlyphOrder.setByGID(map, 0x015E, sdsnew("Scedilla"));
	GlyphOrder.setByGID(map, 0x015C, sdsnew("Scircumflex"));
	GlyphOrder.setByGID(map, 0x03A3, sdsnew("Sigma"));
	GlyphOrder.setByGID(map, 0x0054, sdsnew("T"));
	GlyphOrder.setByGID(map, 0x03A4, sdsnew("Tau"));
	GlyphOrder.setByGID(map, 0x0166, sdsnew("Tbar"));
	GlyphOrder.setByGID(map, 0x0164, sdsnew("Tcaron"));
	GlyphOrder.setByGID(map, 0x0398, sdsnew("Theta"));
	GlyphOrder.setByGID(map, 0x00DE, sdsnew("Thorn"));
	GlyphOrder.setByGID(map, 0x0055, sdsnew("U"));
	GlyphOrder.setByGID(map, 0x00DA, sdsnew("Uacute"));
	GlyphOrder.setByGID(map, 0x016C, sdsnew("Ubreve"));
	GlyphOrder.setByGID(map, 0x00DB, sdsnew("Ucircumflex"));
	GlyphOrder.setByGID(map, 0x00DC, sdsnew("Udieresis"));
	GlyphOrder.setByGID(map, 0x00D9, sdsnew("Ugrave"));
	GlyphOrder.setByGID(map, 0x01AF, sdsnew("Uhorn"));
	GlyphOrder.setByGID(map, 0x0170, sdsnew("Uhungarumlaut"));
	GlyphOrder.setByGID(map, 0x016A, sdsnew("Umacron"));
	GlyphOrder.setByGID(map, 0x0172, sdsnew("Uogonek"));
	GlyphOrder.setByGID(map, 0x03A5, sdsnew("Upsilon"));
	GlyphOrder.setByGID(map, 0x03D2, sdsnew("Upsilon1"));
	GlyphOrder.setByGID(map, 0x03AB, sdsnew("Upsilondieresis"));
	GlyphOrder.setByGID(map, 0x038E, sdsnew("Upsilontonos"));
	GlyphOrder.setByGID(map, 0x016E, sdsnew("Uring"));
	GlyphOrder.setByGID(map, 0x0168, sdsnew("Utilde"));
	GlyphOrder.setByGID(map, 0x0056, sdsnew("V"));
	GlyphOrder.setByGID(map, 0x0057, sdsnew("W"));
	GlyphOrder.setByGID(map, 0x1E82, sdsnew("Wacute"));
	GlyphOrder.setByGID(map, 0x0174, sdsnew("Wcircumflex"));
	GlyphOrder.setByGID(map, 0x1E84, sdsnew("Wdieresis"));
	GlyphOrder.setByGID(map, 0x1E80, sdsnew("Wgrave"));
	GlyphOrder.setByGID(map, 0x0058, sdsnew("X"));
	GlyphOrder.setByGID(map, 0x039E, sdsnew("Xi"));
	GlyphOrder.setByGID(map, 0x0059, sdsnew("Y"));
	GlyphOrder.setByGID(map, 0x00DD, sdsnew("Yacute"));
	GlyphOrder.setByGID(map, 0x0176, sdsnew("Ycircumflex"));
	GlyphOrder.setByGID(map, 0x0178, sdsnew("Ydieresis"));
	GlyphOrder.setByGID(map, 0x1EF2, sdsnew("Ygrave"));
	GlyphOrder.setByGID(map, 0x005A, sdsnew("Z"));
	GlyphOrder.setByGID(map, 0x0179, sdsnew("Zacute"));
	GlyphOrder.setByGID(map, 0x017D, sdsnew("Zcaron"));
	GlyphOrder.setByGID(map, 0x017B, sdsnew("Zdotaccent"));
	GlyphOrder.setByGID(map, 0x0396, sdsnew("Zeta"));
	GlyphOrder.setByGID(map, 0x0061, sdsnew("a"));
	GlyphOrder.setByGID(map, 0x00E1, sdsnew("aacute"));
	GlyphOrder.setByGID(map, 0x0103, sdsnew("abreve"));
	GlyphOrder.setByGID(map, 0x00E2, sdsnew("acircumflex"));
	GlyphOrder.setByGID(map, 0x00B4, sdsnew("acute"));
	GlyphOrder.setByGID(map, 0x0301, sdsnew("acutecomb"));
	GlyphOrder.setByGID(map, 0x00E4, sdsnew("adieresis"));
	GlyphOrder.setByGID(map, 0x00E6, sdsnew("ae"));
	GlyphOrder.setByGID(map, 0x01FD, sdsnew("aeacute"));
	GlyphOrder.setByGID(map, 0x00E0, sdsnew("agrave"));
	GlyphOrder.setByGID(map, 0x2135, sdsnew("aleph"));
	GlyphOrder.setByGID(map, 0x03B1, sdsnew("alpha"));
	GlyphOrder.setByGID(map, 0x03AC, sdsnew("alphatonos"));
	GlyphOrder.setByGID(map, 0x0101, sdsnew("amacron"));
	GlyphOrder.setByGID(map, 0x0026, sdsnew("ampersand"));
	GlyphOrder.setByGID(map, 0x2220, sdsnew("angle"));
	GlyphOrder.setByGID(map, 0x2329, sdsnew("angleleft"));
	GlyphOrder.setByGID(map, 0x232A, sdsnew("angleright"));
	GlyphOrder.setByGID(map, 0x0387, sdsnew("anoteleia"));
	GlyphOrder.setByGID(map, 0x0105, sdsnew("aogonek"));
	GlyphOrder.setByGID(map, 0x2248, sdsnew("approxequal"));
	GlyphOrder.setByGID(map, 0x00E5, sdsnew("aring"));
	GlyphOrder.setByGID(map, 0x01FB, sdsnew("aringacute"));
	GlyphOrder.setByGID(map, 0x2194, sdsnew("arrowboth"));
	GlyphOrder.setByGID(map, 0x21D4, sdsnew("arrowdblboth"));
	GlyphOrder.setByGID(map, 0x21D3, sdsnew("arrowdbldown"));
	GlyphOrder.setByGID(map, 0x21D0, sdsnew("arrowdblleft"));
	GlyphOrder.setByGID(map, 0x21D2, sdsnew("arrowdblright"));
	GlyphOrder.setByGID(map, 0x21D1, sdsnew("arrowdblup"));
	GlyphOrder.setByGID(map, 0x2193, sdsnew("arrowdown"));
	GlyphOrder.setByGID(map, 0x2190, sdsnew("arrowleft"));
	GlyphOrder.setByGID(map, 0x2192, sdsnew("arrowright"));
	GlyphOrder.setByGID(map, 0x2191, sdsnew("arrowup"));
	GlyphOrder.setByGID(map, 0x2195, sdsnew("arrowupdn"));
	GlyphOrder.setByGID(map, 0x21A8, sdsnew("arrowupdnbse"));
	GlyphOrder.setByGID(map, 0x005E, sdsnew("asciicircum"));
	GlyphOrder.setByGID(map, 0x007E, sdsnew("asciitilde"));
	GlyphOrder.setByGID(map, 0x002A, sdsnew("asterisk"));
	GlyphOrder.setByGID(map, 0x2217, sdsnew("asteriskmath"));
	GlyphOrder.setByGID(map, 0x0040, sdsnew("at"));
	GlyphOrder.setByGID(map, 0x00E3, sdsnew("atilde"));
	GlyphOrder.setByGID(map, 0x0062, sdsnew("b"));
	GlyphOrder.setByGID(map, 0x005C, sdsnew("backslash"));
	GlyphOrder.setByGID(map, 0x007C, sdsnew("bar"));
	GlyphOrder.setByGID(map, 0x03B2, sdsnew("beta"));
	GlyphOrder.setByGID(map, 0x2588, sdsnew("block"));
	GlyphOrder.setByGID(map, 0x007B, sdsnew("braceleft"));
	GlyphOrder.setByGID(map, 0x007D, sdsnew("braceright"));
	GlyphOrder.setByGID(map, 0x005B, sdsnew("bracketleft"));
	GlyphOrder.setByGID(map, 0x005D, sdsnew("bracketright"));
	GlyphOrder.setByGID(map, 0x02D8, sdsnew("breve"));
	GlyphOrder.setByGID(map, 0x00A6, sdsnew("brokenbar"));
	GlyphOrder.setByGID(map, 0x2022, sdsnew("bullet"));
	GlyphOrder.setByGID(map, 0x0063, sdsnew("c"));
	GlyphOrder.setByGID(map, 0x0107, sdsnew("cacute"));
	GlyphOrder.setByGID(map, 0x02C7, sdsnew("caron"));
	GlyphOrder.setByGID(map, 0x21B5, sdsnew("carriagereturn"));
	GlyphOrder.setByGID(map, 0x010D, sdsnew("ccaron"));
	GlyphOrder.setByGID(map, 0x00E7, sdsnew("ccedilla"));
	GlyphOrder.setByGID(map, 0x0109, sdsnew("ccircumflex"));
	GlyphOrder.setByGID(map, 0x010B, sdsnew("cdotaccent"));
	GlyphOrder.setByGID(map, 0x00B8, sdsnew("cedilla"));
	GlyphOrder.setByGID(map, 0x00A2, sdsnew("cent"));
	GlyphOrder.setByGID(map, 0x03C7, sdsnew("chi"));
	GlyphOrder.setByGID(map, 0x25CB, sdsnew("circle"));
	GlyphOrder.setByGID(map, 0x2297, sdsnew("circlemultiply"));
	GlyphOrder.setByGID(map, 0x2295, sdsnew("circleplus"));
	GlyphOrder.setByGID(map, 0x02C6, sdsnew("circumflex"));
	GlyphOrder.setByGID(map, 0x2663, sdsnew("club"));
	GlyphOrder.setByGID(map, 0x003A, sdsnew("colon"));
	GlyphOrder.setByGID(map, 0x20A1, sdsnew("colonmonetary"));
	GlyphOrder.setByGID(map, 0x002C, sdsnew("comma"));
	GlyphOrder.setByGID(map, 0x2245, sdsnew("congruent"));
	GlyphOrder.setByGID(map, 0x00A9, sdsnew("copyright"));
	GlyphOrder.setByGID(map, 0x00A4, sdsnew("currency"));
	GlyphOrder.setByGID(map, 0x0064, sdsnew("d"));
	GlyphOrder.setByGID(map, 0x2020, sdsnew("dagger"));
	GlyphOrder.setByGID(map, 0x2021, sdsnew("daggerdbl"));
	GlyphOrder.setByGID(map, 0x010F, sdsnew("dcaron"));
	GlyphOrder.setByGID(map, 0x0111, sdsnew("dcroat"));
	GlyphOrder.setByGID(map, 0x00B0, sdsnew("degree"));
	GlyphOrder.setByGID(map, 0x03B4, sdsnew("delta"));
	GlyphOrder.setByGID(map, 0x2666, sdsnew("diamond"));
	GlyphOrder.setByGID(map, 0x00A8, sdsnew("dieresis"));
	GlyphOrder.setByGID(map, 0x0385, sdsnew("dieresistonos"));
	GlyphOrder.setByGID(map, 0x00F7, sdsnew("divide"));
	GlyphOrder.setByGID(map, 0x2593, sdsnew("dkshade"));
	GlyphOrder.setByGID(map, 0x2584, sdsnew("dnblock"));
	GlyphOrder.setByGID(map, 0x0024, sdsnew("dollar"));
	GlyphOrder.setByGID(map, 0x20AB, sdsnew("dong"));
	GlyphOrder.setByGID(map, 0x02D9, sdsnew("dotaccent"));
	GlyphOrder.setByGID(map, 0x0323, sdsnew("dotbelowcomb"));
	GlyphOrder.setByGID(map, 0x0131, sdsnew("dotlessi"));
	GlyphOrder.setByGID(map, 0x22C5, sdsnew("dotmath"));
	GlyphOrder.setByGID(map, 0x0065, sdsnew("e"));
	GlyphOrder.setByGID(map, 0x00E9, sdsnew("eacute"));
	GlyphOrder.setByGID(map, 0x0115, sdsnew("ebreve"));
	GlyphOrder.setByGID(map, 0x011B, sdsnew("ecaron"));
	GlyphOrder.setByGID(map, 0x00EA, sdsnew("ecircumflex"));
	GlyphOrder.setByGID(map, 0x00EB, sdsnew("edieresis"));
	GlyphOrder.setByGID(map, 0x0117, sdsnew("edotaccent"));
	GlyphOrder.setByGID(map, 0x00E8, sdsnew("egrave"));
	GlyphOrder.setByGID(map, 0x0038, sdsnew("eight"));
	GlyphOrder.setByGID(map, 0x2208, sdsnew("element"));
	GlyphOrder.setByGID(map, 0x2026, sdsnew("ellipsis"));
	GlyphOrder.setByGID(map, 0x0113, sdsnew("emacron"));
	GlyphOrder.setByGID(map, 0x2014, sdsnew("emdash"));
	GlyphOrder.setByGID(map, 0x2205, sdsnew("emptyset"));
	GlyphOrder.setByGID(map, 0x2013, sdsnew("endash"));
	GlyphOrder.setByGID(map, 0x014B, sdsnew("eng"));
	GlyphOrder.setByGID(map, 0x0119, sdsnew("eogonek"));
	GlyphOrder.setByGID(map, 0x03B5, sdsnew("epsilon"));
	GlyphOrder.setByGID(map, 0x03AD, sdsnew("epsilontonos"));
	GlyphOrder.setByGID(map, 0x003D, sdsnew("equal"));
	GlyphOrder.setByGID(map, 0x2261, sdsnew("equivalence"));
	GlyphOrder.setByGID(map, 0x212E, sdsnew("estimated"));
	GlyphOrder.setByGID(map, 0x03B7, sdsnew("eta"));
	GlyphOrder.setByGID(map, 0x03AE, sdsnew("etatonos"));
	GlyphOrder.setByGID(map, 0x00F0, sdsnew("eth"));
	GlyphOrder.setByGID(map, 0x0021, sdsnew("exclam"));
	GlyphOrder.setByGID(map, 0x203C, sdsnew("exclamdbl"));
	GlyphOrder.setByGID(map, 0x00A1, sdsnew("exclamdown"));
	GlyphOrder.setByGID(map, 0x2203, sdsnew("existential"));
	GlyphOrder.setByGID(map, 0x0066, sdsnew("f"));
	GlyphOrder.setByGID(map, 0x2640, sdsnew("female"));
	GlyphOrder.setByGID(map, 0x2012, sdsnew("figuredash"));
	GlyphOrder.setByGID(map, 0x25A0, sdsnew("filledbox"));
	GlyphOrder.setByGID(map, 0x25AC, sdsnew("filledrect"));
	GlyphOrder.setByGID(map, 0x0035, sdsnew("five"));
	GlyphOrder.setByGID(map, 0x215D, sdsnew("fiveeighths"));
	GlyphOrder.setByGID(map, 0x0192, sdsnew("florin"));
	GlyphOrder.setByGID(map, 0x0034, sdsnew("four"));
	GlyphOrder.setByGID(map, 0x2044, sdsnew("fraction"));
	GlyphOrder.setByGID(map, 0x20A3, sdsnew("franc"));
	GlyphOrder.setByGID(map, 0x0067, sdsnew("g"));
	GlyphOrder.setByGID(map, 0x03B3, sdsnew("gamma"));
	GlyphOrder.setByGID(map, 0x011F, sdsnew("gbreve"));
	GlyphOrder.setByGID(map, 0x01E7, sdsnew("gcaron"));
	GlyphOrder.setByGID(map, 0x011D, sdsnew("gcircumflex"));
	GlyphOrder.setByGID(map, 0x0121, sdsnew("gdotaccent"));
	GlyphOrder.setByGID(map, 0x00DF, sdsnew("germandbls"));
	GlyphOrder.setByGID(map, 0x2207, sdsnew("gradient"));
	GlyphOrder.setByGID(map, 0x0060, sdsnew("grave"));
	GlyphOrder.setByGID(map, 0x0300, sdsnew("gravecomb"));
	GlyphOrder.setByGID(map, 0x003E, sdsnew("greater"));
	GlyphOrder.setByGID(map, 0x2265, sdsnew("greaterequal"));
	GlyphOrder.setByGID(map, 0x00AB, sdsnew("guillemotleft"));
	GlyphOrder.setByGID(map, 0x00BB, sdsnew("guillemotright"));
	GlyphOrder.setByGID(map, 0x2039, sdsnew("guilsinglleft"));
	GlyphOrder.setByGID(map, 0x203A, sdsnew("guilsinglright"));
	GlyphOrder.setByGID(map, 0x0068, sdsnew("h"));
	GlyphOrder.setByGID(map, 0x0127, sdsnew("hbar"));
	GlyphOrder.setByGID(map, 0x0125, sdsnew("hcircumflex"));
	GlyphOrder.setByGID(map, 0x2665, sdsnew("heart"));
	GlyphOrder.setByGID(map, 0x0309, sdsnew("hookabovecomb"));
	GlyphOrder.setByGID(map, 0x2302, sdsnew("house"));
	GlyphOrder.setByGID(map, 0x02DD, sdsnew("hungarumlaut"));
	GlyphOrder.setByGID(map, 0x002D, sdsnew("hyphen"));
	GlyphOrder.setByGID(map, 0x0069, sdsnew("i"));
	GlyphOrder.setByGID(map, 0x00ED, sdsnew("iacute"));
	GlyphOrder.setByGID(map, 0x012D, sdsnew("ibreve"));
	GlyphOrder.setByGID(map, 0x00EE, sdsnew("icircumflex"));
	GlyphOrder.setByGID(map, 0x00EF, sdsnew("idieresis"));
	GlyphOrder.setByGID(map, 0x00EC, sdsnew("igrave"));
	GlyphOrder.setByGID(map, 0x0133, sdsnew("ij"));
	GlyphOrder.setByGID(map, 0x012B, sdsnew("imacron"));
	GlyphOrder.setByGID(map, 0x221E, sdsnew("infinity"));
	GlyphOrder.setByGID(map, 0x222B, sdsnew("integral"));
	GlyphOrder.setByGID(map, 0x2321, sdsnew("integralbt"));
	GlyphOrder.setByGID(map, 0x2320, sdsnew("integraltp"));
	GlyphOrder.setByGID(map, 0x2229, sdsnew("intersection"));
	GlyphOrder.setByGID(map, 0x25D8, sdsnew("invbullet"));
	GlyphOrder.setByGID(map, 0x25D9, sdsnew("invcircle"));
	GlyphOrder.setByGID(map, 0x263B, sdsnew("invsmileface"));
	GlyphOrder.setByGID(map, 0x012F, sdsnew("iogonek"));
	GlyphOrder.setByGID(map, 0x03B9, sdsnew("iota"));
	GlyphOrder.setByGID(map, 0x03CA, sdsnew("iotadieresis"));
	GlyphOrder.setByGID(map, 0x0390, sdsnew("iotadieresistonos"));
	GlyphOrder.setByGID(map, 0x03AF, sdsnew("iotatonos"));
	GlyphOrder.setByGID(map, 0x0129, sdsnew("itilde"));
	GlyphOrder.setByGID(map, 0x006A, sdsnew("j"));
	GlyphOrder.setByGID(map, 0x0135, sdsnew("jcircumflex"));
	GlyphOrder.setByGID(map, 0x006B, sdsnew("k"));
	GlyphOrder.setByGID(map, 0x03BA, sdsnew("kappa"));
	GlyphOrder.setByGID(map, 0x0138, sdsnew("kgreenlandic"));
	GlyphOrder.setByGID(map, 0x006C, sdsnew("l"));
	GlyphOrder.setByGID(map, 0x013A, sdsnew("lacute"));
	GlyphOrder.setByGID(map, 0x03BB, sdsnew("lambda"));
	GlyphOrder.setByGID(map, 0x013E, sdsnew("lcaron"));
	GlyphOrder.setByGID(map, 0x0140, sdsnew("ldot"));
	GlyphOrder.setByGID(map, 0x003C, sdsnew("less"));
	GlyphOrder.setByGID(map, 0x2264, sdsnew("lessequal"));
	GlyphOrder.setByGID(map, 0x258C, sdsnew("lfblock"));
	GlyphOrder.setByGID(map, 0x20A4, sdsnew("lira"));
	GlyphOrder.setByGID(map, 0x2227, sdsnew("logicaland"));
	GlyphOrder.setByGID(map, 0x00AC, sdsnew("logicalnot"));
	GlyphOrder.setByGID(map, 0x2228, sdsnew("logicalor"));
	GlyphOrder.setByGID(map, 0x017F, sdsnew("longs"));
	GlyphOrder.setByGID(map, 0x25CA, sdsnew("lozenge"));
	GlyphOrder.setByGID(map, 0x0142, sdsnew("lslash"));
	GlyphOrder.setByGID(map, 0x2591, sdsnew("ltshade"));
	GlyphOrder.setByGID(map, 0x006D, sdsnew("m"));
	GlyphOrder.setByGID(map, 0x00AF, sdsnew("macron"));
	GlyphOrder.setByGID(map, 0x2642, sdsnew("male"));
	GlyphOrder.setByGID(map, 0x2212, sdsnew("minus"));
	GlyphOrder.setByGID(map, 0x2032, sdsnew("minute"));
	GlyphOrder.setByGID(map, 0x00B5, sdsnew("mu"));
	GlyphOrder.setByGID(map, 0x00D7, sdsnew("multiply"));
	GlyphOrder.setByGID(map, 0x266A, sdsnew("musicalnote"));
	GlyphOrder.setByGID(map, 0x266B, sdsnew("musicalnotedbl"));
	GlyphOrder.setByGID(map, 0x006E, sdsnew("n"));
	GlyphOrder.setByGID(map, 0x0144, sdsnew("nacute"));
	GlyphOrder.setByGID(map, 0x0149, sdsnew("napostrophe"));
	GlyphOrder.setByGID(map, 0x0148, sdsnew("ncaron"));
	GlyphOrder.setByGID(map, 0x0039, sdsnew("nine"));
	GlyphOrder.setByGID(map, 0x2209, sdsnew("notelement"));
	GlyphOrder.setByGID(map, 0x2260, sdsnew("notequal"));
	GlyphOrder.setByGID(map, 0x2284, sdsnew("notsubset"));
	GlyphOrder.setByGID(map, 0x00F1, sdsnew("ntilde"));
	GlyphOrder.setByGID(map, 0x03BD, sdsnew("nu"));
	GlyphOrder.setByGID(map, 0x0023, sdsnew("numbersign"));
	GlyphOrder.setByGID(map, 0x006F, sdsnew("o"));
	GlyphOrder.setByGID(map, 0x00F3, sdsnew("oacute"));
	GlyphOrder.setByGID(map, 0x014F, sdsnew("obreve"));
	GlyphOrder.setByGID(map, 0x00F4, sdsnew("ocircumflex"));
	GlyphOrder.setByGID(map, 0x00F6, sdsnew("odieresis"));
	GlyphOrder.setByGID(map, 0x0153, sdsnew("oe"));
	GlyphOrder.setByGID(map, 0x02DB, sdsnew("ogonek"));
	GlyphOrder.setByGID(map, 0x00F2, sdsnew("ograve"));
	GlyphOrder.setByGID(map, 0x01A1, sdsnew("ohorn"));
	GlyphOrder.setByGID(map, 0x0151, sdsnew("ohungarumlaut"));
	GlyphOrder.setByGID(map, 0x014D, sdsnew("omacron"));
	GlyphOrder.setByGID(map, 0x03C9, sdsnew("omega"));
	GlyphOrder.setByGID(map, 0x03D6, sdsnew("omega1"));
	GlyphOrder.setByGID(map, 0x03CE, sdsnew("omegatonos"));
	GlyphOrder.setByGID(map, 0x03BF, sdsnew("omicron"));
	GlyphOrder.setByGID(map, 0x03CC, sdsnew("omicrontonos"));
	GlyphOrder.setByGID(map, 0x0031, sdsnew("one"));
	GlyphOrder.setByGID(map, 0x2024, sdsnew("onedotenleader"));
	GlyphOrder.setByGID(map, 0x215B, sdsnew("oneeighth"));
	GlyphOrder.setByGID(map, 0x00BD, sdsnew("onehalf"));
	GlyphOrder.setByGID(map, 0x00BC, sdsnew("onequarter"));
	GlyphOrder.setByGID(map, 0x2153, sdsnew("onethird"));
	GlyphOrder.setByGID(map, 0x25E6, sdsnew("openbullet"));
	GlyphOrder.setByGID(map, 0x00AA, sdsnew("ordfeminine"));
	GlyphOrder.setByGID(map, 0x00BA, sdsnew("ordmasculine"));
	GlyphOrder.setByGID(map, 0x221F, sdsnew("orthogonal"));
	GlyphOrder.setByGID(map, 0x00F8, sdsnew("oslash"));
	GlyphOrder.setByGID(map, 0x01FF, sdsnew("oslashacute"));
	GlyphOrder.setByGID(map, 0x00F5, sdsnew("otilde"));
	GlyphOrder.setByGID(map, 0x0070, sdsnew("p"));
	GlyphOrder.setByGID(map, 0x00B6, sdsnew("paragraph"));
	GlyphOrder.setByGID(map, 0x0028, sdsnew("parenleft"));
	GlyphOrder.setByGID(map, 0x0029, sdsnew("parenright"));
	GlyphOrder.setByGID(map, 0x2202, sdsnew("partialdiff"));
	GlyphOrder.setByGID(map, 0x0025, sdsnew("percent"));
	GlyphOrder.setByGID(map, 0x002E, sdsnew("period"));
	GlyphOrder.setByGID(map, 0x00B7, sdsnew("periodcentered"));
	GlyphOrder.setByGID(map, 0x22A5, sdsnew("perpendicular"));
	GlyphOrder.setByGID(map, 0x2030, sdsnew("perthousand"));
	GlyphOrder.setByGID(map, 0x20A7, sdsnew("peseta"));
	GlyphOrder.setByGID(map, 0x03C6, sdsnew("phi"));
	GlyphOrder.setByGID(map, 0x03D5, sdsnew("phi1"));
	GlyphOrder.setByGID(map, 0x03C0, sdsnew("pi"));
	GlyphOrder.setByGID(map, 0x002B, sdsnew("plus"));
	GlyphOrder.setByGID(map, 0x00B1, sdsnew("plusminus"));
	GlyphOrder.setByGID(map, 0x211E, sdsnew("prescription"));
	GlyphOrder.setByGID(map, 0x220F, sdsnew("product"));
	GlyphOrder.setByGID(map, 0x2282, sdsnew("propersubset"));
	GlyphOrder.setByGID(map, 0x2283, sdsnew("propersuperset"));
	GlyphOrder.setByGID(map, 0x221D, sdsnew("proportional"));
	GlyphOrder.setByGID(map, 0x03C8, sdsnew("psi"));
	GlyphOrder.setByGID(map, 0x0071, sdsnew("q"));
	GlyphOrder.setByGID(map, 0x003F, sdsnew("question"));
	GlyphOrder.setByGID(map, 0x00BF, sdsnew("questiondown"));
	GlyphOrder.setByGID(map, 0x0022, sdsnew("quotedbl"));
	GlyphOrder.setByGID(map, 0x201E, sdsnew("quotedblbase"));
	GlyphOrder.setByGID(map, 0x201C, sdsnew("quotedblleft"));
	GlyphOrder.setByGID(map, 0x201D, sdsnew("quotedblright"));
	GlyphOrder.setByGID(map, 0x2018, sdsnew("quoteleft"));
	GlyphOrder.setByGID(map, 0x201B, sdsnew("quotereversed"));
	GlyphOrder.setByGID(map, 0x2019, sdsnew("quoteright"));
	GlyphOrder.setByGID(map, 0x201A, sdsnew("quotesinglbase"));
	GlyphOrder.setByGID(map, 0x0027, sdsnew("quotesingle"));
	GlyphOrder.setByGID(map, 0x0072, sdsnew("r"));
	GlyphOrder.setByGID(map, 0x0155, sdsnew("racute"));
	GlyphOrder.setByGID(map, 0x221A, sdsnew("radical"));
	GlyphOrder.setByGID(map, 0x0159, sdsnew("rcaron"));
	GlyphOrder.setByGID(map, 0x2286, sdsnew("reflexsubset"));
	GlyphOrder.setByGID(map, 0x2287, sdsnew("reflexsuperset"));
	GlyphOrder.setByGID(map, 0x00AE, sdsnew("registered"));
	GlyphOrder.setByGID(map, 0x2310, sdsnew("revlogicalnot"));
	GlyphOrder.setByGID(map, 0x03C1, sdsnew("rho"));
	GlyphOrder.setByGID(map, 0x02DA, sdsnew("ring"));
	GlyphOrder.setByGID(map, 0x2590, sdsnew("rtblock"));
	GlyphOrder.setByGID(map, 0x0073, sdsnew("s"));
	GlyphOrder.setByGID(map, 0x015B, sdsnew("sacute"));
	GlyphOrder.setByGID(map, 0x0161, sdsnew("scaron"));
	GlyphOrder.setByGID(map, 0x015F, sdsnew("scedilla"));
	GlyphOrder.setByGID(map, 0x015D, sdsnew("scircumflex"));
	GlyphOrder.setByGID(map, 0x2033, sdsnew("second"));
	GlyphOrder.setByGID(map, 0x00A7, sdsnew("section"));
	GlyphOrder.setByGID(map, 0x003B, sdsnew("semicolon"));
	GlyphOrder.setByGID(map, 0x0037, sdsnew("seven"));
	GlyphOrder.setByGID(map, 0x215E, sdsnew("seveneighths"));
	GlyphOrder.setByGID(map, 0x2592, sdsnew("shade"));
	GlyphOrder.setByGID(map, 0x03C3, sdsnew("sigma"));
	GlyphOrder.setByGID(map, 0x03C2, sdsnew("sigma1"));
	GlyphOrder.setByGID(map, 0x223C, sdsnew("similar"));
	GlyphOrder.setByGID(map, 0x0036, sdsnew("six"));
	GlyphOrder.setByGID(map, 0x002F, sdsnew("slash"));
	GlyphOrder.setByGID(map, 0x263A, sdsnew("smileface"));
	GlyphOrder.setByGID(map, 0x0020, sdsnew("space"));
	GlyphOrder.setByGID(map, 0x2660, sdsnew("spade"));
	GlyphOrder.setByGID(map, 0x00A3, sdsnew("sterling"));
	GlyphOrder.setByGID(map, 0x220B, sdsnew("suchthat"));
	GlyphOrder.setByGID(map, 0x2211, sdsnew("summation"));
	GlyphOrder.setByGID(map, 0x263C, sdsnew("sun"));
	GlyphOrder.setByGID(map, 0x0074, sdsnew("t"));
	GlyphOrder.setByGID(map, 0x03C4, sdsnew("tau"));
	GlyphOrder.setByGID(map, 0x0167, sdsnew("tbar"));
	GlyphOrder.setByGID(map, 0x0165, sdsnew("tcaron"));
	GlyphOrder.setByGID(map, 0x2234, sdsnew("therefore"));
	GlyphOrder.setByGID(map, 0x03B8, sdsnew("theta"));
	GlyphOrder.setByGID(map, 0x03D1, sdsnew("theta1"));
	GlyphOrder.setByGID(map, 0x00FE, sdsnew("thorn"));
	GlyphOrder.setByGID(map, 0x0033, sdsnew("three"));
	GlyphOrder.setByGID(map, 0x215C, sdsnew("threeeighths"));
	GlyphOrder.setByGID(map, 0x00BE, sdsnew("threequarters"));
	GlyphOrder.setByGID(map, 0x02DC, sdsnew("tilde"));
	GlyphOrder.setByGID(map, 0x0303, sdsnew("tildecomb"));
	GlyphOrder.setByGID(map, 0x0384, sdsnew("tonos"));
	GlyphOrder.setByGID(map, 0x2122, sdsnew("trademark"));
	GlyphOrder.setByGID(map, 0x25BC, sdsnew("triagdn"));
	GlyphOrder.setByGID(map, 0x25C4, sdsnew("triaglf"));
	GlyphOrder.setByGID(map, 0x25BA, sdsnew("triagrt"));
	GlyphOrder.setByGID(map, 0x25B2, sdsnew("triagup"));
	GlyphOrder.setByGID(map, 0x0032, sdsnew("two"));
	GlyphOrder.setByGID(map, 0x2025, sdsnew("twodotenleader"));
	GlyphOrder.setByGID(map, 0x2154, sdsnew("twothirds"));
	GlyphOrder.setByGID(map, 0x0075, sdsnew("u"));
	GlyphOrder.setByGID(map, 0x00FA, sdsnew("uacute"));
	GlyphOrder.setByGID(map, 0x016D, sdsnew("ubreve"));
	GlyphOrder.setByGID(map, 0x00FB, sdsnew("ucircumflex"));
	GlyphOrder.setByGID(map, 0x00FC, sdsnew("udieresis"));
	GlyphOrder.setByGID(map, 0x00F9, sdsnew("ugrave"));
	GlyphOrder.setByGID(map, 0x01B0, sdsnew("uhorn"));
	GlyphOrder.setByGID(map, 0x0171, sdsnew("uhungarumlaut"));
	GlyphOrder.setByGID(map, 0x016B, sdsnew("umacron"));
	GlyphOrder.setByGID(map, 0x005F, sdsnew("underscore"));
	GlyphOrder.setByGID(map, 0x2017, sdsnew("underscoredbl"));
	GlyphOrder.setByGID(map, 0x222A, sdsnew("union"));
	GlyphOrder.setByGID(map, 0x2200, sdsnew("universal"));
	GlyphOrder.setByGID(map, 0x0173, sdsnew("uogonek"));
	GlyphOrder.setByGID(map, 0x2580, sdsnew("upblock"));
	GlyphOrder.setByGID(map, 0x03C5, sdsnew("upsilon"));
	GlyphOrder.setByGID(map, 0x03CB, sdsnew("upsilondieresis"));
	GlyphOrder.setByGID(map, 0x03B0, sdsnew("upsilondieresistonos"));
	GlyphOrder.setByGID(map, 0x03CD, sdsnew("upsilontonos"));
	GlyphOrder.setByGID(map, 0x016F, sdsnew("uring"));
	GlyphOrder.setByGID(map, 0x0169, sdsnew("utilde"));
	GlyphOrder.setByGID(map, 0x0076, sdsnew("v"));
	GlyphOrder.setByGID(map, 0x0077, sdsnew("w"));
	GlyphOrder.setByGID(map, 0x1E83, sdsnew("wacute"));
	GlyphOrder.setByGID(map, 0x0175, sdsnew("wcircumflex"));
	GlyphOrder.setByGID(map, 0x1E85, sdsnew("wdieresis"));
	GlyphOrder.setByGID(map, 0x2118, sdsnew("weierstrass"));
	GlyphOrder.setByGID(map, 0x1E81, sdsnew("wgrave"));
	GlyphOrder.setByGID(map, 0x0078, sdsnew("x"));
	GlyphOrder.setByGID(map, 0x03BE, sdsnew("xi"));
	GlyphOrder.setByGID(map, 0x0079, sdsnew("y"));
	GlyphOrder.setByGID(map, 0x00FD, sdsnew("yacute"));
	GlyphOrder.setByGID(map, 0x0177, sdsnew("ycircumflex"));
	GlyphOrder.setByGID(map, 0x00FF, sdsnew("ydieresis"));
	GlyphOrder.setByGID(map, 0x00A5, sdsnew("yen"));
	GlyphOrder.setByGID(map, 0x1EF3, sdsnew("ygrave"));
	GlyphOrder.setByGID(map, 0x007A, sdsnew("z"));
	GlyphOrder.setByGID(map, 0x017A, sdsnew("zacute"));
	GlyphOrder.setByGID(map, 0x017E, sdsnew("zcaron"));
	GlyphOrder.setByGID(map, 0x017C, sdsnew("zdotaccent"));
	GlyphOrder.setByGID(map, 0x0030, sdsnew("zero"));
	GlyphOrder.setByGID(map, 0x03B6, sdsnew("zeta"));
}
