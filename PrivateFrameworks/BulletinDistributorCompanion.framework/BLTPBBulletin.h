/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletin : PBCodable <NSCopying> {
    NSMutableArray * _additionalAttachments;
    NSData * _alertSuppressionContexts;
    NSData * _alertSuppressionContextsNulls;
    NSData * _attachment;
    NSString * _attachmentID;
    unsigned int  _attachmentType;
    NSString * _attachmentURL;
    NSString * _bulletinID;
    NSString * _category;
    NSString * _categoryID;
    bool  _containsUpdatedAttachment;
    NSData * _context;
    NSData * _contextNulls;
    double  _date;
    BLTPBAction * _dismissAction;
    NSString * _dismissalID;
    unsigned int  _feed;
    struct { 
        unsigned int date : 1; 
        unsigned int publicationDate : 1; 
        unsigned int requiredExpirationDate : 1; 
        unsigned int soundMaximumDuration : 1; 
        unsigned int attachmentType : 1; 
        unsigned int sectionSubtype : 1; 
        unsigned int soundAlertType : 1; 
        unsigned int containsUpdatedAttachment : 1; 
        unsigned int ignoresQuietMode : 1; 
        unsigned int loading : 1; 
        unsigned int soundShouldIgnoreRingerSwitch : 1; 
        unsigned int soundShouldRepeat : 1; 
        unsigned int turnsOnDisplay : 1; 
    }  _has;
    bool  _ignoresQuietMode;
    bool  _includesSound;
    bool  _loading;
    NSString * _messageTitle;
    NSMutableArray * _peopleIDs;
    double  _publicationDate;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _replyToken;
    double  _requiredExpirationDate;
    NSString * _sectionDisplayName;
    NSString * _sectionID;
    int  _sectionSubtype;
    BLTPBAction * _snoozeAction;
    NSString * _sockPuppetAppBundleID;
    NSString * _soundAccountIdentifier;
    int  _soundAlertType;
    double  _soundMaximumDuration;
    bool  _soundShouldIgnoreRingerSwitch;
    bool  _soundShouldRepeat;
    NSString * _soundToneIdentifier;
    NSMutableArray * _subsectionIDs;
    NSString * _subtitle;
    NSMutableArray * _supplementaryActions;
    NSString * _teamID;
    NSString * _threadID;
    NSString * _title;
    bool  _turnsOnDisplay;
    NSString * _universalSectionID;
}

