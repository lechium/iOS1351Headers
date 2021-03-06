//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarPlayDNDService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CARAutomaticDNDStatus, NSString;

@interface CARDNDServiceAgent : NSObject <NSXPCListenerDelegate, CRCarPlayDNDService>
{
    CARAutomaticDNDStatus *_status;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100027d2c
@property(retain, nonatomic) CARAutomaticDNDStatus *status; // @synthesize status=_status;
- (void)internalUtilityToolWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027c88
- (void)setInternalAutoReplyWhitelist:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027c04
- (void)internalAutoReplyWhitelistWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027b78
- (void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000279c8
- (void)setAutoReplyMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027944
- (void)autoReplyMessageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027850
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002769c
- (void)allowedAutoReplyAudienceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027544
- (void)completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027180
- (void)setDNDTriggerMode:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027000
- (void)fetchDNDTriggerModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026f78
- (void)shouldDisplayExitConfirmationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026e30
- (void)resetAutomaticDNDPreferencesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026bb4
- (void)setCarPlayAutomaticDNDActive:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026614
- (void)isCarPlayAutomaticDNDActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026594
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010002633c
- (id)init;	// IMP=0x00000001000262c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

