//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFBaseCmd.h"

@class NSString;

@interface FMFSaveMeCommand : FMFBaseCmd
{
    NSString *_deviceId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003fc3c
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)jsonBodyDictionary;	// IMP=0x000000010003fb4c
- (id)pathSuffix;	// IMP=0x000000010003fb40
- (id)initWithDeviceId:(id)arg1;	// IMP=0x000000010003fac8

@end
