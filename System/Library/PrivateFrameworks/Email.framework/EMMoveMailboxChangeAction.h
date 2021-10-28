/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction {

	EMMailboxObjectID* _parentMailboxID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * parentMailboxID;              //@synthesize parentMailboxID=_parentMailboxID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2 ;
-(EMMailboxObjectID *)parentMailboxID;
-(id)initWithMailbox:(id)arg1 newParent:(id)arg2 ;
@end
