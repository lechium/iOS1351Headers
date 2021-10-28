/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDate;

@interface WBSPerSitePreferenceValueInformation : NSObject {

	NSString* _domain;
	NSNumber* _value;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)domain;
-(NSNumber *)value;
-(NSDate *)creationDate;
-(id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3 ;
@end
