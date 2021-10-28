/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol _WGDataSourceManager <NSObject>
@property (assign,nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(NSArray *)dataSources;
-(void)_start:(/*^block*/id)arg1;
-(void)_stop:(/*^block*/id)arg1;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id)arg1;

@end
