/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMMailboxScope.h>
#import <libobjc.A.dylib/EFCacheable.h>

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)ef_publicDescription;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL*)arg2 ;
-(BOOL)scopeContainsMailbox:(id)arg1 ;
-(id)cachedSelf;
-(id)mailboxTypes;
-(BOOL)excludeTypes;
-(id)mailboxObjectIDs;
-(BOOL)excludeMailboxes;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
@end
