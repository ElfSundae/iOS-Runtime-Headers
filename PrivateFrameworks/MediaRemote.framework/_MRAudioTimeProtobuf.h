/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioTimeProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int sampleRate : 1; 
        unsigned int timestamp : 1; 
    } _has;
    double _sampleRate;
    double _timestamp;
}

@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double sampleRate;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSampleRate;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (double)sampleRate;
- (void)setHasSampleRate:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
