//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDRemoteControlCommand.h"

@class NSString;

@interface MRDRoutedRemoteControlCommand : MRDRemoteControlCommand
{
    NSString *_routedAppDisplayID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010009f310
@property(readonly, nonatomic) NSString *routedAppDisplayID; // @synthesize routedAppDisplayID=_routedAppDisplayID;
- (id)description;	// IMP=0x000000010009f274
- (id)initWithCommand:(id)arg1 routedApp:(id)arg2;	// IMP=0x000000010009f1a8

@end

