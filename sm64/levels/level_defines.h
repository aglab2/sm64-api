// Define lists for list of level for macros. Each of the following fields are described:
// Argument 1: Internal ROM name of the level.
// Argument 2: Level enumerator for enum used to identify the level ID.
// Argument 3: Course enumerator for enum used to identify the course ID.
// Argument 4: Shorthand name of the level which should be the name of the levels/ folder of the level.
// Argument 5: The shared texture bin used.
// Argument 6: Acoustic reaches for each levels.
// Argument 7, 8, 9: Echo levels for individual areas.  < Clueless hackers should change these for their levels btw
// Argument 10: Specify dynamic music tables for levels, if specified. _ for none.
// Argument 11: Specify level camera table, if specified. _ for none.

// NOTE: Be sure to edit sZoomOutAreaMasks in camera.c, as there isnt a good way to macro those right now.
// TODO: Figure something out for sZoomOutAreaMasks?

STUB_LEVEL("", LEVEL_UNKNOWN_1, COURSE_NONE, 20000, 0x00, 0x00, 0x00, _, _) 
STUB_LEVEL("", LEVEL_UNKNOWN_2, COURSE_NONE, 20000, 0x00, 0x00, 0x00, _, _) 
STUB_LEVEL("", LEVEL_UNKNOWN_3, COURSE_NONE, 20000, 0x00, 0x00, 0x00, _, _) 
DEFINE_LEVEL("COURSE 5 BBH", LEVEL_BBH, COURSE_BBH, bbh, spooky, 20000, 0x00, 0x00, 0x00, sDynBbh, sCamBBH) 
DEFINE_LEVEL("COURSE 4 CCM", LEVEL_CCM, COURSE_CCM, ccm, snow, 20000, 0x00, 0x00, 0x00, _, sCamCCM) 
DEFINE_LEVEL("OW2 IN CASTLE", LEVEL_CASTLE, COURSE_NONE, castle_inside, inside, 20000, 0x00, 0x00, 0x00, _, sCamCastle) 
DEFINE_LEVEL("COURSE 6 HMC", LEVEL_HMC, COURSE_HMC, hmc, cave, 20000, 0x00, 0x00, 0x00, sDynHmc, sCamHMC) 
DEFINE_LEVEL("COURSE 8 SSL", LEVEL_SSL, COURSE_SSL, ssl, generic, 20000, 0x00, 0x00, 0x00, _, sCamSSL) 
DEFINE_LEVEL("COURSE 1 BOB", LEVEL_BOB, COURSE_BOB, bob, generic, 20000, 0x00, 0x00, 0x00, _, sCamBOB) 
DEFINE_LEVEL("COURSE 10 SL", LEVEL_SL, COURSE_SL, sl, snow, 20000, 0x00, 0x00, 0x00, _, sCamSL) 
DEFINE_LEVEL("COURSE 11 WDW", LEVEL_WDW, COURSE_WDW, wdw, grass, 20000, 0x00, 0x00, 0x00, sDynWdw, sCamWDW) 
DEFINE_LEVEL("COURSE 3 JRB", LEVEL_JRB, COURSE_JRB, jrb, water, 20000, 0x00, 0x00, 0x00, sDynJrb, sCamJRB) 
DEFINE_LEVEL("COURSE 13 THI", LEVEL_THI, COURSE_THI, thi, grass, 20000, 0x00, 0x00, 0x00, _, sCamTHI) 
DEFINE_LEVEL("COURSE 14 TTC", LEVEL_TTC, COURSE_TTC, ttc, machine, 20000, 0x00, 0x00, 0x00, _, sCamTTC) 
DEFINE_LEVEL("COURSE 15 RR", LEVEL_RR, COURSE_RR, rr, sky, 20000, 0x00, 0x00, 0x00, _, sCamRR) 
DEFINE_LEVEL("OW1 C GROUNDS", LEVEL_CASTLE_GROUNDS, COURSE_NONE, castle_grounds, outside, 20000, 0x00, 0x00, 0x00, _, sCamCastleGrounds) 
DEFINE_LEVEL("BC1 BITDW", LEVEL_BITDW, COURSE_BITDW, bitdw, sky, 20000, 0x00, 0x00, 0x00, _, sCamBitDW) 
DEFINE_LEVEL("VCL VCUTM", LEVEL_VCUTM, COURSE_VCUTM, vcutm, outside, 20000, 0x00, 0x00, 0x00, _, sCamVCUtM) 
DEFINE_LEVEL("BC2 BITFS", LEVEL_BITFS, COURSE_BITFS, bitfs, sky, 20000, 0x00, 0x00, 0x00, _, sCamBitFS) 
DEFINE_LEVEL("SC1 SEC AQUA", LEVEL_SA, COURSE_SA, sa, inside, 20000, 0x00, 0x00, 0x00, _, sCamSA) 
DEFINE_LEVEL("BC3 BITS", LEVEL_BITS, COURSE_BITS, bits, sky, 20000, 0x00, 0x00, 0x00, _, sCamBitS) 
DEFINE_LEVEL("COURSE 7 LLL", LEVEL_LLL, COURSE_LLL, lll, fire, 20000, 0x00, 0x00, 0x00, _, sCamLLL) 
DEFINE_LEVEL("COURSE 9 DDD", LEVEL_DDD, COURSE_DDD, ddd, water, 20000, 0x00, 0x00, 0x00, sDynDdd, sCamDDD) 
DEFINE_LEVEL("COURSE 2 WF", LEVEL_WF, COURSE_WF, wf, grass, 20000, 0x00, 0x00, 0x00, _, sCamWF) 
DEFINE_LEVEL("END CAKE", LEVEL_ENDING, COURSE_CAKE_END, ending, generic, 20000, 0x00, 0x00, 0x00, _, _) 
DEFINE_LEVEL("OW3 C COURTYD", LEVEL_CASTLE_COURTYARD, COURSE_NONE, castle_courtyard, outside, 20000, 0x00, 0x00, 0x00, _, sCamCastleCourtyard) 
DEFINE_LEVEL("SIC P SEC SLID", LEVEL_PSS, COURSE_PSS, pss, mountain, 20000, 0x00, 0x00, 0x00, _, sCamPSS) 
DEFINE_LEVEL("MCL COTMC", LEVEL_COTMC, COURSE_COTMC, cotmc, cave, 20000, 0x00, 0x00, 0x00, _, sCamCotMC) 
DEFINE_LEVEL("WCL TOTWC", LEVEL_TOTWC, COURSE_TOTWC, totwc, sky, 20000, 0x00, 0x00, 0x00, _, sCamTotWC) 
DEFINE_LEVEL("B BATTLE1", LEVEL_BOWSER_1, COURSE_BITDW, bowser_1, generic, 20000, 0x00, 0x00, 0x00, _, sCamBowser_1) 
DEFINE_LEVEL("SC2 WMOTR", LEVEL_WMOTR, COURSE_WMOTR, wmotr, generic, 20000, 0x00, 0x00, 0x00, _, sCamWMOtR) 
STUB_LEVEL("", LEVEL_UNKNOWN_32, COURSE_NONE, 20000, 0x70, 0x00, 0x00, _, _) 
DEFINE_LEVEL("B BATTLE2", LEVEL_BOWSER_2, COURSE_BITFS, bowser_2, fire, 20000, 0x00, 0x00, 0x00, _, sCamBowser_2) 
DEFINE_LEVEL("B BATTLE3", LEVEL_BOWSER_3, COURSE_BITS, bowser_3, generic, 20000, 0x00, 0x00, 0x00, _, sCamBowser_3) 
STUB_LEVEL("", LEVEL_UNKNOWN_35, COURSE_NONE, 20000, 0x00, 0x00, 0x00, _, _) 
DEFINE_LEVEL("COURSE 12 TTM", LEVEL_TTM, COURSE_TTM, ttm, mountain, 20000, 0x00, 0x00, 0x00, _, sCamTTM) 
STUB_LEVEL("", LEVEL_UNKNOWN_37, COURSE_NONE, 20000, 0x00, 0x00, 0x00, _, _) 
STUB_LEVEL("", LEVEL_UNKNOWN_38, COURSE_NONE, 20000, 0x00, 0x00, 0x00, sDynUnk38, _) 