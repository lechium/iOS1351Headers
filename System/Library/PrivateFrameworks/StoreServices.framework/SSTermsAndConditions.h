/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	BOOL _requiresAuthentication;
	NSString* _text;
	BOOL _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) BOOL userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(BOOL)requiresAuthentication;
-(long long)currentVersionIdentifier;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isUserAccepted;
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(BOOL)arg1 ;
@end
