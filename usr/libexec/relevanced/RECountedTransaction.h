//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface RECountedTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    long long _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100003a54
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)decrementCount;	// IMP=0x0000000100003a34
- (void)incrementCount;	// IMP=0x0000000100003a24
- (id)initWithTransaction:(id)arg1;	// IMP=0x00000001000039a8

@end

