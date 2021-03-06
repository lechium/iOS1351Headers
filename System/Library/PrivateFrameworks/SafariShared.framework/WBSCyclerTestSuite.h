/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSCyclerTestSuite <NSObject>
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@optional
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
-(BOOL)isFinished;
-(BOOL)canHandleRequest:(id)arg1;
-(void)tearDown;
-(void)setUp;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(id)init;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

