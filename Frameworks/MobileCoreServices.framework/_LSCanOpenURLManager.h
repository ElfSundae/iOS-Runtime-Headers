/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSCanOpenURLManager : NSObject {
    NSMutableDictionary * _canOpenURLsMap;
    NSObject<OS_dispatch_queue> * _canOpenURLsQueue;
    int  _saveFlag;
}

+ (id)queryForApplicationsAvailableForOpeningURL:(id)arg1 legacySPI:(BOOL)arg2;
+ (id)queryForURLSchemesOfType:(int)arg1;
+ (id)sharedManager;

- (BOOL)canOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (id)copySchemesMap;
- (void)dealloc;
- (BOOL)findApplicationBundleID:(unsigned int*)arg1 bundleData:(const struct LSBundleData {}**)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 forXPCConnection:(id)arg4;
- (void)getIsURL:(id)arg1 alwaysCheckable:(BOOL*)arg2 hasHandler:(BOOL*)arg3;
- (id)init;
- (BOOL)internalCanOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (BOOL)isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; int x12; int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned int x18[4]; unsigned long long x19; unsigned long long x20; unsigned char x21[3]; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned int x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (BOOL)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3;
- (BOOL)legacy_isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; int x12; int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned int x18[4]; unsigned long long x19; unsigned long long x20; unsigned char x21[3]; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned int x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1;
- (void)writeSchemesMap;

@end
