/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryWaveformView : UIView {
    UIImageView *_balloonImageView;
    UIVisualEffectView *_blurView;
    double _duration;
    UIImageView *_maskView;
    unsigned int _maxPowerLevelsCount;
    float _minTimeLabelWidth;
    NSMutableArray *_powerLevels;
    UILabel *_timeLabel;
    UIImageView *_waveformImageView;
}

@property (nonatomic, retain) UIImageView *balloonImageView;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIImageView *maskView;
@property (nonatomic) unsigned int maxPowerLevelsCount;
@property (nonatomic) float minTimeLabelWidth;
@property (nonatomic, retain) NSMutableArray *powerLevels;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIImageView *waveformImageView;

+ (id)waveformCurveTransform;

- (void)appendPowerLevel:(float)arg1;
- (id)balloonImageView;
- (id)blurView;
- (void)clearPowerLevels;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskView;
- (unsigned int)maxPowerLevelsCount;
- (float)minTimeLabelWidth;
- (id)powerLevels;
- (void)setBalloonImageView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMaskView:(id)arg1;
- (void)setMaxPowerLevelsCount:(unsigned int)arg1;
- (void)setMinTimeLabelWidth:(float)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)timeLabel;
- (void)updateWaveform;
- (id)waveformImageView;

@end
