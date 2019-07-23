/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelAvailability : PBCodable <NSCopying> {
    int  _availability;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int availability : 1; 
        unsigned int precisionRecall : 1; 
    }  _has;
    unsigned int  _precisionRecall;
    unsigned long long  _timestamp;
}

@property (nonatomic) int availability;
@property (nonatomic) BOOL hasAvailability;
@property (nonatomic) BOOL hasPrecisionRecall;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int precisionRecall;
@property (nonatomic) unsigned long long timestamp;

- (int)availability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAvailability;
- (BOOL)hasPrecisionRecall;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)precisionRecall;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailability:(int)arg1;
- (void)setHasAvailability:(BOOL)arg1;
- (void)setHasPrecisionRecall:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPrecisionRecall:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
