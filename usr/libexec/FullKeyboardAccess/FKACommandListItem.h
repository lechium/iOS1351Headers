//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FKACommandListItem : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_keyDescription;	// 16 = 0x10
}

+ (id)itemWithName:(id)arg1 keyDescription:(id)arg2;	// IMP=0x0000000100011c7c
- (void).cxx_destruct;	// IMP=0x0000000100011da4
@property(readonly, nonatomic) NSString *keyDescription; // @synthesize keyDescription=_keyDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 keyDescription:(id)arg2;	// IMP=0x0000000100011cf0

@end

