/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoAnalyzerDelegate, OS_dispatch_queue;
@class NSUUID, HMFUnfairLock, NSMutableArray, NSDate, HMICameraVideoAnalyzerHistory, NSObject, HMICameraVideoAnalyzerScheduler, HMICameraVideoAnalyzerConfiguration, HMIAnalysisService, NSArray, NSString;

@interface HMICameraVideoAnalyzer : HMFObject <HMFLogging> {

	int _flagCounts[7];
	int _outcomeCounts[3];
	BOOL _skipSequentialMediaIntegrityCheck;
	BOOL _analysisInProgress;
	BOOL _inErrorState;
	BOOL _inBypassMode;
	BOOL _sessionEnded;
	BOOL _uploadVideoAnalysisEvent;
	BOOL _saveVideoFramesToDisk;
	id<HMICameraVideoAnalyzerDelegate> _delegate;
	NSUUID* _identifier;
	HMFUnfairLock* _lock;
	NSMutableArray* _internalPendingRequests;
	NSDate* _lastRequestSubmissionTime;
	HMICameraVideoAnalyzerHistory* _history;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMICameraVideoAnalyzerScheduler* _scheduler;
	unsigned long long _mediaIntegritySequenceNumber;
	HMICameraVideoAnalyzerConfiguration* _configuration;
	HMIAnalysisService* _remoteAnalysisService;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                                   //@synthesize lock=_lock - In the implementation block
@property (readonly) NSMutableArray * internalPendingRequests;                                         //@synthesize internalPendingRequests=_internalPendingRequests - In the implementation block
@property (retain) NSDate * lastRequestSubmissionTime;                                                 //@synthesize lastRequestSubmissionTime=_lastRequestSubmissionTime - In the implementation block
@property (readonly) HMICameraVideoAnalyzerHistory * history;                                          //@synthesize history=_history - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMICameraVideoAnalyzerScheduler * scheduler;                                      //@synthesize scheduler=_scheduler - In the implementation block
@property (assign) unsigned long long mediaIntegritySequenceNumber;                                    //@synthesize mediaIntegritySequenceNumber=_mediaIntegritySequenceNumber - In the implementation block
@property (readonly) BOOL skipSequentialMediaIntegrityCheck;                                           //@synthesize skipSequentialMediaIntegrityCheck=_skipSequentialMediaIntegrityCheck - In the implementation block
@property (assign) BOOL analysisInProgress;                                                            //@synthesize analysisInProgress=_analysisInProgress - In the implementation block
@property (assign) BOOL inErrorState;                                                                  //@synthesize inErrorState=_inErrorState - In the implementation block
@property (assign) BOOL inBypassMode;                                                                  //@synthesize inBypassMode=_inBypassMode - In the implementation block
@property (retain) HMICameraVideoAnalyzerConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) HMIAnalysisService * remoteAnalysisService;                               //@synthesize remoteAnalysisService=_remoteAnalysisService - In the implementation block
@property (assign) BOOL sessionEnded;                                                                  //@synthesize sessionEnded=_sessionEnded - In the implementation block
@property (getter=shouldUploadVideoAnalysisEvent,readonly) BOOL uploadVideoAnalysisEvent;              //@synthesize uploadVideoAnalysisEvent=_uploadVideoAnalysisEvent - In the implementation block
@property (getter=shouldSaveVideoFramesToDisk) BOOL saveVideoFramesToDisk;                             //@synthesize saveVideoFramesToDisk=_saveVideoFramesToDisk - In the implementation block
@property (readonly) NSArray * pendingRequests; 
@property (readonly) BOOL isActive; 
@property (__weak) id<HMICameraVideoAnalyzerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(long long)confidenceThatEventOccurred:(long long)arg1 events:(long long)arg2 annotationScores:(id)arg3 ;
+(id)queryVersionInformation;
-(id<HMICameraVideoAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<HMICameraVideoAnalyzerDelegate>)arg1 ;
-(HMFUnfairLock *)lock;
-(NSUUID *)identifier;
-(BOOL)isActive;
-(void)setConfiguration:(HMICameraVideoAnalyzerConfiguration *)arg1 ;
-(HMICameraVideoAnalyzerConfiguration *)configuration;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMICameraVideoAnalyzerHistory *)history;
-(HMICameraVideoAnalyzerScheduler *)scheduler;
-(NSArray *)pendingRequests;
-(id)logIdentifier;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(void)analyzeFragment:(id)arg1 ;
-(void)clearPendingFragments;
-(void)processPendingRequests;
-(void)setInBypassMode:(BOOL)arg1 ;
-(void)_markPendingRequestsWithFlag:(long long)arg1 ;
-(id)_outcomeCountsAsString;
-(unsigned long long)mediaIntegritySequenceNumber;
-(id)_flagCountsAsString;
-(BOOL)inBypassMode;
-(BOOL)inErrorState;
-(BOOL)analysisInProgress;
-(void)_scheduleRequest:(id)arg1 ;
-(BOOL)sessionEnded;
-(void)_handleError:(long long)arg1 request:(id)arg2 ;
-(void)setLastRequestSubmissionTime:(NSDate *)arg1 ;
-(NSMutableArray *)internalPendingRequests;
-(unsigned long long)pendingRequestsCount;
-(NSDate *)lastRequestSubmissionTime;
-(void)setSessionEnded:(BOOL)arg1 ;
-(void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3 ;
-(BOOL)skipSequentialMediaIntegrityCheck;
-(void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2 ;
-(BOOL)_shouldContinueAnalyzingRequest:(id)arg1 resultCode:(long long*)arg2 ;
-(void)_analyzeRequest:(id)arg1 ;
-(void)setAnalysisInProgress:(BOOL)arg1 ;
-(BOOL)_checkRequest:(id)arg1 ;
-(void)_predictRequest:(id)arg1 ;
-(void)_analyzeRequestRemotely:(id)arg1 retryOnConnectionInterruption:(BOOL)arg2 ;
-(void)_analyzeRequestLocally:(id)arg1 ;
-(void)setMediaIntegritySequenceNumber:(unsigned long long)arg1 ;
-(HMIAnalysisService *)remoteAnalysisService;
-(void)_handleError:(long long)arg1 request:(id)arg2 underlyingError:(id)arg3 ;
-(void)_handleDidAnalyzeRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_handleDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)_willAnalyzeRequest:(id)arg1 ;
-(void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3 underlyingError:(id)arg4 ;
-(void)_analyzeRequestFramesLocally:(id)arg1 ;
-(void)_sendAnalyticsEventForRequest:(id)arg1 outcome:(long long)arg2 result:(id)arg3 error:(id)arg4 ;
-(void)_requestDidEnd:(id)arg1 outcome:(long long)arg2 ;
-(void)_notifyDidAnalyzeRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2 error:(id)arg3 ;
-(void)_notifyDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_enterErrorState;
-(void)_notifyDidFailAnalysisForRequest:(id)arg1 withError:(id)arg2 ;
-(void)setInErrorState:(BOOL)arg1 ;
-(BOOL)_analyzeRequestFrames:(id)arg1 ;
-(void)_handleDidAnalyzeRequest:(id)arg1 ;
-(BOOL)_analyzeVideoFrame:(id)arg1 request:(id)arg2 result:(id*)arg3 error:(id*)arg4 ;
-(id)_analyzeFrame:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldSaveVideoFramesToDisk;
-(BOOL)_saveVideoFrame:(id)arg1 videoFragment:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldUploadVideoAnalysisEvent;
-(void)setRemoteAnalysisService:(HMIAnalysisService *)arg1 ;
-(void)setSaveVideoFramesToDisk:(BOOL)arg1 ;
@end

