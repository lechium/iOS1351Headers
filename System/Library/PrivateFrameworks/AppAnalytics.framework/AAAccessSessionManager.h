/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AAAccessSessionManager : NSObject {

	 accessSessionManager;

}

@property (readonly,nonatomic) BOOL isActive; 
-(id)init;
-(BOOL)isActive;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 ;
-(void)pushSessionData:(id)arg1 ;
-(void)pushSessionData:(id)arg1 submitEventQueues:(BOOL)arg2 ;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(BOOL)arg3 ;
@end

