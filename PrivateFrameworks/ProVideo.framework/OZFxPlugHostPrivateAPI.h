/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugHostPrivateAPI : NSObject <FxHostPrivateAPI, FxRenderModelAPIPrivate, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_21_1_1; } x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; int x28; bool x29; bool x30; bool x31; bool x32; bool x33; struct OZChannelBase {} *x34; bool x35; id x36; bool x37; bool x38; unsigned long long x39; bool x40; struct PCMutex { int (**x_41_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_41_1_2; } x41; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundle:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithIdentifier:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (float)blendingGamma;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (bool)giveEffectUIFocus;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_21_1_1; } x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; int x28; bool x29; bool x30; bool x31; bool x32; bool x33; struct OZChannelBase {} *x34; bool x35; id x36; bool x37; bool x38; unsigned long long x39; bool x40; struct PCMutex { int (**x_41_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_41_1_2; } x41; }*)arg1;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)pluginXPCConnectionBroken:(id)arg1;

@end
