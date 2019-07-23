/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownMessage : NSObject <TSPArchivableContent> {
    NSArray * _datas;
    NSObject<OS_dispatch_data> * _messageData;
    struct MessageInfo { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } version_; 
        int _version_cached_byte_size_; 
        unsigned int type_; 
        unsigned int length_; 
        struct RepeatedPtrField<TSP::FieldInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } field_infos_; 
        struct RepeatedField<unsigned long long> { 
            unsigned long long *elements_; 
            int current_size_; 
            int total_size_; 
        } object_references_; 
        int _object_references_cached_byte_size_; 
        struct RepeatedField<unsigned long long> { 
            unsigned long long *elements_; 
            int current_size_; 
            int total_size_; 
        } data_references_; 
        int _data_references_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } diff_merge_version_; 
        int _diff_merge_version_cached_byte_size_; 
        struct FieldPath {} *diff_field_path_; 
        struct RepeatedPtrField<TSP::FieldPath> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } fields_to_remove_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } diff_read_version_; 
        int _diff_read_version_cached_byte_size_; 
        unsigned int base_message_index_; 
    }  _messageInfo;
    TSPLazyReferenceArray * _objects;
}

@property (nonatomic, retain) NSArray *datas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FieldPath=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField' */ struct *fieldPath; /* unknown property attribute:  std::__1::allocator<google::protobuf::UnknownField> >}}[1I]i{RepeatedField<unsigned int>=^Iii}i} */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentUnknown;
@property (nonatomic, readonly) bool isDiff;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *messageData;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic, retain) TSPLazyReferenceArray *objects;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)datas;
- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)fieldPath;
- (id)init;
- (id)initWithMessageInfo:(const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedField<unsigned int> { unsigned int *x_18_1_1; int x_18_1_2; int x_18_1_3; } x18; int x19; unsigned int x20; }*)arg1 data:(id)arg2;
- (bool)isContentUnknown;
- (bool)isDiff;
- (id)messageData;
- (const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedField<unsigned int> { unsigned int *x_18_1_1; int x_18_1_2; int x_18_1_3; } x18; int x19; unsigned int x20; }*)messageInfo;
- (unsigned long long)messageVersion;
- (id)objects;
- (void)setDatas:(id)arg1;
- (void)setObjects:(id)arg1;

@end
