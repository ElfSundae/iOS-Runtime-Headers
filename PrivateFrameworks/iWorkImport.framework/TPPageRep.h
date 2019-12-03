/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate, TSKChangeSourceObserver> {
    bool  _backgroundFillRequiresLayerUpdate;
    TSDFill * _cachedBackgroundFill;
    bool  _fillCanApplyToCALayer;
    CALayer * _horizontalSeparatorLayer;
    TPiOSMarginAdjustRep * _marginAdjustRep;
    CALayer * _verticalSeparatorLayer;
}

@property (nonatomic, retain) TSDFill *cachedBackgroundFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TPiOSMarginAdjustRep *marginAdjustRep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundFill;
- (id)bodyReps;
- (id)cachedBackgroundFill;
- (bool)childRepIsMasterDrawable:(id)arg1;
- (bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)isOpaque;
- (id)marginAdjustRep;
- (bool)masksToBounds;
- (bool)p_pageRequiresHorizontalSeparator;
- (id)parentRepForMagnification;
- (void)setCachedBackgroundFill:(id)arg1;
- (void)willBeRemoved;

@end
