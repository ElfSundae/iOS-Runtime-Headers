/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<md::Anchor *, float, std::__1::less<md::Anchor *>, std::__1::allocator<std::__1::pair<md::Anchor *const, float> > > { 
        struct __tree<std::__1::__value_type<md::Anchor *, float>, std::__1::__map_value_compare<md::Anchor *, std::__1::__value_type<md::Anchor *, float>, std::__1::less<md::Anchor *>, true>, std::__1::allocator<std::__1::__value_type<md::Anchor *, float> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::Anchor *, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::Anchor *, std::__1::__value_type<md::Anchor *, float>, std::__1::less<md::Anchor *>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _anchorToHeight;
    <VKMercatorTerrainHeightProvider> * _heightProvider;
}

@property (nonatomic) <VKMercatorTerrainHeightProvider> *heightProvider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)heightForAnchor:(struct Anchor { int (**x1)(); struct AnchorManager {} *x2; struct Mercator3<double> { double x_3_1_1[3]; } x3; struct Coordinate2D<Degrees, double> { struct Unit<DegreeUnitDescription, double> { double x_1_2_1; } x_4_1_1; struct Unit<DegreeUnitDescription, double> { double x_2_2_1; } x_4_1_2; } x4; id x5; }*)arg1;
- (id)heightProvider;
- (void)invalidateRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1;
- (void)removeCachedValueForAnchor:(struct Anchor { int (**x1)(); struct AnchorManager {} *x2; struct Mercator3<double> { double x_3_1_1[3]; } x3; struct Coordinate2D<Degrees, double> { struct Unit<DegreeUnitDescription, double> { double x_1_2_1; } x_4_1_1; struct Unit<DegreeUnitDescription, double> { double x_2_2_1; } x_4_1_2; } x4; id x5; }*)arg1;
- (void)setHeightProvider:(id)arg1;

@end
