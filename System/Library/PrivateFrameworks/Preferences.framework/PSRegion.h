/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PSRegion : NSObject {

	NSString* _regionName;
	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionName;              //@synthesize regionName=_regionName - In the implementation block
@property (nonatomic,retain) NSString * regionCode;              //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionWithName:(id)arg1 code:(id)arg2 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(void)setRegionName:(NSString *)arg1 ;
-(NSString *)regionName;
@end
