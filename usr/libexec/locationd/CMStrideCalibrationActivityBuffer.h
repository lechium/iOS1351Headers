//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationActivityBuffer : NSObject
{
    struct vector<std::__1::pair<double, CLMotionActivity::Type>, std::__1::allocator<std::__1::pair<double, CLMotionActivity::Type>>> fActivityWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000100515e28
- (void).cxx_destruct;	// IMP=0x0000000100515e10
- (void)feedMotionStateData:(const union NotificationData *)arg1;	// IMP=0x0000000100515d5c
- (_Bool)isRunningStateInWindow;	// IMP=0x0000000100515cc0
- (void)ageOutMotionStateArray;	// IMP=0x0000000100515ba0

@end
