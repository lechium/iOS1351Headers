//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TUAudioRoute, TUCall;
@protocol OS_dispatch_semaphore, PHAudioDeviceControllerDelegate;

@interface PHAudioDeviceController : NSObject
{
    NSDictionary *_pickedRoute;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;	// 16 = 0x10
    id <PHAudioDeviceControllerDelegate> _delegate;	// 24 = 0x18
}

+ (id)sharedAudioDeviceController;	// IMP=0x00000001000a94d8
+ (id)sharedSystemController;	// IMP=0x00000001000a92a0
- (void).cxx_destruct;	// IMP=0x00000001000ab45c
@property(nonatomic) __weak id <PHAudioDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock; // @synthesize modifyingStateLock=_modifyingStateLock;
@property(readonly, copy, nonatomic) NSDictionary *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
- (void)_audioRouteInformationChanged;	// IMP=0x00000001000ab32c
- (void)_releaseLock;	// IMP=0x00000001000ab2f4
- (void)_acquireLock;	// IMP=0x00000001000ab2b8
- (_Bool)_routeIsHandset:(id)arg1;	// IMP=0x00000001000ab228
- (_Bool)_routeIsDefault:(id)arg1;	// IMP=0x00000001000ab1c0
- (_Bool)_routeIsReceiver:(id)arg1;	// IMP=0x00000001000ab15c
- (_Bool)_routeIsSpeaker:(id)arg1;	// IMP=0x00000001000ab0f8
- (_Bool)_routeIsAirTunes:(id)arg1;	// IMP=0x00000001000ab094
- (void)_pickRoute:(id)arg1;	// IMP=0x00000001000aaec0
- (id)_pickableRoutesForCategory:(id)arg1 mode:(id)arg2;	// IMP=0x00000001000aad00
@property(readonly, copy, nonatomic) NSArray *_pickableRoutes;
- (id)_pickableRoutesUsingAttribute;	// IMP=0x00000001000aa6b4
- (id)_pickedRoute;	// IMP=0x00000001000aa374
- (_Bool)receiverRouteIsPicked;	// IMP=0x00000001000aa31c
- (_Bool)speakerRouteIsPicked;	// IMP=0x00000001000aa2c4
- (void)clearCachedRoutes;	// IMP=0x00000001000aa248
- (void)restorePickedRoute;	// IMP=0x00000001000aa1c0
@property(readonly, copy, nonatomic) TUAudioRoute *currentRoute;
- (void)pickRouteWithUID:(id)arg1;	// IMP=0x00000001000a9f1c
- (void)pickHandsetRoute;	// IMP=0x00000001000a9d80
- (void)pickSpeakerRoute;	// IMP=0x00000001000a9be4
- (_Bool)handsetRouteAvailable;	// IMP=0x00000001000a9aa4
- (_Bool)speakerRouteAvailable;	// IMP=0x00000001000a9964
@property(readonly, nonatomic) TUCall *callForPickableRoutes;
@property(readonly, nonatomic) NSArray *routes;
- (void)dealloc;	// IMP=0x00000001000a966c
- (id)init;	// IMP=0x00000001000a9544

@end

