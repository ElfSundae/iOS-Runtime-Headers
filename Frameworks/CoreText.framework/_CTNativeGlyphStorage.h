/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTNativeGlyphStorage : _CTGlyphStorage {
    const long long * _attachCounts;
    long long  _capacity;
    const struct CGPoint { double x1; double x2; } * _origins;
    void * _preallocatedStorage;
    unsigned long long  _retainCount;
    struct GlyphStack { long long x1; long long x2; struct GlyphStackEntry { unsigned short x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; long long x_3_1_5; struct CGPoint { double x_6_2_1; double x_6_2_2; } x_3_1_6; } x3[1]; } * _stack;
}

+ (id)newWithCount:(long long)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (id)copyWithRange:(struct { long long x1; long long x2; })arg1;
- (void)dealloc;
- (bool)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (id)initWithCount:(long long)arg1;
- (void)insertGlyphsAtRange:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsFromRange:(struct { long long x1; long long x2; })arg1 toIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })originAtIndex:(long long)arg1;
- (const struct CGPoint { double x1; double x2; }*)origins;
- (void)popGlyphAtIndex:(long long)arg1;
- (id)prepareWithCapacity:(long long)arg1 preallocated:(bool)arg2;
- (void)puntStringIndicesInRange:(struct { long long x1; long long x2; })arg1 by:(long long)arg2;
- (void)pushGlyphAtIndex:(long long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)setCapacity:(long long)arg1;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;

@end
