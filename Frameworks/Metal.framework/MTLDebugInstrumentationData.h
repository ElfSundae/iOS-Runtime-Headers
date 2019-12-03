/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugInstrumentationData : NSObject {
    const struct MTLSerializedDebugInstrumentationData { unsigned long long x1; struct Statistics { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10[5]; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; unsigned int x_2_1_14; unsigned int x_2_1_15; unsigned int x_2_1_16; unsigned int x_2_1_17; unsigned int x_2_1_18; unsigned int x_2_1_19; unsigned int x_2_1_20; unsigned int x_2_1_21; unsigned int x_2_1_22; } x2; struct FlatArray<MTLSerializedDebugInstrumentationData::FlatArray<char> > { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct FlatArray<MTLBoundsCheck::DebugLocation> { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct FlatArray<MTLBoundsCheck::DebugSubProgram> { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; } * _data;
    NSObject<OS_dispatch_data> * _dataMap;
    /* Warning: unhandled struct encoding: '{vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> >="__value_"^@}}' */ struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> > { 
        __end_ **__begin_; 
    }  _debugLocations;
    /* Warning: unhandled struct encoding: '{vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> >="__value_"^@}}' */ struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> > { 
        __end_ **__begin_; 
    }  _debugSubPrograms;
    struct vector<const __CFString *, std::__1::allocator<const __CFString *> > { 
        struct __CFString {} **__begin_; 
        struct __CFString {} **__end_; 
        struct __compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > { 
            struct __CFString {} **__value_; 
        } __end_cap_; 
    }  _strings;
}

@property (nonatomic, readonly) bool hasBacktrackingFailures;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugLocationForID:(unsigned int)arg1;
- (id)debugSubProgramForID:(unsigned int)arg1;
- (bool)hasBacktrackingFailures;
- (id)initWithData:(id)arg1;
- (id)stringForID:(unsigned int)arg1;

@end
