//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLogCollectionDelegate-Protocol.h"
#import "SDTaskDelegate-Protocol.h"
#import "SDTaskDepotPushBufferDelegate-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSString, SDArchive;
@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SystemDiagnostic : NSObject <SDLogCollectionDelegate, SDTaskDelegate, SDTaskDepotPushBufferDelegate>
{
    NSDictionary *_targetProcesses;	// 8 = 0x8
    _Bool _showResultDirectory;	// 16 = 0x10
    NSDate *_startDiagnosticTime;	// 24 = 0x18
    NSDate *_oldestDateCreatedCutoff;	// 32 = 0x20
    NSObject<OS_dispatch_group> *copyFilesGroup;	// 40 = 0x28
    _Bool _didComplete;	// 48 = 0x30
    _Bool _shouldStreamToTar;	// 49 = 0x31
    _Bool _disableTarStream;	// 50 = 0x32
    _Bool _shouldPostProcess;	// 51 = 0x33
    _Bool _isTestingMode;	// 52 = 0x34
    _Bool _disableUIFeedback;	// 53 = 0x35
    _Bool _quickMode;	// 54 = 0x36
    _Bool _useParallelCompression;	// 55 = 0x37
    _Bool _shouldRunTimeSensitiveTasks;	// 56 = 0x38
    _Bool _shouldRunLogGenerationTasks;	// 57 = 0x39
    _Bool _shouldRunLogCopyTasks;	// 58 = 0x3a
    _Bool _shouldRunOSLogArchive;	// 59 = 0x3b
    _Bool _shouldGetFeedbackData;	// 60 = 0x3c
    _Bool _shouldRunIDSDump;	// 61 = 0x3d
    _Bool _screenShot;	// 62 = 0x3e
    _Bool _verbose;	// 63 = 0x3f
    _Bool _earlyPrompt;	// 64 = 0x40
    _Bool _shouldCreateTarBall;	// 65 = 0x41
    _Bool _shouldDisplayTarBall;	// 66 = 0x42
    _Bool _shouldRemoveTemporaryDirectory;	// 67 = 0x43
    _Bool _generatePlist;	// 68 = 0x44
    _Bool _userProvidedName;	// 69 = 0x45
    unsigned short _requestSource;	// 70 = 0x46
    int _processCount;	// 72 = 0x48
    int _bridgeTimeoutSeconds;	// 76 = 0x4c
    struct __sFILE *_summaryFD;	// 80 = 0x50
    NSString *_outputDirectory;	// 88 = 0x58
    NSString *_tmpOutputDirectory;	// 96 = 0x60
    NSString *_baseDirectory;	// 104 = 0x68
    NSString *_diagnosticID;	// 112 = 0x70
    NSString *_archiveName;	// 120 = 0x78
    NSString *_requestedDeviceType;	// 128 = 0x80
    NSString *_tarballPath;	// 136 = 0x88
    NSString *_rootPath;	// 144 = 0x90
    NSFileHandle *_summaryHandle;	// 152 = 0x98
    NSString *_frontmostBundleID;	// 160 = 0xa0
    NSString *_changedDiagnosticProperties;	// 168 = 0xa8
    NSArray *_targetPIDs;	// 176 = 0xb0
    NSMutableArray *_pidIndices;	// 184 = 0xb8
    NSString *_warnProcessWhitelist;	// 192 = 0xc0
    NSString *_providedPIDorProcess;	// 200 = 0xc8
    NSString *_remoteSysdiagnoseID;	// 208 = 0xd0
    NSString *_stackshotFile;	// 216 = 0xd8
    NSDictionary *_capOverride;	// 224 = 0xe0
    NSMutableDictionary *_metricsDict;	// 232 = 0xe8
    SDArchive *_archive;	// 240 = 0xf0
    struct proc_bsdinfo *_processes;	// 248 = 0xf8
    NSObject<OS_xpc_object> *_logAgentConnection;	// 256 = 0x100
    NSObject<OS_xpc_object> *_coSysdiagnoseParameters;	// 264 = 0x108
    long long _coSysdiagnose;	// 272 = 0x110
    long long _dpClass;	// 280 = 0x118
}