@property (nonatomic, retain) NSMutableArray *additionalAttachments;
@property (nonatomic, retain) NSData *alertSuppressionContexts;
@property (nonatomic, retain) NSData *alertSuppressionContextsNulls;
@property (nonatomic, retain) NSData *attachment;
@property (nonatomic, retain) NSString *attachmentID;
@property (nonatomic) unsigned int attachmentType;
@property (nonatomic, retain) NSString *attachmentURL;
@property (nonatomic, retain) NSString *bulletinID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *categoryID;
@property (nonatomic) bool containsUpdatedAttachment;
@property (nonatomic, retain) NSData *context;
@property (nonatomic, retain) NSData *contextNulls;
@property (nonatomic) double date;
@property (nonatomic, retain) BLTPBAction *dismissAction;
@property (nonatomic, retain) NSString *dismissalID;
@property (nonatomic) unsigned int feed;
@property (nonatomic, readonly) bool hasAlertSuppressionContexts;
@property (nonatomic, readonly) bool hasAlertSuppressionContextsNulls;
@property (nonatomic, readonly) bool hasAttachment;
@property (nonatomic, readonly) bool hasAttachmentID;
@property (nonatomic) bool hasAttachmentType;
@property (nonatomic, readonly) bool hasAttachmentURL;
@property (nonatomic, readonly) bool hasBulletinID;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasCategoryID;
@property (nonatomic) bool hasContainsUpdatedAttachment;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasContextNulls;
@property (nonatomic) bool hasDate;
@property (nonatomic, readonly) bool hasDismissAction;
@property (nonatomic, readonly) bool hasDismissalID;
@property (nonatomic) bool hasIgnoresQuietMode;
@property (nonatomic) bool hasLoading;
@property (nonatomic, readonly) bool hasMessageTitle;
@property (nonatomic) bool hasPublicationDate;
@property (nonatomic, readonly) bool hasPublisherBulletinID;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, readonly) bool hasReplyToken;
@property (nonatomic) bool hasRequiredExpirationDate;
@property (nonatomic, readonly) bool hasSectionDisplayName;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSectionSubtype;
@property (nonatomic, readonly) bool hasSnoozeAction;
@property (nonatomic, readonly) bool hasSockPuppetAppBundleID;
@property (nonatomic, readonly) bool hasSoundAccountIdentifier;
@property (nonatomic) bool hasSoundAlertType;
@property (nonatomic) bool hasSoundMaximumDuration;
@property (nonatomic) bool hasSoundShouldIgnoreRingerSwitch;
@property (nonatomic) bool hasSoundShouldRepeat;
@property (nonatomic, readonly) bool hasSoundToneIdentifier;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTeamID;
@property (nonatomic, readonly) bool hasThreadID;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTurnsOnDisplay;
@property (nonatomic, readonly) bool hasUniversalSectionID;
@property (nonatomic) bool ignoresQuietMode;
@property (nonatomic) bool includesSound;
@property (nonatomic) bool loading;
@property (nonatomic, retain) NSString *messageTitle;
@property (nonatomic, retain) NSMutableArray *peopleIDs;
@property (nonatomic) double publicationDate;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *replyToken;
@property (nonatomic) double requiredExpirationDate;
@property (nonatomic, retain) NSString *sectionDisplayName;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionSubtype;
@property (nonatomic, retain) BLTPBAction *snoozeAction;
@property (nonatomic, retain) NSString *sockPuppetAppBundleID;
@property (nonatomic, retain) NSString *soundAccountIdentifier;
@property (nonatomic) int soundAlertType;
@property (nonatomic) double soundMaximumDuration;
@property (nonatomic) bool soundShouldIgnoreRingerSwitch;
@property (nonatomic) bool soundShouldRepeat;
@property (nonatomic, retain) NSString *soundToneIdentifier;
@property (nonatomic, retain) NSMutableArray *subsectionIDs;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSMutableArray *supplementaryActions;
@property (nonatomic, retain) NSString *teamID;
@property (nonatomic, retain) NSString *threadID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool turnsOnDisplay;
@property (nonatomic, retain) NSString *universalSectionID;

+ (void)_addAttachmentsFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 completion:(id /* block */)arg4;
+ (void)_attachmentFromBBAttachmentMetadata:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 fileOption:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (Class)additionalAttachmentsType;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 isSockPuppetAppInstalled:(bool)arg3 observer:(id)arg4 feed:(unsigned long long)arg5 teamID:(id)arg6 universalSectionID:(id)arg7 isCriticalBulletin:(bool)arg8 replyToken:(id)arg9 completion:(id /* block */)arg10;
+ (Class)peopleIDsType;
+ (Class)subsectionIDsType;
+ (Class)supplementaryActionsType;

