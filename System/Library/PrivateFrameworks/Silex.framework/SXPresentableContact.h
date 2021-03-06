/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SXPresentableContact : NSObject {

	NSString* _email;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * email;                    //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(NSString *)phoneNumber;
-(NSString *)email;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithEmail:(id)arg1 ;
@end

