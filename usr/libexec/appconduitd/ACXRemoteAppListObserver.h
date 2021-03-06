//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ACXRemoteAppListObserver, OS_dispatch_queue;

@interface ACXRemoteAppListObserver : NSObject
{
    id <ACXRemoteAppListObserver> _observer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _hashValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100045aec
@property(readonly, nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <ACXRemoteAppListObserver> observer; // @synthesize observer=_observer;
- (unsigned long long)hash;	// IMP=0x0000000100045ab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000459a4
- (id)initWithObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00000001000458c4

@end

