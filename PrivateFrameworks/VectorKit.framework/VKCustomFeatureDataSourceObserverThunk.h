/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver> {
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        <VKCustomFeatureDataSource> *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _dataSource;
    struct LabelCustomFeatureProvider { struct LabelCustomFeatureSupport {} *x1; struct LabelManager {} *x2; struct _retain_ptr<VKCustomFeatureDataSourceObserverThunk *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; } * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearObserver;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 observer:(struct LabelCustomFeatureProvider { struct LabelCustomFeatureSupport {} *x1; struct LabelManager {} *x2; struct _retain_ptr<VKCustomFeatureDataSourceObserverThunk *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg2;

@end
