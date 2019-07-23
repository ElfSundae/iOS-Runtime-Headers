/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCAuthenticationResponse : NSObject <BCDictionaryImageSerializable> {
    NSArray * _errors;
    NSString * _status;
    NSString * _token;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic, retain) NSArray *errors;
@property (nonatomic) NSString *status;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)error;
- (id)errors;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithToken:(id)arg1 error:(id)arg2;
- (void)setErrors:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setToken:(id)arg1;
- (id)status;
- (id)token;

@end
