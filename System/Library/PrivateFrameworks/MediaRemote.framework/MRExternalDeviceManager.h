/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject, NSArray;

@interface MRExternalDeviceManager : NSObject {

	NSPointerArray* _devicesPointerArray;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSArray * allDevices; 
+(id)sharedManager;
-(id)init;
-(NSArray *)allDevices;
-(id)deviceWithIdentifier:(id)arg1 ;
-(void)clearDevices;
-(void)registerDevice:(id)arg1 ;
@end
