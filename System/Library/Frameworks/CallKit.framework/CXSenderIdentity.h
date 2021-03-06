/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CXAccount, NSString, CXHandle;

@interface CXSenderIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	CXAccount* _account;
	NSString* _localizedShortName;

}

@property (nonatomic,readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) CXAccount * account;                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) CXHandle * handle; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedShortName;              //@synthesize localizedShortName=_localizedShortName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CXHandle *)handle;
-(NSString *)localizedName;
-(NSString *)localizedShortName;
-(NSUUID *)UUID;
-(CXAccount *)account;
-(id)archivedDataWithError:(id*)arg1 ;
-(BOOL)isEqualToSenderIdentity:(id)arg1 ;
-(id)initWithUUID:(id)arg1 account:(id)arg2 ;
-(id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3 ;
@end

