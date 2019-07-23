/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {
    <TSKAccessControllerReadTicket> * _accessControllerReadTicket;
    KNSlideNode * _alternateNextSlideNode;
    KNAnimatedSlideView * _animatedSlideViewForNextSlide;
    KNAnimationContext * _animationContext;
    NSMutableArray * _animationDurationArray;
    NSMutableArray * _animationStringArray;
    KNAnimationTestResultLogger * _animationTestResultLogger;
    TSDBitmapRenderingQualityInfo * _bitmapRenderingQualityInfo;
    NSMutableArray * _breadCrumbTrail;
    <TSDCanvasDelegate> * _canvasDelegate;
    KNSlideNode * _currentSlideNode;
    bool  _disableAutoAnimationRemoval;
    bool  _disableTransitionTextureCaching;
    id /* block */  _endShowHandler;
    NSMutableArray * _eventDurationArray;
    bool  _hasEndShowHandlerBeenCancelled;
    unsigned int  _isDiscreteGPUAcquired;
    bool  _isExitingShow;
    unsigned int  _isMetalCapable;
    unsigned int  _isMetalCapableCheckInitialized;
    unsigned int  _isMetalEnabledByCaller;
    bool  _isMovieExport;
    bool  _isShowLayerVisible;
    <MTLDevice> * _metalDevice;
    CALayer * _noMetalBadgeLayer;
    long long  _playMode;
    CALayer * _rootLayer;
    TSDGLLayer * _sharedGLLayer;
    TSDMetalLayer * _sharedMetalLayer;
    bool  _shouldAlwaysLoop;
    bool  _shouldAlwaysSetCurrentGLContextWhenDrawing;
    bool  _shouldAnimateNullTransitions;
    bool  _shouldAnimateTransitionOnLastSlide;
    bool  _shouldAutomaticallyPlayMovies;
    bool  _shouldDrawTexturesAsynchronously;
    bool  _shouldExcludeFloatingComments;
    bool  _shouldForceTextureGeneration;
    bool  _shouldNotBakeActionTextures;
    bool  _shouldPreferCARenderer;
    bool  _shouldPreserveTransparency;
    bool  _shouldRespectSkippedSlides;
    bool  _shouldShowVideoReflectionsAndMasks;
    bool  _shouldSkipBuilds;
    bool  _shouldUseContentlessLayers;
    bool  _shouldUseSourceImage;
    KNShow * _show;
    NSArray * _slideNodesWithinPlayableRange;
    KNAnimatedTextureManager * _textureManager;
    NSMutableArray * _workDurationArray;
}

