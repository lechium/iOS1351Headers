/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintDismissed : TPSAnalyticsEvent {

	double _timeToDismissal;
	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _dismissType;

}

@property (assign,nonatomic) double timeToDismissal;                //@synthesize timeToDismissal=_timeToDismissal - In the implementation block
@property (nonatomic,readonly) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * dismissType;              //@synthesize dismissType=_dismissType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(NSString *)bundleID;
-(id)eventName;
-(void)setDataProvider:(id)arg1 ;
-(NSString *)contentID;
-(id)analyticsEventRepresentation;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6 ;
-(double)timeToDismissal;
-(void)setTimeToDismissal:(double)arg1 ;
-(NSString *)dismissType;
@end

