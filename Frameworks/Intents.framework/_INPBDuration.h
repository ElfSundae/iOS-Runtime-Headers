/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDuration : PBCodable <NSCopying> {
    struct { 
        unsigned int seconds : 1; 
        unsigned int nanos : 1; 
    }  _has;
    int  _nanos;
    long long  _seconds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL hasNanos;
@property (nonatomic) BOOL hasSeconds;
@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNanos;
- (BOOL)hasSeconds;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nanos;
- (BOOL)readFrom:(id)arg1;
- (long long)seconds;
- (void)setHasNanos:(BOOL)arg1;
- (void)setHasSeconds:(BOOL)arg1;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
