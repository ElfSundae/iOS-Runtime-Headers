/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying> {
    bool  _comparedRideOptions;
    GEOLatLng * _destinationBlurred;
    double  _distanceToPickupInMeters;
    double  _durationOfSessionInSeconds;
    int  _endState;
    int  _endView;
    NSMutableArray * _errorMessages;
    bool  _exploredOtherOptions;
    struct { 
        unsigned int has_distanceToPickupInMeters : 1; 
        unsigned int has_durationOfSessionInSeconds : 1; 
        unsigned int has_timestamp : 1; 
        unsigned int has_endState : 1; 
        unsigned int has_endView : 1; 
        unsigned int has_numberOfAvailableExtensions : 1; 
        unsigned int has_statusIssue : 1; 
        unsigned int has_comparedRideOptions : 1; 
        unsigned int has_exploredOtherOptions : 1; 
        unsigned int has_installedApp : 1; 
        unsigned int has_movedPickupLocation : 1; 
        unsigned int has_paymentIsApplePay : 1; 
        unsigned int has_showedSurgePricingAlert : 1; 
        unsigned int has_switchedApp : 1; 
        unsigned int has_unavailable : 1; 
        unsigned int read_destinationBlurred : 1; 
        unsigned int read_errorMessages : 1; 
        unsigned int read_intentResponseFailures : 1; 
        unsigned int read_originBlurred : 1; 
        unsigned int read_rideAppId : 1; 
        unsigned int read_rideAppVersion : 1; 
        unsigned int read_rideBookingSessionId : 1; 
        unsigned int read_rideType : 1; 
        unsigned int wrote_destinationBlurred : 1; 
        unsigned int wrote_distanceToPickupInMeters : 1; 
        unsigned int wrote_durationOfSessionInSeconds : 1; 
        unsigned int wrote_errorMessages : 1; 
        unsigned int wrote_intentResponseFailures : 1; 
        unsigned int wrote_originBlurred : 1; 
        unsigned int wrote_rideAppId : 1; 
        unsigned int wrote_rideAppVersion : 1; 
        unsigned int wrote_rideBookingSessionId : 1; 
        unsigned int wrote_rideType : 1; 
        unsigned int wrote_timestamp : 1; 
        unsigned int wrote_endState : 1; 
        unsigned int wrote_endView : 1; 
        unsigned int wrote_numberOfAvailableExtensions : 1; 
        unsigned int wrote_statusIssue : 1; 
        unsigned int wrote_comparedRideOptions : 1; 
        unsigned int wrote_exploredOtherOptions : 1; 
        unsigned int wrote_installedApp : 1; 
        unsigned int wrote_movedPickupLocation : 1; 
        unsigned int wrote_paymentIsApplePay : 1; 
        unsigned int wrote_showedSurgePricingAlert : 1; 
        unsigned int wrote_switchedApp : 1; 
        unsigned int wrote_unavailable : 1; 
    }  _flags;
    bool  _installedApp;
    NSMutableArray * _intentResponseFailures;
    bool  _movedPickupLocation;
    unsigned int  _numberOfAvailableExtensions;
    GEOLatLng * _originBlurred;
    bool  _paymentIsApplePay;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _rideAppId;
    NSString * _rideAppVersion;
    NSString * _rideBookingSessionId;
    NSString * _rideType;
    bool  _showedSurgePricingAlert;
    int  _statusIssue;
    bool  _switchedApp;
    long long  _timestamp;
    bool  _unavailable;
}

@property (nonatomic) bool comparedRideOptions;
@property (nonatomic, retain) GEOLatLng *destinationBlurred;
@property (nonatomic) double distanceToPickupInMeters;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) int endState;
@property (nonatomic) int endView;
@property (nonatomic, retain) NSMutableArray *errorMessages;
@property (nonatomic) bool exploredOtherOptions;
@property (nonatomic) bool hasComparedRideOptions;
@property (nonatomic, readonly) bool hasDestinationBlurred;
@property (nonatomic) bool hasDistanceToPickupInMeters;
@property (nonatomic) bool hasDurationOfSessionInSeconds;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasEndView;
@property (nonatomic) bool hasExploredOtherOptions;
@property (nonatomic) bool hasInstalledApp;
@property (nonatomic) bool hasMovedPickupLocation;
@property (nonatomic) bool hasNumberOfAvailableExtensions;
@property (nonatomic, readonly) bool hasOriginBlurred;
@property (nonatomic) bool hasPaymentIsApplePay;
@property (nonatomic, readonly) bool hasRideAppId;
@property (nonatomic, readonly) bool hasRideAppVersion;
@property (nonatomic, readonly) bool hasRideBookingSessionId;
@property (nonatomic, readonly) bool hasRideType;
@property (nonatomic) bool hasShowedSurgePricingAlert;
@property (nonatomic) bool hasStatusIssue;
@property (nonatomic) bool hasSwitchedApp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnavailable;
@property (nonatomic) bool installedApp;
@property (nonatomic, retain) NSMutableArray *intentResponseFailures;
@property (nonatomic) bool movedPickupLocation;
@property (nonatomic) unsigned int numberOfAvailableExtensions;
@property (nonatomic, retain) GEOLatLng *originBlurred;
@property (nonatomic) bool paymentIsApplePay;
@property (nonatomic, retain) NSString *rideAppId;
@property (nonatomic, retain) NSString *rideAppVersion;
@property (nonatomic, retain) NSString *rideBookingSessionId;
@property (nonatomic, retain) NSString *rideType;
@property (nonatomic) bool showedSurgePricingAlert;
@property (nonatomic) int statusIssue;
@property (nonatomic) bool switchedApp;
@property (nonatomic) long long timestamp;
@property (nonatomic) bool unavailable;

