/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDRep : NSObject <TSDMagicMoveMatching> {
    TSDCanvas * mCanvas;
    struct CGColor { } * mDefaultSelectionHighlightColor;
    CALayer * mDragAndDropHighlightLayer;
    bool  mForceRasterization;
    bool  mHasBeenRemoved;
    bool  mKnobPositionsInvalid;
    TSDKnobTracker * mKnobTracker;
    NSArray * mKnobs;
    bool  mKnobsAreShowing;
    TSDLayoutGeometry * mLastGeometryInRoot;
    unsigned long long  mLayerUpdatesPausedCount;
    TSDLayout * mLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOriginalLayerFrameInScaledCanvas;
    TSDRep<TSDContainerRep> * mParentRep;
    CALayer * mSelectionHighlightLayer;
    bool  mSelectionHighlightLayerValid;
    bool  mShowDragAndDropHighlight;
    bool  mShowKnobsWhenManipulated;
    bool  mShowTemporaryHighlight;
    CALayer * mTemporaryHighlightLayer;
    TSDLayout * mTemporaryMixingLayout;
    TSDTextureSet * mTexture;
    NSDictionary * mTextureActionAttributes;
    NSDictionary * mTextureAnimationInfo;
    int  mTextureByGlyphStyle;
    TSDTextureContext * mTextureContext;
    unsigned long long  mTextureDeliveryStyle;
    unsigned long long  mTextureStage;
    NSObject<OS_dispatch_queue> * mTileProviderQueue;
    long long  mTileProviderQueueLock;
    TSDTilingBackgroundQueue * mTileQueue;
    long long  mTileQueueOnce;
}

