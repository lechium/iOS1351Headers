/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSMutableArray;

@interface BRInterfaceLegacy : BRInterface {

	BOOL _isReady;
	IOHIDEventSystemClientRef _client;
	NSMutableArray* _services;
	/*^block*/id _block;
	unsigned long long _doublePressTimeoutUs;
	unsigned long long _triplePressTimeoutUs;
	unsigned long long _doubleTapTimeoutUs;
	unsigned long long _tripleTapTimeoutUs;
	unsigned long long _longPressTimeoutUs;
	BOOL _tapOnly;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;

}

@property (assign,nonatomic) BOOL tapOnly;              //@synthesize tapOnly=_tapOnly - In the implementation block
+(id)interface;
+(BOOL)_isTapState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setDefaultServicePropertiesOnService:(IOHIDServiceClientRef)arg1 ;
-(BOOL)tapOnly;
-(BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_enableState:(unsigned long long)arg1 ;
-(BOOL)_disableState:(unsigned long long)arg1 ;
-(void)_findServices;
-(BOOL)_servicesSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)serviceAddedHandler:(IOHIDServiceClientRef)arg1 ;
-(void)setTapOnly:(BOOL)arg1 ;
@end

