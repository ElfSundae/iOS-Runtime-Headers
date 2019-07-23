/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPresentation : NSObject

+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1;
+ (void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readCommentAuthorsFrom:(id)arg1 state:(id)arg2;
+ (void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; bool x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; }*)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4;
+ (void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (void)readTextStyleFromNotesMaster:(id)arg1 toNotesMaster:(id)arg2 slideMaster:(id)arg3 state:(id)arg4;
+ (void)readTextStylesFromSlideMaster:(id)arg1 toSlideMaster:(id)arg2 state:(id)arg3;
+ (void)readThemeFromSlideMaster:(id)arg1 document:(id)arg2 theme:(id)arg3 colorMap:(id)arg4 state:(id)arg5;
+ (void)readXmlLayoutsFromSlideMaster:(id)arg1 document:(id)arg2 masterInfo:(id)arg3 state:(id)arg4;
+ (void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2;
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;

@end
