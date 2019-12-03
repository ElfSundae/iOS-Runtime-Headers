/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXScrollViewController : NSObject <PXTilingScrollController> {
    NSHashTable * __observers;
    long long  _activeScrollAnimations;
    NSObject<UICoordinateSpace> * _contentCoordinateSpace;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _deferContentOffsetUpdates;
    NSHashTable * _didLayoutSubviewsObservers;
    NSHashTable * _didScrollObservers;
    bool  _isDecelerating;
    bool  _isDragging;
    bool  _isManuallyChanging;
    bool  _isScrubbing;
    bool  _isTracking;
    PXTilingScrollInfo * _scrollInfo;
    struct NSObject { Class x1; } * _scrollView;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrollViewContentSize;
    <PXTilingScrollControllerUpdateDelegate> * _updateDelegate;
    NSHashTable * _willLayoutSubviewsObservers;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRect;
@property (nonatomic, readonly) long long activeScrollAnimations;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } constrainedVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) NSObject<UICoordinateSpace> *contentCoordinateSpace;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferContentOffsetUpdates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnimatingScroll;
@property (nonatomic, readonly) bool isDecelerating;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) bool isManuallyChanging;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic, readonly) bool isTracking;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, copy) PXTilingScrollInfo *scrollInfo;
@property (nonatomic, readonly) NSObject<PXAnonymousScrollView> *scrollView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewActiveRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewConstrainedVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewContentBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scrollViewContentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scrollViewReferenceSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewTargetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewVisibleRect;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic) <PXTilingScrollControllerUpdateDelegate> *updateDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleOrigin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (id)_observers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRect;
- (long long)activeScrollAnimations;
- (void)addSubview:(struct NSObject { Class x1; }*)arg1;
- (void)addSubviewToScrollView:(struct NSObject { Class x1; }*)arg1;
- (void)applyScrollInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)contentCoordinateSpace;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (bool)deferContentOffsetUpdates;
- (bool)hasWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimatingScroll;
- (bool)isDecelerating;
- (bool)isDragging;
- (bool)isManuallyChanging;
- (bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (bool)isScrubbing;
- (bool)isTracking;
- (void)performManualChange:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)registerObserver:(id)arg1;
- (id)scrollInfo;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(bool)arg3;
- (void)scrollToEdge:(unsigned int)arg1;
- (struct NSObject { Class x1; }*)scrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewActiveRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewConstrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewContentBounds;
- (void)scrollViewContentBoundsDidChange;
- (struct CGSize { double x1; double x2; })scrollViewContentSize;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewDidEndScrollingAnimation;
- (void)scrollViewDidLayout;
- (void)scrollViewDidScroll;
- (void)scrollViewLayoutIfNeeded;
- (struct CGSize { double x1; double x2; })scrollViewReferenceSize;
- (bool)scrollViewShouldScrollToTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewTargetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRect;
- (void)scrollViewWillBeginScrolling;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;
- (void)scrollViewWillLayout;
- (void)setActiveScrollAnimations:(long long)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDeferContentOffsetUpdates:(bool)arg1;
- (void)setNeedsUpdate;
- (void)setScrollInfo:(id)arg1;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewNeedsLayout;
- (void)setUpdateDelegate:(id)arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (void)unregisterObserver:(id)arg1;
- (id)updateDelegate;
- (void)updateIfNeeded;
- (struct CGPoint { double x1; double x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willEndScrollingWithVelocity:(struct CGPoint { double x1; double x2; })arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;

@end
