/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenService_Subsystem : NSObject <PKModularService> {
    TKTokenDriver *_driver;
    NSString *_driverClassID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TKTokenDriver *driver;
@property (nonatomic, readonly) NSString *driverClassID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedSubsystem;

- (void).cxx_destruct;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (id)driver;
- (id)driverClassID;
- (void)endUsing:(id)arg1;

@end
