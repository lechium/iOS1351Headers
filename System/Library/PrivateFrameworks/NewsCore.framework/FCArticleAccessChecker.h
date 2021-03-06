/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCMultiAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@class FCPrivateChannelMembershipController;

@interface FCArticleAccessChecker : FCMultiAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;                                          //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id)init;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(id)initWithAccessCheckers:(id)arg1 ;
@end

