/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInteractionProtocolEventCandidatesOffered : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIAutocorrectionList * _candidates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
