/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSIndexPath;


@protocol MiroEditorClipCollection <NSObject>
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * initialIndexPath; 
@required
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(void)setDataSource:(id)arg1;
-(NSIndexPath *)initialIndexPath;
-(void)setInitialIndexPath:(id)arg1;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2;
-(id)cellForClipProvider:(id)arg1;

@end

