/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController> {
    <SiriUIBaseAceObjectViewControllerDelegate> * _delegate;
    SiriUISashItem * _sashItem;
    bool  _utteranceUserInteractionEnabled;
    AceObject * aceObject;
}

@property (nonatomic, retain) AceObject *aceObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIBaseAceObjectViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SiriUISashItem *sashItem;
@property (nonatomic, retain) SAUISnippet *snippet;
@property (readonly) Class superclass;
@property (getter=isUtteranceUserInteractionEnabled, nonatomic) bool utteranceUserInteractionEnabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)aceObject;
- (id)delegate;
- (double)desiredHeight;
- (double)desiredTopPaddingBelowController:(id)arg1;
- (bool)isUtteranceUserInteractionEnabled;
- (id)sashItem;
- (void)setAceObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnippet:(id)arg1;
- (void)setUtteranceUserInteractionEnabled:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
- (id)snippet;
- (void)wasAddedToTranscript;

@end
