/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>

@protocol SFCardSection;
@class NSString, NSArray;

@interface CRBasicCardSection : NSObject <CRCardSection> {

	NSString* _cardSectionIdentifier;
	id<SFCardSection> _backingCardSection;

}

@property (nonatomic,retain) id<SFCardSection> backingCardSection;              //@synthesize backingCardSection=_backingCardSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cardSectionIdentifier;                //@synthesize cardSectionIdentifier=_cardSectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
+(BOOL)supportsSecureCoding;
+(id)basicCardSectionWithBackingCardSection:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFCardSection>)backingCardSection;
-(NSString *)cardSectionIdentifier;
-(void)setBackingCardSection:(id<SFCardSection>)arg1 ;
@end
