/* Generated by RuntimeBrowser.
 */

@protocol MFComposeTypeFactoryDelegate <NSObject>

@required

- (MFMailAccountProxyGenerator *)accountProxyGenerator;
- (NSArray *)attachments;
- (NSArray *)bccRecipients;
- (MFComposeBodyField *)bodyField;
- (NSArray *)ccRecipients;
- (BOOL)hasAnyHiddenTrailingEmptyQuote;
- (MFMutableMessageHeaders *)savedHeaders;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setBccRecipients:(NSArray *)arg1;
- (void)setCcRecipients:(NSArray *)arg1;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (void)setSendingEmailAddress:(NSString *)arg1 addIfNotPresent:(BOOL)arg2;
- (void)setSubject:(NSString *)arg1;
- (void)setToRecipients:(NSArray *)arg1;
- (NSString *)subject;
- (NSArray *)toRecipients;

@optional

- (void)addSignature:(BOOL)arg1;

@end
