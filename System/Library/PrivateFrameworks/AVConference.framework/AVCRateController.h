/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCRateControlAlgorithm;
#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, AVCRateControlFeedbackController, AVCBasebandCongestionDetector, VCNWConnectionCongestionDetector, VCRateControlMediaController, NSString;

@interface AVCRateController : NSObject {

	id _rateControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	AVCRateControlFeedbackController* _feedbackController;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	VCNWConnectionCongestionDetector* _nwConnectionCongestionDetector;
	VCRateControlMediaController* _mediaController;
	id<VCRateControlAlgorithm> _rateControlAlgorithm;
	AVCRateControlConfig _configuration;
	unsigned _targetBitrateCap;
	unsigned _estimatedBandwidthCap;
	unsigned _expectedBitrate;
	unsigned _actualBitrate;
	unsigned _targetBitrate;
	unsigned _rateChangeCounter;
	unsigned _roundTripTimeMilliseconds;
	unsigned _packetLossPercentage;
	unsigned _packetLossPercentageVideo;
	unsigned _sumPLR;
	unsigned _sumPLRVideo;
	unsigned _sumOverUtilizedBandwidth;
	unsigned _sumUnderUtilizedBandwidth;
	unsigned _sumOverShootSendBitrate;
	unsigned _sumUnderShootSendBitrate;
	unsigned _sumWorstRecentRTTInMillisecond;
	unsigned _sumWorstRecentBurstLoss;
	unsigned _countPeriodicTaskUpdate;
	unsigned _totalPacketsReceived;
	unsigned _totalPacketsSent;
	unsigned _totalBytesSent;
	unsigned _totalBytesReceived;
	unsigned _burstPacketLoss;
	unsigned _owrd;
	BOOL _isNetworkCongested;
	void* _logDump;
	void* _logFeedbackDump;
	void* _logBasebandDump;
	void* _logNWDump;
	BOOL _isDumpFileEnabled;
	NSString* _dumpID;
	BOOL _isPeriodicLoggingEnabled;
	BOOL _isBasebandEnabled;
	BOOL _isForSimulation;
	BOOL _isUplink;
	BOOL _paused;
	BOOL _useExternalThread;
	BOOL _didConfigured;
	double _lastDefaultsReadTime;
	int _forcedTargetBitrate;
	int _forcedMaxBitrate;
	id _reportingAgentWeak;
	int _reportingModuleID;
	unsigned _lastReportFlushedVideoPacketCount;
	unsigned _lastReportFlushedAudioPacketCount;
	BOOL _isTargetBitrateOvershootReported;
	double _lastTimeTargetBitrateOvershootRecorded;
	BOOL _isUnexpectedLowTargetBitrateReported;
	double _lastTimeUnexpectedLowTargetBitrateRecorded;
	BOOL _isUnexpectedHighRTTReported;
	unsigned _lastReportedBandwidthEstimation;
	unsigned _totalSuddenBandwidthDropCount;
	unsigned _totalMBLRampDownCount;

}

