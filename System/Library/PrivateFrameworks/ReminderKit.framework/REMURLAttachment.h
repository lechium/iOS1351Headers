/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMAttachment.h>

@class NSURL, NSData;

@interface REMURLAttachment : REMAttachment {

	NSURL* _url;
	NSData* _metadata;

}

@property (nonatomic,retain) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setMetadata:(NSData *)arg1 ;
-(NSData *)metadata;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 url:(id)arg4 metadata:(id)arg5 ;
@end

