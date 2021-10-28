//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface CLIndoorForegroundFetchRequest : NSObject
{
    unsigned char _action;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSArray *_floorRequests;	// 24 = 0x18
    unsigned long long _numFloorsSuccessfullyDownloaded;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100373128
@property(nonatomic) unsigned char action; // @synthesize action=_action;
@property(nonatomic) unsigned long long numFloorsSuccessfullyDownloaded; // @synthesize numFloorsSuccessfullyDownloaded=_numFloorsSuccessfullyDownloaded;
@property(retain, nonatomic) NSArray *floorRequests; // @synthesize floorRequests=_floorRequests;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)allFloorsDownloaded;	// IMP=0x000000010037309c
- (void)requestDidComplete:(id)arg1;	// IMP=0x0000000100372e68
- (void)requestDidComplete:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100372be0
- (_Bool)isRequestValid:(id)arg1;	// IMP=0x0000000100372844
@property(readonly, nonatomic) unsigned long long numExpectedFloors;
- (id)initWithFloorRequests:(id)arg1 forAction:(unsigned char)arg2;	// IMP=0x000000010037275c
- (id)init;	// IMP=0x00000001003726c8

@end
