/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback {

	unsigned _level;
	SFCard* _card;
	NSString* _fbr;

}

@property (nonatomic,retain) SFCard * card;               //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * fbr;                //@synthesize fbr=_fbr - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)level;
-(void)setLevel:(unsigned)arg1 ;
-(SFCard *)card;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithCard:(id)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
@end

