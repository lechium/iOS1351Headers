//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationTrack;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationContextManager : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    array_c179b914 *fDataBuffers;	// 24 = 0x18
    CLBarometerCalibrationTrack *_fTrack;	// 32 = 0x20
}

@property(retain, nonatomic) CLBarometerCalibrationTrack *fTrack; // @synthesize fTrack=_fTrack;
- (void)cleanup;	// IMP=0x00000001007817d4
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00000001007817d0
- (void)dealloc;	// IMP=0x0000000100781798
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(array_c179b914 *)arg3;	// IMP=0x000000010078163c

@end
