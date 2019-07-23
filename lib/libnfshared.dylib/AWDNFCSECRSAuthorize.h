/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {
    bool  _activated;
    NSData * _aid;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int activated : 1; 
    }  _has;
    unsigned int  _method;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) bool activated;
@property (nonatomic, retain) NSData *aid;
@property (nonatomic) bool hasActivated;
@property (nonatomic, readonly) bool hasAid;
@property (nonatomic) bool hasMethod;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int method;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (bool)activated;
- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivated;
- (bool)hasAid;
- (bool)hasMethod;
- (bool)hasStatus;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)method;
- (bool)readFrom:(id)arg1;
- (void)setActivated:(bool)arg1;
- (void)setAid:(id)arg1;
- (void)setHasActivated:(bool)arg1;
- (void)setHasMethod:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
