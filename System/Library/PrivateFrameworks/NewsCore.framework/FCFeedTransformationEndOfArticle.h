/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCPurchaseProviderType;
@class NSString;

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming> {

	BOOL _isPaywallAvailable;
	unsigned long long _minimumResultHeadlineCount;
	double _paidHeadlineRatio;
	unsigned long long _maxiumInaccessibleHeadlineCount;
	id<FCPurchaseProviderType> _purchaseProvider;

}

@property (assign,nonatomic) double paidHeadlineRatio;                                        //@synthesize paidHeadlineRatio=_paidHeadlineRatio - In the implementation block
@property (assign,nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;              //@synthesize maxiumInaccessibleHeadlineCount=_maxiumInaccessibleHeadlineCount - In the implementation block
@property (assign,nonatomic) BOOL isPaywallAvailable;                                         //@synthesize isPaywallAvailable=_isPaywallAvailable - In the implementation block
@property (nonatomic,retain) id<FCPurchaseProviderType> purchaseProvider;                     //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
@property (assign,nonatomic) unsigned long long minimumResultHeadlineCount;                   //@synthesize minimumResultHeadlineCount=_minimumResultHeadlineCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithConfiguration:(id)arg1 context:(id)arg2 isPaywallAvailable:(BOOL)arg3 ;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(void)setPurchaseProvider:(id<FCPurchaseProviderType>)arg1 ;
-(void)setPaidHeadlineRatio:(double)arg1 ;
-(void)setMaxiumInaccessibleHeadlineCount:(unsigned long long)arg1 ;
-(void)setMinimumResultHeadlineCount:(unsigned long long)arg1 ;
-(void)setIsPaywallAvailable:(BOOL)arg1 ;
-(unsigned long long)minimumResultHeadlineCount;
-(double)paidHeadlineRatio;
-(BOOL)isPaywallAvailable;
-(unsigned long long)maxiumInaccessibleHeadlineCount;
-(id)transformItems:(id)arg1 isPaidBlock:(/*^block*/id)arg2 sourceChannelIDProvider:(/*^block*/id)arg3 ;
-(id)transformHeadlines:(id)arg1 ;
@end

