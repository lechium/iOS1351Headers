//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WRM_HORecordCacheEntry : NSObject
{
    NSDate *mDate;	// 8 = 0x8
    _Bool _mCallActive;	// 16 = 0x10
    int _mType;	// 20 = 0x14
    int _mMob;	// 24 = 0x18
    int _mReason;	// 28 = 0x1c
    unsigned long long _mApp;	// 32 = 0x20
}

@property(nonatomic) int mReason; // @synthesize mReason=_mReason;
@property(nonatomic) int mMob; // @synthesize mMob=_mMob;
@property(nonatomic) unsigned long long mApp; // @synthesize mApp=_mApp;
@property(nonatomic) _Bool mCallActive; // @synthesize mCallActive=_mCallActive;
@property(nonatomic) int mType; // @synthesize mType=_mType;
- (id)getDate;	// IMP=0x00000001000df5a8
- (void)setWithRecord:(int)arg1:(_Bool)arg2:(unsigned long long)arg3:(int)arg4:(int)arg5;	// IMP=0x00000001000df4fc
- (void)dealloc;	// IMP=0x00000001000df494
- (id)init;	// IMP=0x00000001000df430

@end

