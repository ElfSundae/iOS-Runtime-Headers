/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPECNInterfaceStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int interfaceType : 1; 
        unsigned int ipProtocol : 1; 
        unsigned int tcpECNIntClientSetup : 1; 
        unsigned int tcpECNIntClientSuccess : 1; 
        unsigned int tcpECNIntConnNoPLCE : 1; 
        unsigned int tcpECNIntConnPLCE : 1; 
        unsigned int tcpECNIntConnPLNoCE : 1; 
        unsigned int tcpECNIntConnRecvCE : 1; 
        unsigned int tcpECNIntConnRecvECE : 1; 
        unsigned int tcpECNIntFallbackCE : 1; 
        unsigned int tcpECNIntFallbackReorder : 1; 
        unsigned int tcpECNIntFallbackSynLoss : 1; 
        unsigned int tcpECNIntNotSupportedPeer : 1; 
        unsigned int tcpECNIntOffAvgRTT : 1; 
        unsigned int tcpECNIntOffDropRst : 1; 
        unsigned int tcpECNIntOffDropRxmt : 1; 
        unsigned int tcpECNIntOffOOBPer : 1; 
        unsigned int tcpECNIntOffRTTVar : 1; 
        unsigned int tcpECNIntOffReorderPer : 1; 
        unsigned int tcpECNIntOffRxmtPer : 1; 
        unsigned int tcpECNIntOffSACKE : 1; 
        unsigned int tcpECNIntOffTotalOOPkts : 1; 
        unsigned int tcpECNIntOffTotalRxPkts : 1; 
        unsigned int tcpECNIntOffTotalRxmtPkts : 1; 
        unsigned int tcpECNIntOffTotalTxPkts : 1; 
        unsigned int tcpECNIntOnAvgRTT : 1; 
        unsigned int tcpECNIntOnDropRst : 1; 
        unsigned int tcpECNIntOnDropRxmt : 1; 
        unsigned int tcpECNIntOnOOBPer : 1; 
        unsigned int tcpECNIntOnRTTVar : 1; 
        unsigned int tcpECNIntOnReorderPer : 1; 
        unsigned int tcpECNIntOnSACKE : 1; 
        unsigned int tcpECNIntOnTotalOOPkts : 1; 
        unsigned int tcpECNIntOnTotalRxPkts : 1; 
        unsigned int tcpECNIntOnTotalRxmtPkts : 1; 
        unsigned int tcpECNIntOnTotalTxPkts : 1; 
        unsigned int tcpECNIntRecvCE : 1; 
        unsigned int tcpECNIntRecvECE : 1; 
        unsigned int tcpECNIntRxmtPer : 1; 
        unsigned int tcpECNIntSentECE : 1; 
        unsigned int tcpECNIntServerSetup : 1; 
        unsigned int tcpECNIntServerSuccess : 1; 
        unsigned int tcpECNIntSynAckLost : 1; 
        unsigned int tcpECNIntSynLost : 1; 
        unsigned int tcpECNIntTotalConnections : 1; 
        unsigned int tcpUnsentDataAtSleepCnt : 1; 
    }  _has;
    unsigned long long  _interfaceType;
    unsigned long long  _ipProtocol;
    unsigned long long  _tcpECNIntClientSetup;
    unsigned long long  _tcpECNIntClientSuccess;
    unsigned long long  _tcpECNIntConnNoPLCE;
    unsigned long long  _tcpECNIntConnPLCE;
    unsigned long long  _tcpECNIntConnPLNoCE;
    unsigned long long  _tcpECNIntConnRecvCE;
    unsigned long long  _tcpECNIntConnRecvECE;
    unsigned long long  _tcpECNIntFallbackCE;
    unsigned long long  _tcpECNIntFallbackReorder;
    unsigned long long  _tcpECNIntFallbackSynLoss;
    unsigned long long  _tcpECNIntNotSupportedPeer;
    unsigned long long  _tcpECNIntOffAvgRTT;
    unsigned long long  _tcpECNIntOffDropRst;
    unsigned long long  _tcpECNIntOffDropRxmt;
    unsigned long long  _tcpECNIntOffOOBPer;
    unsigned long long  _tcpECNIntOffRTTVar;
    unsigned long long  _tcpECNIntOffReorderPer;
    unsigned long long  _tcpECNIntOffRxmtPer;
    unsigned long long  _tcpECNIntOffSACKE;
    unsigned long long  _tcpECNIntOffTotalOOPkts;
    unsigned long long  _tcpECNIntOffTotalRxPkts;
    unsigned long long  _tcpECNIntOffTotalRxmtPkts;
    unsigned long long  _tcpECNIntOffTotalTxPkts;
    unsigned long long  _tcpECNIntOnAvgRTT;
    unsigned long long  _tcpECNIntOnDropRst;
    unsigned long long  _tcpECNIntOnDropRxmt;
    unsigned long long  _tcpECNIntOnOOBPer;
    unsigned long long  _tcpECNIntOnRTTVar;
    unsigned long long  _tcpECNIntOnReorderPer;
    unsigned long long  _tcpECNIntOnSACKE;
    unsigned long long  _tcpECNIntOnTotalOOPkts;
    unsigned long long  _tcpECNIntOnTotalRxPkts;
    unsigned long long  _tcpECNIntOnTotalRxmtPkts;
    unsigned long long  _tcpECNIntOnTotalTxPkts;
    unsigned long long  _tcpECNIntRecvCE;
    unsigned long long  _tcpECNIntRecvECE;
    unsigned long long  _tcpECNIntRxmtPer;
    unsigned long long  _tcpECNIntSentECE;
    unsigned long long  _tcpECNIntServerSetup;
    unsigned long long  _tcpECNIntServerSuccess;
    unsigned long long  _tcpECNIntSynAckLost;
    unsigned long long  _tcpECNIntSynLost;
    unsigned long long  _tcpECNIntTotalConnections;
    unsigned long long  _tcpUnsentDataAtSleepCnt;
}

