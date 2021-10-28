/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken {

	NSData* _AID;
	TKSmartCard* _smartCard;
	id _keepAlive;

}

@property (nonatomic,readonly) TKSmartCard * smartCard;              //@synthesize smartCard=_smartCard - In the implementation block
@property (nonatomic,retain) id keepAlive;                           //@synthesize keepAlive=_keepAlive - In the implementation block
@property (readonly) NSData * AID;                                   //@synthesize AID=_AID - In the implementation block
-(id)keepAlive;
-(void)setKeepAlive:(id)arg1 ;
-(TKSmartCard *)smartCard;
-(NSData *)AID;
-(id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4 ;
@end
