/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject {

	long long _count;
	NSArray* _downloadKinds;
	SSDownloadManagerOptions* _managerOptions;
	id _queue;

}

@property (assign,nonatomic) long long count;                                      //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) SSDownloadManagerOptions * managerOptions;              //@synthesize managerOptions=_managerOptions - In the implementation block
@property (nonatomic,retain) id queue;                                             //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(long long)count;
-(void)setQueue:(id)arg1 ;
-(id)queue;
-(void)setCount:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(SSDownloadManagerOptions *)managerOptions;
-(NSArray *)downloadKinds;
-(void)setManagerOptions:(SSDownloadManagerOptions *)arg1 ;
@end
