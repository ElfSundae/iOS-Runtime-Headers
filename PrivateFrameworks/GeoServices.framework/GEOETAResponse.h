/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResponse : PBCodable <NSCopying> {
    unsigned long long  _debugServerLatencyMs;
    NSMutableArray * _etaResultReferencePointDestinations;
    GEOETAResult * _etaResultReferencePointOrigin;
    NSMutableArray * _etaResults;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int debugServerLatencyMs : 1; 
        unsigned int status : 1; 
    }  _has;
    GEOPlaceSearchResponse * _originPlaceSearchResponse;
    struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _problemDetails;
    unsigned int  _problemDetailsCount;
    unsigned int  _problemDetailsSpace;
    int  _status;
}

@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (nonatomic, retain) NSMutableArray *etaResultReferencePointDestinations;
@property (nonatomic, retain) GEOETAResult *etaResultReferencePointOrigin;
@property (nonatomic, retain) NSMutableArray *etaResults;
@property (nonatomic, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic) BOOL hasDebugServerLatencyMs;
@property (nonatomic, readonly) BOOL hasEtaResultReferencePointOrigin;
@property (nonatomic, readonly) BOOL hasEtaServiceSummary;
@property (nonatomic, readonly) BOOL hasOriginPlaceSearchResponse;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, retain) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (nonatomic, readonly) struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*problemDetails;
@property (nonatomic, readonly) unsigned int problemDetailsCount;
@property (nonatomic) int status;

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;

- (int)StringAsStatus:(id)arg1;
- (void)addEtaResult:(id)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearEtaResultReferencePointDestinations;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)debugServerLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned int)arg1;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned int)arg1;
- (id)etaResultReferencePointDestinations;
- (unsigned int)etaResultReferencePointDestinationsCount;
- (id)etaResultReferencePointOrigin;
- (id)etaResults;
- (unsigned int)etaResultsCount;
- (id)etaServiceSummary;
- (BOOL)hasDebugServerLatencyMs;
- (BOOL)hasEtaResultReferencePointOrigin;
- (BOOL)hasEtaServiceSummary;
- (BOOL)hasOriginPlaceSearchResponse;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originPlaceSearchResponse;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned int)arg1;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned int)problemDetailsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaResultReferencePointDestinations:(id)arg1;
- (void)setEtaResultReferencePointOrigin:(id)arg1;
- (void)setEtaResults:(id)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setOriginPlaceSearchResponse:(id)arg1;
- (void)setProblemDetails:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
