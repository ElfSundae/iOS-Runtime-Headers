/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
    VCPSceneChangeSegment * _activeSegment;
    bool  _currentStatus;
    bool  _firstFrame;
    struct FrameBuffer { 
        int frame_count_; 
        struct Frame { 
            int frame_idx_; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } timestamp_; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } ave_motion_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } org_motion_; 
            float quality_score_; 
            unsigned long long distortion_; 
            float distortion_norm_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } motion_change_; 
            unsigned int compressed_bytes_; 
            bool blur_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } acc_var_; 
            float texture_; 
            struct MotionResult { 
                float significant_values_[6]; 
                float confidence_[6]; 
                float fine_action_score_; 
                float action_score_; 
                float track_score_; 
                float rotation_angle_; 
                float subtle_motion_score_; 
                int action_blocks_; 
                float action_motion_; 
                bool valid_mb_; 
                bool valid_submb_; 
                int support_size_; 
                float residual_var_; 
                float gmv_[2]; 
                struct { 
                    long long value; 
                    int timescale; 
                    unsigned int flags; 
                    long long epoch; 
                } duration_; 
                float scene_delta_; 
                float scene_delta_ratio_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } objects_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } detect_objects_; 
            } motion_result_; 
            float interestingness_; 
            float obstruction_; 
            float colorfulness_score_; 
            struct Histogram { 
                float extremities_; 
                float overexposes_; 
                int *histogram_[3]; 
                int *moments_hist_[2]; 
            } histogram_; 
        } buffer_[35]; 
    }  _frameBuffer;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _frameTimeRange;
    bool  _isSegmentPoint;
    float  _sceneDeltaBuffer;
    NSMutableArray * _sceneSegments;
    bool  _verbose;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ComputeSceneDelta:(struct Frame { int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; unsigned long long x7; float x8; struct Translation { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; unsigned int x10; bool x11; struct Translation { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; float x13; struct MotionResult { float x_14_1_1[6]; float x_14_1_2[6]; float x_14_1_3; float x_14_1_4; float x_14_1_5; float x_14_1_6; float x_14_1_7; int x_14_1_8; float x_14_1_9; bool x_14_1_10; bool x_14_1_11; int x_14_1_12; float x_14_1_13; float x_14_1_14[2]; struct { long long x_15_2_1; int x_15_2_2; unsigned int x_15_2_3; long long x_15_2_4; } x_14_1_15; float x_14_1_16; float x_14_1_17; struct Vector<ma::Object *> { struct __CFArray {} *x_18_2_1; } x_14_1_18; struct Vector<ma::Object *> { struct __CFArray {} *x_19_2_1; } x_14_1_19; } x14; }*)arg1;
- (void)PrintSegments;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (bool)decideLensSwitchPoint:(struct Frame { int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; unsigned long long x7; float x8; struct Translation { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; unsigned int x10; bool x11; struct Translation { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; float x13; struct MotionResult { float x_14_1_1[6]; float x_14_1_2[6]; float x_14_1_3; float x_14_1_4; float x_14_1_5; float x_14_1_6; float x_14_1_7; int x_14_1_8; float x_14_1_9; bool x_14_1_10; bool x_14_1_11; int x_14_1_12; float x_14_1_13; float x_14_1_14[2]; struct { long long x_15_2_1; int x_15_2_2; unsigned int x_15_2_3; long long x_15_2_4; } x_14_1_15; float x_14_1_16; float x_14_1_17; struct Vector<ma::Object *> { struct __CFArray {} *x_18_2_1; } x_14_1_18; struct Vector<ma::Object *> { struct __CFArray {} *x_19_2_1; } x_14_1_19; } x14; }*)arg1;
- (int)finalizeAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (bool)isSegmentPoint;
- (id)results;

@end
