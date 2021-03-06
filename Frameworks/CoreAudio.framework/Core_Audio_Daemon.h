/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_Daemon : NSObject <Core_Audio_Hardware, NSXPCListenerDelegate, XPC_IO_Gateway> {
    struct shared_ptr<std::__1::shared_mutex> { 
        struct shared_mutex {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _creation_mutex;
    struct shared_ptr<AMCP::System::All_Control_Value_Observer> { 
        struct All_Control_Value_Observer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _default_device_all_control_value_observer;
    struct shared_ptr<HAL::Default_Device::Manager> { 
        struct Manager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _default_device_manager;
    struct shared_ptr<Daemon_Guts> { 
        struct Daemon_Guts {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _guts;
    struct queue { 
        struct object { 
            NSObject<OS_dispatch_object> *fObj; 
        } fObj; 
    }  _high_priority_root_queue;
    struct shared_ptr<Server_Side_Client_IO_Host> { 
        struct Server_Side_Client_IO_Host {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _host;
    NSMutableSet * _io_listener_connections;
    bool  _is_alive;
    struct shared_ptr<HAL::Object_State::Manager> { 
        struct Manager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _object_state_manager;
    struct shared_ptr<Portal> { 
        struct Portal {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _portal;
    NSMutableSet * _property_listener_connections;
    NSMutableSet * _remote_connections;
    struct queue { 
        struct object { 
            NSObject<OS_dispatch_object> *fObj; 
        } fObj; 
    }  _scratch_queue;
    struct shared_ptr<AMCP::Utility::Settings_Storage> { 
        struct Settings_Storage {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _settings_storage;
}

@property (nonatomic) struct shared_ptr<std::__1::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; } creation_mutex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; } default_device_all_control_value_observer;
@property (nonatomic) struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; } default_device_manager;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; } guts;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct queue { struct object { id x_1_1_1; } x1; } high_priority_root_queue;
@property (nonatomic) struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; } host;
@property (nonatomic, retain) NSMutableSet *io_listener_connections;
@property (nonatomic) bool is_alive;
@property (nonatomic) struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; } object_state_manager;
@property (nonatomic) struct shared_ptr<Portal> { struct Portal {} *x1; struct __shared_weak_count {} *x2; } portal;
@property (nonatomic, retain) NSMutableSet *property_listener_connections;
@property (nonatomic, retain) NSMutableSet *remote_connections;
@property (nonatomic) struct queue { struct object { id x_1_1_1; } x1; } scratch_queue;
@property (nonatomic) struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; } settings_storage;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)add_device_token_to_user_info:(unsigned int)arg1 user_info:(id)arg2;
- (void)add_property_listener:(id)arg1 reply:(id /* block */)arg2;
- (void)audio_object_get_property_data:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 with:(id)arg4 reply:(id /* block */)arg5;
- (void)audio_object_get_property_info:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 reply:(id /* block */)arg4;
- (void)audio_object_set_property_data:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 with:(id)arg4 value:(id)arg5 reply:(id /* block */)arg6;
- (void)call_all_remote_listeners:(id)arg1;
- (void)call_all_remote_listeners_async:(id)arg1;
- (void)create_aggregate_device:(id)arg1 reply:(id /* block */)arg2;
- (void)create_config_change_observers;
- (void)create_device_for_client_io:(unsigned int)arg1 with:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)create_io_client_on:(unsigned int)arg1 using_listener:(id)arg2 reply:(id /* block */)arg3;
- (id)create_io_listener_connection:(id)arg1;
- (id)create_listener_connection:(id)arg1;
- (void)create_property_observer;
- (struct shared_ptr<std::__1::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; })creation_mutex;
- (void)dealloc;
- (struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; })default_device_all_control_value_observer;
- (struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })default_device_manager;
- (void)destroy_aggregate_device:(unsigned int)arg1 reply:(id /* block */)arg2;
- (unsigned int)device_token_from_user_info_item:(id)arg1;
- (int)get_client_pid_from_current_connection;
- (struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; })guts;
- (void)handle_io_message:(unsigned int)arg1 with:(unsigned int)arg2 incoming:(id)arg3 reply:(id /* block */)arg4;
- (struct queue { struct object { id x_1_1_1; } x1; })high_priority_root_queue;
- (struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; })host;
- (id)init;
- (id)initWithMCPType:(long long)arg1;
- (id)io_listener_connections;
- (bool)is_alive;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })object_state_manager;
- (void)ping:(int)arg1 reply:(id /* block */)arg2;
- (struct shared_ptr<Portal> { struct Portal {} *x1; struct __shared_weak_count {} *x2; })portal;
- (id)property_listener_connections;
- (void)release_resources;
- (id)remote_connections;
- (struct queue { struct object { id x_1_1_1; } x1; })scratch_queue;
- (void)sendPropertiesChanged:(unsigned int)arg1 count:(unsigned long long)arg2 addresses:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg3;
- (id)send_io_message:(struct XPC_Message_Payload { unsigned int x1; unsigned int x2; id x3; })arg1;
- (void)setCreation_mutex:(struct shared_ptr<std::__1::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDefault_device_all_control_value_observer:(struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDefault_device_manager:(struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setGuts:(struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setHigh_priority_root_queue:(struct queue { struct object { id x_1_1_1; } x1; })arg1;
- (void)setHost:(struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setIo_listener_connections:(id)arg1;
- (void)setIs_alive:(bool)arg1;
- (void)setObject_state_manager:(struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPortal:(struct shared_ptr<Portal> { struct Portal {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setProperty_listener_connections:(id)arg1;
- (void)setRemote_connections:(id)arg1;
- (void)setScratch_queue:(struct queue { struct object { id x_1_1_1; } x1; })arg1;
- (void)setSettings_storage:(struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; })settings_storage;
- (void)start_all_client_io:(unsigned int)arg1;
- (void)stop_all_client_io:(unsigned int)arg1;

@end
