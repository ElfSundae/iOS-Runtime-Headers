/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxLeSendDataRequest : PBRequest <NSCopying> {
    unsigned int  _dataLength;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
    }  _has;
    NSString * _peerId;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dataLength;
@property (nonatomic) bool hasDataLength;
@property (nonatomic, readonly) bool hasPeerId;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataLength;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataLength;
- (bool)hasPeerId;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDataLength:(unsigned int)arg1;
- (void)setHasDataLength:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPeerId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
