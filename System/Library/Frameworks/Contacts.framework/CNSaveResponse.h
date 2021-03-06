/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {

	NSMutableDictionary* _contactSnapshotsByIndexPath;
	NSMutableDictionary* _groupSnapshotsByIndexPath;
	NSMutableDictionary* _containerSnapshotsByIndexPath;
	BOOL _didAffectMeCard;

}

@property (readonly) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applySnapshotsToSaveRequest:(id)arg1 ;
-(BOOL)didAffectMeCard;
@end

