//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SystemDiagnosticIDS : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_localGroupDictionary;	// 8 = 0x8
    NSMutableDictionary *_executionGroupDictionary;	// 16 = 0x10
    NSMutableDictionary *_localTupleDictionary;	// 24 = 0x18
    unsigned long long _transfer_size;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_run_queue;	// 48 = 0x30
    NSString *_transferIdentifier;	// 56 = 0x38
}

+ (id)getIDSCommandString:(int)arg1;	// IMP=0x00000001000577f4
+ (id)getIDSCaseString:(int)arg1;	// IMP=0x0000000100057780
+ (id)sharedInstance;	// IMP=0x00000001000576f4
- (void).cxx_destruct;	// IMP=0x000000010005b4f0
@property(copy) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain) NSObject<OS_dispatch_queue> *run_queue; // @synthesize run_queue=_run_queue;
@property(retain) IDSService *service; // @synthesize service=_service;
@property unsigned long long transfer_size; // @synthesize transfer_size=_transfer_size;
@property(retain) NSMutableDictionary *localTupleDictionary; // @synthesize localTupleDictionary=_localTupleDictionary;
@property(retain) NSMutableDictionary *executionGroupDictionary; // @synthesize executionGroupDictionary=_executionGroupDictionary;
@property(retain) NSMutableDictionary *localGroupDictionary; // @synthesize localGroupDictionary=_localGroupDictionary;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000100059338
- (_Bool)startCosysdiagnoseForFilename:(id)arg1;	// IMP=0x00000001000592d4
- (_Bool)sendRemoteArchiveMessage:(id)arg1;	// IMP=0x0000000100059270
- (_Bool)sendTransferSize:(unsigned long long)arg1;	// IMP=0x0000000100059268
- (_Bool)sendMessage:(int)arg1;	// IMP=0x0000000100059258
- (void)SDList_Complete:(id)arg1;	// IMP=0x0000000100058ebc
- (void)SDWatch_List:(id)arg1;	// IMP=0x0000000100058eb8
- (void)sendWatchListWithDiagnosticId:(id)arg1;	// IMP=0x0000000100058e60
- (void)SDRemote_Complete:(id)arg1;	// IMP=0x0000000100058b2c
- (void)SDTransfer_Remote:(id)arg1;	// IMP=0x0000000100058b28
- (void)SDTransfer_Size:(id)arg1;	// IMP=0x00000001000589b4
- (void)SDTargetFilename:(id)arg1;	// IMP=0x00000001000589b0
- (void)SDComplete:(id)arg1;	// IMP=0x00000001000589ac
- (void)SDStop;	// IMP=0x0000000100058950
- (void)SDStart:(id)arg1;	// IMP=0x0000000100058384
- (id)stringFromProtobuf:(id)arg1;	// IMP=0x000000010005828c
- (_Bool)sendFilenamePair:(id)arg1;	// IMP=0x0000000100058220
- (_Bool)sendMessage:(int)arg1 WithData:(id)arg2;	// IMP=0x0000000100057f4c
- (_Bool)sendMessage:(int)arg1 WithString:(id)arg2;	// IMP=0x0000000100057ed0
- (_Bool)sendFileAtPath:(id)arg1 forDiagnosticID:(id)arg2 withCase:(int)arg3;	// IMP=0x0000000100057ec8
- (void)setPreferredWifi:(_Bool)arg1;	// IMP=0x0000000100057eb8
- (id)getDispatchGroupForDiagnostic:(id)arg1;	// IMP=0x0000000100057e8c
- (_Bool)isPaired;	// IMP=0x0000000100057d24
- (id)init;	// IMP=0x0000000100057898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

