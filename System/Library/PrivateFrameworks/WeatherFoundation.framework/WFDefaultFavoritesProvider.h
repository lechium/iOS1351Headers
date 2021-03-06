/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFFavoriteLocationProvider.h>

@protocol WFFavoriteLocationProviderDelegate;
@class NSString;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider> {

	id<WFFavoriteLocationProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<WFFavoriteLocationProviderDelegate>)arg1 ;
-(void)setLocations:(id)arg1 ;
-(id)locations;
-(void)addLocation:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2 ;
-(id)locationFromCity:(id)arg1 ;
-(void)removeLocation:(id)arg1 ;
-(BOOL)canProvideDefaultFavorites;
@end

