/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLListCellDataGenerationOperationDelegate;
@class QLListCell, QLItem;

@interface QLListCellDataGenerationOperation : QLAsynchronousOperation {

	BOOL _didGenerateThumbnail;
	BOOL _didGenerateSubtitleInformation;
	unsigned long long _index;
	QLListCell* _cell;
	QLItem* _item;
	id<QLListCellDataGenerationOperationDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long index;                                                   //@synthesize index=_index - In the implementation block
@property (assign,nonatomic,__weak) QLListCell * cell;                                                   //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic,__weak) QLItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<QLListCellDataGenerationOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<QLListCellDataGenerationOperationDelegate>)delegate;
-(void)setDelegate:(id<QLListCellDataGenerationOperationDelegate>)arg1 ;
-(unsigned long long)index;
-(QLItem *)item;
-(void)setItem:(QLItem *)arg1 ;
-(void)main;
-(void)setIndex:(unsigned long long)arg1 ;
-(QLListCell *)cell;
-(void)setCell:(QLListCell *)arg1 ;
-(void)_didGenerateThumbnail:(id)arg1 ;
-(void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2 ;
-(void)_finishIfNeeded;
-(id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4 ;
@end

