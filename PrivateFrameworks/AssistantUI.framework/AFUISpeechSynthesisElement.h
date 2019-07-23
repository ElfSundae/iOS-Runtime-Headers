/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISpeechSynthesisElement : NSObject {
    NSDictionary * _analyticsContext;
    NSString * _animationIdentifier;
    id /* block */  _completion;
    <AFUISpeechSynthesisElementDelegate> * _delegate;
    BOOL  _durationHasElapsed;
    BOOL  _eligibleForSynthesis;
    BOOL  _isPhonetic;
    BOOL  _preprationBlockCompleted;
    BOOL  _provisional;
    VSSpeechRequest * _speechRequest;
    int  _synthesisResult;
    NSString * _text;
}

@property (nonatomic, readonly) NSDictionary *analyticsContext;
@property (nonatomic, readonly) NSString *animationIdentifier;
@property (getter=_completion, nonatomic, readonly) id /* block */ completion;
@property (nonatomic) <AFUISpeechSynthesisElementDelegate> *delegate;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:, nonatomic) BOOL eligibleForSynthesis;
@property (nonatomic) BOOL isPhonetic;
@property (setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted;
@property (getter=isProvisional, nonatomic, readonly) BOOL provisional;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;
@property (nonatomic) int synthesisResult;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id /* block */)_completion;
- (void)_setDurationHasElapsed:(BOOL)arg1;
- (void)_setEligibleForSynthesis:(BOOL)arg1;
- (void)_setPreparationBlockCompleted:(BOOL)arg1;
- (void)_setText:(id)arg1;
- (void)_updateSynthesisEligibility;
- (id)analyticsContext;
- (id)animationIdentifier;
- (id)delegate;
- (id)description;
- (BOOL)durationHasElapsed;
- (void)executeCompletion;
- (id)init;
- (id)initWithText:(id)arg1 provisional:(BOOL)arg2 eligibleAfterDuration:(double)arg3 preparation:(id /* block */)arg4 completion:(id /* block */)arg5 animationIdentifier:(id)arg6 analyticsContext:(id)arg7;
- (BOOL)isEligibleForSynthesis;
- (BOOL)isPhonetic;
- (BOOL)isProvisional;
- (BOOL)preprationBlockCompleted;
- (void)setDelegate:(id)arg1;
- (void)setIsPhonetic:(BOOL)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSynthesisResult:(int)arg1;
- (id)speechRequest;
- (int)synthesisResult;
- (id)text;

@end
