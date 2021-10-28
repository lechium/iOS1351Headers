/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPLocalLocationStore, PPLocation, NSMutableSet;

@interface PPLocationCache : NSObject {

	PPLocalLocationStore* _locationStore;
	BOOL _valid;
	PPLocation* _home;
	PPLocation* _work;
	NSMutableSet* _homeOrWorkAddresses;

}
-(id)init;
-(void)invalidate;
-(void)_refresh;
-(id)locationForHome;
-(id)locationForWork;
-(id)homeOrWorkAddresses;
-(id)initWithLocationStore:(id)arg1 ;
@end