@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic) TSDKnobTracker *currentKnobTracker;
@property bool forceRasterization;
@property (nonatomic, readonly) NSArray *hyperlinkRegions;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) bool isEditingPath;
@property (nonatomic, readonly) NSArray *knobs;
@property (nonatomic, readonly) TSDLayout *layout;
@property (nonatomic) TSDRep<TSDContainerRep> *parentRep;
@property (nonatomic) struct CGColor { }*selectionHighlightColor;
@property (nonatomic, retain) TSDLayout *temporaryMixingLayout;
@property (nonatomic, retain) TSDTextureSet *texture;
@property (nonatomic, retain) NSDictionary *textureActionAttributes;
@property (nonatomic, readonly) double textureAngle;
@property (nonatomic, retain) NSDictionary *textureAnimationInfo;
@property (nonatomic) int textureByGlyphStyle;
@property (nonatomic, copy) TSDTextureContext *textureContext;
@property (nonatomic) unsigned long long textureDeliveryStyle;
@property (nonatomic) unsigned long long textureStage;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)addActionGhostKnobToArrayIfNecessary:(id)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addCommentKnobToArray:(id)arg1;
- (void)addHyperlinkKnobToArray:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (void)addLockedKnobsToArray:(id)arg1;
- (void)addSelectionKnobsToArray:(id)arg1;
- (void)addToSet:(id)arg1;
- (void)addTracking:(id)arg1;
- (void)addTrackingAboveChildren:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (id)additionalRepsForDragging;
- (double)additionalRotationForKnobOrientation;
- (unsigned long long)adjustedKnobForComputingResizeGeometry:(unsigned long long)arg1;
- (id)allLayers;
- (bool)allowTrackingContainedRep:(id)arg1;
- (double)angleForRotation;
- (double)angleInRoot;
- (void)antiAliasDefeatLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)antiAliasDefeatLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)beginDrawingOperation;
- (id)beginEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForHighlightLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResizeGuideUI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canClipThemeContentToCanvas;
- (bool)canDrawInBackgroundDuringScroll;
- (bool)canDrawInParallel;
- (bool)canDrawTilingLayerInBackground:(id)arg1;
- (bool)canEditWithEditor:(id)arg1;
- (bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })centerForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (id)colorBehindLayer:(id)arg1;
- (void)computeDirectLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2;
- (void)computeDirectLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 basedOnLayoutGeometry:(id)arg3;
- (void)computeDirectLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 basedOnTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 andSize:(struct CGSize { double x1; double x2; })arg4;
- (id)connectedReps;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })convertKnobPositionToUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalPointFromLayerRelative:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalPointToLayerRelative:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalPointToUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectFromLayerRelative:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectFromUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectToLayerRelative:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledPointFromLayerRelative:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledPointToLayerRelative:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentKnobTracker;
- (void)dealloc;
- (id)delegateConformingToProtocol:(id)arg1 forRep:(id)arg2;
- (id)description;
- (void)didCreateLayer:(id)arg1;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (int)dragHUDAndGuidesTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)dynamicRotateDidBegin;
- (unsigned long long)enabledKnobMask;
- (void)endDrawingOperation;
- (void)fadeKnobsIn;
- (void)fadeKnobsOut;
- (bool)forceRasterization;
- (bool)forcesPlacementOnTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInScreenSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvasIncludingChrome;
- (bool)handleDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 onKnob:(id)arg2;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 onKnob:(id)arg2;
- (bool)handlesEditMenu;
- (bool)hasBeenRemoved;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 withGesture:(id)arg2 passingTest:(id /* block */)arg3;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlopBlock:(id /* block */)arg2;
- (id)hyperlinkRegions;
- (void)i_configureFontSmoothingForContext:(struct CGContext { }*)arg1 layer:(id)arg2;
- (struct CGPoint { double x1; double x2; })i_dragOffset;
- (bool)i_hasInteractiveCanvasController;
- (void)i_invalidateSelectionHighlightLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_originalLayerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_partition_deepClipRect;
- (id)i_queueForTileProvider;
- (void)i_shutdownTileQueue;
- (id)i_tileQueue;
- (void)i_willBeRemoved;
- (void)i_willEnterForeground;
- (id)info;
- (id)infoForTransforming;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)interactiveCanvasController;
- (bool)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateAnnotationColor;
- (void)invalidateComments;
- (void)invalidateKnobPositions;
- (void)invalidateKnobs;
- (bool)isBeingRotated;
- (bool)isDraggable;
- (bool)isDrawingInFlippedContext;
- (bool)isEditingPath;
- (bool)isInDynamicOperation;
- (bool)isLocked;
- (bool)isOpaque;
- (bool)isPlaceholder;
- (bool)isSelectable;
- (bool)isSelected;
- (bool)isSelectedIgnoringLocking;
- (bool)isVisibleOnCanvas;
- (id)itemsToAddToEditMenu;
- (id)knobForTag:(unsigned long long)arg1;
- (id)knobs;
- (Class)layerClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvasRelativeToParent;
- (struct CGPoint { double x1; double x2; })layerOffsetForDragging;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerTransformInRootForZeroAnchor;
- (bool)layerUpdatesPaused;
- (id)layout;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3;
- (void)markTextureDirty;
- (bool)masksToBounds;
- (bool)mustDrawOnMainThreadForInteractiveCanvas;
- (bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })naturalBounds;
- (struct CGPath { }*)newPathInScaledCanvasFromNaturalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)newSelectionKnobForType:(int)arg1 tag:(unsigned long long)arg2;
- (id)newTrackerForKnob:(id)arg1;
- (double)opacity;
- (id)overlayLayers;
- (void)p_actionGhostKnobHit;
- (id)p_addLayersForKnobsToArray:(id)arg1 withDelegate:(id)arg2 isOverlay:(bool)arg3;
- (void)p_dynamicRotateDidBegin;
- (struct CGPoint { double x1; double x2; })p_positionOfActionGhostKnobForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)p_setMagicMoveTextureAttributes:(id)arg1;
- (void)p_toggleHyperlinkUIVisibility;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })parentLayerInverseTransformInRootForZeroAnchor;
- (id)parentRep;
- (id)parentRepToPerformSelecting;
- (void)pauseLayerUpdates;
- (id)popoutLayers;
- (struct CGPoint { double x1; double x2; })positionOfActionGhostKnob;
- (struct CGPoint { double x1; double x2; })positionOfHyperlinkKnob;
- (struct CGPoint { double x1; double x2; })positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (bool)repDirectlyManagesContentsScaleOfLayer:(id)arg1;
- (id)repForDragging;
- (id)repForHandleSingleTap;
- (id)repForRotating;
- (id)repForSelecting;
- (void)replaceContentsFromRep:(id)arg1;
- (bool)resizeFromCenterOnly;
- (void)resumeLayerUpdates;
- (void)resumeLayerUpdatesAndLayoutImmediately;
- (double)scaleToConvertNaturalToLayerRelative;
- (void)screenScaleDidChange;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (struct CGColor { }*)selectionHighlightColor;
- (id)selectionHighlightLayer;
- (double)selectionHighlightWidth;
- (void)setCurrentKnobTracker:(id)arg1;
- (void)setForceRasterization:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParentRep:(id)arg1;
- (void)setSelectionHighlightColor:(struct CGColor { }*)arg1;
- (void)setTemporaryMixingLayout:(id)arg1;
- (void)setTexture:(id)arg1;
- (void)setTextureActionAttributes:(id)arg1;
- (void)setTextureAnimationInfo:(id)arg1;
- (void)setTextureByGlyphStyle:(int)arg1;
- (void)setTextureContext:(id)arg1;
- (void)setTextureDeliveryStyle:(unsigned long long)arg1;
- (void)setTextureStage:(unsigned long long)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (double)shortestDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1 countAsHit:(bool*)arg2;
- (bool)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
- (bool)shouldCreateCommentKnob;
- (bool)shouldCreateKnobs;
- (bool)shouldCreateLockedKnobs;
- (bool)shouldCreateSelectionKnobs;
- (bool)shouldDisplayHyperlinkUI;
- (bool)shouldExpandHitRegionWhenSmall;
- (bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldLayoutTilingLayer:(id)arg1;
- (bool)shouldShowCommentHighlight;
- (bool)shouldShowCommentUIDirectlyOverRep;
- (bool)shouldShowDragHUD;
- (bool)shouldShowKnobs;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowSizesInRulers;
- (void)showKnobsDuringManipulation:(bool)arg1;
- (id)subviewsController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForEditMenu;
- (id)temporaryMixingLayout;
- (id)texture;
- (id)textureActionAttributes;
- (double)textureAngle;
- (id)textureAnimationInfo;
- (int)textureByGlyphStyle;
- (id)textureContext;
- (unsigned long long)textureDeliveryStyle;
- (id)textureForContext:(id)arg1;
- (unsigned long long)textureStage;
- (int)tilingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackingBoundsForStandardKnobs;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForHighlightLayer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToConvertNaturalFromLayerRelative;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToConvertNaturalToLayerRelative;
- (void)turnKnobsOn;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })unRotatedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })unscaledGuidePosition;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)viewScaleDidChange;
- (void)viewScrollDidChange;
- (void)viewScrollWillChange;
- (void)viewScrollingEnded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForTilingLayer:(id)arg1;
- (bool)wantsEditMenuForTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 onKnob:(id)arg2;
- (bool)wantsGuidesWhileResizing;
- (bool)wantsToDistortWithImagerContext;
- (bool)wantsToHandleTapsOnContainingGroup;
- (bool)wantsToHandleTapsWhenLocked;
- (void)wasAddedToParent;
- (void)wideGamutValueDidChange;
- (void)willBeRemoved;
- (void)willBeRemovedFromParent;
- (void)willReplaceContentsFromRep:(id)arg1;
- (void)willUpdateLayer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (struct CGPoint { double x1; double x2; })SXAXConvertNaturalPointToScreenSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })SXAXConvertNaturalRectToScreenSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })SXAXConvertScreenPointToNaturalSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })SXAXConvertScreenRectToNaturalSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (bool)isAccessibilityElement;

@end
