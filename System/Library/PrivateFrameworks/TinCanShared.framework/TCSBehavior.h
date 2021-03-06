/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TCSBehavior : NSObject {

	int _firstUnlockToken;
	BOOL _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
	BOOL _isAppleInternalInstall;
	BOOL _isM8Device;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;              //@synthesize isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot=_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL isAppleInternalInstall;                                       //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (nonatomic,readonly) BOOL isM8Device;                                                   //@synthesize isM8Device=_isM8Device - In the implementation block
@property (nonatomic,readonly) NSString * regionCode;                                             //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionCode;
+(id)_regionCode;
+(BOOL)isAppleInternalInstall;
+(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(id)sharedBehavior;
+(BOOL)_isAppleInternalInstall;
+(BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(BOOL)_isM8Device;
+(BOOL)isM8Device;
-(id)init;
-(void)dealloc;
-(NSString *)regionCode;
-(BOOL)isAppleInternalInstall;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_handleDeviceFirstUnlock;
-(BOOL)isM8Device;
@end

