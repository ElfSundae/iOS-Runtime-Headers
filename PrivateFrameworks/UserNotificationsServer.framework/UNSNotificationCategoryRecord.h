/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationCategoryRecord : NSObject {
    NSArray * _actions;
    BOOL  _hasCustomDismissAction;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    NSArray * _minimalActions;
    BOOL  _shouldAllowInCarPlay;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) BOOL hasCustomDismissAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *intentIdentifiers;
@property (nonatomic, copy) NSArray *minimalActions;
@property (nonatomic) BOOL shouldAllowInCarPlay;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCustomDismissAction;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)intentIdentifiers;
- (BOOL)isEqual:(id)arg1;
- (id)minimalActions;
- (void)setActions:(id)arg1;
- (void)setHasCustomDismissAction:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentIdentifiers:(id)arg1;
- (void)setMinimalActions:(id)arg1;
- (void)setShouldAllowInCarPlay:(BOOL)arg1;
- (BOOL)shouldAllowInCarPlay;

@end
