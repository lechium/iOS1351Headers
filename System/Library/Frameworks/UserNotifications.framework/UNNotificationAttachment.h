/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSURL* _URL;
	NSString* _type;
	unsigned long long _family;
	UNNotificationAttachmentOptions* _options;

}

@property (nonatomic,readonly) unsigned long long family;                                   //@synthesize family=_family - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationAttachmentOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_systemDirectoryURL;
+(unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id*)arg3 ;
+(id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationAttachmentOptions *)options;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)URL;
-(unsigned long long)family;
-(id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5 ;
@end
