//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DEDUploadStatusDelegate-Protocol.h"
#import "FBASubmissionTimerDelegate-Protocol.h"

@class DEDController, FBAData, FBADeviceManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_os_log;

@interface FBAUploadStatusManager : NSObject <FBASubmissionTimerDelegate, DEDUploadStatusDelegate>
{
    FBAData *_data;	// 8 = 0x8
    DEDController *_ded;	// 16 = 0x10
    FBADeviceManager *_deviceManager;	// 24 = 0x18
    NSMutableSet *_trackedTasks;	// 32 = 0x20
    NSMutableDictionary *_submissionTimers;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100051524
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSMutableDictionary *submissionTimers; // @synthesize submissionTimers=_submissionTimers;
@property(retain) NSMutableSet *trackedTasks; // @synthesize trackedTasks=_trackedTasks;
@property(retain) FBADeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain) DEDController *ded; // @synthesize ded=_ded;
@property __weak FBAData *data; // @synthesize data=_data;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;	// IMP=0x0000000100050cb4
- (void)timer:(id)arg1 didTimeoutForTask:(id)arg2;	// IMP=0x00000001000509b4
- (void)stopTrackingAndRemove:(_Bool)arg1 uploadTask:(id)arg2;	// IMP=0x0000000100050774
- (void)stopTrackingTask:(id)arg1;	// IMP=0x0000000100050760
- (void)stopTrackingAllTasks;	// IMP=0x00000001000505a8
- (void)deleteAndNotifyUploadTaskWithTask:(id)arg1;	// IMP=0x0000000100050348
- (void)didFailToGetUploadUpdatesForUploadTask:(id)arg1;	// IMP=0x0000000100050338
- (void)didFailToGetUploadUpdatesForUploadTask:(id)arg1 shouldTryServerUpdates:(_Bool)arg2;	// IMP=0x0000000100050200
- (id)configureSubmissionTimerForTask:(id)arg1 timeout:(double)arg2;	// IMP=0x0000000100050078
- (void)fallbackToServerSideUploadUpdatesForTask:(id)arg1 attempts:(unsigned long long)arg2;	// IMP=0x000000010004f4c0
- (void)fallbackToServerSideUploadUpdatesForTask:(id)arg1;	// IMP=0x000000010004f4b0
- (void)waitOnUpdatesForTask:(id)arg1;	// IMP=0x000000010004ebd0
- (id)workingFilePromisesFromSet:(id)arg1 stalenessDate:(id)arg2;	// IMP=0x000000010004e884
- (_Bool)shouldGiveUpOnUploadWithPromises:(id)arg1 stalenessDate:(id)arg2;	// IMP=0x000000010004e714
- (_Bool)shouldGiveUpOnUploadWithPromises:(id)arg1;	// IMP=0x000000010004e704
- (void)trackUploadTask:(id)arg1 attempt:(long long)arg2;	// IMP=0x000000010004e1b4
- (void)trackUploadTask:(id)arg1;	// IMP=0x000000010004e1a4
- (void)didLogOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e150
- (void)trackUploadIfNeeded:(id)arg1;	// IMP=0x000000010004df24
- (id)initWithData:(id)arg1 ded:(id)arg2 deviceManager:(id)arg3;	// IMP=0x000000010004dd9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
