/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface RTContact : NSObject {

	NSString* _identifier;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * givenName;                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSString *)givenName;
-(NSString *)familyName;
-(NSString *)middleName;
-(NSArray *)postalAddresses;
-(id)initWithIdentifier:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 postalAddresses:(id)arg5 ;
@end

