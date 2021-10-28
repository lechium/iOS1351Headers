//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, RPCompanionLinkDevice, SFBubbleEstimator, SFDevice, SFNotificationInfo, TURoute;

__attribute__((visibility("hidden")))
@interface SFCombinedDevice : NSObject
{
    _Bool _forced;	// 8 = 0x8
    _Bool _medBubbleDelayed;	// 9 = 0x9
    int _nextState;	// 12 = 0xc
    unsigned int _notificationType;	// 16 = 0x10
    int _state;	// 20 = 0x14
    NSURL *_attachmentURL;	// 24 = 0x18
    SFDevice *_bleDevice;	// 32 = 0x20
    RPCompanionLinkDevice *_clinkDevice;	// 40 = 0x28
    long long _dismissReason;	// 48 = 0x30
    NSString *_forcedID;	// 56 = 0x38
    SFBubbleEstimator *_notificationBubble;	// 64 = 0x40
    SFNotificationInfo *_notificationInfo;	// 72 = 0x48
    TURoute *_route;	// 80 = 0x50
    SFBubbleEstimator *_transferBubble;	// 88 = 0x58
    unsigned long long _notificationTicks;	// 96 = 0x60
    double _notificationDurationSecs;	// 104 = 0x68
    unsigned long long _pendingContentTicks;	// 112 = 0x70
    double _pendingContentDurationSecs;	// 120 = 0x78
    unsigned long long _transferDoneTicks;	// 128 = 0x80
    double _transferDoneDurationSecs;	// 136 = 0x88
    unsigned long long _transferPendingStartTicks;	// 144 = 0x90
    double _transferPendingDurationSecs;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000001000c7ac8
@property(nonatomic) double transferPendingDurationSecs; // @synthesize transferPendingDurationSecs=_transferPendingDurationSecs;
@property(nonatomic) unsigned long long transferPendingStartTicks; // @synthesize transferPendingStartTicks=_transferPendingStartTicks;
@property(nonatomic) double transferDoneDurationSecs; // @synthesize transferDoneDurationSecs=_transferDoneDurationSecs;
@property(nonatomic) unsigned long long transferDoneTicks; // @synthesize transferDoneTicks=_transferDoneTicks;
@property(nonatomic) double pendingContentDurationSecs; // @synthesize pendingContentDurationSecs=_pendingContentDurationSecs;
@property(nonatomic) unsigned long long pendingContentTicks; // @synthesize pendingContentTicks=_pendingContentTicks;
@property(nonatomic) double notificationDurationSecs; // @synthesize notificationDurationSecs=_notificationDurationSecs;
@property(nonatomic) unsigned long long notificationTicks; // @synthesize notificationTicks=_notificationTicks;
@property(retain, nonatomic) SFBubbleEstimator *transferBubble; // @synthesize transferBubble=_transferBubble;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) TURoute *route; // @synthesize route=_route;
@property(nonatomic) _Bool medBubbleDelayed; // @synthesize medBubbleDelayed=_medBubbleDelayed;
@property(nonatomic) unsigned int notificationType; // @synthesize notificationType=_notificationType;
@property(retain, nonatomic) SFNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(retain, nonatomic) SFBubbleEstimator *notificationBubble; // @synthesize notificationBubble=_notificationBubble;
@property(nonatomic) int nextState; // @synthesize nextState=_nextState;
@property(retain, nonatomic) NSString *forcedID; // @synthesize forcedID=_forcedID;
@property(nonatomic) _Bool forced; // @synthesize forced=_forced;
@property(nonatomic) long long dismissReason; // @synthesize dismissReason=_dismissReason;
@property(retain, nonatomic) RPCompanionLinkDevice *clinkDevice; // @synthesize clinkDevice=_clinkDevice;
@property(retain, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(retain, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
- (_Bool)stateIsNearby;	// IMP=0x00000001000c774c
- (_Bool)stateIsMedium;	// IMP=0x00000001000c7708
- (_Bool)stateIsClose;	// IMP=0x00000001000c76f4
- (void)resetTicks;	// IMP=0x00000001000c7548
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *effectiveID;
@property(readonly, nonatomic) _Bool isReady;
- (_Bool)_canTransition:(int)arg1;	// IMP=0x00000001000c6d60
- (_Bool)canTransition:(int)arg1;	// IMP=0x00000001000c6c64
- (id)description;	// IMP=0x00000001000c68c0

@end
