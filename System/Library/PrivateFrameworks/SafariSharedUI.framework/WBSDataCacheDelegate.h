/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSDataCacheDelegate <NSObject>
@optional
-(void)dataCacheDidSetUp:(id)arg1;
-(void)dataCache:(id)arg1 didLoadEntry:(id)arg2 forKeyString:(id)arg3;
-(void)dataCache:(id)arg1 didFailToLoadEntryForKeyString:(id)arg2 error:(id)arg3;
-(void)dataCacheDidReset:(id)arg1;

@end
