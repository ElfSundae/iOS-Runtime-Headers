/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView *_actionableHeaderView;
    NSString *_backdropGroupName;
    UIColor *_backgroundColorForNonFloatingState;
    <MusicLibraryBrowseSectionHeaderViewDelegate> *_delegate;
    _UIBackdropView *_floatingBackdropView;
    int _hairlineStyleForNonFloatingState;
    UIView *_hairlineView;
    UIColor *_headerTextColorForNonFloatingState;
    BOOL _shouldSkipLayout;
    float _topContentInset;
}

@property (getter=isActionable, nonatomic) BOOL actionable;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIColor *backgroundColorForNonFloatingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int hairlineStyleForNonFloatingState;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) UIColor *headerTextColorForNonFloatingState;
@property (readonly) Class superclass;
@property (nonatomic) float topContentInset;

+ (struct { float x1; float x2; int x3; int x4; })_actionableHeaderMetricsForDisplayScale:(float)arg1;
+ (float)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)backdropGroupName;
- (id)backgroundColorForNonFloatingState;
- (void)dealloc;
- (id)delegate;
- (int)hairlineStyleForNonFloatingState;
- (id)headerText;
- (id)headerTextColorForNonFloatingState;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)isActionable;
- (void)layoutBelowIfNeeded;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setActionable:(BOOL)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundColorForNonFloatingState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHairlineStyleForNonFloatingState:(int)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setTopContentInset:(float)arg1;
- (float)topContentInset;
- (void)traitCollectionDidChange:(id)arg1;

@end
