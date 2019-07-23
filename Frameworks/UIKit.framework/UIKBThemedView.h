/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBThemedView : UIView <UIKBCacheableView> {
    BOOL  _active;
    CALayer * _background;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _cacheInsets;
    CALayer * _leftBorder;
    BOOL  _lightKeyboard;
    CALayer * _rightBorder;
    BOOL  _showsLeftBorder;
    BOOL  _showsRightBorder;
    int  _style;
    BOOL  _usePersistentCaching;
}

@property (nonatomic) BOOL active;
@property (nonatomic, readonly) BOOL cacheDeferable;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } cacheInsets;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) float cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepNonPersistent;
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usePersistentCaching;

- (BOOL)_canDrawContent;
- (BOOL)_hasInsets;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (void)_setRenderConfig:(id)arg1;
- (BOOL)active;
- (id)borderFilterTypeForCurrentStyle;
- (BOOL)cacheDeferable;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cacheInsets;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)keepNonPersistent;
- (void)layoutSubviews;
- (void)setActive:(BOOL)arg1;
- (void)setCacheInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setShowsRightBorder:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setUsePersistentCaching:(BOOL)arg1;
- (BOOL)showsLeftBorder;
- (BOOL)showsRightBorder;
- (int)style;
- (id)traitsForCurrentStyle;
- (BOOL)usePersistentCaching;

@end
