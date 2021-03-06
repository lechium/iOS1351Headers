/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/Tips-Structs.h>
#import <Tips/TPSTip.h>

@class NSString, NSDictionary;

@interface TPSDiscoverabilityTip : TPSTip {

	NSString* _hintText;
	NSString* _userLanguageCode;
	NSDictionary* _preconditions;

}

@property (nonatomic,copy) NSString * userLanguageCode;               //@synthesize userLanguageCode=_userLanguageCode - In the implementation block
@property (nonatomic,copy) NSDictionary * preconditions;              //@synthesize preconditions=_preconditions - In the implementation block
@property (nonatomic,copy) NSString * hintText;                       //@synthesize hintText=_hintText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)_currentUserLanguageCode;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setHintText:(NSString *)arg1 ;
-(void)setUserLanguageCode:(NSString *)arg1 ;
-(void)setPreconditions:(NSDictionary *)arg1 ;
-(NSString *)hintText;
-(NSString *)userLanguageCode;
-(NSDictionary *)preconditions;
@end

