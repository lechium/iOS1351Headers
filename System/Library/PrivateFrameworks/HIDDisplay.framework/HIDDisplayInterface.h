/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HIDManager, HIDDevice, NSString, NSArray;

@interface HIDDisplayInterface : NSObject {

	HIDManager* _manager;
	HIDDevice* _deviceRef;
	NSString* _containerID;
	unsigned long long _registryID;

}

@property (readonly) NSString * containerID;                     //@synthesize containerID=_containerID - In the implementation block
@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
@property (readonly) NSArray * capabilities; 
-(void)dealloc;
-(id)description;
-(unsigned long long)registryID;
-(id)device;
-(NSString *)containerID;
-(NSArray *)capabilities;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)setDevice:(id)arg1 ;
-(id)getHIDDevices;
-(BOOL)hasMatchingContainerID:(id)arg1 containerID:(id)arg2 ;
-(id)extractContainerIDFromService:(unsigned)arg1 ;
-(id)getHIDDevicesForMatching:(id)arg1 ;
-(id)initWithMatching:(id)arg1 ;
-(id)getDeviceElements:(id)arg1 ;
-(BOOL)commit:(id)arg1 error:(id*)arg2 ;
-(BOOL)extract:(id)arg1 error:(id*)arg2 ;
@end

