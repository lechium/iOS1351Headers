//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDBrowsableContentAPICoordinator : NSObject
{
    NSMutableDictionary *_persistenceDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000114d8
- (id)applicationsSupportingAPIs:(unsigned int)arg1;	// IMP=0x00000001000113dc
- (void)setSupportedAPIs:(unsigned int)arg1 forApplication:(id)arg2;	// IMP=0x0000000100011304
- (unsigned int)supportedAPIsForApplication:(id)arg1;	// IMP=0x00000001000112a4
- (id)init;	// IMP=0x0000000100011164

@end

