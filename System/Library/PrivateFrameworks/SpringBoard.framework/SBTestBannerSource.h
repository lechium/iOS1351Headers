/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBUIBannerSource.h>

@protocol SBUIBannerTarget;
@class NSMutableArray, NSString;

@interface SBTestBannerSource : NSObject <SBUIBannerSource> {

	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;
	long long _count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(void)bannerViewWillAppear:(id)arg1 ;
-(void)bannerViewDidAppear:(id)arg1 ;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)enqueueBanner;
-(void)dismissBanner;
@end

