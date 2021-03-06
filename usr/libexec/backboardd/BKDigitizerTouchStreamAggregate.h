//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BKDigitizerTouchStreamAggregate : NSObject
{
    NSString *_displayUUID;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
}

@property(readonly, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (_Bool)getAmbiguityRecommendation:(unsigned char *)arg1 dispatchMode:(unsigned char *)arg2;	// IMP=0x0000000100076d34
- (void)removeClient:(id)arg1;	// IMP=0x0000000100076d24
- (void)addClient:(id)arg1;	// IMP=0x0000000100076cc8
- (void)enumerateClients:(CDUnknownBlockType)arg1;	// IMP=0x0000000100076bc4
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000100076bb4
- (id)description;	// IMP=0x0000000100076b34
- (void)invalidate;	// IMP=0x0000000100076a20
- (void)dealloc;	// IMP=0x00000001000769d0

@end

