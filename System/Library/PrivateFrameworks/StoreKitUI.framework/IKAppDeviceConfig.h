/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppDeviceConfig <NSObject>
@optional
-(id)bundleIdentifier;

@required
-(id)timeZone;
-(CGSize*)screenSize;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(id)systemLanguage;
-(id)storeFrontCountryCode;
-(BOOL)isTimeZoneSet;

@end
