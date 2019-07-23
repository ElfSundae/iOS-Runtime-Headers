/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSCopying, NSURLAuthenticationChallengeSender> {
    BOOL _actuallyTriedCredentialsSuppliedInURL;
    BOOL _canceled;
    long long _clientBufferLength;
    NSURLResponse *_currentResponse;
    BOOL _didCheckCredentialsSuppliedInURL;
    BOOL _didCheckMixedReplace;
    unsigned int _didReceiveDataCount;
    unsigned int _didReceiveResponseDisposition;
    BOOL _isMixedReplace;
    struct URLConnectionLoader { int (**x1)(); struct __CFAllocator {} *x2; int (**x3)(); unsigned char x4; unsigned char x5; struct InterfaceRequiredForLoader {} *x6; id x7; int (*x8)(); int (**x9)(); struct PerformanceTiming {} *x10; id x11; struct RedirectionRecorder {} *x12; unsigned char x13; unsigned char x14; unsigned char x15; id x16; double x17; struct URLProtocol {} *x18; id x19; struct CoreSchedulingSet {} *x20; double x21; double x22; unsigned long long x23; struct ConfigFlags { unsigned int x_24_1_1 : 1; unsigned int x_24_1_2 : 1; unsigned int x_24_1_3 : 1; unsigned int x_24_1_4 : 1; unsigned int x_24_1_5 : 1; unsigned int x_24_1_6 : 1; unsigned int x_24_1_7 : 1; unsigned int x_24_1_8 : 1; } x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned char x28; unsigned int x29; unsigned int x30; unsigned char x31; } *_loader;
    struct SessionConnectionLoadable { int (**x1)(); int x2; int x3; int x4; int x5; int (**x6)(); int (**x7)(); id x8; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; BOOL x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; in void*x79; void*x80; void*x81; in void*x82; void*x83; void*x84; in void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; id x94; void*x95; SEL x96; void*x97; void*x98; unsigned int x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; in void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; SEL x141; void*x142; SEL x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; in void*x170; void*x171; void*x172; in void*x173; void*x174; void*x175; in void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; unsigned int x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; unsigned long x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void* x239[ /* ? */ ]; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; short x259; void*x260; char *x261; void*x262; void*x263; void*x264; void*x265; void* x266[ /* ? */ ]; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; int x278; void*x279; char *x280; void*x281; void*x282; void**x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; union x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; SEL x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; in void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; bool x415; void*x416; SEL x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; in void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; SEL x488; void*x489; void*x490; void*x491; SEL x492; void*x493; void*x494; void*x495; SEL x496; void*x497; void*x498; void*x499; SEL x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void* x515[ /* ? */ ]; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; id x548; void* x549[ /* ? */ ]; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; unsigned int x648; void*x649; const int x650; in void*x651; void*x652; const bool x653; const out void*x654; short x655; void*x656; const bycopy void*x657; in void*x658; const void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; long long x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void* x699[ /* ? */ ]; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; out void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; inout void*x732; SEL x733; double x734; void*x735; void*x736; SEL x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; in void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; in void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; in void*x810; void*x811; void*x812; in void*x813; void*x814; void*x815; in void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; unsigned int x831; void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; } *_loaderClient;
    unsigned long _maxDataSegmentCoalesceThreshhold;
    unsigned long _maxDataSegmentCount;
    int _pendingCompletion;
    NSObject<OS_dispatch_data> *_pendingData;
    NSError *_pendingError;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    int _state;
    int _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_ackBytes:(long long)arg1;
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_cleanup;
- (void)_conditionalRequirementsChanged:(BOOL)arg1;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned int x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned int x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(BOOL)arg2;
- (void)_didSendBodyData:(struct UploadProgressInfo { int x1; int x2; int x3; })arg1;
- (void)_immediatePostDelegateTick;
- (void)_needNewBodyStream;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)_task_sendFinish;
- (void)_tick;
- (void)_tick_finishing;
- (void)_tick_initialize;
- (void)_tick_running;
- (void)_tick_sniffNow;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)afterDelegateWithTick:(id /* block */)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)suspend;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withDelegateAndPendingCompletion:(id /* block */)arg1;
- (void)withLoaderAsync:(id /* block */)arg1;
- (void)withLoaderOnQueue:(id /* block */)arg1;

@end
