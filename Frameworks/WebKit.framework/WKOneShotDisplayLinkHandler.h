/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOneShotDisplayLinkHandler : NSObject {
    CADisplayLink * _displayLink;
    struct RemoteLayerTreeDrawingAreaProxy { int (**x1)(); int x2; struct WebPageProxy {} *x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct IntSize { int x_5_1_1; int x_5_1_2; } x5; struct RemoteLayerTreeHost { int (**x_6_1_1)(); struct RemoteLayerTreeDrawingAreaProxy {} *x_6_1_2; struct UIView {} *x_6_1_3; struct HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_4_2_1; } x_6_1_4; struct HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_5_2_1; } x_6_1_5; } x6; } * _drawingAreaProxy;
}

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithDrawingAreaProxy:(struct RemoteLayerTreeDrawingAreaProxy { int (**x1)(); int x2; struct WebPageProxy {} *x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct IntSize { int x_5_1_1; int x_5_1_2; } x5; struct RemoteLayerTreeHost { int (**x_6_1_1)(); struct RemoteLayerTreeDrawingAreaProxy {} *x_6_1_2; struct UIView {} *x_6_1_3; struct HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_4_2_1; } x_6_1_4; struct HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_5_2_1; } x_6_1_5; } x6; }*)arg1;
- (void)invalidate;
- (void)pause;
- (void)schedule;

@end
