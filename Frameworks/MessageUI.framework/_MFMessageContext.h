/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMessageContext : NSObject <MFMessageContext> {
    <MFMessageContextDelegate> * _delegate;
    MFMessagePayload * _inputMessagePayload;
    NSArray * _recipientIdentifiers;
    NSUUID * _senderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMessageContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MFMessagePayload *inputMessagePayload;
@property (nonatomic, readonly) NSArray *recipientIdentifiers;
@property (nonatomic, readonly) NSUUID *senderIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelComposingMessage;
- (id)_initWithInputMessagePayload:(id)arg1;
- (id)delegate;
- (id)inputMessagePayload;
- (void)insertImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)recipientIdentifiers;
- (id)senderIdentifier;
- (void)setDelegate:(id)arg1;
- (void)unstageAllItems;
- (void)updateMessagePayload:(id)arg1 completionHandler:(id /* block */)arg2;

@end
