//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPCompanionLinkClient, SFRemoteHotspotDevice;

__attribute__((visibility("hidden")))
@interface SDHotspotRequest : NSObject
{
    unsigned int _sessionID;	// 8 = 0x8
    RPCompanionLinkClient *_companionLinkClient;	// 16 = 0x10
    SFRemoteHotspotDevice *_hotspotDevice;	// 24 = 0x18
    CDUnknownBlockType _hotspotInfoHandler;	// 32 = 0x20
    struct LogCategory *_logCategory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010008eb14
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) struct LogCategory *logCategory; // @synthesize logCategory=_logCategory;
@property(copy, nonatomic) CDUnknownBlockType hotspotInfoHandler; // @synthesize hotspotInfoHandler=_hotspotInfoHandler;
@property(retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice; // @synthesize hotspotDevice=_hotspotDevice;
@property(retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
- (void)dealloc;	// IMP=0x000000010008ea60

@end

