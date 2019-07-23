/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow> {
    NSObject<OS_nw_channel> * channel;
    NSObject<OS_nw_path> * connected_path;
    NSObject<OS_nw_path_evaluator> * connected_path_evaluator;
    NSObject<OS_dispatch_data> * final_data;
    int  final_error;
    NSObject<OS_nw_endpoint> * flow_divert_endpoint;
    NSObject<OS_xpc_object> * flow_divert_token;
    unsigned int  has_connected;
    unsigned int  initial_payload_sent;
    unsigned int  input_finished;
    void * internally_retained_object;
    unsigned int  is_channel;
    unsigned int  is_custom_protocols_only;
    unsigned int  is_multipath;
    unsigned int  is_rawip;
    unsigned int  is_viable;
    struct __CFError { } * last_error;
    NSObject<OS_nw_endpoint> * multipath_effective_subflow_endpoint;
    unsigned int  multipath_nat64_query_outstanding;
    NSObject<OS_nw_array> * multipath_watcher_array;
    int  pre_connected_fd;
    struct nw_protocol_callbacks { 
        int (*add_input_handler)(); 
        int (*remove_input_handler)(); 
        int (*replace_input_handler)(); 
        int (*connect)(); 
        int (*disconnect)(); 
        int (*connected)(); 
        int (*disconnected)(); 
        int (*error)(); 
        int (*input_available)(); 
        int (*output_available)(); 
        int (*get_input_frames)(); 
        int (*get_output_frames)(); 
        int (*finalize_output_frames)(); 
        int (*get_parameters)(); 
        int (*get_path)(); 
        int (*get_local_endpoint)(); 
        int (*get_remote_endpoint)(); 
        int (*updated_path)(); 
        int (*supports_external_data)(); 
        int (*input_finished)(); 
    }  protocol_callbacks;
    struct nw_protocol { 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        unsigned char flow_id[16]; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol_handler;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  protocol_identifier;
    NSObject<OS_nw_read_request> * read_requests;
    unsigned int  servicing_reads;
    struct _DNSServiceRef_t { } * sleep_proxy_ref;
    struct nw_protocol { struct nw_protocol_identifier {} *x1; struct nw_protocol_callbacks {} *x2; struct nw_protocol {} *x3; void *x4; unsigned char x5[16]; struct nw_protocol {} *x6; void *x7; } * socket_protocol;
    struct nw_protocol { struct nw_protocol_identifier {} *x1; struct nw_protocol_callbacks {} *x2; struct nw_protocol {} *x3; void *x4; unsigned char x5[16]; struct nw_protocol {} *x6; void *x7; } * tls_protocol;
    struct nw_protocol { struct nw_protocol_identifier {} *x1; struct nw_protocol_callbacks {} *x2; struct nw_protocol {} *x3; void *x4; unsigned char x5[16]; struct nw_protocol {} *x6; void *x7; } * transport_protocol;
    struct nw_protocol { struct nw_protocol_identifier {} *x1; struct nw_protocol_callbacks {} *x2; struct nw_protocol {} *x3; void *x4; unsigned char x5[16]; struct nw_protocol {} *x6; void *x7; } * wrapper_protocol;
    NSObject<OS_nw_write_request> * write_requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
