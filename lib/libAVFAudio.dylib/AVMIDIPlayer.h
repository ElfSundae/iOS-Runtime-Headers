/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVMIDIPlayer : NSObject {
    void *_impl;
}

@property (nonatomic) double currentPosition;
@property (nonatomic, readonly) double duration;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (nonatomic) float rate;

- (double)beatsForHostTime:(unsigned long long)arg1;
- (double)currentPosition;
- (void)dealloc;
- (void)destroyBase;
- (double)duration;
- (void)finalize;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (struct MIDIPlayerImpl { struct OpaqueAUGraph {} *x1; struct OpaqueMusicPlayer {} *x2; struct OpaqueMusicSequence {} *x3; double x4; id /* block */ x5; id x6; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; unsigned short x23; bool x24; unsigned long x25; void*x26; void*x27; in BOOL x28; void*x29; void*x30; void*x31; unsigned long x32; int x33; short x34; void*x35; void*x36; in void*x37; const void*x38; void*x39; void*x40; void*x41; long doublex42; void*x43; void*x44; void*x45; void*x46; void*x47; unsigned long long *x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; unsigned int x82; void*x83; void*x84; id x85; void*x86; void*x87; void*x88; unsigned int x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; unsigned short x113; bool x114; unsigned long x115; void*x116; void*x117; in BOOL x118; void*x119; void*x120; void*x121; unsigned long x122; int x123; short x124; void*x125; void*x126; in void*x127; const void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; unsigned short x140; void*x141; unsigned short x142; void*x143; short x144; void*x145; void*x146; void*x147; void*x148; unsigned long x149; int x150; unsigned int x151/* : ? */; const void*x152; const void*x153; void*x154; void*x155; const int x156; void x157; void*x158; void*x159; void*x160; void*x161; const void*x162; void*x163; void*x164; void*x165; out const void*x166; short x167; void*x168; unsigned short x169; void*x170; const int x171; in void*x172; bool x173; out void*x174; const double x175; unsigned short x176; void*x177; const void x178; int x179; BOOL x180; void*x181; short x182; void*x183; float x184; const void*x185; void*x186; void*x187; void*x188; out const void*x189; void*x190; unsigned short x191; void*x192; const int x193; in void*x194; bool x195; out void*x196; const double x197; unsigned short x198; void*x199; const void x200; int x201; BOOL x202; void*x203; short x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; unsigned short x250; void*x251; void*x252; unsigned int x253; void*x254; void*x255; void*x256; int x257; in void*x258; unsigned short x259; void*x260; void*x261; const short x262; unsigned char x263; void*x264; BOOL x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; unsigned short x312; void*x313; void*x314; unsigned int x315; void*x316; void*x317; void*x318; int x319; in void*x320; unsigned short x321; void*x322; void*x323; const short x324; unsigned char x325; void*x326; BOOL x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; out void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; out void*x398; void*x399; void*x400; BOOL x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; out void*x433; out void*x434; int x435; void*x436; double x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; unsigned char x449; void*x450; unsigned short x451; void*x452; short x453; void*x454; void*x455; void*x456; void*x457; unsigned long x458; int x459; unsigned int x460/* : ? */; const void*x461; const void*x462; void*x463; void*x464; const int x465; void x466; void*x467; void*x468; void*x469; void*x470; const void*x471; void*x472; void*x473; void*x474; out const void*x475; short x476; void*x477; int x478; void*x479; out const void*x480; unsigned int x481; void*x482; void*x483; out const void*x484; void*x485; float x486; const void*x487; void*x488; void*x489; void*x490; out const void*x491; void*x492; int x493; void*x494; out const void*x495; unsigned int x496; void*x497; void*x498; out const void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; out unsigned long long x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; unsigned short x622; void*x623; void*x624; void*x625; const BOOL x626; void*x627; void*x628; short x629; void*x630; void*x631; void*x632; in void*x633; void*x634; void*x635; const void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; unsigned short x683; void*x684; void*x685; void*x686; const BOOL x687; void*x688; void*x689; short x690; void*x691; void*x692; void*x693; in void*x694; void*x695; void*x696; const void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; }*)impl;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (BOOL)isPlaying;
- (void)play:(id /* block */)arg1;
- (void)prepareToPlay;
- (float)rate;
- (void)setCurrentPosition:(double)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
