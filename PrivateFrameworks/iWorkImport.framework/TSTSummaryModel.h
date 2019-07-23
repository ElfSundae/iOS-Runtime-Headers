/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSummaryModel : TSPObject <TSTGroupByChangeProtocol, TSTTableTileCreating> {
    TSTCategoryAggregateFormulaOwner * _aggregateFormulaOwner;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _aggregateFormulaOwnerUID;
    double  _categoryColumnWidth;
    TSTColumnRowUIDMap * _columnRowUIDMap;
    TSTTableDataStore * _dataStore;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  _labelRowHeightList;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__value_; 
        } __end_cap_; 
    }  _labelRowVisibilityList;
    bool  _needsFormulaReset;
    TSTSummaryCellVendor * _summaryCellVendor;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  _summaryRowHeightList;
    TSTTableInfo * _tableInfo;
}

@property (nonatomic, readonly) TSTCategoryAggregateFormulaOwner *aggregateFormulaOwner;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } aggregateFormulaOwnerUID;
@property (nonatomic) double categoryColumnWidth;
@property (nonatomic, retain) TSTColumnRowUIDMap *columnRowUIDMap;
@property (nonatomic, readonly) TSTTableDataStore *dataStore;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<double' */ struct *labelRowHeightList; /* unknown property attribute:  std::__1::allocator<double> >=^d}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<int' */ struct *labelRowVisibilityList; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */
@property (nonatomic) bool needsFormulaReset;
@property (nonatomic, readonly) struct TSUModelColumnIndex { unsigned short x1; } numberOfColumns;
@property (nonatomic, readonly) struct TSUModelRowIndex { unsigned int x1; } numberOfRows;
@property (nonatomic, readonly) TSTSummaryCellVendor *summaryCellVendor;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<double' */ struct *summaryRowHeightList; /* unknown property attribute:  std::__1::allocator<double> >=^d}} */
@property (nonatomic, readonly) TSTTableInfo *tableInfo;

+ (unsigned char)categoryLevelForTableStyleArea:(unsigned long long)arg1;
+ (unsigned long long)tableStyleAreaForCategoryLevel:(unsigned char)arg1 isLabel:(bool)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned short)_appendColumnWithUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (unsigned int)_appendRowWithUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)aggregateFormulaOwner;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })aggregateFormulaOwnerUID;
- (id)allRichTextStorages;
- (double)categoryColumnWidth;
- (bool)cellExistsAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (id)cellStyleAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;
- (id)cellStyleForCellWithEmptyStyleAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;
- (id)cellStyleOfRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 isDefault:(out bool*)arg2;
- (id)cellStyleOfSummaryLabelRowAtLevel:(unsigned char)arg1 isDefault:(out bool*)arg2;
- (id)cellStyleOfSummaryRowAtLevel:(unsigned char)arg1 isDefault:(out bool*)arg2;
- (id)columnRowUIDMap;
- (id)currentState;
- (id)dataStore;
- (id)defaultCellStyleForCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (id)defaultTextStyleForCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (id)description;
- (void)didAddRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 toGroup:(id)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)arg1;
- (void)didRemoveGroup:(id)arg1;
- (void)didRemoveRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 fromGroup:(id)arg2;
- (void)endOfGroupingChangesBatch;
- (void)enumerateDataStoreCellsWithBlock:(id /* block */)arg1;
- (id)fontColorAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 optionalCell:(id)arg2;
- (id)formatAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 formatIsExplicitOut:(bool*)arg2;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned char x_2_1_1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)formulaAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (int)getCell:(id)arg1 atCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg2;
- (bool)hasFormulaAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)initWithTableInfo:(id)arg1;
- (int)insertColumnsAtIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 metadatas:(id)arg2;
- (double)labelRowHeightAtCategoryLevel:(unsigned char)arg1;
- (struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; }*)labelRowHeightList;
- (unsigned long long)labelRowVisibilityAtCategoryLevel:(unsigned char)arg1;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)labelRowVisibilityList;
- (void)loadFromUnarchiver:(id)arg1;
- (id)metadataForRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 hidingAction:(unsigned char)arg2;
- (bool)needsFormulaReset;
- (id)newCell;
- (struct TSUModelColumnIndex { unsigned short x1; })numberOfColumns;
- (unsigned long long)numberOfPopulatedCells;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfRows;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })range;
- (void)reassignPasteboardCustomFormatKeys;
- (void)registerAllFormulasWithCalculationEngine:(id)arg1 wasCrossDocumentPaste:(bool)arg2;
- (void)removeColumnsAtSummaryIndexes:(id)arg1;
- (void)removeRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)reset;
- (void)resetWithForce:(bool)arg1;
- (void)runChange:(id)arg1 withSummaryChangeState:(id)arg2 migrationHelper:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)setAggregateFormulaOwnerUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 atGroupLevel:(unsigned char)arg3;
- (void)setCategoryColumnWidth:(double)arg1;
- (int)setCell:(id)arg1 atCellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (void)setCellStyle:(id)arg1 forSummaryLabelAtLevel:(unsigned char)arg2;
- (void)setColumnRowUIDMap:(id)arg1;
- (int)setFormulaResultCellsWithCellMap:(id)arg1;
- (void)setLabelRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (void)setLabelRowVisibility:(unsigned long long)arg1 atCategoryLevel:(unsigned char)arg2;
- (void)setNeedsFormulaReset:(bool)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (void)setSummaryRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (void)setTextStyle:(id)arg1 forSummaryLabelAtLevel:(unsigned char)arg2;
- (void)setupReceiver;
- (void)startOfGroupingChangesBatch;
- (id)stringAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 optionalCell:(id)arg2;
- (id)summaryCellVendor;
- (double)summaryRowHeightAtCategoryLevel:(unsigned char)arg1;
- (struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; }*)summaryRowHeightList;
- (id)tableInfo;
- (id)textStyleAtBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;
- (id)textStyleAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;
- (id)textStyleForCellWithEmptyStyleAtCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1 isDefault:(out bool*)arg2;
- (id)textStyleOfRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 isDefault:(out bool*)arg2;
- (id)textStyleOfSummaryLabelRowAtLevel:(unsigned char)arg1 isDefault:(out bool*)arg2;
- (id)textStyleOfSummaryRowAtLevel:(unsigned char)arg1 isDefault:(out bool*)arg2;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(unsigned long long)arg1 tableInfo:(id)arg2;
- (void)willRemoveGroup:(id)arg1;

@end
