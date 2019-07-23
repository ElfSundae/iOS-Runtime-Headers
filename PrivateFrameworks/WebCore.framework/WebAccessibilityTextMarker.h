/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityTextMarker : NSObject {
    struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; } * _cache;
    struct TextMarkerData { 
        unsigned int axID; 
        struct Node {} *node; 
        int offset; 
        int characterStartIndex; 
        int characterOffset; 
        bool ignored; 
        int affinity; 
    }  _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(struct RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> > { struct Range {} *x1; })arg1 isStart:(bool)arg2 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg2;
+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg2;

- (id).cxx_construct;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)accessibilityObject;
- (struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; })characterOffset;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg2;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x1; struct Node {} *x2; int x3; int x4; int x5; bool x6; int x7; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg2;
- (bool)isIgnored;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })visiblePosition;

@end
