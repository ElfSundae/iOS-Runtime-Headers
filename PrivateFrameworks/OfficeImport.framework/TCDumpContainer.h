/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpContainer : TCDumpType {
    int mByteSize;
    int mByteSizeCorrection;
    NSString *mByteSizeFieldName;
    int mByteSizeFieldType;
    TCDumpType *mElementType;
}

- (void)dealloc;
- (void)fromBinary:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 toXml:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 state:(id)arg3;
- (id)initWithByteSize:(int)arg1 byteSizeFieldType:(int)arg2 byteSizeFieldName:(id)arg3 byteSizeCorrection:(int)arg4 elementType:(id)arg5;
- (id)initWithByteSize:(int)arg1 elementType:(id)arg2;
- (id)initWithByteSizeFieldName:(id)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3;
- (id)initWithByteSizeFieldName:(id)arg1 elementType:(id)arg2;
- (id)initWithByteSizeFieldType:(int)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3;
- (id)initWithByteSizeFieldType:(int)arg1 elementType:(id)arg2;

@end
