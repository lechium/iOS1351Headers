//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADClientLiteWorkItem : NSObject
{
    CDUnknownBlockType _workItem;	// 8 = 0x8
    CDUnknownBlockType _timeout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005b0ec
- (CDUnknownBlockType)timeout;	// IMP=0x000000010005b0d4
- (CDUnknownBlockType)workItem;	// IMP=0x000000010005b0bc
- (id)initWithWork:(CDUnknownBlockType)arg1 timeout:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b00c

@end
