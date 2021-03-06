/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLSAuthTreeNode : NSObject <NSSecureCoding> {

	NSString* _statusID;
	NSString* _identifier;
	long long _status;

}

@property (nonatomic,copy,readonly) NSString * statusID;                //@synthesize statusID=_statusID - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long status;                        //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)status;
-(id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3 ;
-(NSString *)statusID;
@end

