/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessage : PBCodable <NSCopying, NSSecureCoding, _INPBMessage> {
    NSArray * _attachments;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    NSString * _content;
    NSString * _conversationIdentifier;
    _INPBDateTime * _dateLastMessageRead;
    _INPBDateTime * _dateSent;
    int  _effect;
    NSString * _fileExtension;
    NSString * _groupName;
    struct { 
        unsigned int effect : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    _INPBMessageLinkMetadata * _linkMetadata;
    NSString * _locationName;
    _INPBInteger * _numberOfAttachments;
    _INPBCurrencyAmountValue * _paymentAmount;
    NSArray * _recipients;
    _INPBMessage * _referencedMessage;
    _INPBContact * _sender;
    _INPBDataString * _speakableGroupName;
    int  _type;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly) unsigned long long attachmentsCount;
@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, retain) _INPBDateTime *dateLastMessageRead;
@property (nonatomic, retain) _INPBDateTime *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effect;
@property (nonatomic, copy) NSString *fileExtension;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasDateLastMessageRead;
@property (nonatomic, readonly) bool hasDateSent;
@property (nonatomic) bool hasEffect;
@property (nonatomic, readonly) bool hasFileExtension;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLinkMetadata;
@property (nonatomic, readonly) bool hasLocationName;
@property (nonatomic, readonly) bool hasNumberOfAttachments;
@property (nonatomic, readonly) bool hasPaymentAmount;
@property (nonatomic, readonly) bool hasReferencedMessage;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBMessageLinkMetadata *linkMetadata;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, retain) _INPBInteger *numberOfAttachments;
@property (nonatomic, retain) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic, retain) _INPBMessage *referencedMessage;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (Class)attachmentType;
+ (Class)recipientType;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (int)StringAsEffect:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)addAttribute:(int)arg1;
- (void)addRecipient:(id)arg1;
- (id)attachmentAtIndex:(unsigned long long)arg1;
- (id)attachments;
- (unsigned long long)attachmentsCount;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttachments;
- (void)clearAttributes;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateLastMessageRead;
- (id)dateSent;
- (id)dictionaryRepresentation;
- (int)effect;
- (id)effectAsString:(int)arg1;
- (id)fileExtension;
- (id)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasDateLastMessageRead;
- (bool)hasDateSent;
- (bool)hasEffect;
- (bool)hasFileExtension;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasLinkMetadata;
- (bool)hasLocationName;
- (bool)hasNumberOfAttachments;
- (bool)hasPaymentAmount;
- (bool)hasReferencedMessage;
- (bool)hasSender;
- (bool)hasSpeakableGroupName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)linkMetadata;
- (id)locationName;
- (id)numberOfAttachments;
- (id)paymentAmount;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)referencedMessage;
- (id)sender;
- (void)setAttachments:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDateLastMessageRead:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setNumberOfAttachments:(id)arg1;
- (void)setPaymentAmount:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (void)setType:(int)arg1;
- (id)speakableGroupName;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
