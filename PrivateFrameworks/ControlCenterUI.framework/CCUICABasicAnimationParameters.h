/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    double  _duration;
    <CCUIAnimationTimingFunctionDescription> * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (void).cxx_destruct;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)timingFunction;

@end
