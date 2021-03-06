/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ADBannerViewDelegate.h>

@class NUAdBannerView, NSString;

@interface NUAdPreroll : NSObject <ADBannerViewDelegate> {

	/*^block*/id _completionBlock;
	NUAdBannerView* _bannerView;

}

@property (nonatomic,copy) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NUAdBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)timeout;
-(NUAdBannerView *)bannerView;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(id)initWithContext:(id)arg1 timeout:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishedLoadingBannerView:(id)arg1 error:(id)arg2 ;
@end

