//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSCallAnnouncement;
@protocol OS_dispatch_queue;

@interface PHRingtoneController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ICSCallAnnouncement *_callAnnouncement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100054f4c
@property(retain, nonatomic) ICSCallAnnouncement *callAnnouncement; // @synthesize callAnnouncement=_callAnnouncement;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopAnnouncement;	// IMP=0x0000000100054e00
- (void)playDowntimeStartingAnnouncementForCall:(id)arg1;	// IMP=0x0000000100054d1c
- (void)playAnnouncementForCall:(id)arg1;	// IMP=0x0000000100054c40
- (void)_playCallAnnouncement:(id)arg1;	// IMP=0x0000000100054a04
- (_Bool)_shouldAnnounceCalls;	// IMP=0x00000001000540e0
- (_Bool)_isActivePreferredOutputPort:(id)arg1;	// IMP=0x0000000100053f78
- (id)init;	// IMP=0x000000010000691c

@end
