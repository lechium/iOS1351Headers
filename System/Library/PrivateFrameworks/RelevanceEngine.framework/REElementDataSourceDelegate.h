/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REElementDataSourceDelegate <NSObject>
@optional
-(void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
-(void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
-(BOOL)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;

@required
-(void)invalidateElements;
-(id)elementOperationQueue;
-(void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2;
-(void)reloadElement:(id)arg1;
-(void)removeElementsWithIds:(id)arg1;
-(void)refreshElement:(id)arg1;
-(BOOL)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2;
-(void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

