/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMAccountsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSArray* _accountStorages;

}

@property (nonatomic,readonly) NSArray * accountStorages;              //@synthesize accountStorages=_accountStorages - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accountStorages;
-(id)initWithStorages:(id)arg1 ;
@end
