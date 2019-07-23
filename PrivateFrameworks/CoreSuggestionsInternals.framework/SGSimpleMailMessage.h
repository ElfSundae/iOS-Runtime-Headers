/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSimpleMailMessage : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_accountHandles;
    NSArray *_bcc;
    NSString *_body;
    NSArray *_cc;
    NSDate *_date;
    SGSimpleNamedEmailAddress *_from;
    NSArray *_headers;
    NSString *_htmlBody;
    NSData *_htmlData;
    unsigned int _htmlDataEncoding;
    BOOL _isInhuman;
    BOOL _isPartiallyDownloaded;
    SGSimpleNamedEmailAddress *_mailingList;
    NSString *_messageId;
    NSNumber *_received;
    SGSimpleNamedEmailAddress *_replyTo;
    NSString *_subject;
    NSArray *_to;
}

@property (nonatomic, copy) NSArray *accountHandles;
@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *from;
@property (nonatomic, readonly) NSArray *headers;
@property (nonatomic, copy) NSString *htmlBody;
@property (nonatomic, readonly) NSData *htmlData;
@property (nonatomic, readonly) unsigned int htmlDataEncoding;
@property (nonatomic) BOOL isInhuman;
@property (nonatomic) BOOL isPartiallyDownloaded;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *mailingList;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSNumber *received;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *replyTo;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *to;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)fromDictionary:(id)arg1;
+ (id)fromMFMailMessage:(id)arg1;
+ (BOOL)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (id)messageWithSearchableItem:(id)arg1;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)simpleMailMessageFromHeadersOfMessage:(id)arg1;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandles;
- (id)asDictionary;
- (id)bcc;
- (id)body;
- (id)cc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (unsigned int)hash;
- (id)headers;
- (id)headersDictionary;
- (id)htmlBody;
- (id)htmlData;
- (unsigned int)htmlDataEncoding;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleMailMessage:(id)arg1;
- (BOOL)isInhuman;
- (BOOL)isPartiallyDownloaded;
- (id)mailingList;
- (id)messageId;
- (id)received;
- (id)replyTo;
- (id)rfc822Data;
- (id)searchableItem;
- (id)searchableItemWithSource:(id)arg1;
- (void)setAccountHandles:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHtmlBody:(id)arg1;
- (void)setIsInhuman:(BOOL)arg1;
- (void)setIsPartiallyDownloaded:(BOOL)arg1;
- (void)setMailingList:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setReceived:(id)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;
- (id)uniqueId;

@end
