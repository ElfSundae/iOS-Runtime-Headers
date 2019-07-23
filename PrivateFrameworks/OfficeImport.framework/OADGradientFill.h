/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGradientFill : OADFill {
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mIsRotateWithShapeOverridden;
    BOOL mRotateWithShape;
    OADShade *mShade;
    NSArray *mStops;
    OADRelativeRect *mTileRect;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)arg1;

- (BOOL)areStopsOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)firstStop;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (int)flipMode;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFlipModeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isShadeOverridden;
- (BOOL)isTileRectOverridden;
- (id)lastStop;
- (void)removeUnnecessaryOverrides;
- (BOOL)rotateWithShape;
- (void)setFlipMode:(int)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(BOOL)arg1;
- (void)setShade:(id)arg1;
- (void)setStops:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTileRect:(id)arg1;
- (id)shade;
- (void)sortStops;
- (id)stops;
- (id)tileRect;
- (BOOL)usesPlaceholderColor;

@end
