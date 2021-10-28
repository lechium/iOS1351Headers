/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)shutdown;
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(id)arg1;

@end
