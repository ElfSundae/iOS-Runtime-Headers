/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXBarsController : NSObject {
    PXBarSpec * _barSpec;
    <PXBarsControllerDelegate> * _delegate;
    struct { }  _delegateFlags;
    struct { 
        bool needsUpdateBars; 
    }  _needsUpdateFlags;
    UIViewController * _viewController;
    bool  _wantsAnimatedBarsUpdate;
}

@property (nonatomic, retain) PXBarSpec *barSpec;
@property (nonatomic) <PXBarsControllerDelegate> *delegate;
@property (nonatomic) UIViewController *viewController;
@property (nonatomic) bool wantsAnimatedBarsUpdate;

- (void).cxx_destruct;
- (bool)_needsUpdate;
- (void)_updateBarsIfNeeded;
- (id)barSpec;
- (id)delegate;
- (id)init;
- (void)invalidateBars;
- (void)setBarSpec:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setWantsAnimatedBarsUpdate:(bool)arg1;
- (void)updateBars;
- (void)updateIfNeeded;
- (id)viewController;
- (bool)wantsAnimatedBarsUpdate;

@end
