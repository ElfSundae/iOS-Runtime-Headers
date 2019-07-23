/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartModel : NSObject <NSCopying, TSCHNotifyOnModify, TSCHUnretainedParent, TSDMixing> {
    NSMutableArray * mAxisList;
    TSCHChartGrid * mGrid;
    NSMutableDictionary * mGridIndexesBySeriesDimension;
    TSCHChartInfo * mInfo;
    BOOL  mIsTransient;
    BOOL  mModelInvalid;
    NSMutableDictionary * mModelManagedCaches;
    unsigned int  mMultiDataSetIndex;
    unsigned int  mNumberOfSeriesForCalculatingBarWidth;
    NSMutableDictionary * mRefLinesMap;
    int  mScatterFormat;
    NSMutableDictionary * mSeriesDimensionsByGridIndex;
    NSMutableArray * mSeriesList;
}

@property (nonatomic, readonly, retain) NSArray *axisList;
@property (nonatomic, readonly, retain) NSArray *categoryAxisList;
@property (nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic, retain) TSCHChartGrid *grid;
@property (nonatomic, readonly) BOOL isMultiData;
@property (nonatomic, readonly) BOOL isTransient;
@property (nonatomic, readonly) unsigned int maxNumberOfReferenceLines;
@property (nonatomic) unsigned int multiDataSetIndex;
@property (nonatomic, readonly) unsigned int numberOfChunkableMultiDataSets;
@property (nonatomic, readonly) unsigned int numberOfMultiDataSetCategories;
@property (nonatomic, readonly) unsigned int numberOfMultiDataSets;
@property (nonatomic, readonly) unsigned int numberOfSeries;
@property (nonatomic, readonly) unsigned int numberOfSeriesForCalculatingBarWidth;
@property (nonatomic, readonly) unsigned int numberOfValues;
@property (nonatomic, readonly, retain) NSDictionary *referenceLinesMap;
@property (nonatomic) int scatterFormat;
@property (nonatomic, readonly, retain) NSArray *seriesList;
@property (nonatomic, readonly, retain) id syncRoot;
@property (nonatomic, readonly, retain) NSArray *valueAxisList;

- (id)axisForID:(id)arg1;
- (id)axisList;
- (id)barModelCacheForSeries:(unsigned int)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (id)categoryAxisList;
- (unsigned int)categoryForMultiDataSetCategoryIndex:(unsigned int)arg1;
- (id)chartInfo;
- (void)clearParent;
- (void)clearTextEditingSelectionPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSetNameForMultiDataModel;
- (void)dealloc;
- (unsigned int)defaultOrdinalForAxisType:(int)arg1 seriesIndex:(unsigned int)arg2;
- (void)enumerateMultiDataModelsUsingBlock:(id /* block */)arg1;
- (void)forceLoadDefaultData;
- (id)grid;
- (unsigned int)gridIndexForSeriesDimension:(id)arg1;
- (BOOL)hasReferenceLines;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithChartInfo:(id)arg1 dataSetIndex:(unsigned int)arg2;
- (void)invalidateCaches;
- (void)invalidateModel;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isMultiData;
- (BOOL)isTransient;
- (id)legendModelCache;
- (id)lineAreaModelCacheForSeries:(unsigned int)arg1;
- (void)loadDefaultDataIfNotDirty;
- (void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3;
- (void)loadFromPreUFFArchive:(const struct ChartModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; struct ChartGridArchive {} *x8; unsigned int x9; unsigned int x10; }*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 chartInfo:(id)arg4;
- (unsigned int)maxNumberOfReferenceLines;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned int)multiDataSetCategoryIndexForCategory:(unsigned int)arg1;
- (unsigned int)multiDataSetIndex;
- (id)nameForCategory:(unsigned int)arg1;
- (id)nameForMultiDataSetCategory:(unsigned int)arg1;
- (id)nameForSeries:(unsigned int)arg1;
- (id)noSyncAxisList;
- (id)noSyncSeriesList;
- (unsigned int)numberOfChunkableMultiDataSets;
- (unsigned int)numberOfGridValues;
- (unsigned int)numberOfMultiDataSetCategories;
- (unsigned int)numberOfMultiDataSets;
- (unsigned int)numberOfSeries;
- (unsigned int)numberOfSeriesForCalculatingBarWidth;
- (unsigned int)numberOfValues;
- (unsigned int)p_archivedMultiDataSetIndex;
- (id)p_axisForID:(id)arg1;
- (unsigned int)p_lastMultiDataSetIndex;
- (void)p_loadDefaultData;
- (void)p_loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3;
- (unsigned int)p_multiDataSetCategoryIndexForCategory:(unsigned int)arg1;
- (void)p_postSynchronizeAxisList;
- (void)p_setBimapEntryForSeriesDimension:(id)arg1 andGridIndex:(unsigned int)arg2;
- (BOOL)p_shouldLoadDefaultData;
- (void)p_synchronizeAxis:(id)arg1 class:(Class)arg2 axisID:(id)arg3 axisIndex:(unsigned int)arg4 styleIndex:(unsigned int)arg5 usedAxes:(id)arg6 unusedAxes:(id)arg7;
- (void)p_synchronizeAxisList;
- (void)p_synchronizeModel;
- (void)p_synchronizeModelWithSeriesNonStyleMigration:(BOOL)arg1;
- (void)p_synchronizeReferenceLines;
- (void)p_synchronizeSeriesList;
- (void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(BOOL)arg1;
- (id)pieSeriesModelCacheForSeries:(unsigned int)arg1;
- (id)referenceLineForStyleSwapIndex:(unsigned int)arg1;
- (id)referenceLinesMap;
- (void)resetSeriesStorage;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 forCopy:(BOOL)arg2;
- (int)scatterFormat;
- (id)seriesAtIndex:(unsigned int)arg1;
- (id)seriesDimensionForGridIndex:(unsigned int)arg1;
- (id)seriesList;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (void)setChartInfo:(id)arg1;
- (void)setGrid:(id)arg1;
- (void)setMultiDataSetIndex:(unsigned int)arg1;
- (void)setNameForCategory:(unsigned int)arg1 toName:(id)arg2;
- (void)setNameForMultiDataSetCategory:(unsigned int)arg1 toName:(id)arg2;
- (void)setScatterFormat:(int)arg1;
- (void)setTextEditingSelectionPath:(id)arg1 string:(id)arg2;
- (unsigned int)styleSwapIndexForReferenceLine:(id)arg1;
- (id)syncRoot;
- (void)updateTransientModelFromInfoModel;
- (void)validateIfNeeded;
- (void)validateIfNeededWithSeriesNonStyleMigration:(BOOL)arg1;
- (id)valueAxisList;
- (void)willModify;

@end
