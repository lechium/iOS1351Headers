/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent {

	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;               //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)eventName;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 context:(id)arg2 ;
-(id)analyticsEventRepresentation;
@end
