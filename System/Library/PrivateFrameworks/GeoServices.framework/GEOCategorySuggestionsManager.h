/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOCategorySuggestionsManagerServerProxy;
@interface GEOCategorySuggestionsManager : NSObject {

	id<GEOCategorySuggestionsManagerServerProxy> _serverProxy;

}
+(id)sharedManager;
+(void)setUseLocalProxy:(BOOL)arg1 ;
-(id)init;
-(void)fetchSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3 ;
-(id)_spotlightCategorySuggestionsForResponse:(id)arg1 ;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
@end
