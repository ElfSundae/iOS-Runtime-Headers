/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKFatStroke : PKStroke {
    struct vector<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double> > > { 
        struct pair<double, double> {} *__begin_; 
        struct pair<double, double> {} *__end_; 
        struct __compressed_pair<std::__1::pair<double, double> *, std::__1::allocator<std::__1::pair<double, double> > > { 
            struct pair<double, double> {} *__value_; 
        } __end_cap_; 
    }  _centerlineSlices;
    struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { 
        struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *__begin_; 
        struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { 
            struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *__value_; 
        } __end_cap_; 
    }  _maskPaths;
}

+ (id)sliceWithEraser:(struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x_3_1_1; } x3; }*)arg1 toClip:(id)arg2;
+ (id)sliceWithEraser:(struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x_3_1_1; } x3; }*)arg1 toClip:(id)arg2 clipType:(int)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendPointsOfInterestForSelection:(struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateBounds;
- (void)calculateCenterlineSlices;
- (struct vector<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double> > > { struct pair<double, double> {} *x1; struct pair<double, double> {} *x2; struct __compressed_pair<std::__1::pair<double, double> *, std::__1::allocator<std::__1::pair<double, double> > > { struct pair<double, double> {} *x_3_1_1; } x3; }*)centerlineSlices;
- (void)debugRender:(struct CGContext { }*)arg1;
- (void)generatePolyHull;
- (id)initWithArchive:(const struct Stroke { int (**x1)(); struct vector<float, std::__1::allocator<float> > { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_2_1_3; } x2; struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; struct vector<PB::Data, std::__1::allocator<PB::Data> > { struct Data {} *x_5_1_1; struct Data {} *x_5_1_2; struct __compressed_pair<PB::Data *, std::__1::allocator<PB::Data> > { struct Data {} *x_3_2_1; } x_5_1_3; } x5; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<drawing::StrokeData, std::__1::default_delete<drawing::StrokeData> > { struct __compressed_pair<drawing::StrokeData *, std::__1::default_delete<drawing::StrokeData> > { struct StrokeData {} *x_1_2_1; } x_7_1_1; } x7; }*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(bool)arg5;
- (id)initWithStroke:(id)arg1;
- (id)initWithStroke:(id)arg1 hidden:(bool)arg2 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3 ink:(id)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 tRange:(struct { double x1; double x2; })arg6;
- (bool)intersectsClosedStroke:(id)arg1;
- (bool)intersectsLineFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 minThreshold:(double)arg3;
- (struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x_3_1_1; } x3; }*)maskPaths;
- (struct CGPath { }*)newPathRepresentation;
- (unsigned int)saveToArchive:(struct Stroke { int (**x1)(); struct vector<float, std::__1::allocator<float> > { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_2_1_3; } x2; struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; struct vector<PB::Data, std::__1::allocator<PB::Data> > { struct Data {} *x_5_1_1; struct Data {} *x_5_1_2; struct __compressed_pair<PB::Data *, std::__1::allocator<PB::Data> > { struct Data {} *x_3_2_1; } x_5_1_3; } x5; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<drawing::StrokeData, std::__1::default_delete<drawing::StrokeData> > { struct __compressed_pair<drawing::StrokeData *, std::__1::default_delete<drawing::StrokeData> > { struct StrokeData {} *x_1_2_1; } x_7_1_1; } x7; }*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(bool)arg4 parent:(id)arg5 transient:(bool)arg6;
- (id)sliceWithEraser:(struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x_3_1_1; } x3; }*)arg1;
- (id)sliceWithMask:(struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > {} *x_3_1_1; } x3; }*)arg1;

@end