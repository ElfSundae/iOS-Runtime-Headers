/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipantForSorting : NSObject {
    NSString * _cachedDisplayName;
    NSString * _firstName;
    BOOL  _isEmail;
    NSString * _lastName;
    EKParticipant * _participant;
}

+ (id)contactStore;

- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)initWithEKParticipant:(id)arg1;
- (BOOL)isEmail;
- (id)lastName;
- (id)participant;

@end