+ (_Bool)_runBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100047e68
- (void).cxx_destruct;	// IMP=0x000000010004c978
@property int bridgeTimeoutSeconds; // @synthesize bridgeTimeoutSeconds=_bridgeTimeoutSeconds;
@property long long dpClass; // @synthesize dpClass=_dpClass;
@property long long coSysdiagnose; // @synthesize coSysdiagnose=_coSysdiagnose;
@property _Bool userProvidedName; // @synthesize userProvidedName=_userProvidedName;
@property _Bool generatePlist; // @synthesize generatePlist=_generatePlist;
@property _Bool shouldRemoveTemporaryDirectory; // @synthesize shouldRemoveTemporaryDirectory=_shouldRemoveTemporaryDirectory;
@property _Bool shouldDisplayTarBall; // @synthesize shouldDisplayTarBall=_shouldDisplayTarBall;
@property _Bool shouldCreateTarBall; // @synthesize shouldCreateTarBall=_shouldCreateTarBall;
@property _Bool earlyPrompt; // @synthesize earlyPrompt=_earlyPrompt;
@property _Bool verbose; // @synthesize verbose=_verbose;
@property _Bool screenShot; // @synthesize screenShot=_screenShot;
@property _Bool shouldRunIDSDump; // @synthesize shouldRunIDSDump=_shouldRunIDSDump;
@property _Bool shouldGetFeedbackData; // @synthesize shouldGetFeedbackData=_shouldGetFeedbackData;
@property _Bool shouldRunOSLogArchive; // @synthesize shouldRunOSLogArchive=_shouldRunOSLogArchive;
@property _Bool shouldRunLogCopyTasks; // @synthesize shouldRunLogCopyTasks=_shouldRunLogCopyTasks;
@property _Bool shouldRunLogGenerationTasks; // @synthesize shouldRunLogGenerationTasks=_shouldRunLogGenerationTasks;
@property _Bool shouldRunTimeSensitiveTasks; // @synthesize shouldRunTimeSensitiveTasks=_shouldRunTimeSensitiveTasks;
@property _Bool useParallelCompression; // @synthesize useParallelCompression=_useParallelCompression;
@property _Bool quickMode; // @synthesize quickMode=_quickMode;
@property(retain, nonatomic) NSObject<OS_xpc_object> *coSysdiagnoseParameters; // @synthesize coSysdiagnoseParameters=_coSysdiagnoseParameters;
@property(retain, nonatomic) NSObject<OS_xpc_object> *logAgentConnection; // @synthesize logAgentConnection=_logAgentConnection;
@property int processCount; // @synthesize processCount=_processCount;
@property struct proc_bsdinfo *processes; // @synthesize processes=_processes;
@property _Bool disableUIFeedback; // @synthesize disableUIFeedback=_disableUIFeedback;
@property _Bool isTestingMode; // @synthesize isTestingMode=_isTestingMode;
@property _Bool shouldPostProcess; // @synthesize shouldPostProcess=_shouldPostProcess;
@property _Bool disableTarStream; // @synthesize disableTarStream=_disableTarStream;
@property _Bool shouldStreamToTar; // @synthesize shouldStreamToTar=_shouldStreamToTar;
@property _Bool didComplete; // @synthesize didComplete=_didComplete;
@property(retain) SDArchive *archive; // @synthesize archive=_archive;
@property(readonly) NSMutableDictionary *metricsDict; // @synthesize metricsDict=_metricsDict;
@property(retain) NSDictionary *capOverride; // @synthesize capOverride=_capOverride;
@property unsigned short requestSource; // @synthesize requestSource=_requestSource;
@property(retain) NSString *stackshotFile; // @synthesize stackshotFile=_stackshotFile;
@property(copy) NSString *remoteSysdiagnoseID; // @synthesize remoteSysdiagnoseID=_remoteSysdiagnoseID;
@property(retain) NSString *providedPIDorProcess; // @synthesize providedPIDorProcess=_providedPIDorProcess;
@property(retain) NSString *warnProcessWhitelist; // @synthesize warnProcessWhitelist=_warnProcessWhitelist;
@property(retain) NSMutableArray *pidIndices; // @synthesize pidIndices=_pidIndices;
@property(copy) NSArray *targetPIDs; // @synthesize targetPIDs=_targetPIDs;
@property(copy) NSString *changedDiagnosticProperties; // @synthesize changedDiagnosticProperties=_changedDiagnosticProperties;
@property(copy) NSString *frontmostBundleID; // @synthesize frontmostBundleID=_frontmostBundleID;
@property(retain) NSFileHandle *summaryHandle; // @synthesize summaryHandle=_summaryHandle;
@property(copy) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(copy) NSString *tarballPath; // @synthesize tarballPath=_tarballPath;
@property(copy) NSString *requestedDeviceType; // @synthesize requestedDeviceType=_requestedDeviceType;
@property(copy) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(copy) NSString *diagnosticID; // @synthesize diagnosticID=_diagnosticID;
@property(copy) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
@property(copy) NSString *tmpOutputDirectory; // @synthesize tmpOutputDirectory=_tmpOutputDirectory;
@property(copy) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
@property struct __sFILE *summaryFD; // @synthesize summaryFD=_summaryFD;
- (_Bool)logCollectionContainer:(id)arg1 shouldContinueAfterEncounteringError:(id)arg2 path:(id)arg3;	// IMP=0x000000010004c2c0
- (void)logCollectionContainerDidCopyFile:(id)arg1;	// IMP=0x000000010004c2bc
- (void)logCollectionContainer:(id)arg1 didRejectFile:(id)arg2 forReason:(unsigned long long)arg3;	// IMP=0x000000010004c2b8
- (void)streamArchiveFile:(id)arg1;	// IMP=0x000000010004be94
- (void)writeReportForTasks:(id)arg1 withTimeout:(double)arg2 concurrently:(_Bool)arg3;	// IMP=0x000000010004b8a8
- (void)doneTaskWithOutputPath:(id)arg1;	// IMP=0x000000010004b768
- (void)dealloc;	// IMP=0x000000010004b718
- (id)getLibtraceContainers;	// IMP=0x000000010004af98
- (void)endDiagnostics;	// IMP=0x000000010004a960
- (void)executeDiagnosticContainers;	// IMP=0x0000000100048754
- (void)waitForRemoteLogs;	// IMP=0x0000000100048720
- (void)waitAndCollectAirPodLogs;	// IMP=0x0000000100048440
- (void)waitForBridge;	// IMP=0x000000010004843c
- (long long)_sizeOutputDirectoryAndGenerateDiagnosticSummary;	// IMP=0x0000000100048030
- (_Bool)createArchive:(id)arg1 withCompression:(_Bool)arg2;	// IMP=0x0000000100047f68
- (void)populateProcessInfoForInput;	// IMP=0x00000001000475c4
- (void)getCaseInsensitiveMatches:(id)arg1 forString:(const char *)arg2;	// IMP=0x000000010004728c
- (_Bool)previouslyRunningInstancesOfDiagnostic;	// IMP=0x00000001000471e4
- (void)closeTaskSummaryHandle;	// IMP=0x0000000100047068
- (_Bool)prepareOutputDirectory;	// IMP=0x0000000100046530
- (void)createDiagnosticID;	// IMP=0x0000000100046044
- (void)run;	// IMP=0x00000001000455cc
- (_Bool)isPromptEligible;	// IMP=0x0000000100045564
- (void)triggerStandaloneSpindumpWithFilename:(id)arg1 withRuntimeFlags:(unsigned long long)arg2;	// IMP=0x0000000100045368
- (void)triggerStandaloneTailspinWithPath:(id)arg1 reason:(id)arg2 withRuntimeFlags:(unsigned long long)arg3;	// IMP=0x0000000100045178
- (void)markFoldersAsComplete;	// IMP=0x0000000100044884
- (_Bool)prepareOutput;	// IMP=0x00000001000442a4
- (_Bool)safariIsTargeted;	// IMP=0x0000000100044290
- (_Bool)mailIsTargeted;	// IMP=0x000000010004427c
- (_Bool)_processIsTargeted:(id)arg1;	// IMP=0x0000000100044138
- (int)pidForProcessName:(id)arg1;	// IMP=0x000000010004403c
- (void)populateProcesses;	// IMP=0x0000000100043ec8
- (void)gatherDiagnostic;	// IMP=0x0000000100043ebc
- (_Bool)makeOutputDirectory;	// IMP=0x0000000100043eb0
@property(readonly) NSString *defaultBaseDirectory;
- (void)prepareCoSysdiagnoseRequest:(id)arg1;	// IMP=0x00000001000434c0
- (void)prompt;	// IMP=0x00000001000434b4
- (id)init;	// IMP=0x00000001000432e8
- (id)getLogCopyingContainers;	// IMP=0x000000010001622c
- (id)_copyMemoryExceptionsContainers;	// IMP=0x00000001000160e8
- (id)getSubPredicateForFileTypes:(id)arg1;	// IMP=0x0000000100015e80
- (id)includeSyncedExtensionForFileTypes:(id)arg1;	// IMP=0x0000000100015d98
- (id)_getCrashesAndSpinsContainer;	// IMP=0x00000001000158d0
- (id)_copyWatchdogTailspins;	// IMP=0x000000010001570c
- (id)_copySentryPlistsContainer;	// IMP=0x000000010001554c
- (id)_copyMobileActivationLogsContainer;	// IMP=0x00000001000151a8
- (id)_copyBatteryUIPlist;	// IMP=0x0000000100014fe0
- (id)_getMapsSyncJournalContainer;	// IMP=0x0000000100014de4
- (id)_getCloudKitBookmarksContainer;	// IMP=0x0000000100014b7c
- (id)_copySystemVersionPlist;	// IMP=0x0000000100014a20
- (id)_copySiriAnalyticsDB;	// IMP=0x0000000100014870
- (id)_copyTCCLogs;	// IMP=0x0000000100014714
- (id)_getAGXMTLCompilerCrashLogs;	// IMP=0x0000000100014580
- (id)_getCalendarPrefLogs;	// IMP=0x00000001000143e4
- (id)getSimpleDirectoryContainer:(id)arg1 withContainerName:(id)arg2 andDestination:(id)arg3;	// IMP=0x0000000100014238
- (id)getSimplePathArrayContainer:(id)arg1 withContainerName:(id)arg2 andDestination:(id)arg3;	// IMP=0x0000000100014094
- (id)getSimplePathArrayContainer:(id)arg1 withContainerName:(id)arg2 andDestination:(id)arg3 withOffsets:(id)arg4 sizes:(id)arg5;	// IMP=0x0000000100013e88
- (id)_copyMCLogs;	// IMP=0x0000000100013b18
- (id)_copyParsecdLogs;	// IMP=0x000000010001397c
- (id)_copyLivabilityAppLogs;	// IMP=0x0000000100013820
- (id)_copySiriTextToSpeechLogs;	// IMP=0x00000001000136c4
- (id)_copyCommandAndControlLogs;	// IMP=0x00000001000134f8
- (id)_copyOTAUpdateLogs;	// IMP=0x0000000100013348
- (id)_copyNanoPreferencesSyncLogs;	// IMP=0x0000000100013140
- (id)_copyMobileObliteration;	// IMP=0x0000000100012f50
- (id)_getTetheredRestoreLogs;	// IMP=0x0000000100012db4
- (id)_getRecoverydLogs;	// IMP=0x0000000100012c58
- (id)_getForceResetTailspins;	// IMP=0x0000000100012afc
- (id)_getMatchTailspins;	// IMP=0x000000010001298c
- (id)_copyMailErrorConditionTailspins;	// IMP=0x000000010001281c
- (id)_copyFrametracerLogs;	// IMP=0x00000001000126c0
- (id)_copyHomePodSetUpLogs;	// IMP=0x0000000100012564
- (id)_copyBridgeActivationLogs;	// IMP=0x0000000100012408
- (id)_copyMediaServerdAFLogLogs;	// IMP=0x00000001000122ac
- (id)_copyWatchConnectivityLogs;	// IMP=0x0000000100012138
- (id)_copyDemodLogs;	// IMP=0x0000000100011fa4
- (id)_copyCompanionSyncContainer;	// IMP=0x0000000100011cec
- (id)_copySUInfoContainer;	// IMP=0x0000000100011b50
- (id)_copyCachesContainer;	// IMP=0x00000001000118b4
- (id)_copyAccessibilityPreferences;	// IMP=0x00000001000116a0
- (id)_copyATVUpdateLogContainer;	// IMP=0x0000000100011504
- (id)_copyNanoRegistryLogsContainer;	// IMP=0x0000000100011368
- (id)_copySiriLogsContainer;	// IMP=0x0000000100011118
- (id)_copyAVConferenceLogsContainer;	// IMP=0x0000000100010fbc
- (id)_copyMobileBackupLogsContainer;	// IMP=0x0000000100010e20
- (id)_copyProtectedCloudStorageLogsContainer;	// IMP=0x0000000100010cc4
- (id)_copyBuddyLogsContainer;	// IMP=0x0000000100010b68
- (id)_copyAstroLogsContainer;	// IMP=0x00000001000109f8
- (id)_copyBurninLogsContainer;	// IMP=0x00000001000105bc
- (id)_copyContactsLogsContainer;	// IMP=0x00000001000103f8
- (id)_copyMobileKeybagLogsContainer;	// IMP=0x000000010001029c
- (id)_copyHarmonyLogsContainer;	// IMP=0x000000010001012c
- (id)_copyAuthKitLogsContainer;	// IMP=0x000000010000ffd0
- (id)_copyAppConduitLogsContainer;	// IMP=0x000000010000fe74
- (id)_copyLaunchServicesLogsContainer;	// IMP=0x000000010000fd18
- (id)_copyOTALogsContainer;	// IMP=0x000000010000fb18
- (id)_copyMobileContainerLogsContainer;	// IMP=0x000000010000f9bc
- (id)_copyAppInstallationLogsContainer;	// IMP=0x000000010000f75c
- (id)_copyiTunesStoredLogsContainer;	// IMP=0x000000010000f558
- (id)_copyFindMyDeviceLogsContainer;	// IMP=0x000000010000f3e8
- (id)_copyNetworkingLogsContainer;	// IMP=0x000000010000f1bc
- (id)_copySystemLogsContainer;	// IMP=0x000000010000f000
- (id)_copyCoreLocationLogsContainer;	// IMP=0x000000010000ee58
- (id)_copyMobileLockdownLogsContainer;	// IMP=0x000000010000ecfc
- (id)_copyDataMigrationLogsContainer;	// IMP=0x000000010000eb90
- (id)_copyMobileInstallationLogsContainer;	// IMP=0x000000010000e9a4
- (id)_copyCoreCaptureBTLogsContainer;	// IMP=0x000000010000e7bc
- (id)_copyBluetoothHCILogsContainer;	// IMP=0x000000010000e638
- (id)_copyBluetoothCoreDumpLogsContainer;	// IMP=0x000000010000e4dc
- (id)_copyBluetoothAccessoryLogsContainer;	// IMP=0x000000010000e330
- (id)_copyOnDemandDaemonLogsContainer;	// IMP=0x000000010000e188
- (id)_copyHangTracerTailspinsContainer;	// IMP=0x000000010000df78
- (id)_copyStackshotsContainer;	// IMP=0x000000010000dd2c
- (id)_copyProxiedDeviceCrashLogsContainer;	// IMP=0x000000010000db84
- (id)_copyPanicsContainer;	// IMP=0x000000010000d9f0
- (id)_copyURLSessionLogsContainer;	// IMP=0x000000010000d804
- (id)_copyBTLogsContainer;	// IMP=0x000000010000d560
- (id)_iOSgetLogCopyingContainers;	// IMP=0x000000010000c860
- (id)getLogGenerationContainers;	// IMP=0x000000010001f994
- (id)getswcutilContainer;	// IMP=0x000000010001f7d4
- (id)getKeyboardPrefContainer;	// IMP=0x000000010001f6f8
- (id)getApfsStatsContainer;	// IMP=0x000000010001f58c
- (id)getOTCTLContainer;	// IMP=0x000000010001f3cc
- (id)getCKKSCTLContainer;	// IMP=0x000000010001f20c
- (id)getAirPlayContainer;	// IMP=0x000000010001ef60
- (id)getCDDebugContainer;	// IMP=0x000000010001ed18
- (id)getCoreCaptureSPIContainer;	// IMP=0x000000010001ebd8
- (id)getDSCSYMContainer;	// IMP=0x000000010001eac8
- (id)getGestaltQueryContainer;	// IMP=0x000000010001e8ec
- (id)getNightShiftContainer;	// IMP=0x000000010001e73c
- (id)getSuggestToolContainer;	// IMP=0x000000010001e2d0
- (id)getBrctlContainer;	// IMP=0x000000010001df6c
- (id)getIDSContainer;	// IMP=0x000000010001dc3c
- (id)getLGSystemInfoContainer;	// IMP=0x000000010001d9b4
- (id)getLGUtilitiesContainer;	// IMP=0x000000010001d548
- (id)getInternalLogsContainer;	// IMP=0x000000010001d428
- (id)getmiscInternalLogsContainer;	// IMP=0x000000010001d09c
- (id)getaccountsInternalLogsContainer;	// IMP=0x000000010001cdd8
- (id)getIOInternalLogsContainer;	// IMP=0x000000010001cba0
- (id)getsysconfigInternalLogsContainer;	// IMP=0x000000010001c81c
- (id)getGNIContainer;	// IMP=0x000000010001c54c
- (id)getIOREGContainer;	// IMP=0x000000010001c02c
- (id)getMicrostackshotsWithPostContainers;	// IMP=0x000000010001bd60
- (id)getlaunchdAndCTSContainers;	// IMP=0x000000010001b904
- (id)getlaunchdContainer;	// IMP=0x000000010001b4d0
- (id)getCoreDuetLogs;	// IMP=0x000000010001b19c
- (id)getRemotectlContainer;	// IMP=0x000000010001afec
- (id)getRunningBoardLogs;	// IMP=0x000000010001aedc
- (id)getPersonalizationLogs;	// IMP=0x000000010001adcc
- (id)getPreferencesLogs;	// IMP=0x000000010001abe4
- (id)getTimezoneDBLogs;	// IMP=0x000000010001aad4
- (id)getPowerLogs;	// IMP=0x000000010001a9c4
- (id)getSEPMailboxLogs;	// IMP=0x000000010001a814
- (id)getLibnotifyContainer;	// IMP=0x000000010001a738
- (id)getFileProviderCTLContainer;	// IMP=0x000000010001a4b8
- (id)getSysCfgContainer;	// IMP=0x000000010001a2f8
- (id)getSoundBoardContainer;	// IMP=0x000000010001a148
- (id)getMediaContainer;	// IMP=0x0000000100019f98
- (id)getAGXContainer;	// IMP=0x0000000100019de8
- (id)getAHSToolContainer;	// IMP=0x0000000100019c28
- (id)getAopaudctlContainer;	// IMP=0x0000000100019a78
- (id)getc26ToolContainer;	// IMP=0x00000001000198c8
- (id)getclpcContainer;	// IMP=0x0000000100019718
- (id)getBTPHYLogsContainer;	// IMP=0x0000000100019530
- (id)getASPTraceContainers;	// IMP=0x0000000100019420
- (id)getProximityContainers;	// IMP=0x00000001000191fc
- (id)getASPSnapshotsContainers;	// IMP=0x00000001000190ec
- (id)getHIDReportContainers;	// IMP=0x0000000100018d14
- (id)getCADebugContainer;	// IMP=0x0000000100018ac4
- (id)getStoreServicesContainer;	// IMP=0x0000000100018768
- (id)getSoundAutoConfigContainer;	// IMP=0x0000000100018528
- (id)getBaseBandContainer;	// IMP=0x0000000100017ba8
- (id)getExposureNotificationContainer;	// IMP=0x000000010001751c
- (id)getStspContainer;	// IMP=0x000000010001736c
- (id)getHIDRecorderdContainer;	// IMP=0x0000000100017150
- (id)getSPIContainers;	// IMP=0x0000000100016ee4
- (id)_iOSgetLogGenerationContainers;	// IMP=0x0000000100016414
- (id)getTimeSensitiveContainers;	// IMP=0x000000010002d7e4
- (id)getSpindumpContainersWithStackshot:(id)arg1;	// IMP=0x000000010002d624
- (id)getPowermetricsContainer;	// IMP=0x000000010002d424
- (id)getMultiTouchContainer;	// IMP=0x000000010002cd68
- (id)getSampleContainer;	// IMP=0x000000010002caf4
- (id)getTSProcessSpecificContainers;	// IMP=0x000000010002c0e4
- (id)getTSSystemInfoContainer;	// IMP=0x000000010002bbfc
- (id)getProcessesInfoContainer;	// IMP=0x000000010002b7f0
- (id)getsmcDiagnoseContainer;	// IMP=0x000000010002b67c
- (id)getThermHIDContainers;	// IMP=0x000000010002b458
- (id)getScreenShotContainer;	// IMP=0x000000010002b168
- (id)getASPSnapshotContainer;	// IMP=0x000000010002b098
- (id)_internaliOSSpindumpContainers;	// IMP=0x000000010002aa3c
- (id)_iOSGetTimeSensitiveContainers;	// IMP=0x000000010002a7ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
