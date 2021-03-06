/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic, UNNotificationSettings;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	UNNotificationSettings* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationTopic * topic;                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSettings * topicSettings;              //@synthesize topicSettings=_topicSettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationTopic *)topic;
-(UNNotificationSettings *)topicSettings;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 ;
@end

