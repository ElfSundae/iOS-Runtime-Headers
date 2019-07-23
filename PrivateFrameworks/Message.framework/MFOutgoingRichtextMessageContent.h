/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {
    NSArray *_mixedContent;
    MFPlainTextDocument *_plaintextAlternative;
    BOOL _textPartsAreHTML;
}

@property (nonatomic, retain) NSArray *mixedContent;
@property (nonatomic, retain) MFPlainTextDocument *plaintextAlternative;
@property (nonatomic) BOOL textPartsAreHTML;

- (id)copy;
- (void)dealloc;
- (id)mixedContent;
- (id)plaintextAlternative;
- (id)richtextContent;
- (void)setMixedContent:(id)arg1;
- (void)setPlaintextAlternative:(id)arg1;
- (void)setTextPartsAreHTML:(BOOL)arg1;
- (BOOL)textPartsAreHTML;

@end
