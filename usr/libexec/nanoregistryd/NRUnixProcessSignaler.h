//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRUnixProcessSignaler : NSObject
{
}

+ (_Bool)signalProcessNamed:(id)arg1 withSignal:(int)arg2;	// IMP=0x00000001000538c8
+ (int)findProcessNamed:(id)arg1;	// IMP=0x000000010005386c
+ (int)_findProcessNamed:(id)arg1;	// IMP=0x0000000100053524
+ (void)killProcessNamed:(id)arg1;	// IMP=0x000000010005350c

@end
