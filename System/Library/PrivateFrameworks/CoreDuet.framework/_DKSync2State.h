/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _DKSyncType, _DKSyncCompositeOperation, NSMutableArray;

@interface _DKSync2State : NSObject {

	BOOL _isPending;
	_DKSyncType* _type;
	_DKSyncCompositeOperation* _parent;
	NSMutableArray* _completions;

}

@property (retain) NSMutableArray * completions;                    //@synthesize completions=_completions - In the implementation block
@property (assign) BOOL isPending;                                  //@synthesize isPending=_isPending - In the implementation block
@property (retain) _DKSyncType * type;                              //@synthesize type=_type - In the implementation block
@property (retain) _DKSyncCompositeOperation * parent;              //@synthesize parent=_parent - In the implementation block
-(_DKSyncCompositeOperation *)parent;
-(_DKSyncType *)type;
-(void)setType:(_DKSyncType *)arg1 ;
-(void)setParent:(_DKSyncCompositeOperation *)arg1 ;
-(BOOL)isPending;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)mergeType:(id)arg1 ;
-(void)setIsPending:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

