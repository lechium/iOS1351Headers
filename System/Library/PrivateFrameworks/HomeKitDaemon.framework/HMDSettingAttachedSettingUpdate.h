/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, HMSettingValue;

@interface HMDSettingAttachedSettingUpdate : HMFObject {

	NSString* _keyPath;
	HMSettingValue* _settingValue;

}

@property (readonly) NSString * keyPath;                         //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) HMSettingValue * settingValue;              //@synthesize settingValue=_settingValue - In the implementation block
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 settingValue:(id)arg2 ;
-(HMSettingValue *)settingValue;
@end
