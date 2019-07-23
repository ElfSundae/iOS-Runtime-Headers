/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {
    BOOL  _active;
    int  _command;
    BOOL  _enabled;
    struct { 
        unsigned int command : 1; 
        unsigned int maximumRating : 1; 
        unsigned int minimumRating : 1; 
        unsigned int presentationStyle : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int active : 1; 
        unsigned int enabled : 1; 
    }  _has;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    float  _maximumRating;
    float  _minimumRating;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _preferredIntervals;
    int  _presentationStyle;
    int  _repeatMode;
    int  _shuffleMode;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    }  _supportedRates;
}

@property (nonatomic) BOOL active;
@property (nonatomic) int command;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic, readonly) BOOL hasLocalizedShortTitle;
@property (nonatomic, readonly) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMaximumRating;
@property (nonatomic) BOOL hasMinimumRating;
@property (nonatomic) BOOL hasPresentationStyle;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic, retain) NSString *localizedShortTitle;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic) float maximumRating;
@property (nonatomic) float minimumRating;
@property (nonatomic, readonly) double*preferredIntervals;
@property (nonatomic, readonly) unsigned int preferredIntervalsCount;
@property (nonatomic) int presentationStyle;
@property (nonatomic) int repeatMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic, readonly) float*supportedRates;
@property (nonatomic, readonly) unsigned int supportedRatesCount;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (BOOL)active;
- (void)addPreferredInterval:(double)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearPreferredIntervals;
- (void)clearSupportedRates;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (BOOL)hasActive;
- (BOOL)hasCommand;
- (BOOL)hasEnabled;
- (BOOL)hasLocalizedShortTitle;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasMaximumRating;
- (BOOL)hasMinimumRating;
- (BOOL)hasPresentationStyle;
- (BOOL)hasRepeatMode;
- (BOOL)hasShuffleMode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (float)maximumRating;
- (void)mergeFrom:(id)arg1;
- (float)minimumRating;
- (double)preferredIntervalAtIndex:(unsigned int)arg1;
- (double*)preferredIntervals;
- (unsigned int)preferredIntervalsCount;
- (int)presentationStyle;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCommand:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasActive:(BOOL)arg1;
- (void)setHasCommand:(BOOL)arg1;
- (void)setHasEnabled:(BOOL)arg1;
- (void)setHasMaximumRating:(BOOL)arg1;
- (void)setHasMinimumRating:(BOOL)arg1;
- (void)setHasPresentationStyle:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaximumRating:(float)arg1;
- (void)setMinimumRating:(float)arg1;
- (void)setPreferredIntervals:(double*)arg1 count:(unsigned int)arg2;
- (void)setPresentationStyle:(int)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setSupportedRates:(float*)arg1 count:(unsigned int)arg2;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (float)supportedRateAtIndex:(unsigned int)arg1;
- (float*)supportedRates;
- (unsigned int)supportedRatesCount;
- (void)writeTo:(id)arg1;

@end
