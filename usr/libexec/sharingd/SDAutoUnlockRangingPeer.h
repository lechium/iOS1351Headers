//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, _CLRangingPeer;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockRangingPeer : NSObject
{
    _CLRangingPeer *_clRangingPeer;	// 8 = 0x8
    NSData *_macAddressData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001f14f8
@property(retain, nonatomic) NSData *macAddressData; // @synthesize macAddressData=_macAddressData;
@property(retain, nonatomic) _CLRangingPeer *clRangingPeer; // @synthesize clRangingPeer=_clRangingPeer;

@end

