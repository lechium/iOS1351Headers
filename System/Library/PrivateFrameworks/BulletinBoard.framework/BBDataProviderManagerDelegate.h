/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBDataProviderManagerDelegate <NSObject>
@required
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
-(void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;

@end
