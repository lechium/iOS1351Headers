/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dragManagerDidBeginDragging:(id)arg1;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
-(void)dragManagerDidEndDragging:(id)arg1;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;

@end

