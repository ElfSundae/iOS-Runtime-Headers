/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFixedPositionContent : NSObject {
    struct WebFixedPositionContentData { id x1; /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*x2; void*x3; short x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; SEL x13; SEL x14; void*x15; void*x16; void*x17; void*x18; int x19; in void*x20; void*x21; const void*x22; unsigned char x23; unsigned long x24; void*x25; void*x26; void*x27; const void*x28; void*x29; void*x30; short x31; void*x32; double x33; SEL x34; SEL x35; void*x36; void*x37; void*x38; SEL x39; SEL x40; void*x41; in int x42; long long x43; void*x44; void*x45; void*x46; void*x47; void*x48; const void*x49; oneway int x50; void*x51; void*x52; void*x53; out const void*x54; unsigned char x55; out in short x56; void*x57; const void*x58; int x59; in void*x60; double x61; unsigned long x62; void*x63; void*x64; void*x65; const long doublex66; void*x67; void*x68; void*x69; void*x70; void*x71; short x72; void*x73; double x74; SEL x75; SEL x76; void*x77; void*x78; void*x79; SEL x80; SEL x81; double x82; void*x83; float x84; void*x85; void*x86; long x87; } * _private;
}

- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (bool)hasFixedOrStickyPositionLayers;
- (id)initWithWebView:(id)arg1;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewportConstrainedLayers:(struct HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >, WTF::PtrHash<CALayer *>, WTF::HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >::KeyValuePairTraits, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > {} *x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; } x1; }*)arg1 stickyContainerMap:(struct HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, CALayer *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, CALayer *> >, WTF::PtrHash<CALayer *>, WTF::HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >::KeyValuePairTraits, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, CALayer *> {} *x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; } x1; }*)arg2;

@end