- (void).cxx_destruct;
- (void)addAdditionalAttachments:(id)arg1;
- (void)addPeopleIDs:(id)arg1;
- (void)addSubsectionIDs:(id)arg1;
- (void)addSupplementaryActions:(id)arg1;
- (id)additionalAttachments;
- (id)additionalAttachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalAttachmentsCount;
- (id)alertSuppressionContexts;
- (id)alertSuppressionContextsNulls;
- (id)attachment;
- (id)attachmentID;
- (id)attachmentKey:(id)arg1;
- (unsigned int)attachmentType;
- (id)attachmentURL;
- (id)attachmentURLURL;
- (id)bulletinID;
- (id)category;
- (id)categoryID;
- (void)clearAdditionalAttachments;
- (void)clearPeopleIDs;
- (void)clearSubsectionIDs;
- (void)clearSupplementaryActions;
- (bool)containsUpdatedAttachment;
- (id)context;
- (id)contextNulls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissAction;
- (id)dismissalID;
- (unsigned int)feed;
- (bool)hasAlertSuppressionContexts;
- (bool)hasAlertSuppressionContextsNulls;
- (bool)hasAttachment;
- (bool)hasAttachmentID;
- (bool)hasAttachmentType;
- (bool)hasAttachmentURL;
- (bool)hasBulletinID;
- (bool)hasCategory;
- (bool)hasCategoryID;
- (bool)hasContainsUpdatedAttachment;
- (bool)hasContext;
- (bool)hasContextNulls;
- (bool)hasDate;
- (bool)hasDismissAction;
- (bool)hasDismissalID;
- (bool)hasIgnoresQuietMode;
- (bool)hasLoading;
- (bool)hasMessageTitle;
- (bool)hasPublicationDate;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (bool)hasReplyToken;
- (bool)hasRequiredExpirationDate;
- (bool)hasSectionDisplayName;
- (bool)hasSectionID;
- (bool)hasSectionSubtype;
- (bool)hasSnoozeAction;
- (bool)hasSockPuppetAppBundleID;
- (bool)hasSoundAccountIdentifier;
- (bool)hasSoundAlertType;
- (bool)hasSoundMaximumDuration;
- (bool)hasSoundShouldIgnoreRingerSwitch;
- (bool)hasSoundShouldRepeat;
- (bool)hasSoundToneIdentifier;
- (bool)hasSubtitle;
- (bool)hasTeamID;
- (bool)hasThreadID;
- (bool)hasTitle;
- (bool)hasTurnsOnDisplay;
- (bool)hasUniversalSectionID;
- (unsigned long long)hash;
- (bool)ignoresQuietMode;
- (bool)includesSound;
- (bool)isEqual:(id)arg1;
- (bool)loading;
- (void)mergeFrom:(id)arg1;
- (id)messageTitle;
- (id)peopleIDs;
- (id)peopleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleIDsCount;
- (double)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)replyToken;
- (double)requiredExpirationDate;
- (id)sectionDisplayName;
- (id)sectionID;
- (int)sectionSubtype;
- (void)setAdditionalAttachments:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlertSuppressionContextsNulls:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentID:(id)arg1;
- (void)setAttachmentType:(unsigned int)arg1;
- (void)setAttachmentURL:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setContainsUpdatedAttachment:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setContextNulls:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setFeed:(unsigned int)arg1;
- (void)setHasAttachmentType:(bool)arg1;
- (void)setHasContainsUpdatedAttachment:(bool)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasIgnoresQuietMode:(bool)arg1;
- (void)setHasLoading:(bool)arg1;
- (void)setHasPublicationDate:(bool)arg1;
- (void)setHasRequiredExpirationDate:(bool)arg1;
- (void)setHasSectionSubtype:(bool)arg1;
- (void)setHasSoundAlertType:(bool)arg1;
- (void)setHasSoundMaximumDuration:(bool)arg1;
- (void)setHasSoundShouldIgnoreRingerSwitch:(bool)arg1;
- (void)setHasSoundShouldRepeat:(bool)arg1;
- (void)setHasTurnsOnDisplay:(bool)arg1;
- (void)setIgnoresQuietMode:(bool)arg1;
- (void)setIncludesSound:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setMessageTitle:(id)arg1;
- (void)setPeopleIDs:(id)arg1;
- (void)setPublicationDate:(double)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setReplyToken:(id)arg1;
- (void)setRequiredExpirationDate:(double)arg1;
- (void)setSectionDisplayName:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(int)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSockPuppetAppBundleID:(id)arg1;
- (void)setSoundAccountIdentifier:(id)arg1;
- (void)setSoundAlertType:(int)arg1;
- (void)setSoundMaximumDuration:(double)arg1;
- (void)setSoundShouldIgnoreRingerSwitch:(bool)arg1;
- (void)setSoundShouldRepeat:(bool)arg1;
- (void)setSoundToneIdentifier:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTurnsOnDisplay:(bool)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)snoozeAction;
- (id)sockPuppetAppBundleID;
- (id)soundAccountIdentifier;
- (int)soundAlertType;
- (double)soundMaximumDuration;
- (bool)soundShouldIgnoreRingerSwitch;
- (bool)soundShouldRepeat;
- (id)soundToneIdentifier;
- (id)subsectionIDs;
- (id)subsectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionIDsCount;
- (id)subtitle;
- (id)supplementaryActions;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementaryActionsCount;
- (id)teamID;
- (id)threadID;
- (id)title;
- (bool)turnsOnDisplay;
- (id)universalSectionID;
- (void)writeTo:(id)arg1;

@end
