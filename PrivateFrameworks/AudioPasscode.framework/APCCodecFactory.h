/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCCodecFactory : NSObject

+ (id)createBestConfigForCapability:(id)arg1;
+ (struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> > { struct __compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> > { struct APCDecoderBase {} *x_1_1_1; } x1; })createDecoderWithConfig:(id)arg1 apcConfig:(struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > > { struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 error:(id*)arg3;
+ (struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> > { struct __compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> > { struct APCEncoderBase {} *x_1_1_1; } x1; })createEncoderWithConfig:(id)arg1 apcConfig:(struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > > { struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 payloadData:(id)arg3;
+ (float)evaluateCarrierWithConfig:(id)arg1 carrier:(id)arg2 embeddingResult:(id*)arg3;

@end
