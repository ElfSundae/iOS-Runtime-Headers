/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<vk::Anchor *, float, std::__1::less<vk::Anchor *>, std::__1::allocator<std::__1::pair<vk::Anchor *const, float> > > { 
        struct __tree<std::__1::__value_type<vk::Anchor *, float>, std::__1::__map_value_compare<vk::Anchor *, std::__1::__value_type<vk::Anchor *, float>, std::__1::less<vk::Anchor *>, true>, std::__1::allocator<std::__1::__value_type<vk::Anchor *, float> > > { 
            struct __tree_node<std::__1::__value_type<vk::Anchor *, float>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<vk::Anchor *, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<vk::Anchor *, std::__1::__value_type<vk::Anchor *, float>, std::__1::less<vk::Anchor *>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _anchorToHeight;
    <VKMercatorTerrainHeightProvider> *_heightProvider;
}

@property (nonatomic) <VKMercatorTerrainHeightProvider> *heightProvider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)heightForAnchor:(struct Anchor { int (**x1)(); struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; double x23; int x24; out long doublex25; void*x26; void x27; int x28; BOOL x29; void*x30; unsigned char x31; out in void*x32; const out long x33; long x34; void*x35; const void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; double x64; int x65; out long doublex66; void*x67; void x68; int x69; BOOL x70; void*x71; unsigned char x72; out in void*x73; const out long x74; long x75; void*x76; const void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; unsigned long long x101; void*x102; unsigned short x103; void*x104; short x105; void*x106; void*x107; void*x108; void*x109; unsigned long x110; int x111; unsigned int x112/* : ? */; const void*x113; const void*x114; void*x115; void*x116; const int x117; void x118; void*x119; void*x120; void*x121; void*x122; const void*x123; void*x124; void*x125; void*x126; out const void*x127; short x128; void*x129; void*x130; void*x131; long x132; void*x133; void*x134; void*x135; out in void*x136; void*x137; void*x138; int x139; long x140; int x141; void*x142; int x143; void*x144; short x145; void*x146; float x147; const void*x148; void*x149; void*x150; void*x151; out const void*x152; void*x153; void*x154; void*x155; long x156; void*x157; void*x158; void*x159; out in void*x160; void*x161; void*x162; int x163; long x164; int x165; void*x166; int x167; void*x168; short x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; }*)arg1;
- (id)heightProvider;
- (void)invalidateRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)removeCachedValueForAnchor:(struct Anchor { int (**x1)(); struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; double x54; int x55; out void*x56; in int x57; void*x58; void*x59; void*x60; in void*x61; const void*x62; void*x63; out const void*x64; void*x65; void*x66; void*x67; void x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; unsigned char x75; void*x76; unsigned short x77; void*x78; short x79; void*x80; void*x81; void*x82; void*x83; unsigned long x84; int x85; unsigned int x86/* : ? */; const void*x87; const void*x88; void*x89; void*x90; const void*x91; void*x92; void*x93; void*x94; out const void*x95; short x96; void*x97; void*x98; void*x99; out void*x100; in double x101; void*x102; void*x103; int x104; out in void*x105; float x106; const void*x107; void*x108; void*x109; void*x110; out const void*x111; void*x112; long x113; int x114; unsigned int x115/* : ? */; void*x116; void*x117; void*x118; double x119; int x120; out void*x121; double x122; void*x123; long x124; int x125; unsigned int x126/* : ? */; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; SEL x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; bycopy unsigned short x235; void*x236; double x237; int x238; short x239; void*x240; void*x241; void*x242; BOOL x243; void*x244; void*x245; void*x246; void*x247; BOOL x248; void*x249; void*x250; void*x251; short x252; void*x253; void*x254; void*x255; void*x256; Class x257; void*x258; short x259; void*x260; void*x261; void*x262; short x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; bycopy unsigned short x394; void*x395; double x396; int x397; short x398; void*x399; void*x400; void*x401; BOOL x402; void*x403; void*x404; void*x405; void*x406; BOOL x407; void*x408; void*x409; void*x410; short x411; void*x412; void*x413; void*x414; void*x415; void*x416; void x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; short x426; const void*x427; long x428; int x429; unsigned int x430/* : ? */; void*x431; short x432; void*x433; short x434; void*x435; void*x436; void*x437; void*x438; long x439; int x440; unsigned int x441/* : ? */; double x442; int x443; short x444; void*x445; void*x446; void*x447; BOOL x448; void*x449; void*x450; double x451; void*x452; long x453; int x454; unsigned int x455/* : ? */; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; short x500; void*x501; void*x502; void*x503; in out in void*x504; void*x505; out void*x506; int x507; BOOL x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; }*)arg1;
- (void)setHeightProvider:(id)arg1;

@end