@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic) <TSKAccessControllerReadTicket> *accessControllerReadTicket;
@property (nonatomic) KNSlideNode *alternateNextSlideNode;
@property (nonatomic, readonly) KNAnimatedSlideView *animatedSlideViewForCurrentSlide;
@property (nonatomic, readonly) KNAnimatedSlideView *animatedSlideViewForNextSlide;
@property (nonatomic, readonly) KNAnimationContext *animationContext;
@property (nonatomic, retain) NSMutableArray *animationDurationArray;
@property (nonatomic, retain) NSMutableArray *animationStringArray;
@property (nonatomic, readonly) KNAnimationTestResultLogger *animationTestResultLogger;
@property (nonatomic, readonly) bool atBeginningOfDeck;
@property (nonatomic, readonly) bool atEndOfDeck;
@property (nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo;
@property (nonatomic, retain) NSMutableArray *breadCrumbTrail;
@property (nonatomic) <TSDCanvasDelegate> *canvasDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAutoAnimationRemoval;
@property (nonatomic) bool disableTransitionTextureCaching;
@property (nonatomic, copy) id /* block */ endShowHandler;
@property (nonatomic, retain) NSMutableArray *eventDurationArray;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExitingShow;
@property (nonatomic, readonly) bool isMetalCapable;
@property (nonatomic, readonly) bool isMetalEnabled;
@property (nonatomic) bool isMovieExport;
@property (nonatomic, readonly) bool isOffscreenPlayback;
@property (nonatomic, readonly) bool isPreview;
@property (nonatomic) bool isShowLayerVisible;
@property (nonatomic, readonly) bool isWideGamut;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;
@property (nonatomic) long long playMode;
@property (nonatomic, readonly) NSArray *playableSlideNodes;
@property (nonatomic, readonly) CALayer *rootLayer;
@property (nonatomic, retain) TSDGLLayer *sharedGLLayer;
@property (nonatomic, retain) TSDMetalLayer *sharedMetalLayer;
@property (nonatomic) bool shouldAlwaysLoop;
@property (nonatomic) bool shouldAlwaysSetCurrentGLContextWhenDrawing;
@property (nonatomic) bool shouldAnimateNullTransitions;
@property (nonatomic) bool shouldAnimateTransitionOnLastSlide;
@property (nonatomic) bool shouldAutomaticallyPlayMovies;
@property (nonatomic) bool shouldDrawTexturesAsynchronously;
@property (nonatomic) bool shouldExcludeFloatingComments;
@property (nonatomic) bool shouldForceTextureGeneration;
@property (nonatomic) bool shouldNotBakeActionTextures;
@property (nonatomic) bool shouldPreferCARenderer;
@property (nonatomic) bool shouldPreserveTransparency;
@property (nonatomic) bool shouldRespectSkippedSlides;
@property (nonatomic, readonly) bool shouldShowInstructionalText;
@property (nonatomic) bool shouldShowVideoReflectionsAndMasks;
@property (nonatomic) bool shouldSkipBuilds;
@property (nonatomic) bool shouldUseContentlessLayers;
@property (nonatomic) bool shouldUseSourceImage;
@property (nonatomic, readonly) KNShow *show;
@property (nonatomic, readonly) double showScale;
@property (nonatomic, copy) NSArray *slideNodesWithinPlayableRange;
@property (readonly) Class superclass;
@property (nonatomic, retain) KNAnimatedTextureManager *textureManager;
@property (nonatomic, retain) NSMutableArray *workDurationArray;

- (void).cxx_destruct;
- (id)accessController;
- (id)accessControllerReadTicket;
- (void)acquireDiscreteGPUIfNeeded;
- (id)alternateNextSlideNode;
- (id)animatedSlideViewFor:(id)arg1;
- (id)animatedSlideViewForCurrentSlide;
- (id)animatedSlideViewForNextSlide;
- (id)animationContext;
- (id)animationDurationArray;
- (id)animationStringArray;
- (id)animationTestResultLogger;
- (bool)atBeginningOfDeck;
- (bool)atEndOfDeck;
- (id)bitmapRenderingQualityInfo;
- (id)breadCrumb;
- (id)breadCrumbTrail;
- (void)cancelEndShowHandler;
- (id)canvasDelegate;
- (id)currentSlide;
- (id)currentSlideNode;
- (void)dealloc;
- (bool)disableAutoAnimationRemoval;
- (bool)disableTransitionTextureCaching;
- (void)discardDiscreteGPUIfAcquired;
- (void)dropABreadCrumb;
- (void)enableMetalBadge:(bool)arg1;
- (id /* block */)endShowHandler;
- (id)eventDurationArray;
- (void)executeEndShowHandlerAfterDelay:(double)arg1;
- (id)firstSlideNode;
- (id)gotoFirstSlide;
- (id)gotoLastSlide;
- (id)gotoNextSlide;
- (id)gotoPreviousSlide;
- (void)gotoSlideNode:(id)arg1;
- (id)init;
- (id)initWithShow:(id)arg1 viewScale:(double)arg2 showLayer:(id)arg3 canvasDelegate:(id)arg4 isMetalEnabled:(bool)arg5 endShowHandler:(id /* block */)arg6;
- (bool)isExitingShow;
- (bool)isMetalCapable;
- (bool)isMetalEnabled;
- (bool)isMovieExport;
- (bool)isOffscreenPlayback;
- (bool)isPreCachingOperationActive;
- (bool)isPreview;
- (bool)isShowLayerVisible;
- (bool)isWideGamut;
- (id)lastSlideNode;
- (void)makeSharedMetalLayerVisible:(bool)arg1;
- (id)metalDevice;
- (id)nextSlideAfterCurrent;
- (id)nextSlideNodeAfterCurrent;
- (id)nextSlideNodeAfterSlideNode:(id)arg1;
- (bool)p_checkArrayInclusionIncludingUUID:(id)arg1 object:(id)arg2;
- (bool)p_checkNodeEqualityIncludingUUID:(id)arg1 secondSlideNode:(id)arg2;
- (void)p_executeEndShowHandler;
- (unsigned long long)p_findIndexIncludingUUID:(id)arg1 object:(id)arg2;
- (id)p_intersectArraysWithUUIDEquality:(id)arg1 secondArray:(id)arg2;
- (id)p_nextBestSlideNodeToSlideNode:(id)arg1;
- (void)p_setCurrentSlideNode:(id)arg1;
- (void)p_setupBadging;
- (bool)p_slideNodeIsPlayable:(id)arg1;
- (void)performSlideRead:(id /* block */)arg1;
- (long long)playMode;
- (id)playableSlideNodes;
- (id)previousSlideNodeBeforeCurrent;
- (id)previousSlideNodeBeforeSlideNode:(id)arg1;
- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;
- (void)resizeShowLayer;
- (id)rootLayer;
- (void)setAccessControllerReadTicket:(id)arg1;
- (void)setAlternateNextSlideNode:(id)arg1;
- (void)setAnimationDurationArray:(id)arg1;
- (void)setAnimationStringArray:(id)arg1;
- (void)setBitmapRenderingQualityInfo:(id)arg1;
- (void)setBreadCrumbTrail:(id)arg1;
- (void)setCanvasDelegate:(id)arg1;
- (void)setDisableAutoAnimationRemoval:(bool)arg1;
- (void)setDisableTransitionTextureCaching:(bool)arg1;
- (void)setEndShowHandler:(id /* block */)arg1;
- (void)setEventDurationArray:(id)arg1;
- (void)setIsExitingShow:(bool)arg1;
- (void)setIsMovieExport:(bool)arg1;
- (void)setIsShowLayerVisible:(bool)arg1;
- (void)setPlayMode:(long long)arg1;
- (void)setSharedGLContextAsCurrentContextShouldCreate:(bool)arg1;
- (void)setSharedGLLayer:(id)arg1;
- (void)setSharedMetalLayer:(id)arg1;
- (void)setShouldAlwaysLoop:(bool)arg1;
- (void)setShouldAlwaysSetCurrentGLContextWhenDrawing:(bool)arg1;
- (void)setShouldAnimateNullTransitions:(bool)arg1;
- (void)setShouldAnimateTransitionOnLastSlide:(bool)arg1;
- (void)setShouldAutomaticallyPlayMovies:(bool)arg1;
- (void)setShouldDrawTexturesAsynchronously:(bool)arg1;
- (void)setShouldExcludeFloatingComments:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldNotBakeActionTextures:(bool)arg1;
- (void)setShouldPreferCARenderer:(bool)arg1;
- (void)setShouldPreserveTransparency:(bool)arg1;
- (void)setShouldRespectSkippedSlides:(bool)arg1;
- (void)setShouldShowVideoReflectionsAndMasks:(bool)arg1;
- (void)setShouldSkipBuilds:(bool)arg1;
- (void)setShouldUseContentlessLayers:(bool)arg1;
- (void)setShouldUseSourceImage:(bool)arg1;
- (void)setSlideNodesWithinPlayableRange:(id)arg1;
- (void)setTextureManager:(id)arg1;
- (void)setWorkDurationArray:(id)arg1;
- (id)sharedGLLayer;
- (id)sharedMetalLayer;
- (bool)shouldAlwaysLoop;
- (bool)shouldAlwaysSetCurrentGLContextWhenDrawing;
- (bool)shouldAnimateNullTransitions;
- (bool)shouldAnimateTransitionOnLastSlide;
- (bool)shouldAutomaticallyPlayMovies;
- (bool)shouldDrawTexturesAsynchronously;
- (bool)shouldExcludeFloatingComments;
- (bool)shouldForceTextureGeneration;
- (bool)shouldNotBakeActionTextures;
- (bool)shouldPreferCARenderer;
- (bool)shouldPreserveTransparency;
- (bool)shouldRespectSkippedSlides;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowVideoReflectionsAndMasks;
- (bool)shouldSkipBuilds;
- (bool)shouldUseContentlessLayers;
- (bool)shouldUseSourceImage;
- (id)show;
- (double)showScale;
- (id)slideNodesWithinPlayableRange;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
- (void)tearDown;
- (void)tearDownSharedGLLayer;
- (id)textureManager;
- (void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1;
- (id)workDurationArray;

@end
