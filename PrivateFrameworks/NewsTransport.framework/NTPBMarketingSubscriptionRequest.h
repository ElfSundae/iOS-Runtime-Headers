/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying> {
    NTPBDeviceInfo * _deviceInfo;
    NSString * _dsid;
    struct { 
        unsigned int subscriptionAction : 1; 
        unsigned int subscriptionType : 1; 
    }  _has;
    int  _subscriptionAction;
    int  _subscriptionType;
}

@property (nonatomic, retain) NTPBDeviceInfo *deviceInfo;
@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, readonly) bool hasDeviceInfo;
@property (nonatomic, readonly) bool hasDsid;
@property (nonatomic) bool hasSubscriptionAction;
@property (nonatomic) bool hasSubscriptionType;
@property (nonatomic) int subscriptionAction;
@property (nonatomic) int subscriptionType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (id)dsid;
- (bool)hasDeviceInfo;
- (bool)hasDsid;
- (bool)hasSubscriptionAction;
- (bool)hasSubscriptionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setHasSubscriptionAction:(bool)arg1;
- (void)setHasSubscriptionType:(bool)arg1;
- (void)setSubscriptionAction:(int)arg1;
- (void)setSubscriptionType:(int)arg1;
- (int)subscriptionAction;
- (int)subscriptionType;
- (void)writeTo:(id)arg1;

@end
