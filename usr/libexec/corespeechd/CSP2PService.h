//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSADCompanionServiceProvider, OS_dispatch_queue;

@interface CSP2PService : NSObject
{
    id <CSADCompanionServiceProvider> _adCompanionServiceProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_lastCommunicatedPeer;	// 24 = 0x18
    NSString *_voiceTriggerBatchId;	// 32 = 0x20
    NSString *_voiceIdentificationBatchId;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000a63ec
- (void).cxx_destruct;	// IMP=0x00000001000b153c
@property(retain, nonatomic) NSString *voiceIdentificationBatchId; // @synthesize voiceIdentificationBatchId=_voiceIdentificationBatchId;
@property(retain, nonatomic) NSString *voiceTriggerBatchId; // @synthesize voiceTriggerBatchId=_voiceTriggerBatchId;
@property(retain, nonatomic) NSString *lastCommunicatedPeer; // @synthesize lastCommunicatedPeer=_lastCommunicatedPeer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSADCompanionServiceProvider> adCompanionServiceProvider; // @synthesize adCompanionServiceProvider=_adCompanionServiceProvider;
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;	// IMP=0x00000001000b1208
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b0e9c
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b0190
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;	// IMP=0x00000001000aeb60
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ae614
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000add0c
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000adb88
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ad6f4
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ac04c
- (void)_processMusicAccountSignInCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ab8fc
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aab7c
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a9e30
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7;	// IMP=0x00000001000a96f8
- (void)_sendVoiceGradingDataToPeerId:(id)arg1;	// IMP=0x00000001000a8ba4
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;	// IMP=0x00000001000a8580
- (void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7cb8
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a754c
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a73a8
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7154
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;	// IMP=0x00000001000a6fd0
- (void)sendVoiceTriggerGradingDataToCompanion;	// IMP=0x00000001000a6e64
- (void)sendVoiceGradingDataToNearbyPeer;	// IMP=0x00000001000a6d0c
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a64c0
- (id)init;	// IMP=0x00000001000a6458

@end
