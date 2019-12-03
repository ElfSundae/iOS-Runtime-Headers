/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUClipScrubberView : UIView {
    UICollectionView * _clipCollectionView;
    UIView * _contentView;
    unsigned long long  _displayMode;
    bool  _isPlayingMedia;
    UIButton * _leftActionButton;
    HUBlendedSeparatorView * _leftBlendedSeparator;
    HUClipScrubberPlayheadView * _playHeadView;
    UIButton * _rightActionButton;
    HUBlendedSeparatorView * _rightBlendedSeparator;
}

@property (nonatomic, retain) UICollectionView *clipCollectionView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) bool isPlayingMedia;
@property (nonatomic, retain) UIButton *leftActionButton;
@property (nonatomic, retain) HUBlendedSeparatorView *leftBlendedSeparator;
@property (nonatomic, retain) HUClipScrubberPlayheadView *playHeadView;
@property (nonatomic, retain) UIButton *rightActionButton;
@property (nonatomic, retain) HUBlendedSeparatorView *rightBlendedSeparator;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_deleteImage;
- (id)_pauseImage;
- (id)_playImage;
- (id)clipCollectionView;
- (id)contentView;
- (void)displayEditInterface;
- (unsigned long long)displayMode;
- (void)hideEditInterface;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayingMedia;
- (void)layoutSubviews;
- (id)leftActionButton;
- (id)leftBlendedSeparator;
- (void)navigateToLivePosition;
- (void)navigateToOffset:(double)arg1;
- (id)playHeadView;
- (id)playOrPauseImageForEngineMode:(unsigned long long)arg1;
- (id)rightActionButton;
- (id)rightBlendedSeparator;
- (void)setClipCollectionView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setIsPlayingMedia:(bool)arg1;
- (void)setLeftActionButton:(id)arg1;
- (void)setLeftBlendedSeparator:(id)arg1;
- (void)setPlayHeadView:(id)arg1;
- (void)setRightActionButton:(id)arg1;
- (void)setRightBlendedSeparator:(id)arg1;
- (void)updateDisplayMode:(unsigned long long)arg1;
- (void)updateMode:(unsigned long long)arg1;
- (void)updateTimeControlStatus:(unsigned long long)arg1 forEngineMode:(unsigned long long)arg2;

@end
