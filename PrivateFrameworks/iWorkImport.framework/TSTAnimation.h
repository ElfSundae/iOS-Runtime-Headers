/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTAnimation : NSObject <NSCopying> {
    BOOL  mByCell;
    BOOL  mByCellRange;
    BOOL  mByColumn;
    BOOL  mByContent;
    BOOL  mByMissingCellRange;
    BOOL  mByRow;
    unsigned int  mCellRangeCount;
    struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } * mCellRanges;
    BOOL  mDrawsBlackAndWhite;
    BOOL  mExpandBackgroundFill;
    BOOL  mFinal;
    int  mKind;
    TSTLayout * mLayout;
    BOOL  mReverse;
    BOOL  mShowsOverlayLayers;
    BOOL  mShowsTableChrome;
    unsigned int  mStage;
    unsigned int  mStageCount;
}

@property (readonly) unsigned int cellRangeCount;
@property (readonly) BOOL clipStrokes;
@property (readonly) BOOL drawCellBackground;
@property (readonly) BOOL drawCellContent;
@property (readonly) BOOL drawStrokes;
@property (readonly) BOOL drawTableBackground;
@property (readonly) BOOL drawTableName;
@property BOOL drawsBlackAndWhite;
@property (readonly) BOOL enabled;
@property BOOL expandBackgroundFill;
@property (readonly) BOOL final;
@property (nonatomic) TSTLayout *layout;
@property BOOL showsOverlayLayers;
@property BOOL showsTableChrome;
@property (readonly) unsigned int stage;
@property (readonly) unsigned int stageCount;

+ (BOOL)deliveryStyleSupportedForExport:(unsigned int)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned int)arg2;
+ (unsigned int)p_NumberOfCellBuilds:(id)arg1;
+ (unsigned int)p_NumberOfColumnBuilds:(id)arg1;
+ (unsigned int)p_NumberOfRowBuilds:(id)arg1;
+ (unsigned int)p_stageCountForProvider:(id)arg1 withAnimationKind:(int)arg2;
+ (unsigned int)stageCountForTextureDeliveryStyle:(unsigned int)arg1 tableProvider:(id)arg2;
+ (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (id)textureDeliveryStylesLocalized:(BOOL)arg1;

- (void)addCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRangeAtIndex:(unsigned int)arg1;
- (unsigned int)cellRangeCount;
- (void)clearCellRanges;
- (BOOL)clipStrokes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)drawCellBackground;
- (BOOL)drawCellContent;
- (BOOL)drawStrokes;
- (BOOL)drawTableBackground;
- (BOOL)drawTableName;
- (BOOL)drawsBlackAndWhite;
- (BOOL)enabled;
- (BOOL)expandBackgroundFill;
- (BOOL)final;
- (BOOL)isHidingContentOfCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)layout;
- (void)setDrawsBlackAndWhite:(BOOL)arg1;
- (void)setExpandBackgroundFill:(BOOL)arg1;
- (void)setLayout:(id)arg1;
- (void)setShowsOverlayLayers:(BOOL)arg1;
- (void)setShowsTableChrome:(BOOL)arg1;
- (void)setStage:(unsigned int)arg1 andFinal:(BOOL)arg2;
- (BOOL)showsOverlayLayers;
- (BOOL)showsTableChrome;
- (unsigned int)stage;
- (unsigned int)stageCount;

@end
