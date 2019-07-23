/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable> {
    NSArray * _addresses;
    NSDictionary * _items;
    long long  _method;
    NSArray * _prefixLengths;
    NSString * _router;
}

@property (nonatomic, retain) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *items;
@property (nonatomic) long long method;
@property (nonatomic, retain) NSArray *prefixLengths;
@property (nonatomic, copy) NSString *router;
@property (readonly) Class superclass;

+ (id)automaticConfig;
+ (id)linkLocalConfig;

- (void).cxx_destruct;
- (id)addresses;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMethod:(long long)arg1 addresses:(id)arg2 prefixLengths:(id)arg3 router:(id)arg4;
- (id)items;
- (long long)method;
- (id)prefixLengths;
- (id)protocol;
- (id)router;
- (void)setAddresses:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMethod:(long long)arg1;
- (void)setPrefixLengths:(id)arg1;
- (void)setRouter:(id)arg1;

@end
