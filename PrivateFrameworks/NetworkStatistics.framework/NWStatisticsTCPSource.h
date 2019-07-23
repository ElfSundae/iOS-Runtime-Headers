/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsTCPSource : NWStatisticsSource {
    NSString *_TCPState;
    NSString *_congestionAlgorithm;
    struct nstat_tcp_descriptor { 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } local; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } remote; 
        unsigned int ifindex; 
        unsigned int state; 
        unsigned int sndbufsize; 
        unsigned int sndbufused; 
        unsigned int rcvbufsize; 
        unsigned int rcvbufused; 
        unsigned int txunacked; 
        unsigned int txwindow; 
        unsigned int txcwindow; 
        unsigned int traffic_class; 
        unsigned int traffic_mgt_flags; 
        BOOL cc_algo[16]; 
        unsigned long long upid; 
        unsigned int pid; 
        BOOL pname[64]; 
        unsigned long long eupid; 
        unsigned int epid; 
        unsigned char uuid[16]; 
        unsigned char euuid[16]; 
        unsigned char vuuid[16]; 
        struct tcp_conn_status { 
            unsigned int probe_activated : 1; 
            unsigned int write_probe_failed : 1; 
            unsigned int read_probe_failed : 1; 
            unsigned int conn_probe_failed : 1; 
        } connstatus; 
        unsigned short ifnet_properties; 
    } _descriptor;
    NSUUID *_euuid;
    NSData *_localAddress;
    NSString *_processName;
    NSData *_remoteAddress;
    NSUUID *_uuid;
    NSUUID *_vuuid;
}

@property (retain) NSString *TCPState;
@property (retain) NSString *congestionAlgorithm;
@property (readonly) int epid;
@property (readonly) unsigned long long eupid;
@property (retain) NSUUID *euuid;
@property (readonly) int interface;
@property (readonly) bool interfaceAWDL;
@property (readonly) bool interfaceCellular;
@property (readonly) bool interfaceExpensive;
@property (readonly) bool interfaceLoopback;
@property (readonly) bool interfaceUnknown;
@property (readonly) bool interfaceViaCellFallback;
@property (readonly) bool interfaceWifi;
@property (readonly) bool interfaceWired;
@property (retain) NSData *localAddress;
@property (readonly) int processID;
@property (retain) NSString *processName;
@property (readonly) int receiveBufferSize;
@property (readonly) int receiveBufferUsed;
@property (retain) NSData *remoteAddress;
@property (readonly) int sendBufferSize;
@property (readonly) int sendBufferUsed;
@property (readonly) int trafficClass;
@property (readonly) unsigned int trafficManagementFlags;
@property (readonly) int txCongestionWindow;
@property (readonly) int txUnacked;
@property (readonly) int txWindow;
@property (readonly) unsigned long long uniqueProcessID;
@property (retain) NSUUID *uuid;
@property (retain) NSUUID *vuuid;

- (void).cxx_destruct;
- (id)TCPState;
- (id)congestionAlgorithm;
- (unsigned int)connstatusConnProbeFailed;
- (unsigned int)connstatusProbeActivated;
- (unsigned int)connstatusReadProbeFailed;
- (unsigned int)connstatusWriteProbeFailed;
- (id)createCounts;
- (id)createNSUUIDForBytes:(unsigned char)arg1;
- (id)description;
- (int)epid;
- (unsigned long long)eupid;
- (id)euuid;
- (BOOL)handleDescriptor:(void*)arg1 length:(unsigned long)arg2;
- (id)initWithManager:(id)arg1 local:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remote:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;
- (int)interface;
- (bool)interfaceAWDL;
- (bool)interfaceCellular;
- (bool)interfaceExpensive;
- (bool)interfaceLoopback;
- (bool)interfaceUnknown;
- (bool)interfaceViaCellFallback;
- (bool)interfaceWifi;
- (bool)interfaceWired;
- (id)localAddress;
- (int)processID;
- (id)processName;
- (int)receiveBufferSize;
- (int)receiveBufferUsed;
- (id)remoteAddress;
- (int)sendBufferSize;
- (int)sendBufferUsed;
- (void)setCongestionAlgorithm:(id)arg1;
- (void)setEuuid:(id)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRemoteAddress:(id)arg1;
- (void)setTCPState:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVuuid:(id)arg1;
- (int)trafficClass;
- (unsigned int)trafficManagementFlags;
- (int)txCongestionWindow;
- (int)txUnacked;
- (int)txWindow;
- (unsigned long long)uniqueProcessID;
- (id)uuid;
- (id)vuuid;

@end
