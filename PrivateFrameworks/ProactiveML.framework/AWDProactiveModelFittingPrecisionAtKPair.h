/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {
    struct { 
        unsigned int k : 1; 
        unsigned int precision : 1; 
    }  _has;
    unsigned long long  _k;
    float  _precision;
}

@property (nonatomic) bool hasK;
@property (nonatomic) bool hasPrecision;
@property (nonatomic) unsigned long long k;
@property (nonatomic) float precision;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasK;
- (bool)hasPrecision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)k;
- (void)mergeFrom:(id)arg1;
- (float)precision;
- (bool)readFrom:(id)arg1;
- (void)setHasK:(bool)arg1;
- (void)setHasPrecision:(bool)arg1;
- (void)setK:(unsigned long long)arg1;
- (void)setPrecision:(float)arg1;
- (void)writeTo:(id)arg1;

@end
