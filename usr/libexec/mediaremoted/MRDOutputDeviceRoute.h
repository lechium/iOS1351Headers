//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoute.h"

@class MRAVOutputDevice;

@interface MRDOutputDeviceRoute : MRDAVRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a0454
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00000001000a03cc
- (id)extendedInfo;	// IMP=0x00000001000a0360
- (id)dictionary;	// IMP=0x000000010009ffd0
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x000000010009ffc8
- (_Bool)canBeDefaultRoute;	// IMP=0x000000010009ffc0
- (_Bool)isSpeakerRoute;	// IMP=0x000000010009ff0c
- (_Bool)isPicked;	// IMP=0x000000010009fd30
- (_Bool)isOutputRoute;	// IMP=0x000000010009fd28
- (_Bool)isInputRoute;	// IMP=0x000000010009fd20
- (id)modelName;	// IMP=0x000000010009fd08
- (id)type;	// IMP=0x000000010009fb30
- (id)name;	// IMP=0x000000010009fb18
- (id)uniqueIdentifier;	// IMP=0x000000010009fb00
- (id)description;	// IMP=0x000000010009fa74
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009f9d4
- (unsigned long long)hash;	// IMP=0x000000010009f9bc
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x000000010009f93c

@end
