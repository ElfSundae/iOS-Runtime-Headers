/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltDelayToSecondaryDevice : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _delayMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int delayMs : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _uniqueid;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int delayMs;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUniqueid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uniqueid;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)delayMs;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConnectionType;
- (BOOL)hasDelayMs;
- (BOOL)hasTimestamp;
- (BOOL)hasUniqueid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDelayMs:(unsigned int)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasDelayMs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueid:(id)arg1;
- (unsigned long long)timestamp;
- (id)uniqueid;
- (void)writeTo:(id)arg1;

@end
