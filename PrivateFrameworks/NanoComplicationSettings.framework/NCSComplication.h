/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
 */

@interface NCSComplication : NSObject <NSCopying> {
    BOOL  _active;
    NSString * _appBundleIdentifier;
    BOOL  _cannotBeDisabled;
    NSString * _complicationBundleIdentifier;
    unsigned int  _installState;
    NSString * _name;
    NSString * _sockPuppetIdentifier;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) BOOL cannotBeDisabled;
@property (nonatomic, copy) NSString *complicationBundleIdentifier;
@property (nonatomic, readonly) NSString *complicationIdentifier;
@property (nonatomic) unsigned int installState;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (BOOL)cannotBeDisabled;
- (id)complicationBundleIdentifier;
- (id)complicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)installState;
- (BOOL)isActive;
- (BOOL)isInstalled;
- (id)name;
- (void)setActive:(BOOL)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCannotBeDisabled:(BOOL)arg1;
- (void)setComplicationBundleIdentifier:(id)arg1;
- (void)setInstallState:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setSockPuppetIdentifier:(id)arg1;
- (id)sockPuppetIdentifier;

@end
