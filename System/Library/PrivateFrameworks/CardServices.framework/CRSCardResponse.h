/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CardServices/CRSResponse.h>

@protocol CRCard;
@class CRSCardRequest;

@interface CRSCardResponse : CRSResponse {

	CRSCardRequest* _request;
	id<CRCard> _card;

}

@property (nonatomic,retain) CRSCardRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<CRCard> card;                       //@synthesize card=_card - In the implementation block
-(void)setRequest:(CRSCardRequest *)arg1 ;
-(CRSCardRequest *)request;
-(id<CRCard>)card;
-(void)setCard:(id<CRCard>)arg1 ;
@end

