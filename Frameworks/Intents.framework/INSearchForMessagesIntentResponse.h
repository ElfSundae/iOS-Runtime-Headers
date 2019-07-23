/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForMessagesIntentResponse : INIntentResponse <INSearchForMessagesIntentResponseExport> {
    _INPBSearchForMessagesIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) int code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, copy) NSArray *searchResults;
@property (readonly) Class superclass;

+ (BOOL)_appLaunchRequestedFromCode:(int)arg1;
+ (int)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(int)arg1;
+ (int)_intentHandlingStatusFromCode:(int)arg1;
+ (int)_typeFromCode:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_responseMessagePBRepresentation;
- (int)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(int)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)messages;
- (id)searchResults;
- (void)setMessages:(id)arg1;
- (void)setSearchResults:(id)arg1;

@end
