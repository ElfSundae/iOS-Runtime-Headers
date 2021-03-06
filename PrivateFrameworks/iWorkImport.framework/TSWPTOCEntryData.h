/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryData : TSPObject <TSPCopying, TSSStyleClient> {
    NSString * _heading;
    unsigned long long  _indexedListStart;
    TSWPListStyle * _indexedListStyle;
    unsigned long long  _indexedParagraphLevel;
    TSWPParagraphStyle * _indexedStyle;
    NSString * _numberFormat;
    unsigned long long  _pageNumber;
    unsigned long long  _paragraphIndex;
    TSWPStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *heading;
@property (nonatomic, readonly) unsigned long long indexedListStart;
@property (nonatomic, readonly) TSWPListStyle *indexedListStyle;
@property (nonatomic, readonly) unsigned long long indexedParagraphLevel;
@property (nonatomic, readonly) TSWPParagraphStyle *indexedStyle;
@property (nonatomic, readonly, copy) NSString *numberFormat;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) unsigned long long paragraphIndex;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (readonly) Class superclass;

+ (id)tocEntryDataWithStorage:(id)arg1 paragraphIndex:(unsigned long long)arg2 pageNumber:(unsigned long long)arg3 numberFormat:(id)arg4 heading:(id)arg5 indexedStyle:(id)arg6 indexedListStyle:(id)arg7 indexedListStart:(unsigned long long)arg8 indexedParagraphLevel:(unsigned long long)arg9;

- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)heading;
- (unsigned long long)indexedListStart;
- (id)indexedListStyle;
- (unsigned long long)indexedParagraphLevel;
- (id)indexedStyle;
- (id)initWithStorage:(id)arg1 paragraphIndex:(unsigned long long)arg2 pageNumber:(unsigned long long)arg3 numberFormat:(id)arg4 heading:(id)arg5 indexedStyle:(id)arg6 indexedListStyle:(id)arg7 indexedListStart:(unsigned long long)arg8 indexedParagraphLevel:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct TOCEntryInstanceArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; struct Reference {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)numberFormat;
- (unsigned long long)pageNumber;
- (unsigned long long)paragraphIndex;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)saveToArchive:(struct TOCEntryInstanceArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; struct Reference {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)storage;

@end
