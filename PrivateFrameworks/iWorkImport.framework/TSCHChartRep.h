/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering> {
    TSCHSearchSelection *_selection;
    TSCHSelectionPath *mActiveTextEditingPath;
    BOOL mBuildingChunks;
    BOOL mBuildingFinalBackground;
    BOOL mBuildingFinalElements;
    BOOL mCDECausedSetNeedsDisplay;
    BOOL mCDEIsEditingInfo;
    TSCHChartLayout *mChartLayout;
    BOOL mChartRepGoingAway;
    int mChunkPhase;
    BOOL mChunkTexturesValid;
    int mCurrentChunk;
    id /* block */ mDrawingOpEndBlock;
    id /* block */ mDrawingOpStartBlock;
    BOOL mDrawingSearchReference;
    TSCHLegendMoveKnob *mDynamicLegendKnob;
    BOOL mEditorIsEditingInfo;
    BOOL mFinishedBecomingSelected;
    BOOL mForceSeparateLegendLayer;
    unsigned int mInDynamicStandinLayoutOperation;
    unsigned int mInDynamicStandinOperation;
    BOOL mInZoom;
    BOOL mInvalidateLegendLayerForLayerBasedRep;
    BOOL mIs2DRepFor3DChartRep;
    BOOL mIsKPFExportForMultiData;
    BOOL mIsLayerBasedRep;
    struct CGPoint { 
        float x; 
        float y; 
    } mLastSubselectionLayerRelativeReferencePosition;
    CAShapeLayer *mLegendBorderHaloLayer;
    BOOL mLegendBorderHaloLayerPathValid;
    TSCHRendererLayer *mLegendLayer;
    CAShapeLayer *mMediatorEditingHaloLayer;
    BOOL mMediatorEditingHaloLayerPathValid;
    int mRenderPassChunkPhase;
    NSArray *mRenderers;
    CALayer *mSubselectionKnobLayer;
    BOOL mWantsPreviewLayout;
}

@property (nonatomic, readonly, retain) TSCHSelectionPath *activeTextEditingPath;
@property (nonatomic, readonly) NSString *animationFilter;
@property (nonatomic, readonly) unsigned int chartDeliveryStyle;
@property (nonatomic, readonly) TSCHChartDrawableInfo *chartInfo;
@property (nonatomic, readonly) TSCHChartLayout *chartLayout;
@property (nonatomic, readonly) BOOL chartRepGoingAway;
@property (nonatomic) BOOL chunkTexturesValid;
@property (nonatomic, readonly) float contentsScale;
@property (nonatomic, readonly) int currentChunk;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ drawingOpEndBlock;
@property (nonatomic, copy) id /* block */ drawingOpStartBlock;
@property (nonatomic, readonly) BOOL drawingSearchReference;
@property (nonatomic, retain) TSCHLegendMoveKnob *dynamicLegendKnob;
@property (nonatomic, readonly) BOOL forceRenderBlankBackground;
@property (nonatomic) BOOL forceSeparateLegendLayer;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL is2DRepFor3DChartRep;
@property (nonatomic, readonly) TSCHSearchSelection *selection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float viewScale;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;

- (id)activeTextEditingPath;
- (id)animationFilter;
- (void)beginDrawingOperation;
- (BOOL)buildShouldUseRenderer:(id)arg1;
- (BOOL)canDrawInParallel;
- (unsigned int)chartDeliveryStyle;
- (id)chartInfo;
- (id)chartLayout;
- (BOOL)chartRepGoingAway;
- (BOOL)chunkTexturesValid;
- (void)clearRenderers;
- (float)contentsScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)currentChunk;
- (void)dealloc;
- (void)didEndZooming;
- (void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1;
- (void)displayMessage:(id)arg1 zPosition:(float)arg2 style:(int)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)drawableLayout;
- (id /* block */)drawingOpEndBlock;
- (id /* block */)drawingOpStartBlock;
- (BOOL)drawingSearchReference;
- (id)dynamicLegendKnob;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (void)endDrawingOperation;
- (BOOL)forceRenderBlankBackground;
- (BOOL)forceSeparateLegendLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInUnscaledCanvas;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)geometry;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })geometryFrame;
- (BOOL)inPrintPreviewMode;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(BOOL)arg3;
- (BOOL)is2DRepFor3DChartRep;
- (BOOL)isDrawingIntoPDF;
- (BOOL)isEditing;
- (BOOL)isLayerBasedRep;
- (BOOL)messageIsVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })outerShadowFrame;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(int)arg1;
- (BOOL)p_chartShouldDisplayMessage;
- (void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1;
- (void)p_deleteMessageView;
- (void)p_forceDismissTransientMessage;
- (BOOL)p_hasBackgroundFill;
- (BOOL)p_hasBackgroundLayerForPieChart;
- (void)p_invalidateMessageOverlay;
- (BOOL)p_legendHitByLayoutPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)p_legendRenderer;
- (void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2;
- (void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)p_positionMessageView;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (id)p_textImageForPath:(struct CGPath { }*)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4;
- (void)p_topBarsShowedUp:(id)arg1;
- (BOOL)planeIsVisible:(int)arg1;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(int)arg3;
- (void)protected_renderChunkInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureSet:(id)arg2;
- (id)referenceLineLabelsSearchSelectionsToRender;
- (id)referenceLinesToRender;
- (BOOL)renderElements;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderGrid;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)renderLabels;
- (BOOL)renderReferenceLines;
- (id)renderSeriesIndexSet;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(int)arg2;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned int)arg1;
- (id)renderValueIndexSetForSeries:(unsigned int)arg1;
- (id)renderValueIndexSetForSeries:(unsigned int)arg1 finalElements:(BOOL)arg2;
- (id)renderValueIndexSetForSeries:(unsigned int)arg1 finalElements:(BOOL)arg2 currentChunk:(int)arg3;
- (id)renderers;
- (BOOL)requireSeparateLabelLayer;
- (struct CGPoint { float x1; float x2; })scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (id)selection;
- (void)setChunkTexturesValid:(BOOL)arg1;
- (void)setDrawingOpEndBlock:(id /* block */)arg1;
- (void)setDrawingOpStartBlock:(id /* block */)arg1;
- (void)setDynamicLegendKnob:(id)arg1;
- (void)setForceSeparateLegendLayer:(BOOL)arg1;
- (void)setTextureStage:(unsigned int)arg1;
- (BOOL)shadowsEnabled;
- (BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (BOOL)shouldUseRenderer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRectForEditMenu;
- (id)textureForContext:(id)arg1;
- (void)updateFromLayout;
- (void)updateMessageOverlayNow;
- (float)viewScale;
- (void)willBeginZooming;

@end
