/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    double  _eventDate;
    NSString * _eventName;
    struct { 
        unsigned int eventDate : 1; 
        unsigned int loiType : 1; 
        unsigned int isEventAllDay : 1; 
    }  _has;
    BOOL  _isEventAllDay;
    NSString * _loiIdentifierString;
    int  _loiType;
}

@property (nonatomic) double eventDate;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic, readonly) BOOL hasEventName;
@property (nonatomic) BOOL hasIsEventAllDay;
@property (nonatomic, readonly) BOOL hasLoiIdentifierString;
@property (nonatomic) BOOL hasLoiType;
@property (nonatomic) BOOL isEventAllDay;
@property (nonatomic) NSUUID *loiIdentifier;
@property (nonatomic, retain) NSString *loiIdentifierString;
@property (nonatomic) int loiType;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (int)StringAsLoiType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventDate;
- (id)eventName;
- (BOOL)hasEventDate;
- (BOOL)hasEventName;
- (BOOL)hasIsEventAllDay;
- (BOOL)hasLoiIdentifierString;
- (BOOL)hasLoiType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEventAllDay;
- (id)loiIdentifier;
- (id)loiIdentifierString;
- (int)loiType;
- (id)loiTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)setHasEventDate:(BOOL)arg1;
- (void)setHasIsEventAllDay:(BOOL)arg1;
- (void)setHasLoiType:(BOOL)arg1;
- (void)setIsEventAllDay:(BOOL)arg1;
- (void)setLoiIdentifier:(id)arg1;
- (void)setLoiIdentifierString:(id)arg1;
- (void)setLoiType:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (id)initWithLOIType:(int)arg1 event:(id)arg2;

@end
