/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSecurityOrigin : NSObject {
    <WebQuotaManager> * _applicationCacheQuotaManager;
    <WebQuotaManager> * _databaseQuotaManager;
    struct WebSecurityOriginPrivate { } * _private;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)arg1;

- (struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct Optional<unsigned short> { bool x_3_2_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_3_1; unsigned short x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; }*)_core;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct Optional<unsigned short> { bool x_3_2_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_3_1; unsigned short x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (id)applicationCacheQuotaManager;
- (id)databaseIdentifier;
- (id)databaseQuotaManager;
- (void)dealloc;
- (id)host;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (id)stringValue;
- (id)toString;
- (unsigned long long)usage;

@end
