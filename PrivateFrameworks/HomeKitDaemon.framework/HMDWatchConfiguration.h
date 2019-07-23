/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchConfiguration : HMFObject {
    NSDictionary * _homeConfig;
    NSDictionary * _metadataConfig;
    NSUUID * _primaryHome;
    NSString * _uniqueId;
}

@property (nonatomic, retain) NSDictionary *homeConfig;
@property (nonatomic, retain) NSDictionary *metadataConfig;
@property (nonatomic, retain) NSUUID *primaryHome;
@property (nonatomic, retain) NSString *uniqueId;

- (void).cxx_destruct;
- (id)description;
- (id)homeConfig;
- (id)initWithUniqueID:(id)arg1;
- (id)metadataConfig;
- (id)primaryHome;
- (void)setConfigVersion:(id)arg1 forHome:(id)arg2;
- (void)setHomeConfig:(id)arg1;
- (void)setHomeConfiguration:(id)arg1;
- (void)setMetadataConfig:(id)arg1;
- (void)setPrimaryHome:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;

@end
