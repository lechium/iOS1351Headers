/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMTrimmerDelegate <NSObject>
@optional
-(void)trimmer:(id)arg1 willStartTrimmingWithClipProvider:(id)arg2;
-(BOOL)trimmer:(id)arg1 shouldContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didEndTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;

@end

