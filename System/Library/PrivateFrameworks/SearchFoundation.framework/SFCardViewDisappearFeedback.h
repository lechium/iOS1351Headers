/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@interface SFCardViewDisappearFeedback : SFFeedback {

	unsigned long long _cardDisappearEvent;

}

@property (assign,nonatomic) unsigned long long cardDisappearEvent;              //@synthesize cardDisappearEvent=_cardDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(unsigned long long)cardDisappearEvent;
-(void)setCardDisappearEvent:(unsigned long long)arg1 ;
@end

