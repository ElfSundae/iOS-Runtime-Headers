/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareTokenMetadata : NSObject <NSCopying> {
    BOOL  _forceDSRefetch;
    NSData * _privateTokenData;
    NSData * _publicTokenData;
    NSString * _routingKey;
    NSData * _shortSharingTokenData;
}

@property (nonatomic) BOOL forceDSRefetch;
@property (nonatomic, retain) NSData *privateTokenData;
@property (nonatomic, retain) NSData *publicTokenData;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, readonly) NSString *shortSharingToken;
@property (nonatomic, retain) NSData *shortSharingTokenData;
@property (nonatomic, readonly) NSData *shortSharingTokenHashData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)forceDSRefetch;
- (id)privateTokenData;
- (id)publicTokenData;
- (id)routingKey;
- (void)setForceDSRefetch:(BOOL)arg1;
- (void)setPrivateTokenData:(id)arg1;
- (void)setPublicTokenData:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortSharingTokenData:(id)arg1;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;

@end