@property (nonatomic,retain) VCRateControlMediaController * mediaController;                                 //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                                                       //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) AVCRateControlConfig configuration;                                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned targetBitrateCap;                                                      //@synthesize targetBitrateCap=_targetBitrateCap - In the implementation block
@property (assign,nonatomic) unsigned estimatedBandwidthCap;                                                 //@synthesize estimatedBandwidthCap=_estimatedBandwidthCap - In the implementation block
@property (assign,nonatomic) unsigned expectedBitrate;                                                       //@synthesize expectedBitrate=_expectedBitrate - In the implementation block
@property (readonly) id reportingAgent; 
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                                   //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) AVCRateControlFeedbackController * feedbackController;                          //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;                     //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (nonatomic,retain) VCNWConnectionCongestionDetector * nwConnectionCongestionDetector;              //@synthesize nwConnectionCongestionDetector=_nwConnectionCongestionDetector - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                    //@synthesize paused=_paused - In the implementation block
-(void)dealloc;
-(BOOL)isPaused;
-(AVCRateControlConfig)configuration;
-(void)setPaused:(BOOL)arg1 ;
-(void)configure:(AVCRateControlConfig)arg1 ;
-(VCRateControlMediaController *)mediaController;
-(AVCRateControlFeedbackController *)feedbackController;
-(void)setFeedbackController:(AVCRateControlFeedbackController *)arg1 ;
-(id)initWithDelegate:(id)arg1 dumpID:(id)arg2 forSimulation:(BOOL)arg3 isUplink:(BOOL)arg4 reportingAgent:(id)arg5 useExternalThread:(BOOL)arg6 ;
-(void)configureInternal:(AVCRateControlConfig)arg1 ;
-(void)registerPeriodicTask;
-(void)deregisterPeriodicTask;
-(void)releaseLogDumpFiles;
-(BOOL)isRadioTechnologyOnCellular:(unsigned)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(void)createBasebandLogDumpFile;
-(void)createNWConnectionLogDumpFile;
-(void)accumulateStatsForPeriodicTaskUpdate;
-(void)getRealTimeStatsForServerBasedTxOnly:(CFDictionaryRef)arg1 ;
-(void)getRealTimeStatsForServerBasedRxOnly:(CFDictionaryRef)arg1 ;
-(void)getRealTimeStatsForiPadCompanion:(CFDictionaryRef)arg1 ;
-(void)getRealTimeStats:(CFDictionaryRef)arg1 ;
-(void)resetStatsForPeriodicTaskReport;
-(id)reportingAgent;
-(void)periodicTask:(void*)arg1 ;
-(unsigned)rateControlModeFromAVConferenceOperatingMode:(int)arg1 ;
-(unsigned)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(BOOL)arg2 ;
-(int)minTierAboveBitrate:(unsigned)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3 ;
-(void)setEstimatedBandwidthCap:(unsigned)arg1 ;
-(void)setExpectedBitrate:(unsigned)arg1 ;
-(id)indicatorFromRadioTech:(unsigned)arg1 ;
-(int)maxTierBelowBitrate:(unsigned)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3 ;
-(void)createLogDumpFiles:(id)arg1 ;
-(BOOL)isRadioTechnologyOnWiFiOrLTE:(unsigned)arg1 ;
-(void)configureAlgorithmWithRestart:(BOOL)arg1 ;
-(int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned)arg1 remoteTech:(unsigned)arg2 defaultTier:(int)arg3 ;
-(void)setDefaultAlgorithmConfiguration:(VCRateControlAlgorithmConfig*)arg1 ;
-(void)createVCRateControlAlgorithmWithConfiguration:(VCRateControlAlgorithmConfig*)arg1 ;
-(unsigned)targetBitrate;
-(void)reportTargetBitrateChange:(unsigned)arg1 rateChangeCounter:(unsigned)arg2 ;
-(void)doRateControlWithStatistics:(SCD_Struct_AV17)arg1 ;
-(void)doRateControlWithBasebandStatistics:(SCD_Struct_AV17)arg1 ;
-(void)doRateControlWithNWConnectionStatistics:(SCD_Struct_AV17)arg1 ;
-(void)printFeedbackMessage:(SCD_Struct_AV17)arg1 ;
-(void)checkAndReportAbnormalSymptoms;
-(void)reportNetworkStatistics;
-(void)printBasebandNotificationStatistics:(SCD_Struct_AV17)arg1 ;
-(void)printNWConnectionStatistics:(SCD_Struct_AV17)arg1 ;
-(void)loadDefaultSettings;
-(id)initWithDelegate:(id)arg1 dumpID:(id)arg2 isUplink:(BOOL)arg3 reportingAgent:(id)arg4 ;
-(void)configureWithOperatingMode:(int)arg1 isLocalCellular:(BOOL)arg2 localCellTech:(int)arg3 isRemoteCellular:(BOOL)arg4 remoteCellTech:(int)arg5 bitrateCapKbps:(unsigned)arg6 ;
-(void)setTargetBitrateCap:(unsigned)arg1 ;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(VCNWConnectionCongestionDetector *)nwConnectionCongestionDetector;
-(void)setNwConnectionCongestionDetector:(VCNWConnectionCongestionDetector *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(unsigned)targetBitrateCap;
-(unsigned)estimatedBandwidthCap;
-(unsigned)expectedBitrate;
@end

