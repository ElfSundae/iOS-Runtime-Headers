/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton <SBBulletinCellButton> {
    double _currentProgress;
    double _duration;
    UILabel *_label;
    double _lastProgress;
    CKAudioProgressView *_progressView;
}

@property (nonatomic) double currentProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double lastProgress;
@property (nonatomic, retain) CKAudioProgressView *progressView;
@property (readonly) Class superclass;

- (void)_playButtonHit:(id)arg1;
- (void)_updateTime:(id)arg1;
- (double)currentProgress;
- (void)dealloc;
- (void)didFinish:(id)arg1;
- (void)didStop:(id)arg1;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (struct CGSize { float x1; float x2; })labelSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)lastProgress;
- (void)layoutSubviews;
- (id)progressView;
- (void)removeFromSuperview;
- (void)setCurrentProgress:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastProgress:(double)arg1;
- (void)setProgressView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
