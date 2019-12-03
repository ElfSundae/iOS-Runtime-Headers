/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerUserItem : CoreDAVItem {
    NSURL * _acceptedURL;
    CalDAVCalendarServerAccessItem * _access;
    CoreDAVLeafItem * _commonName;
    NSString * _firstName;
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _inviteStatus;
    NSString * _lastName;
    CoreDAVLeafItem * _summary;
}

@property (nonatomic, retain) NSURL *acceptedURL;
@property (nonatomic, retain) CalDAVCalendarServerAccessItem *access;
@property (nonatomic, retain) CoreDAVLeafItem *commonName;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteStatus;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) CoreDAVLeafItem *summary;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (void).cxx_destruct;
- (id)acceptedURL;
- (id)access;
- (id)commonName;
- (long long)compare:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (id)firstName;
- (id)href;
- (id)init;
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;
- (id)inviteStatus;
- (id)lastName;
- (void)setAcceptedURL:(id)arg1;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setCommonName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV

- (id)initWithREMSharee:(id)arg1;
- (id)rem_shareeForREMList:(id)arg1;
- (id)rem_updatedREMShareeFromREMSharee:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV

- (void*)createCalShareeInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1 andCalendar:(void*)arg2;
- (id)initWithCalSharee:(void*)arg1;
- (bool)updateCalSharee:(void*)arg1;

@end
