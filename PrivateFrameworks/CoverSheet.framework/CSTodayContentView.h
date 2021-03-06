/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSTodayContentView : CSCoverSheetViewBase {
    bool  _bouncing;
    UIView * _navigationView;
    UIView * _todayView;
}

@property (getter=isBouncing, nonatomic) bool bouncing;
@property (nonatomic) UIView *navigationView;
@property (nonatomic) UIView *todayView;

- (void).cxx_destruct;
- (void)_adjustContentForEdgeBounce;
- (void)_resetContentAfterEdgeBounce;
- (bool)isBouncing;
- (void)layoutSubviews;
- (id)navigationView;
- (void)setBouncing:(bool)arg1;
- (void)setNavigationView:(id)arg1;
- (void)setTodayView:(id)arg1;
- (id)todayView;

@end
