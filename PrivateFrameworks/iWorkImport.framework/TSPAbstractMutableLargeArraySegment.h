/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration> {
    NSMutableArray * _backingStore;
    unsigned int  _delayedArchivingPriority;
    <TSPMutableLargeArraySegmentDelegate> * _delegate;
    unsigned long long  _estimatedByteSize;
    unsigned long long  _mutations;
    NSString * _packageLocator;
    bool  _shouldDelayArchiving;
    bool  _storeOutsideObjectArchive;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic) <TSPMutableLargeArraySegmentDelegate> *delegate;
@property (nonatomic) unsigned long long estimatedByteSize;
@property (nonatomic, readonly) NSMutableArray *mutableArrayWrapper;
@property (nonatomic, copy) NSString *packageLocator;
@property (nonatomic) bool shouldDelayArchiving;
@property (nonatomic) bool storeOutsideObjectArchive;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 willModify:(bool)arg2;
- (id)allObjects;
- (id)bisectAtIndex:(unsigned long long)arg1;
- (void)commonInit;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned int)delayedArchivingPriority;
- (id)delegate;
- (unsigned long long)estimatedByteSize;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;
- (id)initWithArray:(id)arg1 context:(id)arg2;
- (id)initWithArray:(id)arg1 delegate:(id)arg2 shouldDelayArchiving:(bool)arg3 context:(id)arg4;
- (id)initWithContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 shouldDelayArchiving:(bool)arg2 context:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadFromLargeArraySegmentMessage:(const struct LargeArraySegment { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; bool x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1;
- (id)mutableArrayWrapper;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)packageLocator;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToLargeArraySegmentMessage:(struct LargeArraySegment { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; bool x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)setDelayedArchivingPriority:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedByteSize:(unsigned long long)arg1;
- (void)setPackageLocator:(id)arg1;
- (void)setShouldDelayArchiving:(bool)arg1;
- (void)setStoreOutsideObjectArchive:(bool)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;

@end
