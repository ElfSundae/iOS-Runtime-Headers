/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReadState : OCXReadState {
    NSMutableArray *mArrayedFormulas;
    <TCCancelDelegate> *mCancelDelegate;
    unsigned long mCellStyleXfsOffset;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    OCPPackagePart *mCurrentPart;
    unsigned int mCurrentRowMaxColumnIndex;
    unsigned int mCurrentRowMinColumnIndex;
    EDSheet *mCurrentSheet;
    unsigned int mCurrentSheetIndex;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
    CXNamespace *mEXSpreadsheetDrawingNamespace;
    CXNamespace *mEXSpreadsheetMLNamespace;
    CXNamespace *mEXSpreadsheetRelationsNamespace;
    bool mIsPredefinedDxfsBeingRead;
    bool mIsPredefinedTableStylesRead;
    NSMutableArray *mLegacyDrawables;
    bool mMaxColumnsWarned;
    bool mMaxRowsWarned;
    EXOAVState *mOAVState;
    EXOfficeArtState *mOfficeArtState;
    NSMutableDictionary *mReferenceForCommentTextBox;
    struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; } *mRelationshipNS;
    EDResources *mResources;
    struct map<long, unsigned int, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned int> > > { 
        struct __tree<std::__1::__value_type<long, unsigned int>, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned int>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, unsigned int> > > { 
            struct __tree_node<std::__1::__value_type<long, unsigned int>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, unsigned int>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned int>, std::__1::less<long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } mSharedFormulasMap;
    EDReference *mSheetDimension;
    TCImportTracing *mTracing;
    EDWorkbook *mWorkbook;
    OCPPackagePart *mWorkbookPart;
}

