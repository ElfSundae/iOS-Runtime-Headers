/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableMapper : CMMapper {
    WMTableColumnInfo *mColumnInfo;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WDTable *mWdTable;
}

+ (BOOL)isTableDeleted:(id)arg1;

- (id)columnInfo;
- (id)copyColumnInfo;
- (id)copyStopArrayForRow:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)insideBorders;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;

@end
