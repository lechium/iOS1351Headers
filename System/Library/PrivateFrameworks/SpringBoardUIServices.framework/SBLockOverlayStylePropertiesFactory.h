/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)propertiesWithGraphicsQuality:(long long)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(long long)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
@end

