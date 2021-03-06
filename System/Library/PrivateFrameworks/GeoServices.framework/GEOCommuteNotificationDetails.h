/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface GEOCommuteNotificationDetails : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	NSString* _message;
	NSString* _commuteDetailsIdentifier;
	NSDate* _expirationDate;
	long long _score;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * commuteDetailsIdentifier;              //@synthesize commuteDetailsIdentifier=_commuteDetailsIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long score;                                       //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)expirationDate;
-(long long)score;
-(NSString *)message;
-(id)initWithTitle:(id)arg1 message:(id)arg2 commuteDetailsIdentifier:(id)arg3 expirationDate:(id)arg4 score:(long long)arg5 ;
-(NSString *)commuteDetailsIdentifier;
@end