+ (Class)errorMessageType;
+ (Class)intentResponseFailureType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsEndView:(id)arg1;
- (int)StringAsStatusIssue:(id)arg1;
- (void)_addNoFlagsErrorMessage:(id)arg1;
- (void)_addNoFlagsIntentResponseFailure:(id)arg1;
- (void)_readDestinationBlurred;
- (void)_readErrorMessages;
- (void)_readIntentResponseFailures;
- (void)_readOriginBlurred;
- (void)_readRideAppId;
- (void)_readRideAppVersion;
- (void)_readRideBookingSessionId;
- (void)_readRideType;
- (void)addErrorMessage:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearErrorMessages;
- (void)clearIntentResponseFailures;
- (bool)comparedRideOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationBlurred;
- (id)dictionaryRepresentation;
- (double)distanceToPickupInMeters;
- (double)durationOfSessionInSeconds;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (int)endView;
- (id)endViewAsString:(int)arg1;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (id)errorMessages;
- (unsigned long long)errorMessagesCount;
- (bool)exploredOtherOptions;
- (bool)hasComparedRideOptions;
- (bool)hasDestinationBlurred;
- (bool)hasDistanceToPickupInMeters;
- (bool)hasDurationOfSessionInSeconds;
- (bool)hasEndState;
- (bool)hasEndView;
- (bool)hasExploredOtherOptions;
- (bool)hasInstalledApp;
- (bool)hasMovedPickupLocation;
- (bool)hasNumberOfAvailableExtensions;
- (bool)hasOriginBlurred;
- (bool)hasPaymentIsApplePay;
- (bool)hasRideAppId;
- (bool)hasRideAppVersion;
- (bool)hasRideBookingSessionId;
- (bool)hasRideType;
- (bool)hasShowedSurgePricingAlert;
- (bool)hasStatusIssue;
- (bool)hasSwitchedApp;
- (bool)hasTimestamp;
- (bool)hasUnavailable;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)installedApp;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (id)intentResponseFailures;
- (unsigned long long)intentResponseFailuresCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)movedPickupLocation;
- (unsigned int)numberOfAvailableExtensions;
- (id)originBlurred;
- (bool)paymentIsApplePay;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)rideAppId;
- (id)rideAppVersion;
- (id)rideBookingSessionId;
- (id)rideType;
- (void)setComparedRideOptions:(bool)arg1;
- (void)setDestinationBlurred:(id)arg1;
- (void)setDistanceToPickupInMeters:(double)arg1;
- (void)setDurationOfSessionInSeconds:(double)arg1;
- (void)setEndState:(int)arg1;
- (void)setEndView:(int)arg1;
- (void)setErrorMessages:(id)arg1;
- (void)setExploredOtherOptions:(bool)arg1;
- (void)setHasComparedRideOptions:(bool)arg1;
- (void)setHasDistanceToPickupInMeters:(bool)arg1;
- (void)setHasDurationOfSessionInSeconds:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasEndView:(bool)arg1;
- (void)setHasExploredOtherOptions:(bool)arg1;
- (void)setHasInstalledApp:(bool)arg1;
- (void)setHasMovedPickupLocation:(bool)arg1;
- (void)setHasNumberOfAvailableExtensions:(bool)arg1;
- (void)setHasPaymentIsApplePay:(bool)arg1;
- (void)setHasShowedSurgePricingAlert:(bool)arg1;
- (void)setHasStatusIssue:(bool)arg1;
- (void)setHasSwitchedApp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnavailable:(bool)arg1;
- (void)setInstalledApp:(bool)arg1;
- (void)setIntentResponseFailures:(id)arg1;
- (void)setMovedPickupLocation:(bool)arg1;
- (void)setNumberOfAvailableExtensions:(unsigned int)arg1;
- (void)setOriginBlurred:(id)arg1;
- (void)setPaymentIsApplePay:(bool)arg1;
- (void)setRideAppId:(id)arg1;
- (void)setRideAppVersion:(id)arg1;
- (void)setRideBookingSessionId:(id)arg1;
- (void)setRideType:(id)arg1;
- (void)setShowedSurgePricingAlert:(bool)arg1;
- (void)setStatusIssue:(int)arg1;
- (void)setSwitchedApp:(bool)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setUnavailable:(bool)arg1;
- (bool)showedSurgePricingAlert;
- (int)statusIssue;
- (id)statusIssueAsString:(int)arg1;
- (bool)switchedApp;
- (long long)timestamp;
- (bool)unavailable;
- (void)writeTo:(id)arg1;

@end
