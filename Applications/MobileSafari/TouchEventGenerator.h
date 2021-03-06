//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TouchEventGenerator : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;	// 8 = 0x8
    struct {
        int identifier;
        struct CGPoint point;
        double pathMajorRadius;
        double pathPressure;
        unsigned char pathProximity;
    } _activePoints[5];	// 16 = 0x10
    unsigned long long _activePointCount;	// 256 = 0x100
}

+ (id)sharedTouchEventGenerator;	// IMP=0x000000010013a914
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x000000010013b194
- (void)liftUp:(struct CGPoint)arg1;	// IMP=0x000000010013b184
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013b0fc
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013b040
- (void)touchDown:(struct CGPoint)arg1;	// IMP=0x000000010013b010
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013af88
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013af10
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010013ae78
- (_Bool)_sendHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010013abe0
- (struct __IOHIDEvent *)_createIOHIDEventType:(int)arg1;	// IMP=0x000000010013a9d0
- (id)init;	// IMP=0x000000010013a958

@end

