/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSOrderedSet, NSPredicate;


@protocol _UIDocumentPickerDirectoryObserver <NSObject>
@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
@property (nonatomic,retain) NSPredicate * queryPredicate; 
@required
-(void)setStaticItems:(id)arg1;
-(NSOrderedSet *)staticItems;
-(void)setQueryPredicate:(id)arg1;
-(BOOL)afterInitialUpdate;
-(NSPredicate *)queryPredicate;

@end

