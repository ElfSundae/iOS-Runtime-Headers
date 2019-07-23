/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int numAccessories : 1; 
        unsigned int triggerSource : 1; 
    }  _has;
    unsigned int  _numAccessories;
    unsigned long long  _timestamp;
    NSString * _transaction;
    int  _triggerSource;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransaction;
@property (nonatomic) BOOL hasTriggerSource;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transaction;
@property (nonatomic) int triggerSource;

- (void).cxx_destruct;
- (int)StringAsTriggerSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasNumAccessories;
- (BOOL)hasTimestamp;
- (BOOL)hasTransaction;
- (BOOL)hasTriggerSource;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasNumAccessories:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTriggerSource:(BOOL)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTriggerSource:(int)arg1;
- (unsigned long long)timestamp;
- (id)transaction;
- (int)triggerSource;
- (id)triggerSourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
