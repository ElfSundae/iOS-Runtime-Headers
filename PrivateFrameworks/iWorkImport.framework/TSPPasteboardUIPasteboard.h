/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardUIPasteboard : TSPPasteboard {
    long long  _cachedChangeCount;
    NSArray * _cachedPasteboardTypes;
    unsigned long long  _pasteboardItemCount;
    NSMutableDictionary * _pasteboardItemIndexCache;
}

- (void).cxx_destruct;
- (id)URLs;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(bool)arg2;
- (void)addPasteboardItem:(id)arg1;
- (void)addPasteboardItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPasteboardItemForObject:(id)arg1 type:(id)arg2;
- (void)addPasteboardItemIndex:(unsigned long long)arg1 forType:(id)arg2;
- (long long)clearContents;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)initWithGeneralPasteboard;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithPasteboardName:(id)arg1 create:(bool)arg2;
- (id)initWithUniquePasteboardName;
- (oneway void)invalidate;
- (void)invalidatePasteboardCache;
- (void)invalidatePasteboardCacheIfNeeded;
- (long long)numberOfItems;
- (unsigned long long)pasteboardItemMaxSize;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (id)propertyListForValue:(id)arg1;
- (void)reloadPasteboardItemIndexCacheIfNeeded;
- (id)richTextStrings;
- (void)setString:(id)arg1;
- (id)string;
- (id)stringForPasteboardType:(id)arg1;
- (id)strings;
- (id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)updateCachedChangeCount;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
