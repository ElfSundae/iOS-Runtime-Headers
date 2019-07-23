/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFooterView : UIView <PKForegroundActiveArbiterObserver, PKPassFooterContentViewDelegate, PKUIForegroundActiveArbiterDeactivationObserver> {
    bool  _acquiringSession;
    PKPassFooterContentView * _contentView;
    unsigned char  _contentViewVisibility;
    <PKPassFooterViewDelegate> * _delegate;
    bool  _invalidated;
    bool  _isAssistantActive;
    bool  _isBackgrounded;
    PKPassView * _passView;
    long long  _paymentApplicationState;
    NSObject<OS_dispatch_group> * _sessionDelayGroup;
    PKPaymentSessionHandle * _sessionHandle;
    NSObject<OS_dispatch_source> * _sessionStartTimer;
    unsigned long long  _sessionToken;
    long long  _state;
    bool  _userIntentRequired;
    unsigned char  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPassAuthorized, nonatomic, readonly) bool passAuthorized;
@property (nonatomic, retain) PKPassView *passView;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (getter=isUserIntentRequired, nonatomic, readonly) bool userIntentRequired;

- (void).cxx_destruct;
- (void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(bool)arg2;
- (void)_advanceVisibilityToState:(unsigned char)arg1 animated:(bool)arg2;
- (bool)_canApplyContentViewForPersonalizedApplication;
- (bool)_canApplyContentViewForValueAddedService;
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1;
- (void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)_configureForValueAddedServiceWithContext:(id)arg1;
- (id)_contentViewForPaymentApplicationWithContext:(id)arg1;
- (void)_deleteButtonTapped;
- (void)_endSession;
- (void)_endSessionStartTimer;
- (void)_lostModeButtonTapped;
- (void)_setContentView:(id)arg1 animated:(bool)arg2;
- (void)_setUserIntentRequired:(bool)arg1;
- (void)_startContactlessInterfaceSessionWithContext:(id)arg1 sessionAvailable:(id /* block */)arg2 sessionUnavailable:(id /* block */)arg3;
- (void)_updateForForegroundActivePresentationIfNecessaryAnimated:(bool)arg1;
- (void)_updateForNonForegroundActivePresentationAnimated:(bool)arg1;
- (void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)initWithPassView:(id)arg1 state:(long long)arg2 context:(id)arg3;
- (void)invalidate;
- (bool)isPassAuthorized;
- (bool)isPassFooterContentViewInGroup:(id)arg1;
- (bool)isUserIntentRequired;
- (void)layoutSubviews;
- (void)passFooterContentViewDidBeginAuthenticating:(id)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(id)arg1;
- (void)passFooterContentViewDidEndAuthenticating:(id)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
- (id)passView;
- (void)setDelegate:(id)arg1;
- (void)setPassView:(id)arg1;
- (long long)state;
- (unsigned long long)suppressedContentForContentView:(id)arg1;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
