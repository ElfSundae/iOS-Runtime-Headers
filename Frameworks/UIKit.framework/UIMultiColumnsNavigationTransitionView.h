/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {
    int _columnCount;
    float _columnWidth;
    struct __CFDictionary { } *_containerViews;
    id _delegate;
    NSArray *_displayedViews;
    struct __CFDictionary { } *_dividerViews;
    UIColor *_dividersColor;
    float _dividersWidth;
    UIView *_firstResponderViewToRestore;
    NSArray *_fromViews;
    unsigned int _isTransitioning;
    NSArray *_toViews;
    int _transition;
    NSArray *_viewsToAdd;
    NSArray *_viewsToRemove;
}

@property (nonatomic) int columnCount;
@property (nonatomic) float columnWidth;
@property (nonatomic) id delegate;

+ (double)defaultDurationForTransition:(int)arg1;

- (void).cxx_destruct;
- (id)_containerViewForView:(id)arg1;
- (id)_dividerViewForView:(id)arg1;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (void)_navigationTransitionDidStop;
- (void)_removeContainerViewForView:(id)arg1;
- (void)_removeDividerViewForView:(id)arg1;
- (int)columnCount;
- (float)columnWidth;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (void)setColumnCount:(int)arg1;
- (void)setColumnWidth:(float)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)transition:(int)arg1 fromViews:(id)arg2 toViews:(id)arg3;
- (BOOL)transition:(int)arg1 toViews:(id)arg2;

@end
