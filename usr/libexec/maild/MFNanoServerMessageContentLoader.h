//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBLSingleMessageClient-Protocol.h"

@class MFLibraryMessage, NNMKPairedDeviceInfo, NSDate, NSLock, NSMutableArray, NSMutableSet, NSString;
@protocol MFNanoServerMessageContentLoaderDelegate;

@interface MFNanoServerMessageContentLoader : NSObject <MBLSingleMessageClient>
{
    NSDate *_requestDate;	// 8 = 0x8
    id <MFNanoServerMessageContentLoaderDelegate> _delegate;	// 16 = 0x10
    MFLibraryMessage *_messageForDownload;	// 24 = 0x18
    _Bool _contentQueuedForDownload;	// 32 = 0x20
    NNMKPairedDeviceInfo *_pairedDeviceInfo;	// 40 = 0x28
    NSMutableSet *_monitoredOperations;	// 48 = 0x30
    NSLock *_monitoredOperationsLock;	// 56 = 0x38
    NSMutableArray *_currentContentParsers;	// 64 = 0x40
    _Bool _highPriority;	// 72 = 0x48
    NSString *_messageId;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000beae8
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (id)_monitoredOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be890
- (id)_libraryMessageForMessageId:(id)arg1;	// IMP=0x00000001000be6dc
- (id)_attachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00000001000be450
- (id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00000001000be210
- (void)_notifyDelegateOfFailure;	// IMP=0x00000001000be1a4
- (void)_notifyDelegateDidFinish;	// IMP=0x00000001000be138
- (void)_notifyDelegateThatReceivedImageAttachment:(id)arg1 forContentId:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00000001000be04c
- (void)_notifyDelegateThatReceivedMailContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00000001000bdf60
- (void)_startLoadingImageAttachments:(id)arg1 messageBody:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00000001000bd7fc
- (void)_parseContentFromMessageAndNotifyDelegate:(id)arg1 loadedProtected:(_Bool)arg2;	// IMP=0x00000001000bce00
- (void)_downloadContent;	// IMP=0x00000001000bcd20
- (id)_attemptToLoadLibraryMessageWithContentFromDatabase;	// IMP=0x00000001000bcb1c
- (void)_startContentLoadProcess;	// IMP=0x00000001000bc924
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00000001000bc8f8
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x00000001000bc838
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x00000001000bc82c
- (id)message;	// IMP=0x00000001000bc824
- (double)ordering;	// IMP=0x00000001000bc814
- (long long)priority;	// IMP=0x00000001000bc800
- (void)cancel;	// IMP=0x00000001000bc590
- (void)dealloc;	// IMP=0x00000001000bc4dc
- (id)initWithMessageId:(id)arg1 highPriority:(_Bool)arg2 pairedDeviceInfo:(id)arg3 delegate:(id)arg4;	// IMP=0x00000001000bc1cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
