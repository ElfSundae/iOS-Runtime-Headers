/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSComponent : NSObject <ICSWriting> {
    NSMutableArray * _components;
    NSMutableDictionary * _properties;
    NSString * _unrecognizedComponentName;
}

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) NSMutableArray *components;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (readonly) BOOL isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property unsigned int priority;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *relatedTo;
@property (retain) NSArray *rrule;
@property unsigned int sequence;
@property int status;
@property (retain) NSString *statusString;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (retain) NSString *unrecognizedComponentName;
@property (retain) NSURL *url;
@property (retain) NSString *x_apple_contactIdentifiers;
@property (retain) NSString *x_apple_dropbox;
@property (retain) NSString *x_apple_etag;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore;
@property (retain) NSString *x_apple_relatedExternalID;
@property (retain) NSString *x_apple_scheduletag;
@property (retain) NSString *x_apple_serverFilename;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property unsigned int x_apple_suggestionInfoChangedFields;
@property BOOL x_apple_suggestionInfoChangesAcknowledged;
@property (retain) NSString *x_apple_suggestionInfoOpaqueKey;
@property ICSDate *x_apple_suggestionInfoTimestamp;
@property (retain) NSString *x_apple_suggestionInfoUniqueKey;
@property (retain) NSString *x_apple_universalID;
@property int x_calendarserver_access;

+ (id)inheritanceKeywords;
+ (id)makeUID;
+ (id)name;
+ (unsigned int)relationshipTypeFromString:(id)arg1;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromRelationshipType:(unsigned int)arg1;
+ (id)stringFromStatus:(int)arg1;

- (void).cxx_destruct;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)addComponent:(id)arg1;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)allProperties;
- (id)attach;
- (id)attendee;
- (int)classification;
- (id)components;
- (id)conferences;
- (id)created;
- (id)debugDescription;
- (id)description;
- (id)dtend;
- (id)dtstamp;
- (id)dtstart;
- (id)duration;
- (id)exdate;
- (id)exrule;
- (void)fixAlarms;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixComponent;
- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixPropertiesInheritance:(id)arg1;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (void)fixRelatedTo;
- (void)fixSuggestionInfo;
- (BOOL)forcedAllDay;
- (BOOL)ignorePropertyWithName:(id)arg1;
- (id)init;
- (BOOL)isAllDay;
- (id)last_modified;
- (id)location;
- (id)organizer;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (unsigned int)priority;
- (id)properties;
- (id)propertiesForName:(id)arg1;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToObscure;
- (id)rdate;
- (id)recurrence_id;
- (id)relatedTo;
- (void)removeComponent:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (id)rrule;
- (unsigned int)sequence;
- (void)setAttach:(id)arg1;
- (void)setAttendee:(id)arg1;
- (void)setClassification:(int)arg1;
- (void)setComponents:(id)arg1;
- (void)setConferences:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDtend:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setDtstart:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setExdate:(id)arg1;
- (void)setExrule:(id)arg1;
- (void)setForcedAllDay:(BOOL)arg1;
- (void)setLast_modified:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (void)setRdate:(id)arg1;
- (void)setRecurrence_id:(id)arg1;
- (void)setRelatedTo:(id)arg1;
- (void)setRrule:(id)arg1;
- (void)setSequence:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUnrecognizedComponentName:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setX_apple_contactIdentifiers:(id)arg1;
- (void)setX_apple_dropbox:(id)arg1;
- (void)setX_apple_end_location:(id)arg1;
- (void)setX_apple_etag:(id)arg1;
- (void)setX_apple_ews_changekey:(id)arg1;
- (void)setX_apple_ews_itemid:(id)arg1;
- (void)setX_apple_ews_needsserverconfirmation:(BOOL)arg1;
- (void)setX_apple_ews_permission:(id)arg1;
- (void)setX_apple_ignore_on_restore:(BOOL)arg1;
- (void)setX_apple_relatedExternalID:(id)arg1;
- (void)setX_apple_scheduletag:(id)arg1;
- (void)setX_apple_serverFilename:(id)arg1;
- (void)setX_apple_structured_location:(id)arg1;
- (void)setX_apple_suggestionInfoChangedFields:(unsigned int)arg1;
- (void)setX_apple_suggestionInfoChangesAcknowledged:(BOOL)arg1;
- (void)setX_apple_suggestionInfoOpaqueKey:(id)arg1;
- (void)setX_apple_suggestionInfoTimestamp:(id)arg1;
- (void)setX_apple_suggestionInfoUniqueKey:(id)arg1;
- (void)setX_apple_travel_advisory_behavior:(id)arg1;
- (void)setX_apple_travel_duration:(id)arg1;
- (void)setX_apple_travel_start:(id)arg1;
- (void)setX_apple_universalID:(id)arg1;
- (void)setX_calendarserver_access:(int)arg1;
- (BOOL)shouldObscureValue;
- (int)status;
- (id)statusString;
- (id)summary;
- (id)trigger;
- (id)uid;
- (id)unrecognizedComponentName;
- (id)url;
- (BOOL)validate:(id*)arg1;
- (id)x_apple_contactIdentifiers;
- (id)x_apple_dropbox;
- (id)x_apple_end_location;
- (id)x_apple_etag;
- (id)x_apple_ews_changekey;
- (id)x_apple_ews_itemid;
- (BOOL)x_apple_ews_needsserverconfirmation;
- (id)x_apple_ews_permission;
- (BOOL)x_apple_ignore_on_restore;
- (id)x_apple_relatedExternalID;
- (id)x_apple_scheduletag;
- (id)x_apple_serverFilename;
- (id)x_apple_structured_location;
- (unsigned int)x_apple_suggestionInfoChangedFields;
- (BOOL)x_apple_suggestionInfoChangesAcknowledged;
- (id)x_apple_suggestionInfoOpaqueKey;
- (id)x_apple_suggestionInfoTimestamp;
- (id)x_apple_suggestionInfoUniqueKey;
- (id)x_apple_travel_advisory_behavior;
- (id)x_apple_travel_duration;
- (id)x_apple_travel_start;
- (id)x_apple_universalID;
- (int)x_calendarserver_access;

@end
