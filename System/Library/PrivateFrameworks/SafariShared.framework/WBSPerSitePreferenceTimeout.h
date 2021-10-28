/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WBSPerSitePreferenceTimeout : NSObject {

	double _interval;
	id _fallbackValue;

}

@property (nonatomic,readonly) double interval;               //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) id fallbackValue;              //@synthesize fallbackValue=_fallbackValue - In the implementation block
+(id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(double)interval;
-(id)initWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(id)fallbackValue;
@end
