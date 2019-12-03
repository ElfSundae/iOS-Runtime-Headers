/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource> {
    NSArray * _childInfos;
    NSArray * _drawableInfoIdList;
    NSUUID * _masterSlideId;
    NSArray * _placeholderTagsList;
    NSArray * _placeholders;
    NSDictionary * _placeholdersForTags;
    KNSlideStyle * _style;
}

@property (nonatomic, readonly) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) KNMasterSlide *master;
@property (nonatomic, readonly) NSArray *placeholders;
@property (nonatomic, readonly) NSDictionary *placeholdersForTags;
@property (nonatomic, retain) KNSlideStyle *slideStyle;
@property (readonly) Class superclass;

+ (id)blobWithSlide:(id)arg1;

- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (id)childInfos;
- (bool)containsProperty:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)didInitFromSOS;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)initWithSlide:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)master;
- (void)migrateStyles;
- (id)objectForProperty:(int)arg1;
- (id)placeholders;
- (id)placeholdersForTags;
- (void)rebuildChildInfosAndPlaceholdersFromMaster:(id)arg1;
- (void)saveToArchive:(struct PrototypeForUndoMasterChangeArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct Reference {} *x8; struct UUID {} *x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setSlideStyle:(id)arg1;
- (id)slideStyle;

@end
