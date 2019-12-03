/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMe : NSObject {
    NSArray * _abEmails;
    NSString * _abFirstName;
    NSString * _abFullName;
    NSMutableArray * _abIMHandles;
    NSString * _abLastName;
    NSString * _abNickname;
    CNContact * _cnContact;
    NSMutableArray * _loginIMHandles;
    IMPerson * _person;
}

@property (nonatomic, readonly) IMHandle *bestIMHandle;
@property (nonatomic, readonly) CNContact *cnContact;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSArray *imHandles;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) IMPerson *person;

+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)lastNameFromFallbackUserName;
+ (id)me;

- (void).cxx_destruct;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (bool)addIMHandle:(id)arg1;
- (bool)addLoginIMHandle:(id)arg1;
- (id)bestIMHandle;
- (id)cnContact;
- (id)description;
- (id)email;
- (id)emails;
- (id)firstName;
- (id)fullName;
- (id)guid;
- (id)imHandles;
- (id)init;
- (bool)isIMHandleLoginIMHandle:(id)arg1;
- (id)lastName;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (id)nickname;
- (id)person;
- (void)rebuildIMHandles;
- (bool)removeIMHandle:(id)arg1;
- (bool)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setCNContact:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setIMPerson:(id)arg1;

@end
