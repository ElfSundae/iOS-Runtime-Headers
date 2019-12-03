/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBXMLRecorder_Shape : RBShape {
    struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > { 
        struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > {} *__begin_; 
        struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > {} *__end_; 
        struct __compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > { 
            struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > {} *__value_; 
        } __end_cap_; 
    }  _attributes;
    unsigned int  _seed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeTo:(struct Tree { struct refcounted_ptr<RB::XMLRecorder::Element> { struct Element {} *x_1_1_1; } x1; struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > { struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > { struct __split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element {} ***x_1_3_1; struct Element {} ***x_1_3_2; struct Element {} ***x_1_3_3; struct __compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element {} ***x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)setCircleAtPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)setEllipseInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmpty;
- (void)setGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(unsigned long long)arg3 font:(struct CGFont { }*)arg4 renderingStyle:(unsigned int)arg5;
- (void)setInfinite;
- (void)setPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct { double x1; double x2; double x3; double x4; })arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerSize:(struct CGSize { double x1; double x2; })arg2 cornerStyle:(int)arg3;
- (void)setStroke:(id)arg1;
- (void)setStrokedCircleAtPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3;
- (void)setStrokedPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double*)arg8 dashCount:(long long)arg9;
- (void)setStrokedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct { double x1; double x2; double x3; double x4; })arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;

@end