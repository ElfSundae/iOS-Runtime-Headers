/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSDeliveryEvent : TPSDeliveryObject {
    NSDate * _eventSinceDate;
    NSString * _identifier;
    NSString * _key;
    NSDate * _matchedDate;
    unsigned int  _minObservationCount;
    NSMutableDictionary * _observationMap;
    NSMutableSet * _observerIdentifiers;
    TPSDeliveryEvent * _state;
    unsigned long long  _status;
    long long  _type;
}

@property (nonatomic, readonly) unsigned int currentObservationCount;
@property (nonatomic, copy) NSDate *eventSinceDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSDate *matchedDate;
@property (nonatomic) unsigned int minObservationCount;
@property (nonatomic, retain) NSMutableDictionary *observationMap;
@property (nonatomic, retain) NSMutableSet *observerIdentifiers;
@property (nonatomic, copy) TPSDeliveryEvent *state;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long type;

+ (id)classSet;
+ (id)identifierFromEventInfoDictionary:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeFromEventDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addObserverIdentifier:(id)arg1;
- (bool)canBeRemoved;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentObservationCount;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventSinceDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)key;
- (id)matchedDate;
- (unsigned int)minObservationCount;
- (id)newStateFromStateDictionary:(id)arg1;
- (id)observationMap;
- (bool)observedWithResults:(id)arg1;
- (id)observerIdentifiers;
- (void)removeAllObservations;
- (void)removeObserverIdentifiers:(id)arg1;
- (void)removeOutdatedObservationDates;
- (void)setEventSinceDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMatchedDate:(id)arg1;
- (void)setMinObservationCount:(unsigned int)arg1;
- (void)setObservationMap:(id)arg1;
- (void)setObserverIdentifiers:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (id)state;
- (unsigned long long)status;
- (long long)type;

@end
