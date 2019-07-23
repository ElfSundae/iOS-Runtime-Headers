/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDWorkbook : OCDDocument {
    unsigned int mActiveSheetIndex;
    NSMutableArray *mBulletBlips;
    int mDateBase;
    NSDate *mDateBaseDate;
    ESDContainer *mEscherDrawingGroup;
    NSString *mFileName;
    ECMappingContext *mMappingContext;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    EDResources *mResources;
    NSMutableArray *mSheets;
    NSString *mTemporaryDirectory;
    EDReference *mVisibleRange;
    EDWarnings *mWarnings;
}

+ (id)impliedColorMap;

- (id)activeSheet;
- (unsigned int)activeSheetIndex;
- (void)addOtherResources:(id)arg1;
- (void)addSheet:(id)arg1;
- (void)applyProcessors;
- (id)bulletBlips;
- (int)dateBase;
- (id)dateBaseDate;
- (void)dealloc;
- (id)description;
- (id)escherDrawingGroup;
- (id)fileName;
- (unsigned int)indexOfSheet:(id)arg1;
- (unsigned int)indexOfSheetWithName:(id)arg1;
- (id)init;
- (id)initWithFileName:(id)arg1 andStringOptimization:(bool)arg2;
- (id)initWithStringOptimization:(bool)arg1;
- (unsigned int)legacyDateBase;
- (id)mappingContext;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeSheetAtIndex:(unsigned int)arg1;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;
- (id)resources;
- (void)setActiveSheet:(id)arg1;
- (void)setActiveSheetIndex:(unsigned int)arg1;
- (void)setDateBase:(int)arg1;
- (void)setEscherDrawingGroup:(id)arg1;
- (void)setMappingContext:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setVisibleRange:(id)arg1;
- (id)sheetAtIndex:(unsigned int)arg1;
- (id)sheetAtIndex:(unsigned int)arg1 loadIfNeeded:(bool)arg2;
- (unsigned int)sheetCount;
- (id)temporaryDirectory;
- (id)visibleRange;
- (id)warnings;
- (id)workbookName;

@end