/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int protocol : 1; 
        unsigned int provider : 1; 
    }  _has;
    NSString * _hostname;
    AWDMailError * _mailError;
    int  _protocol;
    int  _provider;
    NSString * _serverInfo;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) BOOL hasHostname;
@property (nonatomic, readonly) BOOL hasMailError;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) BOOL hasProvider;
@property (nonatomic, readonly) BOOL hasServerInfo;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *hostname;
@property (nonatomic, retain) AWDMailError *mailError;
@property (nonatomic) int protocol;
@property (nonatomic) int provider;
@property (nonatomic, retain) NSString *serverInfo;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsProtocol:(id)arg1;
- (int)StringAsProvider:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHostname;
- (BOOL)hasMailError;
- (BOOL)hasProtocol;
- (BOOL)hasProvider;
- (BOOL)hasServerInfo;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)hostname;
- (BOOL)isEqual:(id)arg1;
- (id)mailError;
- (void)mergeFrom:(id)arg1;
- (int)protocol;
- (id)protocolAsString:(int)arg1;
- (int)provider;
- (id)providerAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverInfo;
- (void)setHasProtocol:(BOOL)arg1;
- (void)setHasProvider:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHostname:(id)arg1;
- (void)setMailError:(id)arg1;
- (void)setProtocol:(int)arg1;
- (void)setProvider:(int)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
