/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSAppDeliveryReceipt : PBCodable <NSCopying> {
    struct { 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int messageSize : 1; 
        unsigned int priority : 1; 
        unsigned int rTT : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _isToDefaultPairedDevice;
    unsigned long long  _messageSize;
    unsigned long long  _priority;
    unsigned long long  _rTT;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsToDefaultPairedDevice;
@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasRTT;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long rTT;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsToDefaultPairedDevice;
- (bool)hasMessageSize;
- (bool)hasPriority;
- (bool)hasRTT;
- (bool)hasService;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)messageSize;
- (unsigned long long)priority;
- (unsigned long long)rTT;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setHasIsToDefaultPairedDevice:(bool)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasRTT:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRTT:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
