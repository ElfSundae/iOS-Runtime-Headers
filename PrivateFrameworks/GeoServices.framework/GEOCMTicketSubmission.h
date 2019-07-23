/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMTicketSubmission : PBCodable <NSCopying> {
    NSData * _devicePushToken;
    struct { 
        unsigned int problemType : 1; 
    }  _has;
    GEORPProblemContext * _problemContext;
    GEORPProblemCorrections * _problemCorrections;
    int  _problemType;
    NSString * _userEmail;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _userPaths;
}

@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) BOOL hasDevicePushToken;
@property (nonatomic, readonly) BOOL hasProblemContext;
@property (nonatomic, readonly) BOOL hasProblemCorrections;
@property (nonatomic) BOOL hasProblemType;
@property (nonatomic, readonly) BOOL hasUserEmail;
@property (nonatomic, retain) GEORPProblemContext *problemContext;
@property (nonatomic, retain) GEORPProblemCorrections *problemCorrections;
@property (nonatomic) int problemType;
@property (nonatomic, retain) NSString *userEmail;
@property (nonatomic, readonly) int*userPaths;
@property (nonatomic, readonly) unsigned int userPathsCount;

- (int)StringAsProblemType:(id)arg1;
- (int)StringAsUserPaths:(id)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (BOOL)hasDevicePushToken;
- (BOOL)hasProblemContext;
- (BOOL)hasProblemCorrections;
- (BOOL)hasProblemType;
- (BOOL)hasUserEmail;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemContext;
- (id)problemCorrections;
- (int)problemType;
- (id)problemTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHasProblemType:(BOOL)arg1;
- (void)setProblemContext:(id)arg1;
- (void)setProblemCorrections:(id)arg1;
- (void)setProblemType:(int)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setUserPaths:(int*)arg1 count:(unsigned int)arg2;
- (id)userEmail;
- (int)userPathAtIndex:(unsigned int)arg1;
- (int*)userPaths;
- (id)userPathsAsString:(int)arg1;
- (unsigned int)userPathsCount;
- (void)writeTo:(id)arg1;

@end
