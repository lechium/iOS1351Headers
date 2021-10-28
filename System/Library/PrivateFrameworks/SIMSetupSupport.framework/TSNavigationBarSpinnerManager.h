/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject {

	NSMutableDictionary* _navigationItems;
	NSMutableDictionary* _previousLeftBarButtonItems;
	NSMutableDictionary* _previousRightBarButtonItems;

}

@property (retain) NSMutableDictionary * navigationItems;                          //@synthesize navigationItems=_navigationItems - In the implementation block
@property (retain) NSMutableDictionary * previousLeftBarButtonItems;               //@synthesize previousLeftBarButtonItems=_previousLeftBarButtonItems - In the implementation block
@property (retain) NSMutableDictionary * previousRightBarButtonItems;              //@synthesize previousRightBarButtonItems=_previousRightBarButtonItems - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSMutableDictionary *)navigationItems;
-(void)setNavigationItems:(NSMutableDictionary *)arg1 ;
-(void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
-(void)stopSpinnerForIdentifier:(id)arg1 ;
-(void)setPreviousLeftBarButtonItems:(NSMutableDictionary *)arg1 ;
-(void)setPreviousRightBarButtonItems:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)previousLeftBarButtonItems;
-(NSMutableDictionary *)previousRightBarButtonItems;
-(void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
@end
