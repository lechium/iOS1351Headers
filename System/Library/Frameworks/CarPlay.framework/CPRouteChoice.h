/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID;

@interface CPRouteChoice : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _summaryVariants;
	NSArray* _selectionSummaryVariants;
	NSArray* _additionalInformationVariants;
	id _userInfo;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * summaryVariants;                            //@synthesize summaryVariants=_summaryVariants - In the implementation block
@property (nonatomic,copy) NSArray * additionalInformationVariants;              //@synthesize additionalInformationVariants=_additionalInformationVariants - In the implementation block
@property (nonatomic,copy) NSArray * selectionSummaryVariants;                   //@synthesize selectionSummaryVariants=_selectionSummaryVariants - In the implementation block
@property (nonatomic,retain) id userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithSummaryVariants:(id)arg1 additionalInformationVariants:(id)arg2 selectionSummaryVariants:(id)arg3 ;
-(NSArray *)summaryVariants;
-(NSArray *)additionalInformationVariants;
-(NSArray *)selectionSummaryVariants;
-(void)setSummaryVariants:(NSArray *)arg1 ;
-(void)setAdditionalInformationVariants:(NSArray *)arg1 ;
-(void)setSelectionSummaryVariants:(NSArray *)arg1 ;
@end