@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasIpProtocol;
@property (nonatomic) BOOL hasTcpECNIntClientSetup;
@property (nonatomic) BOOL hasTcpECNIntClientSuccess;
@property (nonatomic) BOOL hasTcpECNIntConnNoPLCE;
@property (nonatomic) BOOL hasTcpECNIntConnPLCE;
@property (nonatomic) BOOL hasTcpECNIntConnPLNoCE;
@property (nonatomic) BOOL hasTcpECNIntConnRecvCE;
@property (nonatomic) BOOL hasTcpECNIntConnRecvECE;
@property (nonatomic) BOOL hasTcpECNIntFallbackCE;
@property (nonatomic) BOOL hasTcpECNIntFallbackReorder;
@property (nonatomic) BOOL hasTcpECNIntFallbackSynLoss;
@property (nonatomic) BOOL hasTcpECNIntNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNIntOffAvgRTT;
@property (nonatomic) BOOL hasTcpECNIntOffDropRst;
@property (nonatomic) BOOL hasTcpECNIntOffDropRxmt;
@property (nonatomic) BOOL hasTcpECNIntOffOOBPer;
@property (nonatomic) BOOL hasTcpECNIntOffRTTVar;
@property (nonatomic) BOOL hasTcpECNIntOffReorderPer;
@property (nonatomic) BOOL hasTcpECNIntOffRxmtPer;
@property (nonatomic) BOOL hasTcpECNIntOffSACKE;
@property (nonatomic) BOOL hasTcpECNIntOffTotalOOPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalRxPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalRxmtPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalTxPkts;
@property (nonatomic) BOOL hasTcpECNIntOnAvgRTT;
@property (nonatomic) BOOL hasTcpECNIntOnDropRst;
@property (nonatomic) BOOL hasTcpECNIntOnDropRxmt;
@property (nonatomic) BOOL hasTcpECNIntOnOOBPer;
@property (nonatomic) BOOL hasTcpECNIntOnRTTVar;
@property (nonatomic) BOOL hasTcpECNIntOnReorderPer;
@property (nonatomic) BOOL hasTcpECNIntOnSACKE;
@property (nonatomic) BOOL hasTcpECNIntOnTotalOOPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalRxPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalRxmtPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalTxPkts;
@property (nonatomic) BOOL hasTcpECNIntRecvCE;
@property (nonatomic) BOOL hasTcpECNIntRecvECE;
@property (nonatomic) BOOL hasTcpECNIntRxmtPer;
@property (nonatomic) BOOL hasTcpECNIntSentECE;
@property (nonatomic) BOOL hasTcpECNIntServerSetup;
@property (nonatomic) BOOL hasTcpECNIntServerSuccess;
@property (nonatomic) BOOL hasTcpECNIntSynAckLost;
@property (nonatomic) BOOL hasTcpECNIntSynLost;
@property (nonatomic) BOOL hasTcpECNIntTotalConnections;
@property (nonatomic) BOOL hasTcpUnsentDataAtSleepCnt;
@property (nonatomic) unsigned long long interfaceType;
@property (nonatomic) unsigned long long ipProtocol;
@property (nonatomic) unsigned long long tcpECNIntClientSetup;
@property (nonatomic) unsigned long long tcpECNIntClientSuccess;
@property (nonatomic) unsigned long long tcpECNIntConnNoPLCE;
@property (nonatomic) unsigned long long tcpECNIntConnPLCE;
@property (nonatomic) unsigned long long tcpECNIntConnPLNoCE;
@property (nonatomic) unsigned long long tcpECNIntConnRecvCE;
@property (nonatomic) unsigned long long tcpECNIntConnRecvECE;
@property (nonatomic) unsigned long long tcpECNIntFallbackCE;
@property (nonatomic) unsigned long long tcpECNIntFallbackReorder;
@property (nonatomic) unsigned long long tcpECNIntFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNIntNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNIntOffAvgRTT;
@property (nonatomic) unsigned long long tcpECNIntOffDropRst;
@property (nonatomic) unsigned long long tcpECNIntOffDropRxmt;
@property (nonatomic) unsigned long long tcpECNIntOffOOBPer;
@property (nonatomic) unsigned long long tcpECNIntOffRTTVar;
@property (nonatomic) unsigned long long tcpECNIntOffReorderPer;
@property (nonatomic) unsigned long long tcpECNIntOffRxmtPer;
@property (nonatomic) unsigned long long tcpECNIntOffSACKE;
@property (nonatomic) unsigned long long tcpECNIntOffTotalOOPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalRxPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalRxmtPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalTxPkts;
@property (nonatomic) unsigned long long tcpECNIntOnAvgRTT;
@property (nonatomic) unsigned long long tcpECNIntOnDropRst;
@property (nonatomic) unsigned long long tcpECNIntOnDropRxmt;
@property (nonatomic) unsigned long long tcpECNIntOnOOBPer;
@property (nonatomic) unsigned long long tcpECNIntOnRTTVar;
@property (nonatomic) unsigned long long tcpECNIntOnReorderPer;
@property (nonatomic) unsigned long long tcpECNIntOnSACKE;
@property (nonatomic) unsigned long long tcpECNIntOnTotalOOPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalRxPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalRxmtPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalTxPkts;
@property (nonatomic) unsigned long long tcpECNIntRecvCE;
@property (nonatomic) unsigned long long tcpECNIntRecvECE;
@property (nonatomic) unsigned long long tcpECNIntRxmtPer;
@property (nonatomic) unsigned long long tcpECNIntSentECE;
@property (nonatomic) unsigned long long tcpECNIntServerSetup;
@property (nonatomic) unsigned long long tcpECNIntServerSuccess;
@property (nonatomic) unsigned long long tcpECNIntSynAckLost;
@property (nonatomic) unsigned long long tcpECNIntSynLost;
@property (nonatomic) unsigned long long tcpECNIntTotalConnections;
@property (nonatomic) unsigned long long tcpUnsentDataAtSleepCnt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInterfaceType;
- (BOOL)hasIpProtocol;
- (BOOL)hasTcpECNIntClientSetup;
- (BOOL)hasTcpECNIntClientSuccess;
- (BOOL)hasTcpECNIntConnNoPLCE;
- (BOOL)hasTcpECNIntConnPLCE;
- (BOOL)hasTcpECNIntConnPLNoCE;
- (BOOL)hasTcpECNIntConnRecvCE;
- (BOOL)hasTcpECNIntConnRecvECE;
- (BOOL)hasTcpECNIntFallbackCE;
- (BOOL)hasTcpECNIntFallbackReorder;
- (BOOL)hasTcpECNIntFallbackSynLoss;
- (BOOL)hasTcpECNIntNotSupportedPeer;
- (BOOL)hasTcpECNIntOffAvgRTT;
- (BOOL)hasTcpECNIntOffDropRst;
- (BOOL)hasTcpECNIntOffDropRxmt;
- (BOOL)hasTcpECNIntOffOOBPer;
- (BOOL)hasTcpECNIntOffRTTVar;
- (BOOL)hasTcpECNIntOffReorderPer;
- (BOOL)hasTcpECNIntOffRxmtPer;
- (BOOL)hasTcpECNIntOffSACKE;
- (BOOL)hasTcpECNIntOffTotalOOPkts;
- (BOOL)hasTcpECNIntOffTotalRxPkts;
- (BOOL)hasTcpECNIntOffTotalRxmtPkts;
- (BOOL)hasTcpECNIntOffTotalTxPkts;
- (BOOL)hasTcpECNIntOnAvgRTT;
- (BOOL)hasTcpECNIntOnDropRst;
- (BOOL)hasTcpECNIntOnDropRxmt;
- (BOOL)hasTcpECNIntOnOOBPer;
- (BOOL)hasTcpECNIntOnRTTVar;
- (BOOL)hasTcpECNIntOnReorderPer;
- (BOOL)hasTcpECNIntOnSACKE;
- (BOOL)hasTcpECNIntOnTotalOOPkts;
- (BOOL)hasTcpECNIntOnTotalRxPkts;
- (BOOL)hasTcpECNIntOnTotalRxmtPkts;
- (BOOL)hasTcpECNIntOnTotalTxPkts;
- (BOOL)hasTcpECNIntRecvCE;
- (BOOL)hasTcpECNIntRecvECE;
- (BOOL)hasTcpECNIntRxmtPer;
- (BOOL)hasTcpECNIntSentECE;
- (BOOL)hasTcpECNIntServerSetup;
- (BOOL)hasTcpECNIntServerSuccess;
- (BOOL)hasTcpECNIntSynAckLost;
- (BOOL)hasTcpECNIntSynLost;
- (BOOL)hasTcpECNIntTotalConnections;
- (BOOL)hasTcpUnsentDataAtSleepCnt;
- (unsigned int)hash;
- (unsigned long long)interfaceType;
- (unsigned long long)ipProtocol;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasInterfaceType:(BOOL)arg1;
- (void)setHasIpProtocol:(BOOL)arg1;
- (void)setHasTcpECNIntClientSetup:(BOOL)arg1;
- (void)setHasTcpECNIntClientSuccess:(BOOL)arg1;
- (void)setHasTcpECNIntConnNoPLCE:(BOOL)arg1;
- (void)setHasTcpECNIntConnPLCE:(BOOL)arg1;
- (void)setHasTcpECNIntConnPLNoCE:(BOOL)arg1;
- (void)setHasTcpECNIntConnRecvCE:(BOOL)arg1;
- (void)setHasTcpECNIntConnRecvECE:(BOOL)arg1;
- (void)setHasTcpECNIntFallbackCE:(BOOL)arg1;
- (void)setHasTcpECNIntFallbackReorder:(BOOL)arg1;
- (void)setHasTcpECNIntFallbackSynLoss:(BOOL)arg1;
- (void)setHasTcpECNIntNotSupportedPeer:(BOOL)arg1;
- (void)setHasTcpECNIntOffAvgRTT:(BOOL)arg1;
- (void)setHasTcpECNIntOffDropRst:(BOOL)arg1;
- (void)setHasTcpECNIntOffDropRxmt:(BOOL)arg1;
- (void)setHasTcpECNIntOffOOBPer:(BOOL)arg1;
- (void)setHasTcpECNIntOffRTTVar:(BOOL)arg1;
- (void)setHasTcpECNIntOffReorderPer:(BOOL)arg1;
- (void)setHasTcpECNIntOffRxmtPer:(BOOL)arg1;
- (void)setHasTcpECNIntOffSACKE:(BOOL)arg1;
- (void)setHasTcpECNIntOffTotalOOPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOffTotalRxPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOffTotalRxmtPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOffTotalTxPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOnAvgRTT:(BOOL)arg1;
- (void)setHasTcpECNIntOnDropRst:(BOOL)arg1;
- (void)setHasTcpECNIntOnDropRxmt:(BOOL)arg1;
- (void)setHasTcpECNIntOnOOBPer:(BOOL)arg1;
- (void)setHasTcpECNIntOnRTTVar:(BOOL)arg1;
- (void)setHasTcpECNIntOnReorderPer:(BOOL)arg1;
- (void)setHasTcpECNIntOnSACKE:(BOOL)arg1;
- (void)setHasTcpECNIntOnTotalOOPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOnTotalRxPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOnTotalRxmtPkts:(BOOL)arg1;
- (void)setHasTcpECNIntOnTotalTxPkts:(BOOL)arg1;
- (void)setHasTcpECNIntRecvCE:(BOOL)arg1;
- (void)setHasTcpECNIntRecvECE:(BOOL)arg1;
- (void)setHasTcpECNIntRxmtPer:(BOOL)arg1;
- (void)setHasTcpECNIntSentECE:(BOOL)arg1;
- (void)setHasTcpECNIntServerSetup:(BOOL)arg1;
- (void)setHasTcpECNIntServerSuccess:(BOOL)arg1;
- (void)setHasTcpECNIntSynAckLost:(BOOL)arg1;
- (void)setHasTcpECNIntSynLost:(BOOL)arg1;
- (void)setHasTcpECNIntTotalConnections:(BOOL)arg1;
- (void)setHasTcpUnsentDataAtSleepCnt:(BOOL)arg1;
- (void)setInterfaceType:(unsigned long long)arg1;
- (void)setIpProtocol:(unsigned long long)arg1;
- (void)setTcpECNIntClientSetup:(unsigned long long)arg1;
- (void)setTcpECNIntClientSuccess:(unsigned long long)arg1;
- (void)setTcpECNIntConnNoPLCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnPLCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnPLNoCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnRecvCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnRecvECE:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackCE:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackReorder:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackSynLoss:(unsigned long long)arg1;
- (void)setTcpECNIntNotSupportedPeer:(unsigned long long)arg1;
- (void)setTcpECNIntOffAvgRTT:(unsigned long long)arg1;
- (void)setTcpECNIntOffDropRst:(unsigned long long)arg1;
- (void)setTcpECNIntOffDropRxmt:(unsigned long long)arg1;
- (void)setTcpECNIntOffOOBPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffRTTVar:(unsigned long long)arg1;
- (void)setTcpECNIntOffReorderPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffRxmtPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffSACKE:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalOOPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalRxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalRxmtPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalTxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnAvgRTT:(unsigned long long)arg1;
- (void)setTcpECNIntOnDropRst:(unsigned long long)arg1;
- (void)setTcpECNIntOnDropRxmt:(unsigned long long)arg1;
- (void)setTcpECNIntOnOOBPer:(unsigned long long)arg1;
- (void)setTcpECNIntOnRTTVar:(unsigned long long)arg1;
- (void)setTcpECNIntOnReorderPer:(unsigned long long)arg1;
- (void)setTcpECNIntOnSACKE:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalOOPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalRxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalRxmtPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalTxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntRecvCE:(unsigned long long)arg1;
- (void)setTcpECNIntRecvECE:(unsigned long long)arg1;
- (void)setTcpECNIntRxmtPer:(unsigned long long)arg1;
- (void)setTcpECNIntSentECE:(unsigned long long)arg1;
- (void)setTcpECNIntServerSetup:(unsigned long long)arg1;
- (void)setTcpECNIntServerSuccess:(unsigned long long)arg1;
- (void)setTcpECNIntSynAckLost:(unsigned long long)arg1;
- (void)setTcpECNIntSynLost:(unsigned long long)arg1;
- (void)setTcpECNIntTotalConnections:(unsigned long long)arg1;
- (void)setTcpUnsentDataAtSleepCnt:(unsigned long long)arg1;
- (unsigned long long)tcpECNIntClientSetup;
- (unsigned long long)tcpECNIntClientSuccess;
- (unsigned long long)tcpECNIntConnNoPLCE;
- (unsigned long long)tcpECNIntConnPLCE;
- (unsigned long long)tcpECNIntConnPLNoCE;
- (unsigned long long)tcpECNIntConnRecvCE;
- (unsigned long long)tcpECNIntConnRecvECE;
- (unsigned long long)tcpECNIntFallbackCE;
- (unsigned long long)tcpECNIntFallbackReorder;
- (unsigned long long)tcpECNIntFallbackSynLoss;
- (unsigned long long)tcpECNIntNotSupportedPeer;
- (unsigned long long)tcpECNIntOffAvgRTT;
- (unsigned long long)tcpECNIntOffDropRst;
- (unsigned long long)tcpECNIntOffDropRxmt;
- (unsigned long long)tcpECNIntOffOOBPer;
- (unsigned long long)tcpECNIntOffRTTVar;
- (unsigned long long)tcpECNIntOffReorderPer;
- (unsigned long long)tcpECNIntOffRxmtPer;
- (unsigned long long)tcpECNIntOffSACKE;
- (unsigned long long)tcpECNIntOffTotalOOPkts;
- (unsigned long long)tcpECNIntOffTotalRxPkts;
- (unsigned long long)tcpECNIntOffTotalRxmtPkts;
- (unsigned long long)tcpECNIntOffTotalTxPkts;
- (unsigned long long)tcpECNIntOnAvgRTT;
- (unsigned long long)tcpECNIntOnDropRst;
- (unsigned long long)tcpECNIntOnDropRxmt;
- (unsigned long long)tcpECNIntOnOOBPer;
- (unsigned long long)tcpECNIntOnRTTVar;
- (unsigned long long)tcpECNIntOnReorderPer;
- (unsigned long long)tcpECNIntOnSACKE;
- (unsigned long long)tcpECNIntOnTotalOOPkts;
- (unsigned long long)tcpECNIntOnTotalRxPkts;
- (unsigned long long)tcpECNIntOnTotalRxmtPkts;
- (unsigned long long)tcpECNIntOnTotalTxPkts;
- (unsigned long long)tcpECNIntRecvCE;
- (unsigned long long)tcpECNIntRecvECE;
- (unsigned long long)tcpECNIntRxmtPer;
- (unsigned long long)tcpECNIntSentECE;
- (unsigned long long)tcpECNIntServerSetup;
- (unsigned long long)tcpECNIntServerSuccess;
- (unsigned long long)tcpECNIntSynAckLost;
- (unsigned long long)tcpECNIntSynLost;
- (unsigned long long)tcpECNIntTotalConnections;
- (unsigned long long)tcpUnsentDataAtSleepCnt;
- (void)writeTo:(id)arg1;

@end
