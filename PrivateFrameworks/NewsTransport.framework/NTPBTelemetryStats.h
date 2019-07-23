/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetryStats : PBCodable <NSCopying> {
    long long  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int max : 1; 
        unsigned int mean : 1; 
        unsigned int median : 1; 
        unsigned int min : 1; 
        unsigned int percentile95 : 1; 
    }  _has;
    long long  _max;
    long long  _mean;
    long long  _median;
    long long  _min;
    long long  _percentile95;
}

@property (nonatomic) long long count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasPercentile95;
@property (nonatomic) long long max;
@property (nonatomic) long long mean;
@property (nonatomic) long long median;
@property (nonatomic) long long min;
@property (nonatomic) long long percentile95;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasMax;
- (BOOL)hasMean;
- (BOOL)hasMedian;
- (BOOL)hasMin;
- (BOOL)hasPercentile95;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)max;
- (long long)mean;
- (long long)median;
- (void)mergeFrom:(id)arg1;
- (long long)min;
- (long long)percentile95;
- (BOOL)readFrom:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasMax:(BOOL)arg1;
- (void)setHasMean:(BOOL)arg1;
- (void)setHasMedian:(BOOL)arg1;
- (void)setHasMin:(BOOL)arg1;
- (void)setHasPercentile95:(BOOL)arg1;
- (void)setMax:(long long)arg1;
- (void)setMean:(long long)arg1;
- (void)setMedian:(long long)arg1;
- (void)setMin:(long long)arg1;
- (void)setPercentile95:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
