//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IPCSetNavigationVoiceVolumeMessage : IPCMessageObject
{
    NSString *_requestedVolume;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100008ff0
@property(copy, nonatomic) NSString *requestedVolume; // @synthesize requestedVolume=_requestedVolume;
- (id)description;	// IMP=0x0000000100008f20
- (id)dictionaryValue;	// IMP=0x0000000100008e3c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100008d90

@end
