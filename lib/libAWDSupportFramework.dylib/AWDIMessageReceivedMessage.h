/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageReceivedMessage : PBCodable <NSCopying> {
    int  _fzError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isTypingIndicator : 1; 
        unsigned int messageError : 1; 
    }  _has;
    unsigned int  _hasAttachments;
    unsigned int  _isFromEmail;
    unsigned int  _isFromPhoneNumber;
    unsigned int  _isGroupMessage;
    unsigned int  _isTypingIndicator;
    unsigned int  _messageError;
    unsigned long long  _timestamp;
}

@property (nonatomic) int fzError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) unsigned int hasAttachments;
@property (nonatomic) BOOL hasFzError;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasHasAttachments;
@property (nonatomic) BOOL hasIsFromEmail;
@property (nonatomic) BOOL hasIsFromPhoneNumber;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (nonatomic) BOOL hasIsTypingIndicator;
@property (nonatomic) BOOL hasMessageError;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int isFromEmail;
@property (nonatomic) unsigned int isFromPhoneNumber;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) unsigned int isTypingIndicator;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fzError;
- (id)guid;
- (unsigned int)hasAttachments;
- (BOOL)hasFzError;
- (BOOL)hasGuid;
- (BOOL)hasHasAttachments;
- (BOOL)hasIsFromEmail;
- (BOOL)hasIsFromPhoneNumber;
- (BOOL)hasIsGroupMessage;
- (BOOL)hasIsTypingIndicator;
- (BOOL)hasMessageError;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isFromEmail;
- (unsigned int)isFromPhoneNumber;
- (unsigned int)isGroupMessage;
- (unsigned int)isTypingIndicator;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageError;
- (BOOL)readFrom:(id)arg1;
- (void)setFzError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setHasHasAttachments:(BOOL)arg1;
- (void)setHasIsFromEmail:(BOOL)arg1;
- (void)setHasIsFromPhoneNumber:(BOOL)arg1;
- (void)setHasIsGroupMessage:(BOOL)arg1;
- (void)setHasIsTypingIndicator:(BOOL)arg1;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (void)setIsTypingIndicator:(unsigned int)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
