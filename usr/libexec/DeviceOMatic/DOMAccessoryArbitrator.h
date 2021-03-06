//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface DOMAccessoryArbitrator : NSObject
{
    NSMutableArray *badDevices;	// 8 = 0x8
    struct __CFUserNotification *notificationRef;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mainQ;	// 24 = 0x18
    NSMutableArray *_personalities;	// 32 = 0x20
    struct IONotificationPort *_ioNotificationPort;	// 40 = 0x28
    long long _iOSDeviceThreshold;	// 48 = 0x30
}

+ (_Bool)isInF5Mode;	// IMP=0x0000000100005774
+ (id)sharedDomAccessoryArbitrator;	// IMP=0x0000000100002e08
- (void).cxx_destruct;	// IMP=0x0000000100005978
@property(readonly) long long iOSDeviceThreshold; // @synthesize iOSDeviceThreshold=_iOSDeviceThreshold;
@property struct IONotificationPort *ioNotificationPort; // @synthesize ioNotificationPort=_ioNotificationPort;
@property(retain, nonatomic) NSMutableArray *personalities; // @synthesize personalities=_personalities;
- (void)deviceArrived:(unsigned int)arg1;	// IMP=0x00000001000055b4
- (void)matchDevice:(id)arg1;	// IMP=0x0000000100004c28
- (void)probePersonalitiesForService:(unsigned int)arg1 ofDevice:(id)arg2 inGroup:(id)arg3;	// IMP=0x0000000100004934
- (void)loadLaunchdJobsAtPath:(id)arg1;	// IMP=0x0000000100004704
- (id)jobType:(id)arg1 jobType:(int *)arg2;	// IMP=0x0000000100004640
- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004414
- (void)addMatchJobServiceNamed:(id)arg1 info:(id)arg2 jobType:(int)arg3;	// IMP=0x00000001000040ac
- (void)addMatchingThings:(id)arg1 matchJob:(id)arg2;	// IMP=0x0000000100003ea0
- (void)addNotification:(id)arg1 matchJob:(id)arg2;	// IMP=0x0000000100003d38
- (void)addPersonality:(id)arg1 matchJob:(id)arg2;	// IMP=0x0000000100003b8c
- (void)scheduleDialog;	// IMP=0x0000000100003a4c
- (void)displayDialog;	// IMP=0x000000010000371c
- (void)userDismissedNotification:(struct __CFUserNotification *)arg1;	// IMP=0x0000000100003630
- (id)createUserNotificationDict;	// IMP=0x00000001000034ec
- (void)addBadDevicesToDialogDictBody:(id)arg1;	// IMP=0x00000001000031d0
- (void)unregisterOffendingDomDevice:(id)arg1;	// IMP=0x000000010000316c
- (void)registerOffendingDomDevice:(id)arg1;	// IMP=0x00000001000030dc
- (void)dealloc;	// IMP=0x0000000100003050
- (id)init;	// IMP=0x0000000100002e74

@end

