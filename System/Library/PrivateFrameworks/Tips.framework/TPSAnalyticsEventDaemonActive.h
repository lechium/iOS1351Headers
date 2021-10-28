/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {

	BOOL _alreadyRunning;
	NSString* _reason;

}

@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)eventName;
-(void)setReason:(NSString *)arg1 ;
-(id)analyticsEventRepresentation;
-(id)initWithReason:(id)arg1 alreadyRunning:(BOOL)arg2 ;
@end
