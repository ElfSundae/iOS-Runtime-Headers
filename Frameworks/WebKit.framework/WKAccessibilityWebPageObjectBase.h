/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAccessibilityWebPageObjectBase : NSObject {
    bool  m_hasMainFramePlugin;
    struct WebPage { int (**x1)(); id x2; int (**x3)(); int (**x4)(); struct WeakPtrFactory<WebKit::WebPage> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_5_1_1; } x5; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x_6_1_1; } x6; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebKit::WebFrame, WTF::DumbPtrTraits<WebKit::WebFrame> > { struct WebFrame {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy, WTF::DumbPtrTraits<WebKit::WebPageGroupProxy> > { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; } * m_page;
    struct ObjectIdentifier<WebCore::PageIdentifierType> { 
        unsigned long long m_identifier; 
    }  m_pageID;
    id  m_parent;
}

- (id).cxx_construct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPluginObject;
- (id)accessibilityRootObjectWrapper;
- (struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)axObjectCache;
- (void)setHasMainFramePlugin:(bool)arg1;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct WebPage { int (**x1)(); id x2; int (**x3)(); int (**x4)(); struct WeakPtrFactory<WebKit::WebPage> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_5_1_1; } x5; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x_6_1_1; } x6; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebKit::WebFrame, WTF::DumbPtrTraits<WebKit::WebFrame> > { struct WebFrame {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy, WTF::DumbPtrTraits<WebKit::WebPageGroupProxy> > { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;

@end
