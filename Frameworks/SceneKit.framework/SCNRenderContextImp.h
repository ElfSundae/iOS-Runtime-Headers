/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRenderContextImp : NSObject <SCNRenderContext> {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; } *__engineStats;
    struct C3DColor4 { 
        union { 
            float rgba[4]; 
            struct { 
                float r; 
                float g; 
                float b; 
                float a; 
            } ; 
        } ; 
    } _backgroundColor;
    int _currentFrameIndex;
    SCNRenderTargetRegistry *_renderTargetRegistry;
    float contentScaleFactor;
    int sampleCount;
}

@property (nonatomic) float contentScaleFactor;
@property (nonatomic, readonly) int currentFrameIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long features;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) long profile;
@property (nonatomic, readonly) SCNRenderTargetRegistry *renderTargetRegistry;
@property (nonatomic, readonly) <SCNResourceManager> *resourceManager;
@property (nonatomic) int sampleCount;
@property (nonatomic) BOOL showsAuthoringEnvironment;
@property (readonly) Class superclass;

- (void)beginFrame:(id)arg1;
- (BOOL)beginRenderPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg1 isFinalTechnique:(BOOL)arg2;
- (float)contentScaleFactor;
- (struct __C3DMeshElement { }*)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(int)arg2 bytesPerIndex:(int)arg3;
- (int)currentFrameIndex;
- (void)dealloc;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg1;
- (void)drawRenderElement:(struct __C3DRendererElement { }*)arg1 withPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg2;
- (void)endFrameWaitingUntilCompleted:(BOOL)arg1;
- (void)endRenderPass;
- (unsigned long)features;
- (id)init;
- (BOOL)mapVolatileMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1 verticesCount:(int)arg2;
- (id)newRenderTargetWithDescription:(void *)arg1 size:(void *)arg2; // needs 2 arg types, found 1: struct { unsigned char x1; unsigned char x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned char x7[1]; }*
- (void)popDebugGroup;
- (void)processRendererElement:(struct __C3DRendererElement { }*)arg1;
- (void)processRendererElement:(struct __C3DRendererElement { }*)arg1 engineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; long *x4; struct __C3DNode {} *x5; bool x6; bool x7; }*)arg2;
- (long)profile;
- (void)pushDebugGroup:(id)arg1;
- (void)renderBackground:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; long x7; struct __C3DTextureSampler {} *x8; struct __C3DTransforms {} *x9; float x10; int x11; void *x12; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (void)renderMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1 meshElement:(struct __C3DMeshElement { }*)arg2 withProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg3 engineContext:(struct __C3DEngineContext { }*)arg4 transform:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; const out BOOL x30; void*x31; short x32; short x33; unsigned short x34; void*x35; void*x36; unsigned int x37/* : ? */; out long x38; int x39; BOOL x40; void*x41; void*x42; int x43; out in unsigned int x44; in float x45; out void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; unsigned short x67; void*x68; unsigned short x69; void*x70; short x71; void*x72; void*x73; void*x74; void*x75; unsigned long x76; int x77; unsigned int x78/* : ? */; const void*x79; const void*x80; void*x81; void*x82; const int x83; void x84; void*x85; void*x86; void*x87; void*x88; const void*x89; void*x90; void*x91; void*x92; out const void*x93; short x94; void*x95; void*x96; void*x97; const float x98; out const void*x99; void*x100; in BOOL x101; void*x102; void*x103; void*x104; long x105; void*x106; short x107; int x108; short x109; void*x110; float x111; const void*x112; void*x113; void*x114; void*x115; out const void*x116; void*x117; void*x118; void*x119; const float x120; out const void*x121; void*x122; in BOOL x123; void*x124; void*x125; void*x126; long x127; void*x128; short x129; int x130; short x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; unsigned short x178; void*x179; short x180; void*x181; void*x182; void*x183; void*x184; unsigned long x185; int x186; unsigned int x187/* : ? */; const void*x188; const void*x189; void*x190; void*x191; const int x192; void x193; void*x194; void*x195; void*x196; void*x197; const void*x198; void*x199; void*x200; void*x201; out const void*x202; short x203; void*x204; void*x205; unsigned int x206; BOOL x207; BOOL x208; void*x209; short x210; short x211; int x212; unsigned int x213/* : ? */; int x214; long x215; int x216; void*x217; void*x218; void*x219; float x220; const void*x221; void*x222; void*x223; void*x224; out const void*x225; void*x226; void*x227; unsigned int x228; BOOL x229; BOOL x230; void*x231; short x232; short x233; int x234; unsigned int x235/* : ? */; int x236; long x237; int x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; unsigned long x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; union x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; unsigned long x308; unsigned long x309; int x310; unsigned int x311/* : ? */; const void*x312; const void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; inout unsigned short x339; long doublex340; int x341; BOOL x342; void*x343; int x344; out in void*x345; const void*x346; unsigned int x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; inout unsigned short x399; long doublex400; int x401; BOOL x402; void*x403; int x404; out in void*x405; const void*x406; unsigned int x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; union x474; void*x475; void*x476; union x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; id x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; int x551; void*x552; void*x553; const void*x554; void*x555; long long x556; void*x557; void*x558; short x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; id x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; inout void*x609; void x610; int x611; void*x612; void*x613; void*x614; int x615; out in void*x616; void*x617; short x618; void*x619; out in short x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; unsigned short x635; void*x636; short x637; void*x638; void*x639; void*x640; void*x641; unsigned long x642; int x643; unsigned int x644/* : ? */; const void*x645; const void*x646; void*x647; void*x648; const void*x649; void*x650; void*x651; void*x652; out const void*x653; short x654; void*x655; void*x656; void*x657; unsigned int x658/* : ? */; void*x659; int x660; void*x661; void*x662; float x663; const void*x664; void*x665; void*x666; void*x667; out const void*x668; void*x669; void*x670; void*x671; unsigned int x672/* : ? */; void*x673; int x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; unsigned long x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; long doublex785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; const void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; unsigned long long x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; id x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; unsigned short x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; char *x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; unsigned int x1016/* : ? */; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; unsigned short x1041; unsigned int x1042; void*x1043; void*x1044; void*x1045; long doublex1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; long long x1052; void*x1053; void*x1054; short x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; void*x1067; void*x1068; void*x1069; void*x1070; unsigned char x1071; void*x1072; unsigned short x1073; void*x1074; short x1075; void*x1076; void*x1077; void*x1078; void*x1079; unsigned long x1080; int x1081; unsigned int x1082/* : ? */; const void*x1083; const void*x1084; void*x1085; void*x1086; const int x1087; void x1088; void*x1089; void*x1090; void*x1091; void*x1092; const void*x1093; void*x1094; void*x1095; void*x1096; out const void*x1097; short x1098; void*x1099; void*x1100; out void*x1101; void*x1102; unsigned short x1103; void*x1104; void*x1105; const int x1106; in void*x1107; void*x1108; float x1109; const void*x1110; void*x1111; void*x1112; void*x1113; out const void*x1114; void*x1115; void*x1116; out void*x1117; void*x1118; unsigned short x1119; void*x1120; void*x1121; const int x1122; in void*x1123; void*x1124; void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; unsigned int x1165/* : ? */; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; unsigned short x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; char *x1179; void*x1180; void*x1181; void*x1182; char *x1183; void*x1184; unsigned int x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; id x1200; union x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; unsigned short x1223; void*x1224; short x1225; void*x1226; void*x1227; void*x1228; void*x1229; unsigned long x1230; int x1231; unsigned int x1232/* : ? */; const void*x1233; const void*x1234; void*x1235; void*x1236; const int x1237; void x1238; void*x1239; void*x1240; void*x1241; void*x1242; const void*x1243; void*x1244; void*x1245; void*x1246; out const void*x1247; short x1248; void*x1249; unsigned short x1250; void*x1251; out const void*x1252; void*x1253; int x1254; void*x1255; void*x1256; unsigned int x1257; void*x1258; float x1259; const void*x1260; void*x1261; void*x1262; void*x1263; out const void*x1264; void*x1265; unsigned short x1266; void*x1267; out const void*x1268; void*x1269; int x1270; void*x1271; void*x1272; unsigned int x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; void*x1290; void*x1291; void*x1292; void*x1293; void*x1294; void*x1295; void*x1296; void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; void*x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; void*x1330; void*x1331; void*x1332; void*x1333; void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; void*x1346; void*x1347; void*x1348; void*x1349; void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; id x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; const void*x1393; void*x1394; long long x1395; void*x1396; void*x1397; void*x1398; void*x1399; in void*x1400; void*x1401; void*x1402; double x1403; void*x1404; void*x1405; void*x1406; short x1407; void*x1408; void*x1409; void*x1410; out void*x1411; const void*x1412; void*x1413; void*x1414; void*x1415; void*x1416; void*x1417; void*x1418; void*x1419; void*x1420; void*x1421; void*x1422; void*x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; void*x1444; void*x1445; void*x1446; void*x1447; unsigned long x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; void*x1458; void*x1459; void*x1460; void*x1461; void*x1462; void*x1463; void*x1464; void*x1465; void*x1466; void*x1467; void*x1468; void*x1469; void*x1470; void*x1471; void*x1472; void*x1473; void*x1474; void*x1475; void*x1476; void*x1477; void*x1478; void*x1479; unsigned long x1480; void*x1481; void*x1482; void*x1483; void*x1484; void*x1485; void*x1486; void*x1487; void*x1488; void*x1489; void*x1490; void*x1491; void*x1492; void*x1493; void*x1494; void*x1495; void*x1496; void*x1497; void*x1498; void*x1499; void*x1500; void*x1501; void*x1502; void*x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; void*x1523; void*x1524; void*x1525; void*x1526; void*x1527; in void*x1528; void*x1529; void*x1530; void*x1531; char *x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; void*x1550; void*x1551; void*x1552; void*x1553; void*x1554; void*x1555; void*x1556; void*x1557; unsigned long x1558; void*x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; })arg5 color:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg6 rasterizerStates:(struct __C3DRasterizerStates { }*)arg7 blendState:(struct __C3DBlendStates { }*)arg8 texture:(struct __C3DImage { }*)arg9 depthBias:(BOOL)arg10;
- (id)renderTargetRegistry;
- (id)resourceManager;
- (int)sampleCount;
- (void)setBackgroundColor:(struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setSampleCount:(int)arg1;
- (void)setShowsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)showsAuthoringEnvironment;
- (void)startProcessingRendererElementsWithEngineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; long *x4; struct __C3DNode {} *x5; bool x6; bool x7; }*)arg1;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; }*)stats;
- (void)stopProcessingRendererElements;
- (id)textureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; long x7; struct __C3DTextureSampler {} *x8; struct __C3DTransforms {} *x9; float x10; int x11; void *x12; }*)arg1;
- (void)unmapVolatileMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1;

@end
