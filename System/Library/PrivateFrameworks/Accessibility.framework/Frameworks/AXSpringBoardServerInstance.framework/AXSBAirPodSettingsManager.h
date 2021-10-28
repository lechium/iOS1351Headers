/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
@class NSPointerArray, NSObject, AXDispatchTimer, NSMutableSet;

@interface AXSBAirPodSettingsManager : NSObject {

	NSPointerArray* _deviceListeners;
	BTSessionImplRef _session;
	BTLocalDeviceImplRef _localDevice;
	BTAccessoryManagerImplRef _accessoryManager;
	NSObject*<OS_dispatch_queue> _queue;
	AXDispatchTimer* _delayTimer;
	NSMutableSet* _deviceMap;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)start;
-(void)_applySettings;
-(id)initSharedInstance;
-(void)_probeAccessories;
-(void)_didConnectWithSession:(BTSessionImplRef)arg1 ;
-(void)_didDisconnect;
-(void)_beginDetach;
-(void)_retrieveSettingsFromNewDevices:(id)arg1 ;
-(void)_retrieveSettingsForAddress:(id)arg1 ;
-(void)_applySettingsForAddress:(id)arg1 ;
-(void)_serviceEventForDevice:(BTDeviceImplRef)arg1 serviceMask:(unsigned)arg2 eventType:(int)arg3 specificEvent:(unsigned)arg4 result:(int)arg5 ;
-(void)_accessoryEventForManager:(BTAccessoryManagerImplRef)arg1 event:(int)arg2 device:(BTDeviceImplRef)arg3 state:(int)arg4 ;
-(void)_sessionEventForSession:(BTSessionImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
@end
