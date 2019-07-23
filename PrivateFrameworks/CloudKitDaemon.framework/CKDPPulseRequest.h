/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseRequest : PBRequest <NSCopying> {
    int _apnsEnv;
    NSString *_etag;
    struct { 
        unsigned int lookbackWindowMillis : 1; 
        unsigned int apnsEnv : 1; 
        unsigned int reset : 1; 
    } _has;
    long long _lookbackWindowMillis;
    CKDPPulseData *_pulseData;
    NSData *_pushToken;
    BOOL _reset;
    CKDPShareIdentifier *_shareId;
}

@property (nonatomic) int apnsEnv;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) BOOL hasApnsEnv;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic) BOOL hasLookbackWindowMillis;
@property (nonatomic, readonly) BOOL hasPulseData;
@property (nonatomic, readonly) BOOL hasPushToken;
@property (nonatomic) BOOL hasReset;
@property (nonatomic, readonly) BOOL hasShareId;
@property (nonatomic) long long lookbackWindowMillis;
@property (nonatomic, retain) CKDPPulseData *pulseData;
@property (nonatomic, retain) NSData *pushToken;
@property (nonatomic) BOOL reset;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (int)apnsEnv;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasApnsEnv;
- (BOOL)hasEtag;
- (BOOL)hasLookbackWindowMillis;
- (BOOL)hasPulseData;
- (BOOL)hasPushToken;
- (BOOL)hasReset;
- (BOOL)hasShareId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)lookbackWindowMillis;
- (void)mergeFrom:(id)arg1;
- (id)pulseData;
- (id)pushToken;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (BOOL)reset;
- (Class)responseClass;
- (void)setApnsEnv:(int)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasApnsEnv:(BOOL)arg1;
- (void)setHasLookbackWindowMillis:(BOOL)arg1;
- (void)setHasReset:(BOOL)arg1;
- (void)setLookbackWindowMillis:(long long)arg1;
- (void)setPulseData:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setReset:(BOOL)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
