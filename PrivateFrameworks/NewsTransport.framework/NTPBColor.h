/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBColor : PBCodable <NSCopying> {
    double  _a;
    double  _b;
    double  _g;
    struct { 
        unsigned int a : 1; 
        unsigned int b : 1; 
        unsigned int g : 1; 
        unsigned int r : 1; 
    }  _has;
    double  _r;
}

@property (nonatomic) double a;
@property (nonatomic) double b;
@property (nonatomic) double g;
@property (nonatomic) bool hasA;
@property (nonatomic) bool hasB;
@property (nonatomic) bool hasG;
@property (nonatomic) bool hasR;
@property (nonatomic) double r;

- (double)a;
- (double)b;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)g;
- (bool)hasA;
- (bool)hasB;
- (bool)hasG;
- (bool)hasR;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)r;
- (bool)readFrom:(id)arg1;
- (void)setA:(double)arg1;
- (void)setB:(double)arg1;
- (void)setG:(double)arg1;
- (void)setHasA:(bool)arg1;
- (void)setHasB:(bool)arg1;
- (void)setHasG:(bool)arg1;
- (void)setHasR:(bool)arg1;
- (void)setR:(double)arg1;
- (void)writeTo:(id)arg1;

@end
