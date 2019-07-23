/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDClientAuthorization : NSObject {
    ACDClient * _client;
    NSSet * _grantedPermissions;
    BOOL  _isGranted;
    NSDictionary * _options;
}

@property (nonatomic, retain) ACDClient *client;
@property (nonatomic, retain) NSSet *grantedPermissions;
@property (nonatomic) BOOL isGranted;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)client;
- (id)grantedPermissions;
- (id)initForClient:(id)arg1;
- (BOOL)isGranted;
- (id)options;
- (void)setClient:(id)arg1;
- (void)setGrantedPermissions:(id)arg1;
- (void)setIsGranted:(BOOL)arg1;
- (void)setOptions:(id)arg1;

@end
