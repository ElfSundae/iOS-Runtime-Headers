/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {
    double  _duration;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned int hash;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (id)continuousFeedbackForType:(int)arg1;
+ (id)type;

- (id)_debugDictionary;
- (unsigned int)_effectiveEventType;
- (void)_playAtTime:(double)arg1;
- (id)_playableProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