@property (nonatomic, retain) CXNamespace *EXSpreadsheetDrawingNamespace;
@property (nonatomic, retain) CXNamespace *EXSpreadsheetMLNamespace;
@property (nonatomic, retain) CXNamespace *EXSpreadsheetRelationsNamespace;
@property (nonatomic, readonly) <TCCancelDelegate> *cancelDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)EXSpreadsheetDrawingNamespace;
- (id)EXSpreadsheetMLNamespace;
- (id)EXSpreadsheetRelationsNamespace;
- (void)addSharedBaseFormulaIndex:(unsigned int)arg1 withIndex:(long)arg2;
- (id)arrayedFormulas;
- (id)authorForReference:(id)arg1;
- (id)cancelDelegate;
- (unsigned long)cellStyleXfsOffset;
- (id)columnWidthConvertor;
- (id)currentPart;
- (unsigned int)currentRowMaxColumnIndex;
- (unsigned int)currentRowMinColumnIndex;
- (id)currentSheet;
- (unsigned int)currentSheetIndex;
- (void)dealloc;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3;
- (BOOL)isCancelled;
- (bool)isPredefinedDxfsBeingRead;
- (bool)isPredefinedTableStylesRead;
- (id)legacyDrawables;
- (id)oavState;
- (id)officeArtState;
- (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)relationshipNameSpaceForWorkbook;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)arg1;
- (void)reportWarning:(struct TCTaggedMessageStructure { int x1; id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; unsigned int x52; long doublex53; unsigned short x54; unsigned short x55; out BOOL x56; void*x57; void*x58; void*x59; void*x60; void*x61; int x62; const void*x63; void*x64; in void*x65; const int x66; BOOL x67; void*x68; const out void*x69; void*x70; void*x71; void*x72; short x73; short x74; void*x75; void*x76; void*x77; unsigned char x78; out void*x79; void*x80; void*x81; in double x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; oneway void*x111; int x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; struct x120; void*x121; void*x122; void*x123; unsigned char x124; void*x125; long x126; void*x127; void*x128; void*x129; short x130; void*x131; short x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; long doublex156; void*x157; void*x158; in double x159; int x160; void*x161; int x162; out in unsigned short x163; void*x164; unsigned int x165/* : ? */; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; id x242; double x243; out void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; id x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; long x366; void*x367; void*x368; void*x369; long long x370; void*x371; void*x372; long x373; void*x374; void*x375; unsigned short x376; BOOL x377; void*x378; long x379; void*x380; oneway int x381; void*x382; void*x383; void*x384; out const void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; oneway void*x434; int x435; void*x436; void*x437; unsigned short x438; void*x439; BOOL x440; void*x441; const int x442; void*x443; void*x444; BOOL x445; BOOL x446; out void*x447; in void*x448; oneway void*x449; const int x450; float x451; void*x452; unsigned char x453; out double x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; oneway void*x473; int x474; void*x475; void*x476; unsigned short x477; void*x478; BOOL x479; void*x480; const int x481; void*x482; void*x483; BOOL x484; BOOL x485; out void*x486; in void*x487; oneway void*x488; const int x489; float x490; void*x491; unsigned char x492; out double x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; unsigned short x512; void*x513; short x514; void*x515; void*x516; void*x517; void*x518; unsigned long x519; int x520; unsigned int x521/* : ? */; const void*x522; const void*x523; void*x524; void*x525; const int x526; void x527; void*x528; void*x529; void*x530; void*x531; const void*x532; void*x533; void*x534; void*x535; out const void*x536; short x537; void*x538; void*x539; void*x540; long x541; void*x542; BOOL x543; BOOL x544; out void*x545; in void*x546; void*x547; float x548; const void*x549; void*x550; void*x551; void*x552; out const void*x553; void*x554; void*x555; void*x556; long x557; void*x558; BOOL x559; BOOL x560; out void*x561; in void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; oneway void*x607; int x608; void*x609; void*x610; unsigned short x611; void*x612; BOOL x613; void*x614; const int x615; void*x616; void*x617; BOOL x618; BOOL x619; out void*x620; in void*x621; unsigned short x622; void*x623; in double x624; unsigned char x625; out double x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; id x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void**x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; int x709; double x710; void*x711; void*x712; BOOL x713; void*x714; int x715; void x716; void*x717; void*x718; void*x719; short x720; short x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; double x728; void*x729; out const void*x730; void*x731; short x732; short x733; void*x734; void*x735; void*x736; unsigned int x737; long doublex738; SEL x739; double x740; void*x741; void*x742; void*x743; SEL x744; BOOL x745; out void*x746; void*x747; long x748; void*x749; void*x750; int x751; out in bool x752; long x753; out BOOL x754; void*x755; SEL x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; long x811; void*x812; void*x813; void*x814; void*x815; BOOL x816; void*x817; void*x818; void*x819; bool x820; long x821; out BOOL x822; void*x823; bycopy in void*x824; void*x825; int x826; in unsigned long long x827; void*x828; void*x829; void*x830; void*x831; SEL x832; union { int x_833_1_1; double x_833_1_2; void*x_833_1_3; void*x_833_1_4; char *x_833_1_5; void*x_833_1_6; unsigned int x_833_1_7/* : ? */; long x_833_1_8; out BOOL x_833_1_9; void*x_833_1_10; void*x_833_1_11; char *x_833_1_12; void*x_833_1_13; } x833; void*x834; const void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; unsigned short x858; unsigned char x859; void*x860; void*x861; long doublex862; unsigned long x863; void*x864; unsigned int x865/* : ? */; void*x866; long x867; short x868; void*x869; void*x870; void*x871; void*x872; int x873; BOOL x874; void*x875; void*x876; void*x877; short x878; void*x879; void*x880; void*x881; in double x882; void*x883; const void*x884; const void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; long x931; long long x932; void*x933; void*x934; bycopy void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; long x946; long long x947; Class x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; id x975; void*x976; short x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; unsigned int x986/* : ? */; long x987; void*x988; oneway int x989; const void*x990; void*x991; void*x992; long x993; void*x994; out void*x995; BOOL x996; void*x997; long doublex998; void*x999; void x1000; int x1001; BOOL x1002; void*x1003; long doublex1004; void*x1005; short x1006; BOOL x1007; const int x1008; void*x1009; void*x1010; out const void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; id x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; void x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; out const int x1056; void*x1057; out in void*x1058; void*x1059; long x1060; unsigned char x1061; out long x1062; long x1063; void*x1064; BOOL x1065; void*x1066; int x1067; out in oneway int x1068; void*x1069; void*x1070; unsigned long x1071; void*x1072; void*x1073; out void*x1074; void*x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; void*x1082; void*x1083; void*x1084; void*x1085; id x1086; void*x1087; void*x1088; void*x1089; void*x1090; void*x1091; unsigned int x1092; unsigned short x1093; void*x1094; void*x1095; void*x1096; void*x1097; short x1098; bool x1099; void*x1100; const oneway int x1101; void*x1102; void*x1103; unsigned char x1104; out in void*x1105; const out long x1106; long x1107; void*x1108; const void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; void*x1124; void*x1125; id x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; bycopy unsigned short x1132; void*x1133; const void*x1134; BOOL x1135; void*x1136; void*x1137; const void*x1138; double x1139; double x1140; double x1141; const void*x1142; short x1143; short x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; id x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; unsigned short x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; unsigned long x1163; void*x1164; void*x1165; in BOOL x1166; out double x1167; int x1168; in void*x1169; long doublex1170; void*x1171; void*x1172; void*x1173; BOOL x1174; void*x1175; out const void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; id x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; short x1200; short x1201; void*x1202; void*x1203; long doublex1204; void*x1205; short x1206; BOOL x1207; const int x1208; void*x1209; void*x1210; int x1211; out in void*x1212; const out void*x1213; void*x1214; const void*x1215; int x1216; void*x1217; short x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; void*x1232; id x1233; void*x1234; long long x1235; void*x1236; void*x1237; void*x1238; inout unsigned long long x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; void*x1259; void*x1260; void*x1261; void*x1262; id x1263; void*x1264; void*x1265; void*x1266; void*x1267; void*x1268; void*x1269; void*x1270; void*x1271; const out void*x1272; out void*x1273; int x1274; void*x1275; void*x1276; out unsigned int x1277; in int x1278; void*x1279; int x1280; void*x1281; void*x1282; void*x1283; double x1284; long doublex1285; void*x1286; long x1287; void*x1288; void*x1289; void*x1290; void*x1291; void*x1292; short x1293; short x1294; void*x1295; void*x1296; long long x1297; void*x1298; void*x1299; short x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; id x1321; void* x1322[ /* ? */ ]; void*x1323; void*x1324; inout void*x1325; void*x1326; void*x1327; out const void*x1328; unsigned char x1329; out in void*x1330; const out long x1331; long x1332; void*x1333; const void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void x1343; void*x1344; void*x1345; void*x1346; void*x1347; void*x1348; void*x1349; void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; void*x1371; id x1372; void*x1373; short x1374; void*x1375; void*x1376; void*x1377; void*x1378; unsigned int x1379; bool x1380; void*x1381; void*x1382; void*x1383; out in void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; void*x1393; void*x1394; void*x1395; void*x1396; void*x1397; void*x1398; void*x1399; id x1400; }*)arg1;
- (void)reportWorksheetWarning:(struct TCTaggedMessageStructure { int x1; id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; unsigned short x22; void*x23; short x24; void*x25; void*x26; void*x27; void*x28; unsigned long x29; int x30; unsigned int x31/* : ? */; const void*x32; const void*x33; void*x34; void*x35; const int x36; void x37; void*x38; void*x39; void*x40; void*x41; const void*x42; void*x43; void*x44; void*x45; out const void*x46; short x47; void*x48; void*x49; void*x50; void*x51; void*x52; unsigned int x53; in void*x54; void*x55; void*x56; void*x57; float x58; const void*x59; void*x60; void*x61; void*x62; out const void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; unsigned int x69; in void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; float x81; void*x82; out void*x83; void*x84; void*x85; out void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; id x113; void*x114; void*x115; void*x116; void*x117; void*x118; unsigned short x119; void*x120; const void*x121; BOOL x122; void*x123; unsigned long x124; int x125; short x126; void*x127; unsigned long x128; out void*x129; double x130; void*x131; out const void*x132; unsigned char x133; void*x134; long x135; long x136; unsigned char x137; out in float x138; int x139; void*x140; void*x141; const void*x142; void*x143; int x144; out in void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; id x151; void* x152[ /* ? */ ]; void*x153; unsigned short x154; void*x155; short x156; void*x157; void*x158; void*x159; void*x160; unsigned long x161; int x162; unsigned int x163/* : ? */; const void*x164; const void*x165; void*x166; void*x167; const int x168; void x169; void*x170; void*x171; void*x172; void*x173; const void*x174; void*x175; void*x176; void*x177; out const void*x178; short x179; void*x180; void*x181; void*x182; short x183; int x184; BOOL x185; unsigned short x186; void*x187; out const void*x188; void*x189; unsigned int x190; void*x191; float x192; const void*x193; void*x194; void*x195; void*x196; out const void*x197; void*x198; void*x199; void*x200; short x201; int x202; BOOL x203; unsigned short x204; void*x205; out const void*x206; void*x207; unsigned int x208; void*x209; void*x210; void*x211; void*x212; void*x213; id x214; long doublex215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void**x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; char *x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; id x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; char *x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; char *x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; out void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; long doublex440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; double x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; long long x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; unsigned char x516; long doublex517; unsigned short x518; out void*x519; const BOOL x520; void*x521; unsigned int x522; in void*x523; void*x524; const float x525; void*x526; BOOL x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; bool x544; unsigned short x545; void*x546; short x547; void*x548; const void*x549; void*x550; void*x551; void*x552; double x553; void*x554; out const void*x555; unsigned short x556; void*x557; const int x558; in void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; id x573; void*x574; void*x575; id x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; double x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; const void*x602; void x603; void*x604; in void*x605; short x606; void*x607; void*x608; void*x609; void*x610; const void*x611; in BOOL x612; void*x613; void*x614; const out void*x615; void*x616; unsigned char x617; void*x618; short x619; void*x620; out void*x621; int x622; void*x623; void*x624; void*x625; int x626; out in void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; struct x655; void*x656; void*x657; const int x658; in void*x659; void*x660; int x661; void*x662; const void*x663; const BOOL x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; }*)arg1;
- (void)resetForNewSheet;
- (id)resources;
- (void)setCellStyleXfsOffset:(unsigned long)arg1;
- (void)setCurrentPart:(id)arg1;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg1;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg1;
- (void)setCurrentSheet:(id)arg1;
- (void)setCurrentSheetIndex:(unsigned int)arg1;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(double)arg1;
- (void)setEXSpreadsheetDrawingNamespace:(id)arg1;
- (void)setEXSpreadsheetMLNamespace:(id)arg1;
- (void)setEXSpreadsheetRelationsNamespace:(id)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setPredefinedDxfsBeingRead:(bool)arg1;
- (void)setPredefinedTableStylesRead:(bool)arg1;
- (void)setResources:(id)arg1;
- (void)setSheetDimension:(id)arg1;
- (void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3;
- (void)setWorkbook:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (unsigned int)sharedBaseFormulaIndexWithIndex:(long)arg1;
- (id)sheetDimension;
- (id)textBoxForReference:(id)arg1;
- (id)workbook;
- (id)workbookPart;

@end
