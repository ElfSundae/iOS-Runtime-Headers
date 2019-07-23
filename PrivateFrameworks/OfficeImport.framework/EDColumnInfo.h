/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColumnInfo : NSObject <EDKeyedObject, NSCopying> {
    bool mHidden;
    unsigned char mOutlineLevel;
    EDReference *mRange;
    EDResources *mResources;
    unsigned int mStyleIndex;
    int mWidth;
    EDWorksheet *mWorksheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (bool)isHidden;
- (int)key;
- (unsigned char)outlineLevel;
- (id)range;
- (void)setHidden:(bool)arg1;
- (void)setOutlineLevel:(unsigned char)arg1;
- (void)setRange:(id)arg1;
- (void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned int)arg1;
- (void)setWidth:(double)arg1;
- (void)setWidthInXlUnits:(int)arg1;
- (id)style;
- (unsigned int)styleIndex;
- (double)width;
- (int)widthInXlUnits;

@end
