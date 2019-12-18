/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageView : UIImageView <SWReachabilityObserver, SXAXCustomRotorItemProvider, SXAnimatedImageDelegate, SXDraggable> {
    NSTimer * _activeTimer;
    UIActivityIndicatorView * _activityIndicatorView;
    SXAnimatedImage * _animatedImage;
    bool  _autoPlayEnabled;
    <SXImageViewDelegate> * _delegate;
    id /* block */  _frameChangeBlock;
    unsigned long long  _frameIndex;
    UIImage * _highQualityImage;
    id /* block */  _highQualityImageRequestCancelHandler;
    unsigned long long  _highQualityInterest;
    SXImageResource * _imageResource;
    unsigned long long  _intendedFrameIndex;
    NSMapTable * _interestTable;
    bool  _isDecorative;
    bool  _isScrubbing;
    bool  _paused;
    unsigned long long  _playCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredImageSize;
    UIImage * _preferredQualityImage;
    id /* block */  _preferredQualityImageRequestCancelHandler;
    unsigned long long  _preferredQualityInterest;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredQualityLoadingImageSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPoint;
    <SWReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSource> * _resourceDataSource;
    UILongPressGestureRecognizer * _scrubGesture;
    bool  _scrubbingEnabled;
    bool  _shouldResume;
    bool  _shouldResumeAfterLoad;
    bool  _shouldShowLoadingIndicator;
}

@property (nonatomic, retain) NSTimer *activeTimer;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) SXAnimatedImage *animatedImage;
@property (nonatomic) bool autoPlayEnabled;
@property (nonatomic, readonly) bool containsAnimatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXImageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *dragIdentifier;
@property (nonatomic, readonly) <NSItemProviderWriting> *dragObject;
@property (nonatomic, readonly) UIView *dragPreviewView;
@property (nonatomic, copy) id /* block */ frameChangeBlock;
@property (nonatomic) unsigned long long frameIndex;
@property (nonatomic, readonly) bool hasInterest;
@property (nonatomic, readonly) bool hasLoadedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIImage *highQualityImage;
@property (nonatomic, copy) id /* block */ highQualityImageRequestCancelHandler;
@property (nonatomic) unsigned long long highQualityInterest;
@property (nonatomic, readonly) SXImageResource *imageResource;
@property (nonatomic) unsigned long long intendedFrameIndex;
@property (nonatomic, retain) NSMapTable *interestTable;
@property (nonatomic) bool isDecorative;
@property (nonatomic) bool isScrubbing;
@property (nonatomic) long long loadingIndicatorStyle;
@property (nonatomic) bool paused;
@property (nonatomic) unsigned long long playCount;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredImageSize;
@property (nonatomic) UIImage *preferredQualityImage;
@property (nonatomic, copy) id /* block */ preferredQualityImageRequestCancelHandler;
@property (nonatomic) unsigned long long preferredQualityInterest;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredQualityLoadingImageSize;
@property (nonatomic, readonly) bool prefersHighQuality;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPoint;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic, retain) UILongPressGestureRecognizer *scrubGesture;
@property (nonatomic) bool scrubbingEnabled;
@property (nonatomic) bool shouldResume;
@property (nonatomic) bool shouldResumeAfterLoad;
@property (nonatomic) bool shouldShowLoadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)activeTimer;
- (id)activityIndicatorView;
- (void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2;
- (id)animatedImage;
- (void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(unsigned long long)arg2;
- (bool)autoPlayEnabled;
- (bool)containsAnimatedImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)crossfadeToImage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didEndDragging;
- (void)didLoadAnimatedImage:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didReceiveMemoryWarning;
- (void)didStartDragging;
- (id)dragIdentifier;
- (id)dragObject;
- (id)dragPreviewView;
- (void)fadeInImageWhenVisible:(id)arg1;
- (id /* block */)frameChangeBlock;
- (unsigned long long)frameIndex;
- (void)giveUpInterestForObject:(id)arg1;
- (void)handleScrubGesture:(id)arg1;
- (bool)hasInterest;
- (bool)hasLoadedImage;
- (id)highQualityImage;
- (id /* block */)highQualityImageRequestCancelHandler;
- (unsigned long long)highQualityInterest;
- (id)imageResource;
- (id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2 reachabilityProvider:(id)arg3;
- (unsigned long long)intendedFrameIndex;
- (id)interestTable;
- (bool)isAccessibilityElement;
- (bool)isDecorative;
- (bool)isScrubbing;
- (bool)isVisible;
- (id)itemsForCustomRotor:(id)arg1;
- (void)layoutActivityIndicator;
- (void)layoutSubviews;
- (void)loadHighQualityImage;
- (void)loadPreferredQualityImage;
- (struct CGSize { double x1; double x2; })loadedImageSize;
- (long long)loadingIndicatorStyle;
- (bool)objectHasQualityInterest:(id)arg1 quality:(int*)arg2;
- (void)pause;
- (bool)paused;
- (unsigned long long)playCount;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (id)preferredQualityImage;
- (id /* block */)preferredQualityImageRequestCancelHandler;
- (unsigned long long)preferredQualityInterest;
- (struct CGSize { double x1; double x2; })preferredQualityLoadingImageSize;
- (bool)prefersHighQuality;
- (struct CGPoint { double x1; double x2; })previousPoint;
- (void)reachabilityChanged:(bool)arg1;
- (id)reachabilityProvider;
- (id)resourceDataSource;
- (void)resume;
- (id)scrubGesture;
- (bool)scrubbingEnabled;
- (void)setActiveTimer:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAnimatedImage:(id)arg1;
- (void)setAutoPlayEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameChangeBlock:(id /* block */)arg1;
- (void)setFrameIndex:(unsigned long long)arg1;
- (void)setFrameIndex:(unsigned long long)arg1 allowNearest:(bool)arg2;
- (void)setHighQualityImage:(id)arg1;
- (void)setHighQualityImageRequestCancelHandler:(id /* block */)arg1;
- (void)setHighQualityInterest:(unsigned long long)arg1;
- (void)setIntendedFrameIndex:(unsigned long long)arg1;
- (void)setInterestTable:(id)arg1;
- (void)setIsDecorative:(bool)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setLoadingIndicatorStyle:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)setPreferredImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredQualityImage:(id)arg1;
- (void)setPreferredQualityImageRequestCancelHandler:(id /* block */)arg1;
- (void)setPreferredQualityInterest:(unsigned long long)arg1;
- (void)setPreferredQualityLoadingImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrubGesture:(id)arg1;
- (void)setScrubbingEnabled:(bool)arg1;
- (void)setShouldResume:(bool)arg1;
- (void)setShouldResumeAfterLoad:(bool)arg1;
- (void)setShouldShowLoadingIndicator:(bool)arg1;
- (bool)shouldResume;
- (bool)shouldResumeAfterLoad;
- (bool)shouldShowLoadingIndicator;
- (void)showNextFrame;
- (id)stringForAXDragAction;
- (id)supportedCustomRotors;
- (void)validateLoadedImage;
- (void)willMoveToSuperview:(id)arg1;

@end
