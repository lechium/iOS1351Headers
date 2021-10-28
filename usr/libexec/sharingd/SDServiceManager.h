//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDCompanionPublisherProtocol-Protocol.h"
#import "SDCompanionStreamDelegate-Protocol.h"
#import "SFCompanionServiceManagerProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SFCompanionServiceManagerClient;

__attribute__((visibility("hidden")))
@interface SDServiceManager : NSObject <SDCompanionStreamDelegate, SFCompanionServiceManagerProtocol, SDCompanionPublisherProtocol>
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_managerID;	// 16 = 0x10
    id <SFCompanionServiceManagerClient> _clientProxy;	// 24 = 0x18
    NSMutableDictionary *_streamHandlers;	// 32 = 0x20
    NSMutableArray *_enabledServices;	// 40 = 0x28
    NSMutableArray *_companionStreams;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001cc860
@property(retain) NSMutableArray *companionStreams; // @synthesize companionStreams=_companionStreams;
@property(retain) NSMutableArray *enabledServices; // @synthesize enabledServices=_enabledServices;
@property(retain) NSMutableDictionary *streamHandlers; // @synthesize streamHandlers=_streamHandlers;
@property(retain) id <SFCompanionServiceManagerClient> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly) NSString *managerID; // @synthesize managerID=_managerID;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x00000001001cc7e0
- (void)manager:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001cc5c0
- (void)disableService:(id)arg1;	// IMP=0x00000001001cc538
- (void)enableService:(id)arg1;	// IMP=0x00000001001cc4b4
- (id)streamHandlerForService:(id)arg1;	// IMP=0x00000001001cc450
- (void)stop;	// IMP=0x00000001001cc264
- (void)start;	// IMP=0x00000001001cc214
- (id)initWithClientProxy:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001001cc10c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
