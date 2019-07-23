/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingContinuityKeyboardResult : PBCodable <NSCopying> {
    unsigned int  _bannerVisibleMs;
    unsigned int  _beginEditingCount;
    unsigned int  _closeAction;
    bool  _directInput;
    unsigned int  _endEditingCount;
    bool  _externalInput;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bannerVisibleMs : 1; 
        unsigned int beginEditingCount : 1; 
        unsigned int closeAction : 1; 
        unsigned int endEditingCount : 1; 
        unsigned int mainUIVisibleMs : 1; 
        unsigned int openAction : 1; 
        unsigned int directInput : 1; 
        unsigned int externalInput : 1; 
        unsigned int secureInput : 1; 
    }  _has;
    unsigned int  _mainUIVisibleMs;
    unsigned int  _openAction;
    bool  _secureInput;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int bannerVisibleMs;
@property (nonatomic) unsigned int beginEditingCount;
@property (nonatomic) unsigned int closeAction;
@property (nonatomic) bool directInput;
@property (nonatomic) unsigned int endEditingCount;
@property (nonatomic) bool externalInput;
@property (nonatomic) bool hasBannerVisibleMs;
@property (nonatomic) bool hasBeginEditingCount;
@property (nonatomic) bool hasCloseAction;
@property (nonatomic) bool hasDirectInput;
@property (nonatomic) bool hasEndEditingCount;
@property (nonatomic) bool hasExternalInput;
@property (nonatomic) bool hasMainUIVisibleMs;
@property (nonatomic) bool hasOpenAction;
@property (nonatomic) bool hasSecureInput;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int mainUIVisibleMs;
@property (nonatomic) unsigned int openAction;
@property (nonatomic) bool secureInput;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned int)bannerVisibleMs;
- (unsigned int)beginEditingCount;
- (unsigned int)closeAction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)directInput;
- (unsigned int)endEditingCount;
- (bool)externalInput;
- (bool)hasBannerVisibleMs;
- (bool)hasBeginEditingCount;
- (bool)hasCloseAction;
- (bool)hasDirectInput;
- (bool)hasEndEditingCount;
- (bool)hasExternalInput;
- (bool)hasMainUIVisibleMs;
- (bool)hasOpenAction;
- (bool)hasSecureInput;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)mainUIVisibleMs;
- (void)mergeFrom:(id)arg1;
- (unsigned int)openAction;
- (bool)readFrom:(id)arg1;
- (bool)secureInput;
- (id)sessionUUID;
- (void)setBannerVisibleMs:(unsigned int)arg1;
- (void)setBeginEditingCount:(unsigned int)arg1;
- (void)setCloseAction:(unsigned int)arg1;
- (void)setDirectInput:(bool)arg1;
- (void)setEndEditingCount:(unsigned int)arg1;
- (void)setExternalInput:(bool)arg1;
- (void)setHasBannerVisibleMs:(bool)arg1;
- (void)setHasBeginEditingCount:(bool)arg1;
- (void)setHasCloseAction:(bool)arg1;
- (void)setHasDirectInput:(bool)arg1;
- (void)setHasEndEditingCount:(bool)arg1;
- (void)setHasExternalInput:(bool)arg1;
- (void)setHasMainUIVisibleMs:(bool)arg1;
- (void)setHasOpenAction:(bool)arg1;
- (void)setHasSecureInput:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMainUIVisibleMs:(unsigned int)arg1;
- (void)setOpenAction:(unsigned int)arg1;
- (void)setSecureInput:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
