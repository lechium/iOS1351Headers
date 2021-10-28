/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSCredentialMatch, NSString, NSDate;

@interface SFCredentialDisplayData : NSObject {

	WBSCredentialMatch* _match;
	NSString* _detail;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) WBSCredentialMatch * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,copy,readonly) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
+(id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2 ;
-(NSDate *)creationDate;
-(NSString *)detail;
-(WBSCredentialMatch *)match;
-(id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3 ;
@end
