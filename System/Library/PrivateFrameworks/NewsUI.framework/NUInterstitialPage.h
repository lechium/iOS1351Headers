/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>
#import <libobjc.A.dylib/NUPage.h>

@class NSString, ADInterstitialAd;

@interface NUInterstitialPage : NSObject <ADInterstitialAdDelegate, NUPage> {

	NSString* _identifier;
	/*^block*/id _unloadBlock;
	ADInterstitialAd* _interstitial;

}

@property (nonatomic,copy) id unloadBlock;                                    //@synthesize unloadBlock=_unloadBlock - In the implementation block
@property (nonatomic,readonly) ADInterstitialAd * interstitial;               //@synthesize interstitial=_interstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL allowNeighboringAdvertising; 
-(NSString *)identifier;
-(id)viewController;
-(void)prepare;
-(void)unprepare;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)pageStyling:(/*^block*/id)arg1 ;
-(unsigned long long)pageNextAction;
-(void)activityProvider:(/*^block*/id)arg1 ;
-(BOOL)allowNeighboringAdvertising;
-(ADInterstitialAd *)interstitial;
-(void)setUnloadBlock:(id)arg1 ;
-(id)unloadBlock;
-(id)initWithInterstitial:(id)arg1 ;
-(void)onUnload:(/*^block*/id)arg1 ;
@end

